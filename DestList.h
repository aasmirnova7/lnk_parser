//
// Created by ann19 on 28.09.2019.
//

#ifndef LNK_JUMP_LIST_PARSER_DESTLIST_H
#define LNK_JUMP_LIST_PARSER_DESTLIST_H


#include <vector>
#include "DestListHeader.h"
#include "DestListEntryArray.h"

class DestList {
private:
public:
    DestList(ReadStream* rs, int startPosition);

};


#endif// LNK_JUMP_LIST_PARSER_DESTLIST_H
