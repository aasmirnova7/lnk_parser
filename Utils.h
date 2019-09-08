//
// Created by user on 30.08.2019.
//

#ifndef MY_DIPLOM_UTILS_H
#define MY_DIPLOM_UTILS_H


#include <vector>
#include <string>
#include "LinkTargetIDList.h"

class Utils {
public:
    static int lenFourBytes(std::vector<unsigned int> vec);
    static int lenFourBytes(std::vector<unsigned char> vec);
    static int lenTwoBytes(std::vector<unsigned char> vec);
    static int lenTwoBytes(std::vector<unsigned int> vec);
    static void print_vec(std::vector<unsigned int>& vec);
    static void print_vec_unicode(std::vector<unsigned int>& vec);
    static std::vector<LinkTargetIDList::ItemIDList> fillItemIdList(int count,
                               std::vector<unsigned char>::const_iterator it);

    static int getCountOfBytesBeforeNullTerminator(std::vector<unsigned char>::const_iterator it);

};


#endif //MY_DIPLOM_UTILS_H
