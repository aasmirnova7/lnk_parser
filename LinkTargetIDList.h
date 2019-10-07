//
// Created by user on 29.08.2019.
//

#ifndef MY_DIPLOM_LINKTARGETIDLIST_H
#define MY_DIPLOM_LINKTARGETIDLIST_H


#include <vector>

#define  TYPE_FILE_OLD          0x36
#define  TYPE_DIRECTORY_OLD     0x35
#define  TYPE_FILE              0x32
#define  TYPE_DIRECTORY         0x31
#define  TYPE_DRIVE_OLD         0x23
#define  TYPE_DRIVE             0x2f
#define  TYPE_CLSID             0x1f

class LinkTargetIDList {
private:
    std::vector<unsigned int> IDListSize;       // 2 bytes
    std::vector<unsigned int> TerminalID;       // 2 bytes

    void fillLinkTargetIDList(std::vector<unsigned char> linkTargetIdList);
    void parseItemData(std::vector<unsigned int> data);
    bool hasErrors = false;

public:
    struct ItemIDList {
        std::vector<unsigned int> ItemIDSize;   // 2 bytes
        std::vector<unsigned int> Data;         // Не понятно, как парсить эту информацию
    };
    std::vector<ItemIDList> IDList;

    LinkTargetIDList(std::vector<unsigned char> linkTargetIdList);
    LinkTargetIDList();

    void printLinkTargetIdListInHexStyle();
    void printLinkTargetIdList();
    bool LinkTargetIdHasErrors();
};


#endif //MY_DIPLOM_LINKTARGETIDLIST_H
