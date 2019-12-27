#ifndef LNK_JUMP_LIST_PARSER_EXTRADATAUTILS_H
#define LNK_JUMP_LIST_PARSER_EXTRADATAUTILS_H

#include <string>
#include <vector>
#include <iostream>

#include "ExtraDataConstants.h"
#include "../utils/Utils.h"

/**
    @class ExtraDataUtils
    Класс предоставляет метод для вывода информации об ошибке, если присутствует поле VT_ERROR.        */
class ExtraDataUtils {
public:
    /* ----------------------------------------------------------------------------------------------- */
    /*! Функция вывода информации об ошибке.
        @param errorType Вектор содержащий тип ошибки (8 байт)
        @return void                                             */
    /* ----------------------------------------------------------------------------------------------- */
    static void parseError(long long int errorType);

};

#endif
