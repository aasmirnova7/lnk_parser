#include "ShellLinkAndJumpListHandler.h"

using namespace std;

ShellLinkAndJumpListHandler::ShellLinkAndJumpListHandler(std::string filePath) {
    cout << "File:                               " << filePath << endl << endl;
    rs = new ReadStream(filePath);
    if(rs->isFileOpen())
        fileIsOpen = true;
}
void ShellLinkAndJumpListHandler::parseFile() {
    bool isDestListStructFound = false;
    std::vector<unsigned char> headerValue;
    do {
        headerValue =  rs->read(startPosition,4);

        reverse(headerValue.begin(), headerValue.end());
        unsigned int hValue = Utils::lenFourBytesChar(headerValue);

        if(hValue == 0x0000004c) { /* Decode ShellLink Stream = CustDest Jump List */
            ShellLinkAndJumpListHandler::parseLNKStruct(headerValue);
        }
        /* 0x00000004 - Windows 10
         * 0x00000003 - Windows 10
         * 0x00000001 - Windows 7
         * 0x00000001 - Windows 8 */
        if(!isDestListStructFound && (hValue == 0x00000001 || hValue == 0x00000003 || hValue == 0x00000004))
            isDestListStructFound = ShellLinkAndJumpListHandler::parseJumpListStruct();

        startPosition += 4;
    } while(headerValue.size() != 0);

    if(!isDestListStructFound)
        cout << "DestList structure not found." << endl
        << "This may be because not all LNK structures are found, " << endl <<
           "or because the DestList is not located after the LNK stream, " <<
           "or because file doesn't contain DestList at all." << endl << endl << endl;
    cout << "The total number of Shell Link = " << dec << countOfShellLink << endl;
    cout << "The number of Shell Link with errors while parsing = " << dec << countOfShellLinkWithErrors << endl;
}

void ShellLinkAndJumpListHandler::parseLNKStruct(std::vector<unsigned char> headerValue) {
    /* Decode ShellLink Stream = CustDest Jump List */
    headerValue =  rs->read(startPosition + 4,4);
    if (Utils::lenFourBytesChar(headerValue) != 0x01140200) { // Если следующее поле не CLSID -> ищем структуры далее
        startPosition += 4;
        return;
    }
    cout << "[ShellLink structure " << dec << countOfShellLink + 1 << "]: ";
    ShellLink shellLink = ShellLink();
    shellLink.parseShellLinkStructure(rs, startPosition);
    int offsetEnd = shellLink.getShellLinkOffsetEnd();
    int remainder = offsetEnd % 16;
    startPosition = remainder == 0 ? offsetEnd - 4 : offsetEnd + 12 - remainder;  // так как в while будет + 4
    ++countOfShellLink;
    if(shellLink.isThisShellLinkHasErrors())
        ++countOfShellLinkWithErrors;
    shellLink.resetAllFlags();
    cout << endl << endl << endl;
    return;
}

bool ShellLinkAndJumpListHandler::parseJumpListStruct() {
    if (countOfShellLink == 0)
        return false;
    std::vector<unsigned char>  countOfEntries =  rs->read(startPosition + 4,4);
    reverse(countOfEntries.begin(), countOfEntries.end());
    unsigned int count = Utils::lenFourBytesChar(countOfEntries);
    if(count != countOfShellLink) {
        startPosition += 4;
        return false;
    }
    /* Decode DestList Stream from Jump List*/
    DestList().parseDestListStructure(rs, startPosition);
    return true;
}
bool ShellLinkAndJumpListHandler::isFileOpen() {
    return fileIsOpen;
}
