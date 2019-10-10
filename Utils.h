//
// Created by user on 30.08.2019.
//

#ifndef MY_DIPLOM_UTILS_H
#define MY_DIPLOM_UTILS_H


#include <vector>
#include <string>
#include "LinkTargetIDList.h"
#include "UtilsConstant.h"

class Utils {
private:
    static bool compareClsidType(std::vector<unsigned int> vec, std::string clsid);

public:
    static std::string defaultOffset;
    static std::string defaultOffsetDocInfo;

    static unsigned int lenFourBytes(std::vector<unsigned int> vec);
    static int lenFourBytes(std::vector<unsigned char> vec);
    static int lenTwoBytes(std::vector<unsigned char> vec);
    static int lenTwoBytes(std::vector<unsigned int> vec);
    static void print_vec(std::vector<unsigned int> vec);
    static void print_vec_unicode(std::vector<unsigned int>& vec);
    static void print_vec_unicode(std::vector<unsigned int>& vec, int from, int to);
    static int getFirtPosWhereByteIsNull(std::vector<unsigned int>& vec, int from);
    static std::vector<LinkTargetIDList::ItemIDList> fillItemIdList(int count,
                               std::vector<unsigned char>::const_iterator it);

    static int getCountOfBytesBeforeNullTerminator(std::vector<unsigned char>::const_iterator it);
    static void getDate(std::vector<unsigned int> vec);
    static void printSid(std::vector<unsigned int> vec, int pos);
    static void printMacAddr(std::vector<unsigned int> vec);
    static unsigned int vectFourBytesToUnsignedInt(std::vector<unsigned int> vec, int pos);
    static unsigned int vectTwoToUnsignedInt(std::vector<unsigned int> vec, int pos);
    static std::vector<unsigned int> getSidForComparing(std::vector<unsigned int> vec, int pos);
    static std::string getClsidType(std::vector<unsigned int> clsid);
    static void parseItemData(std::vector<unsigned int> data);

    struct clsid_type {
        std::string clsid;
        std::string name;
    };
};


#endif //MY_DIPLOM_UTILS_H
