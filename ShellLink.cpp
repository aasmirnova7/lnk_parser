//
// Created by user on 29.08.2019.
//

#include "ShellLinkHeader_Test.cpp"
#include "ReadStream.h"
#include "ShellLinkHeader.h"
#include "LinkTargetIDList.h"
#include "Utils.h"
#include "LinkInfo.h"
#include "StringData.h"
#include "ExtraData.h"

class ShellLink {

public:
    ShellLink(const char * filePath) {
        int startPosition = 0;
        ReadStream *rs = new ReadStream(filePath);
        vector<unsigned char> header =  rs->read(startPosition,76);
        startPosition = 76;

        ShellLinkHeader shellLinkHeader = ShellLinkHeader(header);
//        shellLinkHeader.printHeaderInHexStyle();
//        shellLinkHeader.printHeader();
        bool valid = shellLinkHeader.isHeaderValid();

       shellLinkHeader.parseLinkFlags();
       if(valid) {
            if (shellLinkHeader.HasLinkTargetIDListIsSet()) {
                /* Determine linkTargetIDListSize before creation of LinkTargetIDList structure */
                vector<unsigned char> LTIDListSize =  rs->read(startPosition,2);
                reverse(LTIDListSize.begin(), LTIDListSize.end());
                int linkTargetIDListSize = Utils::lenTwoBytes(LTIDListSize);

                vector<unsigned char> linkTargetIdListVect = rs->read(startPosition, linkTargetIDListSize + 2);
//
//               /* for(int i = 0; i < linkTargetIDListSize; ++i)
//                    cout <<  hex << (int)linkTargetIdListVect[i] << ' ';
//                cout << "\nTest " <<   linkTargetIDListSize << endl; */
//
                LinkTargetIDList linkTargetIdList = LinkTargetIDList(linkTargetIdListVect);
//                linkTargetIdList.printLinkTargetIdListInHexStyle();
//                linkTargetIdList.printLinkTargetIdList();
                startPosition = startPosition + linkTargetIDListSize + 2; // учитываем заголовок
            }

            if(shellLinkHeader.HasLinkInfoIsSet()) {
                /* Determine LinkInfo size before creation */
                vector<unsigned char> LIS =  rs->read(startPosition,4);
                reverse(LIS.begin(), LIS.end());
                int linkInfoSize = Utils::lenFourBytes(LIS);

                vector<unsigned char> linkInfoSizeVect =  rs->read(startPosition, linkInfoSize);

//                 for(int i = 0; i < linkInfoSizeVect.size(); ++i)
//                    cout <<  hex << (int)linkInfoSizeVect[i] << ' ';
//                 cout << endl;

                 LinkInfo linkInfo = LinkInfo(linkInfoSizeVect);
//                 linkInfo.printLinkInfoInHexStyle();
//                 linkInfo.printLinkInfo();
                 startPosition = startPosition + linkInfoSize; // +4
            }

            if(shellLinkHeader.HasStringDataIsSet()) {
                StringData stringData = StringData(rs, startPosition);
//                stringData.printStringDataInHexStyle();
//                stringData.printStringData();
                startPosition = startPosition + stringData.getStringDataStructureSize();
            }

           {
//               vector<unsigned char> h = rs->read(startPosition, 8);
//
//                for(int i = 0; i < 8; ++i)
//                    cout <<  hex << (int)h[i] << ' ';

               ExtraData extraData = ExtraData(rs, startPosition);
               extraData.printExtraDataInHexStyle();
              // extraData.printExtraData();
           }


       }

        //ShellLinkHeader_Test slhHeader = ShellLinkHeader_Test(rs);
    }

};
