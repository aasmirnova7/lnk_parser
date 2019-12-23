#include "ShellLinkAndJumpListHandler.h"

using namespace std;

ShellLinkAndJumpListHandler::ShellLinkAndJumpListHandler(std::string filePath) {
    cout << "File:                               " << filePath << endl << endl;
    rs = new ReadStream(filePath);
    if(rs->isFileOpen())
        fileIsOpen = true;
}
void ShellLinkAndJumpListHandler::parseFile() {
    // std::cout << "__parseFile start__" << std::endl;
    std::vector<unsigned char> headerValue;
    do {
        headerValue =  rs->read(startPosition,4);

        reverse(headerValue.begin(), headerValue.end());
        unsigned int hValue = Utils::lenFourBytesChar(headerValue);

//        private static final int EXT_VERSION_WINXP = 3;
//        private static final int EXT_VERSION_VISTA = 7;
//        private static final int EXT_VERSION_WIN7 = 8;
//        private static final int EXT_VERSION_WIN8 = 9; // same for win10
        if(hValue == 0x0000004c) { /* Decode ShellLink Stream = CustDest Jump List */
            ShellLinkAndJumpListHandler::parseLNKStruct(headerValue);
        }
        if(hValue == 0x00000004)
            ShellLinkAndJumpListHandler::parseJumpListStruct();

        startPosition += 4;
    } while(headerValue.size() != 0);

    cout << "The total number of Shell Link = " << dec << countOfShellLink << endl;
    cout << "The number of Shell Link with errors while parsing = " << dec << countOfShellLinkWithErrors << endl;
}

void ShellLinkAndJumpListHandler::parseLNKStruct(std::vector<unsigned char> headerValue) {
    // std::cout << "__parseLNKStruct start__" << std::endl;
    /* Decode ShellLink Stream = CustDest Jump List */
    headerValue =  rs->read(startPosition + 4,4);
    if (Utils::lenFourBytesChar(headerValue) != 0x01140200) { // Если следующее поле не CLSI -> ищем структуры далее
        startPosition += 4;
        return;
    }
    cout << "[ShellLink structure " << dec << countOfShellLink + 1 << "]: ";
    ShellLink shellLink = ShellLink();
    shellLink.parseShellLinkStructure(rs, startPosition);
    int offsetEnd = shellLink.getShellLinkOffsetEnd();
    int remainder = offsetEnd % 16;
    startPosition = remainder == 0 ? offsetEnd : offsetEnd + 16 - remainder;
    ++countOfShellLink;
    if(shellLink.isThisShellLinkHasErrors())
        ++countOfShellLinkWithErrors;
    shellLink.resetAllFlags();
    cout << endl << endl << endl;
    return;
}

void ShellLinkAndJumpListHandler::parseJumpListStruct() {
    // std::cout << "__parseJumpListStruct start__" << std::endl;
    if (countOfShellLink == 0)
        return;
    std::vector<unsigned char>  countOfEntries =  rs->read(startPosition + 4,4);
    reverse(countOfEntries.begin(), countOfEntries.end());
    unsigned int count = Utils::lenFourBytesChar(countOfEntries);
    if(count != countOfShellLink) {
        startPosition += 4;
        return;
    }
    /* Decode DestList Stream from Jump List*/
    DestList().parseDestListStructure(rs, startPosition);
    return;
}
bool ShellLinkAndJumpListHandler::isFileOpen() {
    // std::cout << "__isFileOpen start__" << std::endl;
    return fileIsOpen;
}
