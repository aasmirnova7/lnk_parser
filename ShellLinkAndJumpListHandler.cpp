//
// Created by ann19 on 29.09.2019.
//

#include "ShellLinkAndJumpListHandler.h"

using namespace std;

ShellLinkAndJumpListHandler::ShellLinkAndJumpListHandler(string filePath) {
    rs = new ReadStream(filePath);
    if(rs->isFileOpen())
        fileIsOpen = true;
}
// TODO: Не понятна структура Jump List-a
void ShellLinkAndJumpListHandler::parseFile() {
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
            cout << "[ShellLink structure " << dec << countOfShellLink + 1 << "]: ";
            ShellLink shellLink = ShellLink(rs, startPosition);
            int offsetEnd = shellLink.getShellLinkOffsetEnd();
            int remainder = offsetEnd % 16;
            startPosition = remainder == 0 ? offsetEnd : offsetEnd + 16 - remainder;
            ++countOfShellLink;
            if(shellLink.isThisShellLinkHasErrors())
                ++countOfShellLinkWithErrors;
            cout << endl << endl << endl;
        }
//        else {
//            /* Decode DestList Stream from Jump List*/
//            DestList destList = DestList(rs, startPosition);
//
//        }
        startPosition += 4;
    } while(headerValue.size() != 0);

    cout << "The total number of Shell Link = " << dec << countOfShellLink << endl;
    cout << "The number of Shell Link with errors while parsing = " << dec << countOfShellLinkWithErrors << endl;
}

bool ShellLinkAndJumpListHandler::isFileOpen() {
    return fileIsOpen;
}
