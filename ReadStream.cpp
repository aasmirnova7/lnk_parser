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
            return ivector;    // что-то придумать

        f.seekg(position);
        if(f.eof())
            return ivector;     // что-то придумать

        char ch;
        while (f.get(ch) && count > 0) {
            ivector.push_back(ch);
            --count;
        }
       // f.close();

        return ivector;
    }

    // Нумерация байт с 0, т.е. real_position = position + 1
    unsigned int ReadStream::read_with_string(int position, int byte_count) {
        //std::ifstream input("C:\\Users\\user\\Desktop\\IDA Freeware.lnk", std::ios::binary);
        f >> std::noskipws;
        ostringstream out;

        f.seekg(position);
        if(f.eof())
            return 0;

        unsigned char x;
        while (f >> x  && byte_count > 0) {
            out << std::hex << std::setw(2) << std::setfill('0') << (int)x;
            --byte_count;
        }
        return reverse_LE_To_BE(out.str());
    }

/* reverse for one byte (change figures in byte) */
unsigned int ReadStream::reverse_LE_To_BE(std::string str) {
    std::reverse(str.begin(), str.end());

    char tmp_begin, tmp_last;
    for(int i = 0; i < str.size(); i = i + 2){
      //  cout  << "WAS = " << str << "  ";
        tmp_begin = str[i]; tmp_last = str[i+1] ;
      //  cout << "beg: " << tmp_begin << " ind: " << i << " tmp_last: " << tmp_last << " ind: " <<  (i+1 ) << "  ";

        str[i] = tmp_last; str[i+1] = tmp_begin;
        //cout   <<  "NEW = "<< str << endl;
    }
    cout   <<  " \nNEW = "<< str << endl;
    unsigned int t = static_cast<unsigned int>(std::stoul(str, 0, 16)); // КАК не терять незначачие нули? - вроде бы всё ок
    cout << "t = " << hex << t << endl;
    return t; // КАК не терять незначачие нули? - вроде бы всё ок
}
