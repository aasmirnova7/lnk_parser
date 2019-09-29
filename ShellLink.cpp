//
// Created by user on 29.08.2019.
//

#include "ShellLink.h"

ShellLink::ShellLink(ReadStream* rs, int startPosition) {
    std::vector<unsigned char> header =  rs->read(startPosition,76);
    startPosition = 76;

    ShellLinkHeader shellLinkHeader = ShellLinkHeader(header);
    shellLinkHeader.printHeaderInHexStyle();
    shellLinkHeader.printHeader();
    bool valid = shellLinkHeader.isHeaderValid();

    if(valid) {
        if (shellLinkHeader.HasLinkTargetIDListIsSet()) {
            /* Determine linkTargetIDListSize before creation of LinkTargetIDList structure */
            std::vector<unsigned char> LTIDListSize =  rs->read(startPosition,2);
            reverse(LTIDListSize.begin(), LTIDListSize.end());
            int linkTargetIDListSize = Utils::lenTwoBytes(LTIDListSize);

            std::vector<unsigned char> linkTargetIdListVect = rs->read(startPosition, linkTargetIDListSize + 2);
            LinkTargetIDList linkTargetIdList = LinkTargetIDList(linkTargetIdListVect);
            linkTargetIdList.printLinkTargetIdListInHexStyle();
            linkTargetIdList.printLinkTargetIdList();
            startPosition = startPosition + linkTargetIDListSize + 2; // учитываем заголовок
        }

        if(shellLinkHeader.HasLinkInfoIsSet()) {
            /* Determine LinkInfo size before creation */
            std::vector<unsigned char> LIS =  rs->read(startPosition,4);
            reverse(LIS.begin(), LIS.end());
            int linkInfoSize = Utils::lenFourBytes(LIS);

            std::vector<unsigned char> linkInfoSizeVect =  rs->read(startPosition, linkInfoSize);
            LinkInfo linkInfo = LinkInfo(linkInfoSizeVect);
            linkInfo.printLinkInfoInHexStyle();
            linkInfo.printLinkInfo();
            startPosition = startPosition + linkInfoSize; // +4
        }

        if(shellLinkHeader.HasStringDataIsSet()) {
            StringData stringData = StringData(rs, startPosition);
            stringData.printStringDataInHexStyle();
            stringData.printStringData();
            startPosition = startPosition + stringData.getStringDataStructureSize();
        }

        {
//               vector<unsigned char> h = rs->read(startPosition, 8);
//
//                for(int i = 0; i < 8; ++i)
//                    cout <<  hex << (int)h[i] << ' ';

            ExtraData extraData = ExtraData(rs, startPosition);
            extraData.printExtraDataInHexStyle();
            extraData.printExtraData();
            ShellLinkOffsetEnd = extraData.getExtraDataOffsetEnd();
        }
    }
}

int ShellLink::getShellLinkOffsetEnd() {
    return ShellLinkOffsetEnd;
}
