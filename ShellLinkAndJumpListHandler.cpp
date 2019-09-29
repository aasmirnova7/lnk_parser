//
// Created by ann19 on 29.09.2019.
//

#include "ShellLinkAndJumpListHandler.h"

// TODO: Не понятна структура Jump List-a
ShellLinkAndJumpListHandler::ShellLinkAndJumpListHandler(const char * filePath) {
    ReadStream *rs = new ReadStream(filePath);
    //ShellLink shellLink = ShellLink(rs, 0);
    //int startPosition = shellLink.getShellLinkOffsetEnd();
    int startPosition = 0;

    std::vector<unsigned char> headerValue =  rs->read(startPosition,4);
    reverse(headerValue.begin(), headerValue.end());
    unsigned int hValue = Utils::lenFourBytes(headerValue);

    if(hValue == 0x0000004c) {
        /* Decode ShellLink Stream = CustDest Jump List */
        // Не понятно, сколько раз
        ShellLink shellLink = ShellLink(rs, startPosition);

    } else {
        /* Decode DestList Stream from Jump List*/
        DestList destList = DestList(rs, startPosition);

    }
}
