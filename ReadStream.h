//
// Created by user on 29.08.2019.
//

#ifndef LNK_JUMP_LIST_PARSER_READSTREAM_H
#define LNK_JUMP_LIST_PARSER_READSTREAM_H

#include <iostream>
#include <iostream>
#include <fstream>
#include <vector>
#include <iomanip>
#include <algorithm>
#include <string>

/**
    @class ReadStream
    Класс для чтения данных из заданного файла                                                        */
class ReadStream {
private:
    /// Поле, содержащее объект файл
    std::ifstream f;
    /// Поле для проверки успешности открытия файла.
    bool fileIsOpen = false;
public:
    /* ----------------------------------------------------------------------------------------------- */
    /*! Конструктор с параметрами, открывающий файл
        @param filePath Путь до файла, в котором нужно разобрать структуры .lnk
                        или список быстрого доступа.                                                   */
    /* ----------------------------------------------------------------------------------------------- */
    ReadStream(std::string filePath);
    /// Деструктор, закрывающий файл
    ~ReadStream();

    /* ----------------------------------------------------------------------------------------------- */
    /*! Функция чтения массива символов-байт с указанной позиции, возвращающая прочитанный массив.
        @return std::vector<unsigned char> Возвращает вектор прочитанных символов                      */
    /* ----------------------------------------------------------------------------------------------- */
    std::vector<unsigned char> read(int position, int count);
    /* ----------------------------------------------------------------------------------------------- */
    /*! Функция проверки успешности открытия файла.
        @return bool Возвращает true в случае успешного открытия файла, false - в случае неудачи.      */
    /* ----------------------------------------------------------------------------------------------- */
    bool isFileOpen();
};

#endif //LNK_JUMP_LIST_PARSER_READSTREAM_H
