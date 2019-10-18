//
// Created by ann19 on 29.09.2019.
//

#ifndef LNK_JUMP_LIST_PARSER_SHELLLINKANDJUMPLISTHANDLER_H
#define LNK_JUMP_LIST_PARSER_SHELLLINKANDJUMPLISTHANDLER_H

#include <algorithm>
#include <string>
#include "ShellLink.h"
#include "DestList.h"

/**
    @class ShellLinkAndJumpListHandler
    Класс являющийся обработчиком структур Shell Link (.LNK) Binary File Format
    и списков быстрого доступа                                                                     */
class ShellLinkAndJumpListHandler {
private:
    /// Поле для хранения информации  о количестве структур ShellLink, разобранных с ошибками.
    int countOfShellLinkWithErrors = 0;
    /// Поле для хранения информации о количестве всех структур ShellLink текущего файла.
    int countOfShellLink = 0;
    /// Поле для хранения позиции начала чтения из потока rs.
    int startPosition = 0;
    /// Поле для проверки успешности открытия файла.
    bool fileIsOpen = false;
    /// Поле для хранения потока чтения из файла.
    ReadStream *rs;
public:
    /* ----------------------------------------------------------------------------------------------- */
    /*! Конструктор с параметрами.
        @param filePath Путь до файла, в котором нужно разобрать структуры .lnk
                        или список быстрого доступа.                                                   */
    /* ----------------------------------------------------------------------------------------------- */
    ShellLinkAndJumpListHandler(std::string filePath);

    /* ----------------------------------------------------------------------------------------------- */
    /*! Функция проверки успешности открытия файла.
        @return bool Возвращает true в случае успешного открытия файла, false - в случае неудачи.      */
    /* ----------------------------------------------------------------------------------------------- */
    bool isFileOpen();
    /* ----------------------------------------------------------------------------------------------- */
    /*! Функция разбора файла на структуры .lnk и список быстрого доступа, если они присутствуют.
        @return void                                                                                   */
    /* ----------------------------------------------------------------------------------------------- */
    void parseFile();
};

#endif //LNK_JUMP_LIST_PARSER_SHELLLINKANDJUMPLISTHANDLER_H
