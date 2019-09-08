//
// Created by user on 23.08.2019.
//

#include <iostream>
#include <fstream>
#include <vector>
#include <iomanip>
#include <algorithm>
#include "ReadStream.h"

using namespace std;

    //Конструктор, открывающий файл
    ReadStream::ReadStream(const char *filePath) {
        f.open(filePath, std::ios::binary);
        if(!f.is_open())
            cout << "Файл не открыт";
    }

    //Деструктор, закрывающий файл
    ReadStream::~ReadStream(){
        f.close();
    }

    /* Метод чтения массива символов-байт с указанной позиции
       который возвращает этот массив */
    vector<unsigned char> ReadStream::read(int position, int count) {
        vector<unsigned char> ivector;

        if(!f.is_open())
            return ivector;    // TODO: что-то придумать

        f.seekg(position);
        if(f.eof())
            return ivector;     // TODO: что-то придумать

        char ch;
        while (f.get(ch) && count > 0) {
            ivector.push_back(ch);
            --count;
        }
       // f.close();

        return ivector;
    }
