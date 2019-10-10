//
// Created by user on 29.08.2019.
//

#include <algorithm>
#include <iostream>
#include "LinkTargetIDList.h"
#include "Utils.h"

using namespace std;

LinkTargetIDList::LinkTargetIDList(std::vector<unsigned char> linkTargetIdList){
    fillLinkTargetIDList(linkTargetIdList);
}

void LinkTargetIDList::fillLinkTargetIDList(std::vector<unsigned char> linkTargetIdList) {
    auto it_begin = linkTargetIdList.begin();

    copy(it_begin, it_begin + 2, std::back_inserter( IDListSize));                      // 2 byte
    reverse(IDListSize.begin(), IDListSize.end());
    it_begin = it_begin + 2;
    int count = Utils::lenTwoBytes(IDListSize) - 2;
    int tmpCount = count;

    int itemIDSize = 1;
    while (tmpCount > 0) {
        if (itemIDSize == 0)
            break;
        ItemIDList itemIdList;
        copy(it_begin, it_begin + 2, std::back_inserter(itemIdList.ItemIDSize));          // 2 byte
        it_begin = it_begin + 2;
        reverse(itemIdList.ItemIDSize.begin(), itemIdList.ItemIDSize.end());
        itemIDSize = Utils::lenTwoBytes(itemIdList.ItemIDSize);
        if (tmpCount < itemIDSize) {
            hasErrors = true;
            break;
        }

        copy(it_begin, it_begin + itemIDSize - 2, std::back_inserter(itemIdList.Data));       // itemIDSize byte
        //reverse(itemIdList.Data.begin(), itemIdList.Data.end());
        it_begin = it_begin + itemIDSize - 2;

        IDList.push_back(itemIdList);
        tmpCount = tmpCount - itemIDSize;
    }
    if (tmpCount > 0 && itemIDSize == 0)
        hasErrors = true;

    std::copy(it_begin, it_begin + 2, std::back_inserter( TerminalID));                  // 2 bytes
    reverse(TerminalID.begin(), TerminalID.end());
}
bool LinkTargetIDList::LinkTargetIdHasErrors() {
    return hasErrors;
}

void LinkTargetIDList::printLinkTargetIdList() {
    cout <<"____________________LinkTargetIdList______________________" << endl;
    cout << "IDListSize:                         " << dec << Utils::lenTwoBytes(IDListSize) << " bytes" << endl;
    cout << "IDList:                             " << endl ;
    for(int i = 0; i < IDList.size(); ++i){
        cout << "   ItemID " << i + 1 << endl;
        cout << "       ItemIDSize:                  " << dec << Utils::lenTwoBytes(IDList[i].ItemIDSize) << " bytes" << endl;
        cout << "       Data:                        "; Utils::parseItemData(IDList[i].Data);
    }
    cout << "   TerminalID:                      "; Utils::print_vec(TerminalID);
    cout << "_________________________________________________________" << endl;
}

void LinkTargetIDList::printLinkTargetIdListInHexStyle() {
    cout <<"_________________LinkTargetIdList in Hex Style___________________" << endl;
    cout << "IDListSize:                         " ; Utils::print_vec(IDListSize);
    cout << "IDList:                             " << endl ;
    for(int i = 0; i < IDList.size(); ++i){
        cout << "   ItemID " << i + 1 << endl;
        cout << "       ItemIDSize:                  "; Utils::print_vec(IDList[i].ItemIDSize);
        cout << "       Data:                        "; Utils::print_vec(IDList[i].Data);
    }
    cout << "   TerminalID:                      "; Utils::print_vec(TerminalID);
    cout << "_________________________________________________________" << endl;
}

LinkTargetIDList::LinkTargetIDList() { }
