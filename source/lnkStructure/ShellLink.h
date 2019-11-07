#ifndef LNK_JUMP_LIST_PARSER_SHELLLINK_H
#define LNK_JUMP_LIST_PARSER_SHELLLINK_H

#include "../utils/ReadStream.h"
#include "ShellLinkHeader.h"
#include "LinkTargetIDList.h"
#include "../utils/Utils.h"
#include "LinkInfo.h"
#include "StringData.h"
#include "ExtraData.h"

/**
    @class ShellLink
    Класс производит разбор структур для Shell Link (.LNK) Binary File Format.
    Докуметация формата: [MS-SHLLINK]: Shell Link (.LNK) Binary File Format
    https://docs.microsoft.com/en-us/openspecs/windows_protocols/ms-shllink/16cb4ca1-9339-4d0c-a68d-bf1d6cc0f943 */
class ShellLink {
private:
    /// Поле для хранения информации о позиции окончания структуры ShellLink
    /// от начала файла в байтах.
    int ShellLinkOffsetEnd;
    /// Поле для проверки успешности разбора информации в текущем ShellLink.
    bool thisShellLinkHasErrors = false;
public:
    /* ----------------------------------------------------------------------------------------------- */
    /*! Функция для получения позиции окончания текущей структуры ShellLink от начала файла в байтах.
        @return int Количство байт от начала файла.                                                    */
    /* ----------------------------------------------------------------------------------------------- */
    int getShellLinkOffsetEnd();
    /* ----------------------------------------------------------------------------------------------- */
    /*! Функция проверки успешности обработки текущей структуры ShellLink.
        @return bool Возвращает true в случае успешного разбора данных, false - в случае неудачи.      */
    /* ----------------------------------------------------------------------------------------------- */
    bool isThisShellLinkHasErrors();
    /* ----------------------------------------------------------------------------------------------- */
    /*! Функция сброса всех флагов, которые могли быть установлены во время разбора текущей ShellLink.
        @return void                                                                                   */
    /* ----------------------------------------------------------------------------------------------- */
    void resetAllFlags();
    /* ----------------------------------------------------------------------------------------------- */
    /*! Функция разбора текущей ShellLink структуры.
        @param rs Поток для чтения данных из файла
        @param startPosition Позиция начала чтения из потока rs
        @return void                                                                                   */
    /* ----------------------------------------------------------------------------------------------- */
    void parseShellLinkStructure(ReadStream* rs, int startPosition);
};

#endif //LNK_JUMP_LIST_PARSER_SHELLLINK_H
