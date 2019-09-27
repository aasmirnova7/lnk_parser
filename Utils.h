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
    static std::string defaultOffset;
    static std::string defaultOffsetDocInfo;

    static unsigned int lenFourBytes(std::vector<unsigned int> vec);
    static int lenFourBytes(std::vector<unsigned char> vec);
    static int lenTwoBytes(std::vector<unsigned char> vec);
    static int lenTwoBytes(std::vector<unsigned int> vec);
    static void print_vec(std::vector<unsigned int>& vec);
    static void print_vec_unicode(std::vector<unsigned int>& vec);
    static std::vector<LinkTargetIDList::ItemIDList> fillItemIdList(int count,
                               std::vector<unsigned char>::const_iterator it);

    static int getCountOfBytesBeforeNullTerminator(std::vector<unsigned char>::const_iterator it);
    static void getDate(std::vector<unsigned int> vec);
    static void printSid(std::vector<unsigned int> vec);
    static unsigned int vectFourBytesToUnsignedInt(std::vector<unsigned int> vec, int pos);
    static std::vector<unsigned int> getSidForComparing(std::vector<unsigned int> vec);

};


#endif //MY_DIPLOM_UTILS_H
