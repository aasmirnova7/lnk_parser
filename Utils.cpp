//
// Created by user on 30.08.2019.
//

#include "Utils.h"
#include "LinkTargetIDList.h"
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int Utils::lenFourBytes(std::vector<unsigned int> vec) {
    unsigned int result = (vec[0] << 8) | vec[1];
    unsigned int result2 = (vec[2] << 8) | vec[3];
    unsigned int result3 = (result << 16) | result2;

    return result3;
}

int Utils::lenFourBytes(std::vector<unsigned char> vec) {
    unsigned int result = (vec[0] << 8) | vec[1];
    unsigned int result2 = (vec[2] << 8) | vec[3];
    unsigned int result3 = (result << 16) | result2;

    return result3;
}

int Utils::lenTwoBytes(std::vector<unsigned char> vec) {
    unsigned int result = (vec[0] << 8) | vec[1];
    std::string r = to_string(result);

   // cout <<" str = " << r  << " R = " << std::strtoul( r.c_str(), 0, 16) << endl;
    return result;//std::strtoul(to_string(result).c_str(), 0, 16);
}

int Utils::lenTwoBytes(std::vector<unsigned int> vec) {
    unsigned int result = (vec[0] << 8) | vec[1];
    std::string r = to_string(result);

     //cout <<" str = " << r  << " R = " << std::strtoul(r.c_str(), 0, 16) << endl;
    return result;//std::strtoul(to_string(result).c_str(), 0, 16);
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
    std::cout << '\n';
}

void Utils::print_vec_unicode(std::vector<unsigned int>& vec) {
    for (int x: vec)
        std::cout << (char)x;
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
        // cout << "\nitemIDSize " << dec <<  itemIDSize  << endl;

        copy(it, it + itemIDSize - 2, std::back_inserter(itemIdList.Data));       // itemIDSize byte
        // cout << "itemIdList.Data = "; Utils::print_vec(itemIdList.Data);
        // cout << " itemIdList.Data size = " << dec << itemIdList.Data.size() << endl;
        reverse(itemIdList.Data.begin(), itemIdList.Data.end());
        it = it + itemIDSize - 2;

        IDList.push_back(itemIdList);
        count = count - itemIDSize;
    }
    return IDList;
}
