//
// Created by ann19 on 29.09.2019.
//

#include "ShellLinkAndJumpListHandler.h"

using namespace std;
// TODO: Не понятна структура Jump List-a
ShellLinkAndJumpListHandler::ShellLinkAndJumpListHandler(const char * filePath) {
    ReadStream *rs = new ReadStream(filePath);
    //ShellLink shellLink = ShellLink(rs, 0);
    //int startPosition = shellLink.getShellLinkOffsetEnd();
    int startPosition = 0;

    std::vector<unsigned char> headerValue;
    do {
        headerValue =  rs->read(startPosition,4);

        reverse(headerValue.begin(), headerValue.end());
        unsigned int hValue = Utils::lenFourBytes(headerValue);
        //cout << "hValue = " << hex << hValue << endl;

        if(hValue == 0x0000004c) {
            /* Decode ShellLink Stream = CustDest Jump List */
            headerValue =  rs->read(startPosition + 4,4);
            if (Utils::lenFourBytes(headerValue) == 0x4d000000) { // пока не разобралась, где DESTList
                startPosition += 4;
                continue;
            }
            ShellLink shellLink = ShellLink(rs, startPosition);
            int offsetEnd = shellLink.getShellLinkOffsetEnd();
            int remainder = offsetEnd % 16;
            startPosition = remainder == 0 ? offsetEnd : offsetEnd - remainder;
            cout << " startPosition = " <<  shellLink.getShellLinkOffsetEnd() << endl;
        }
//        else {
//            /* Decode DestList Stream from Jump List*/
//            DestList destList = DestList(rs, startPosition);
//
//        }
        startPosition += 4;

    } while(headerValue.size() != 0);
}
