//
// Created by user on 30.08.2019.
//

#include "Utils.h"
#include "LinkTargetIDList.h"
#include <vector>
#include <iostream>
#include <algorithm>
#include <w32api/timezoneapi.h>

using namespace std;

std::string Utils::defaultOffset = "                                    ";
std::string Utils::defaultOffsetDocInfo = "                                      ";

unsigned int Utils::lenFourBytes(std::vector<unsigned int> vec) {
    unsigned int result = (vec[0] << 8) | vec[1];
    unsigned int result2 = (vec[2] << 8) | vec[3];
    unsigned int result3 = (result << 16) | result2;

    return result3;
}

int Utils::lenFourBytes(std::vector<unsigned char> vec) {
    if(vec.size() == 4) {
        unsigned int result = (vec[0] << 8) | vec[1];
        unsigned int result2 = (vec[2] << 8) | vec[3];
        unsigned int result3 = (result << 16) | result2;
        return result3;
    }
    return 0;
}

int Utils::lenTwoBytes(std::vector<unsigned char> vec) {
    unsigned int result = (vec[0] << 8) | vec[1];
    std::string r = to_string(result);

    return result;
}

int Utils::lenTwoBytes(std::vector<unsigned int> vec) {
    unsigned int result = (vec[0] << 8) | vec[1];
    return result;
}

void Utils::print_vec(std::vector<unsigned int>& vec) {
    int count = 0;
    for (int x: vec) {
        if(count >= 25) {
            std::cout << endl << "                                    ";
            count = 0;
        }
        std::cout << hex << x << ' ';
        ++count;
    }
    std::cout << endl;
}

void Utils::print_vec_unicode(std::vector<unsigned int>& vec) {
    bool lastCharIsBlank = false;
    for(int i=0; i < vec.size(); ++i){
        if(i > 0 && vec[i] == 0 && !lastCharIsBlank) {
            std::cout << (char)vec[i];
            continue;
        }
        if (vec[i] == 0) {
            lastCharIsBlank = true;
            continue;
        }
        std::cout << (char)vec[i];
    }
    std::cout << endl;
}

int Utils::getCountOfBytesBeforeNullTerminator(std::vector<unsigned char>::const_iterator it) {
    int countBytesBeforeNullTerminated = 0;
    auto itCopy = it;
    // Получаем сколько байт нужно считать до нультермитатора
    while ((int)*itCopy != 0x00 && (int)*(itCopy + 1) != 0x00 ) {
        ++countBytesBeforeNullTerminated;
        ++itCopy;
    }
    return countBytesBeforeNullTerminated + 3;  // Правильно, но нужно подумать, почему
}

std::vector<LinkTargetIDList::ItemIDList> Utils::fillItemIdList(int count, std::vector<unsigned char>::const_iterator it) {
    std::vector<LinkTargetIDList::ItemIDList> IDList;
    while (count > 0) {
        LinkTargetIDList::ItemIDList itemIdList;
        copy(it, it + 2, std::back_inserter(itemIdList.ItemIDSize));          // 2 byte
        it = it + 2;
        reverse(itemIdList.ItemIDSize.begin(), itemIdList.ItemIDSize.end());
        int itemIDSize = Utils::lenTwoBytes(itemIdList.ItemIDSize);

        copy(it, it + itemIDSize - 2, std::back_inserter(itemIdList.Data));       // itemIDSize byte
        reverse(itemIdList.Data.begin(), itemIdList.Data.end());
        it = it + itemIDSize - 2;

        IDList.push_back(itemIdList);
        count = count - itemIDSize;
    }
    return IDList;
}

unsigned int Utils::vectFourBytesToUnsignedInt(std::vector<unsigned int> vec, int pos) {
    unsigned int result = (vec[pos] << 8) | vec[pos+1];
    unsigned int result2 = (vec[pos+2] << 8) | vec[pos+3];
    unsigned int result3 = (result << 16) | result2;
    return result3;
}
unsigned int Utils::vectTwoToUnsignedInt(std::vector<unsigned int> vec, int pos) {
    unsigned int result = (vec[pos] << 8) | vec[pos + 1];
    return result;
}

// TODO: время отличается на 3 часа + для WriteTime неверная дата + у AccessTime неверно секунды
void Utils::getDate(std::vector<unsigned int> vec) {
    FILETIME a;
    a.dwHighDateTime = vectFourBytesToUnsignedInt(vec, 0);
    a.dwLowDateTime = vectFourBytesToUnsignedInt(vec, 4);

    SYSTEMTIME b;
    FileTimeToSystemTime(&a, &b);  // Перевод из FILETIME в SYSTEMTIME
    cout << dec << b.wDay << "." << dec << b.wMonth << "." << dec << b.wYear << "   (" <<
        dec << b.wHour << ":" << dec << b.wMinute   << ":" << dec << b.wSecond << ") [UTC]"<< endl;
}
void Utils::printSid(std::vector<unsigned int> vec, int pos) {
    cout << hex << vec[pos+3] <<  " " << hex << vec[pos+2] << " " << hex << vec[pos+1] << " " << hex << vec[pos] << " " << "-" << " " <<
            hex << vec[pos+5] << " " << hex << vec[pos+4] << " " << "-" << " " << hex << vec[pos+7] << " " << hex << vec[pos+6] << " " << "-"  << " " <<
            hex << vec[pos+8] << " " << hex << vec[pos+9] << " " << "-" << " " <<
            hex << vec[pos+10] << " " << hex << vec[pos+11] << " " << hex << vec[pos+12] << " " <<
            hex << vec[pos+13] << " " << hex << vec[pos+14] << " " << hex << vec[pos+15];
}

void Utils::printMacAddr(std::vector<unsigned int> vec) {
    cout << vec[5] <<  ":" << vec[4] << ":" << vec[3] << ":" << vec[2] << ":" << vec[1]  << ":" << vec[0] << endl;
}

std::vector<unsigned int> Utils::getSidForComparing(std::vector<unsigned int> vec) {
    std::vector<unsigned int> tmpVec;
    tmpVec.push_back(vec[3]); tmpVec.push_back(vec[2]);
    tmpVec.push_back(vec[1]); tmpVec.push_back(vec[0]);
    tmpVec.push_back(vec[5]); tmpVec.push_back(vec[4]);
    tmpVec.push_back(vec[7]); tmpVec.push_back(vec[6]);
    tmpVec.push_back(vec[8]); tmpVec.push_back(vec[9]);
    tmpVec.push_back(vec[10]); tmpVec.push_back(vec[11]);
    tmpVec.push_back(vec[12]); tmpVec.push_back(vec[13]);
    tmpVec.push_back(vec[14]); tmpVec.push_back(vec[15]);

    return tmpVec;
}