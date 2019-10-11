//
// Created by ann19 on 29.09.2019.
//

#ifndef LNK_JUMP_LIST_PARSER_SHELLLINKANDJUMPLISTHANDLER_H
#define LNK_JUMP_LIST_PARSER_SHELLLINKANDJUMPLISTHANDLER_H

#include <algorithm>
#include <string>
#include "ShellLink.h"
#include "DestList.h"


class ShellLinkAndJumpListHandler {
private:
    int countOfShellLinkWithErrors = 0;
    int countOfShellLink = 0;
    int startPosition = 0;
    bool fileIsOpen = false;
    ReadStream *rs;
public:
    ShellLinkAndJumpListHandler(std::string filePath);
    bool isFileOpen();
    void parseFile();
};


#endif //LNK_JUMP_LIST_PARSER_SHELLLINKANDJUMPLISTHANDLER_H
