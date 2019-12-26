#include <iostream>
#include "ShellLink.h"

using namespace std;

void ShellLink::parseShellLinkStructure(ReadStream* rs, int startPosition) {
    // std::cout << "__parseShellLinkStructure start__" << std::endl;
    cout << " Start Position offset (in hex style) = " << hex <<  startPosition << endl;
    std::vector<unsigned char> header =  rs->read(startPosition,76);
    startPosition += 76;

    ShellLinkHeader shellLinkHeader = ShellLinkHeader();
    shellLinkHeader.fillShellLinkHeader(header);
    shellLinkHeader.printHeaderInHexStyle();
    shellLinkHeader.printHeader();
    bool valid = shellLinkHeader.isHeaderValid();

    if(valid) {
        LinkTargetIDList linkTargetIdList;
        if (shellLinkHeader.HasLinkTargetIDListIsSet()) {
            std::vector<unsigned char> LTIDListSize =  rs->read(startPosition,2);
            reverse(LTIDListSize.begin(), LTIDListSize.end());
            int linkTargetIDListSize = Utils::lenTwoBytesChar(LTIDListSize);

            if(linkTargetIDListSize != 0) {
                std::vector<unsigned char> linkTargetIdListVect = rs->read(startPosition, linkTargetIDListSize + 2);
                linkTargetIdList = LinkTargetIDList();
                linkTargetIdList.fillLinkTargetIDList(linkTargetIdListVect);
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
                    ShellLinkOffsetEnd = startPosition - reminder;
                    thisShellLinkHasErrors = true;
                } else {
                    linkTargetIDListSize = (linkTargetIDListSize % 2) == 0 ? linkTargetIDListSize : linkTargetIDListSize + 1;
                    startPosition = startPosition + linkTargetIDListSize + 2; // учитываем заголовок
                }
            } else {
                cout << "There is some error in this LinkTargetIDList structure." << endl
                     << "Program will try to find next Shell Link Stream." << endl;
                int reminder = startPosition % 16;
                ShellLinkOffsetEnd = startPosition - reminder;
                thisShellLinkHasErrors = true;
            }
        }

        if(shellLinkHeader.HasLinkInfoIsSet() && !linkTargetIdList.LinkTargetIdHasErrors() && !thisShellLinkHasErrors) {
            std::vector<unsigned char> LIS =  rs->read(startPosition,4);
            reverse(LIS.begin(), LIS.end());
            int linkInfoSize = Utils::lenFourBytesChar(LIS);

            if(linkInfoSize != 0) {
                std::vector<unsigned char> linkInfoSizeVect =  rs->read(startPosition, linkInfoSize);
                if(linkInfoSize != linkInfoSizeVect.size()) {
                    cout << "There is some error in this LinkInfo structure." << endl
                         << "Program will try to find next Shell Link Stream." << endl;
                    int reminder = startPosition % 16;
                    ShellLinkOffsetEnd = startPosition - reminder;
                    thisShellLinkHasErrors = true;
                } else {
                    LinkInfo linkInfo = LinkInfo();
                    linkInfo.fillLinkInfo(linkInfoSizeVect);
                    linkInfo.printLinkInfoInHexStyle();
                    linkInfo.printLinkInfo();
                    startPosition = startPosition + linkInfoSize; // +4
                }
            } else {
                cout << "There is some error in this LinkTargetIDList structure." << endl
                     << "Program will try to find next Shell Link Stream." << endl;
                int reminder = startPosition % 16;
                ShellLinkOffsetEnd = startPosition - reminder;
                thisShellLinkHasErrors = true;
            }
        }

        if(shellLinkHeader.HasStringDataIsSet() && !linkTargetIdList.LinkTargetIdHasErrors() && !thisShellLinkHasErrors) {
            StringData stringData = StringData();
            stringData.fillStringData(rs, startPosition);
            stringData.printStringDataInHexStyle();
            stringData.printStringData();
            startPosition = startPosition + stringData.getStringDataStructureSize();
        }

        if (!linkTargetIdList.LinkTargetIdHasErrors() && !thisShellLinkHasErrors) {
            ExtraData extraData = ExtraData();
            extraData.fillExtraData(rs, startPosition);
            extraData.printExtraDataInHexStyle();
            extraData.printExtraData();
            ShellLinkOffsetEnd = (extraData.getExtraDataOffsetEnd() == 0) ?
                                 startPosition : extraData.getExtraDataOffsetEnd();
        }
    } else {
        /* Обработка ошибок осуществляется следующим образом
         * Если ShellLinkHeader невалидный,  тогда разбор текущей ShellLink
         * не продолжается и возвращается стартовая позиция после парсинга ShellLinkHeader */
        cout << "There is some error in this ShellLinkHeader structure." << endl
             << "Program will try to find next Shell Link Stream." << endl;
        ShellLinkOffsetEnd = startPosition;
    }
}

int ShellLink::getShellLinkOffsetEnd() {
    // std::cout << "__getShellLinkOffsetEnd start__" << std::endl;
    return ShellLinkOffsetEnd;
}
bool ShellLink::isThisShellLinkHasErrors() {
    // std::cout << "__isThisShellLinkHasErrors start__" << std::endl;
    return thisShellLinkHasErrors;
}
void ShellLink::resetAllFlags() {
    // std::cout << "__resetAllFlags start__" << std::endl;
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
