#ifndef LNK_JUMP_LIST_PARSER_DESTLIST_H
#define LNK_JUMP_LIST_PARSER_DESTLIST_H

#include <vector>
#include "DestListHeader.h"
#include "DestListEntryArray.h"

/**
    @class DestList
    Класс описывает структуру DestList для списков быстрого доступа.                                   */
class DestList {
public:
    /* ----------------------------------------------------------------------------------------------- */
    /*! Функция разбора текущей DestList структуры.
        @param rs Поток для чтения данных из файла
        @param startPosition Позиция начала чтения из потока rs
        @return void                                                                                   */
    /* ----------------------------------------------------------------------------------------------- */
    void parseDestListStructure(ReadStream* rs, int startPosition);
};


#endif// LNK_JUMP_LIST_PARSER_DESTLIST_H
