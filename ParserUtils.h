//
// Created by ann19 on 10.10.2019.
//

#ifndef MY_DIPLOM_PARSERUTILS_H
#define MY_DIPLOM_PARSERUTILS_H

#include <string>
#include <iostream>
#include "ShellLinkAndJumpListHandler.h"

class ParserUtils {
private:
    static std::string getAppIdType(std::string appId);

public:
    static bool programCanParseFile(std::string filePath);
    static void startParsing();

    struct appId_type {
        std::string appId;
        std::string name;
    };

};


#endif //MY_DIPLOM_PARSERUTILS_H
