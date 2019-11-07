#include <iostream>
#include "ShellLink.h"

using namespace std;

void ShellLink::parseShellLinkStructure(ReadStream* rs, int startPosition) {
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
            ExtraData extraData = ExtraData(rs, startPosition);
            extraData.printExtraDataInHexStyle();
            extraData.printExtraData();
            ShellLinkOffsetEnd = (extraData.getExtraDataOffsetEnd() == 0) ?
                                 startPosition : extraData.getExtraDataOffsetEnd();
        }
    }
}

int ShellLink::getShellLinkOffsetEnd() {
    return ShellLinkOffsetEnd;
}
bool ShellLink::isThisShellLinkHasErrors() {
    return thisShellLinkHasErrors;
}
void ShellLink::resetAllFlags() {
    ShellLinkHeader::setHltidListIsSet(false);
    ShellLinkHeader::setHliIsSet(false);
    ShellLinkHeader::setHasNameSet(false);
    ShellLinkHeader::setHasRelativePathSet(false);
    ShellLinkHeader::setHasWorkingDirSet(false);
    ShellLinkHeader::setHasArgumentsSet(false);
    ShellLinkHeader::setHasIconLocationSet(false);
    ShellLinkHeader::setHasDarwinIdSet(false);
    ShellLinkHeader::setHasExpStringSet(false);
    ShellLinkHeader::setHasExpIconSet(false);
    ShellLinkHeader::setEnableTargetMetadataSet(false);
    ShellLinkHeader::setRunWithShimLayerSet(false);
    ShellLinkHeader::setForceNoLinkTrackSet(false);
}
