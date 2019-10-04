//
// Created by user on 29.08.2019.
//

#ifndef MY_DIPLOM_READSTREAM_H
#define MY_DIPLOM_READSTREAM_H

#include <iostream>
#include <iostream>
#include <fstream>
#include <vector>
#include <iomanip>
#include <algorithm>
#include <string>

class ReadStream {
private:
    //Приватное поле - файл
    std::ifstream f;
    bool fileIsOpen = false;
public:
    //Конструктор, открывающий файл
    ReadStream(std::string filePath);
    //Деструктор, закрывающий файл
    ~ReadStream();

    /* Метод чтения массива символов-байт с указанной позиции
       который возвращает этот массив */
    std::vector<unsigned char> read(int position, int count);

    // Нумерация байт с 0, т.е. real_position = position + 1
    unsigned int read_with_string(int position, int byte_count);
    bool isFileOpen();
};

#endif //MY_DIPLOM_READSTREAM_H
