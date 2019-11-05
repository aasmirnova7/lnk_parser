//
// Created by user on 30.08.2019.
//

#ifndef LNK_JUMP_LIST_PARSER_STRINGDATA_H
#define LNK_JUMP_LIST_PARSER_STRINGDATA_H

#include <vector>
#include "../utils/ReadStream.h"

/*!
    @class StringDat
    Класс производит разбор структуры StringDat для Shell Link (.LNK) Binary File Format.
    Докуметация структуры: 2.4 StringData
    https://docs.microsoft.com/en-us/openspecs/windows_protocols/ms-shllink/17b69472-0f34-4bcf-b290-eccdb8de224b */
class StringData {
private:
    /// Поле содержит размер структуры StringData в байтах
    int StringDataSize = 0;

    /* ----------------------------------------------------------------------------------------------- */
    /*! \brief Структура StringDataStruct описывает структуру данных для структур
               NAME_STRING, RELATIVE_PATH, WORKING_DIR, COMMAND_LINE_ARGUMENTS, ICON_LOCATION.        */
    /*!  Включает следующие поля:
            CountCharacters;          // 2 bytes
            String;                   // variable                                                      */
    /* ----------------------------------------------------------------------------------------------- */
    struct StringDataStruct {
        std::vector<unsigned int> CountCharacters;   // 2 bytes   - количество Unicode chars ->умножать на 2
        std::vector<unsigned int> String;
    };

    /// Поле содержит информацию структуры NAME_STRING.
    StringDataStruct NAME_STRING;
    /// Поле содержит информацию структуры RELATIVE_PATH.
    StringDataStruct RELATIVE_PATH;
    /// Поле содержит информацию структуры WORKING_DIR.
    StringDataStruct WORKING_DIR;
    /// Поле содержит информацию структуры COMMAND_LINE_ARGUMENTS.
    StringDataStruct COMMAND_LINE_ARGUMENTS;
    /// Поле содержит информацию структуры ICON_LOCATION.
    StringDataStruct ICON_LOCATION;

    /* ----------------------------------------------------------------------------------------------- */
    /*! Вспомогательная функиця для вывода содержания полей структуры StringDataStruct в 16-ричном формате.
        @param sdStruct Экземпляр структуры StringDataStruct
        @return void                                                                                   */
    /* ----------------------------------------------------------------------------------------------- */
    void printStringDataUtilInHexStyle(StringDataStruct sdStruct);
    /* ----------------------------------------------------------------------------------------------- */
    /*! Вспомогательная функиця для вывода содержания полей структуры StringDataStruct в текстовом формате.
        @param sdStruct Экземпляр структуры StringDataStruct
        @return void                                                                                   */
    /* ----------------------------------------------------------------------------------------------- */
    void printStringDataUtil(StringDataStruct sdStruct);
    /* ----------------------------------------------------------------------------------------------- */
    /*! Функиця для разбора данных структуры StringData.
        @param readStream Поток для чтения из файла
        @param readFrom Позиция начала чтения из потока rs
        @return void                                                                                   */
    /* ----------------------------------------------------------------------------------------------- */
    void fillStringData(ReadStream *readStream, int readFrom);

public:
    /* ----------------------------------------------------------------------------------------------- */
    /*! Конструктор с параметрами.
        @param readStream Поток для чтения данных из файла
        @param readFrom Позиция начала чтения из потока rs                                             */
    /* ----------------------------------------------------------------------------------------------- */
    StringData(ReadStream *readStream, int readFrom);

    /* ----------------------------------------------------------------------------------------------- */
    /*! Функция вывода разобранной информации, содержащейся в StringData, в текстовом формате.
        @return void                                                                                   */
    /* ----------------------------------------------------------------------------------------------- */
    void printStringData();
    /* ----------------------------------------------------------------------------------------------- */
    /*! Функция вывода разобранной информации, содержащейся в StringData, в 16-ричном формате.
        @return void                                                                                   */
    /* ----------------------------------------------------------------------------------------------- */
    void printStringDataInHexStyle();
    /* ----------------------------------------------------------------------------------------------- */
    /*! Функция получения размера структуры StringData в байтах.
        @return int Размер структуры StringData в байтах.                                              */
    /* ----------------------------------------------------------------------------------------------- */
    int getStringDataStructureSize();
};

#endif //LNK_JUMP_LIST_PARSER_STRINGDATA_H
