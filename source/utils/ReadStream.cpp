#include <iostream>
#include <vector>
#include "ReadStream.h"

using namespace std;

    ReadStream::ReadStream(std::string filePath) {
        f.open(filePath, std::ios::binary);
        if(!f.is_open())
            cout << "Shortcut or Jump List file is not opened. "
                 << "Please check that you input correct path and start program again." << endl;
        else
            fileIsOpen = true;
    }

    ReadStream::~ReadStream(){
        f.close();
    }

    bool ReadStream::isFileOpen() {
        return fileIsOpen;
    }

    /* Метод чтения массива символов-байт с указанной позиции
       который возвращает этот массив */
    vector<unsigned char> ReadStream::read(int position, int count) {
        vector<unsigned char> ivector;

        if(!f.is_open())
            return ivector;

        f.seekg(position);
        if(f.eof())
            return ivector;

        char ch;
        while (f.get(ch) && count > 0) {
            ivector.push_back(ch);
            --count;
        }
        return ivector;
    }
