//
// Created by user on 30.08.2019.
//

#ifndef LNK_JUMP_LIST_PARSER_STRINGDATA_H
#define LNK_JUMP_LIST_PARSER_STRINGDATA_H


#include <vector>
#include "ReadStream.h"

class StringData {
private:
    int StringDataSize = 0;

    struct StringDataStruct {
        std::vector<unsigned int> CountCharacters;   // 2 bytes   - количество Unicode chars ->умножать на 2
        std::vector<unsigned int> String;
    };

    StringDataStruct NAME_STRING;
    StringDataStruct RELATIVE_PATH;
    StringDataStruct WORKING_DIR;
    StringDataStruct COMMAND_LINE_ARGUMENTS;
    StringDataStruct ICON_LOCATION;

    void printStringDataUtilInHexStyle(StringDataStruct sdStruct);
    void printStringDataUtil(StringDataStruct sdStruct);
    void fillStringData(ReadStream *readStream, int readFrom);


public:
    StringData(ReadStream *readStream, int readFrom);
    void printStringData();
    void printStringDataInHexStyle();
    int getStringDataStructureSize();

};


#endif //LNK_JUMP_LIST_PARSER_STRINGDATA_H
