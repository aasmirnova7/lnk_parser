//
// Created by user on 29.08.2019.
//

#ifndef MY_DIPLOM_LINKTARGETIDLIST_H
#define MY_DIPLOM_LINKTARGETIDLIST_H


#include <vector>

class LinkTargetIDList {
private:
    std::vector<unsigned int> IDListSize;       // 2 bytes
    std::vector<unsigned int> TerminalID;       // 2 bytes

    void fillLinkTargetIDList(std::vector<unsigned char> linkTargetIdList);

public:
    struct ItemIDList {
        std::vector<unsigned int> ItemIDSize;   // 2 bytes
        std::vector<unsigned int> Data;         // Не понятно, как парсить эту информацию
    };
    std::vector<ItemIDList> IDList;

    LinkTargetIDList(std::vector<unsigned char> linkTargetIdList);

    void printLinkTargetIdList();
};


#endif //MY_DIPLOM_LINKTARGETIDLIST_H
