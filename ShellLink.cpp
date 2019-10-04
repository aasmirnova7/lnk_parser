//
// Created by user on 29.08.2019.
//

#include <iostream>
#include "ShellLink.h"

using namespace std;

ShellLink::ShellLink(ReadStream* rs, int startPosition) {
    cout << " Start Position offset (in hex style) = " << hex <<  startPosition << endl;
    std::vector<unsigned char> header =  rs->read(startPosition,76);
    startPosition += 76;

    ShellLinkHeader shellLinkHeader = ShellLinkHeader(header);
    shellLinkHeader.printHeaderInHexStyle();
    shellLinkHeader.printHeader();
    bool valid = shellLinkHeader.isHeaderValid();

    LinkTargetIDList linkTargetIdList;

    if(valid) {
        if (shellLinkHeader.HasLinkTargetIDListIsSet()) {
            /* Determine linkTargetIDListSize before creation of LinkTargetIDList structure */
            std::vector<unsigned char> LTIDListSize =  rs->read(startPosition,2);
            reverse(LTIDListSize.begin(), LTIDListSize.end());
            int linkTargetIDListSize = Utils::lenTwoBytes(LTIDListSize);

            std::vector<unsigned char> linkTargetIdListVect = rs->read(startPosition, linkTargetIDListSize + 2);
            linkTargetIdList = LinkTargetIDList(linkTargetIdListVect);
            linkTargetIdList.printLinkTargetIdListInHexStyle();
            linkTargetIdList.printLinkTargetIdList();

            /* Обработка ошибок осуществляется следующим образом:
             * Если при парсинге возникают ситуации:
             *  1) Размер какой-либо ItemID = 0;
             *  2) Размер какой-либо ItemID превышает суммарный размер LinkTargetIDList;
             * Тогда разбор текущей ShellLink не продолжается и возвращается пердыдущая стартовая позиция
             * (после парсинга ShellLinkHeader), кратная 16.
             * Далее снова продолжается поиск новой ShellLink структуры*/
            // 0 = false, 1 = true
            if (linkTargetIdList.LinkTargetIdHasErrors()) {
                cout << "There is some error in this LinkTargetIDList structure." << endl
                     << "Program will try to find next Shell Link Stream." << endl;
                int reminder = startPosition % 16;
                ShellLinkOffsetEnd = startPosition + 16 - reminder;
                thisShellLinkHasErrors = true;
            } else
                startPosition = startPosition + linkTargetIDListSize + 2; // учитываем заголовок
        }

        if(shellLinkHeader.HasLinkInfoIsSet() && !linkTargetIdList.LinkTargetIdHasErrors()) {
            /* Determine LinkInfo size before creation */
            //cout << "! startPosition = " << hex << startPosition << endl;
            std::vector<unsigned char> LIS =  rs->read(startPosition,4);
            reverse(LIS.begin(), LIS.end());
            int linkInfoSize = Utils::lenFourBytes(LIS);

            std::vector<unsigned char> linkInfoSizeVect =  rs->read(startPosition, linkInfoSize);
            LinkInfo linkInfo = LinkInfo(linkInfoSizeVect);
            linkInfo.printLinkInfoInHexStyle();
            linkInfo.printLinkInfo();
            startPosition = startPosition + linkInfoSize; // +4
        }

        if(shellLinkHeader.HasStringDataIsSet() && !linkTargetIdList.LinkTargetIdHasErrors()) {
            StringData stringData = StringData(rs, startPosition);
            stringData.printStringDataInHexStyle();
            stringData.printStringData();
            startPosition = startPosition + stringData.getStringDataStructureSize();
        }

        if (!linkTargetIdList.LinkTargetIdHasErrors()) {
//               vector<unsigned char> h = rs->read(startPosition, 8);
//
//                for(int i = 0; i < 8; ++i)
//                    cout <<  hex << (int)h[i] << ' ';

            ExtraData extraData = ExtraData(rs, startPosition);
            extraData.printExtraDataInHexStyle();
            extraData.printExtraData();
            ShellLinkOffsetEnd = (extraData.getExtraDataOffsetEnd() == 0) ?
                    startPosition : extraData.getExtraDataOffsetEnd();
           // std::cout << " hellLinkOffsetEnd = " << std::dec << ShellLinkOffsetEnd << std::endl;
        }
    }
}

int ShellLink::getShellLinkOffsetEnd() {
    return ShellLinkOffsetEnd;
}
bool ShellLink::isThisShellLinkHasErrors() {
    return thisShellLinkHasErrors;
}
