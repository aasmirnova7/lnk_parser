//
// Created by user on 29.08.2019.
//

#include <algorithm>
#include <iostream>
#include "LinkTargetIDList.h"
#include "Utils.h"

using namespace std;

// TODO: Нужно распарсить каждый IdList, но в документаци я не нахожу
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
        cout << "       Data:                        "; parseItemData(IDList[i].Data);
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

void LinkTargetIDList::parseItemData(std::vector<unsigned int> data) {
    unsigned int type = data[0];
    switch (type) {
        case TYPE_FILE_OLD:
            cout << "TYPE_FILE_OLD: " << endl;
        case TYPE_DIRECTORY_OLD:{
            if (type == TYPE_DIRECTORY_OLD)
                cout << "TYPE_DIRECTORY_OLD: " << endl;
        }
        case TYPE_FILE: {
            if (type == TYPE_FILE)
                cout << "TYPE_FILE: " << endl;
        }
        case TYPE_DIRECTORY: {
            if (type == TYPE_DIRECTORY)
                cout << "TYPE_DIRECTORY: " << endl;
            cout << Utils::defaultOffset << "  Short Name: ";
            int endNamePos = Utils::getFirtPosWhereByteIsNull(data, 12);
            int shortNameLen = endNamePos - 12;
            int startPosForLongName = data.size() - 4 - 2*shortNameLen;

            Utils::print_vec_unicode(data, 12, endNamePos);
            cout  << Utils::defaultOffset << "  Long Name:  ";
            Utils::print_vec_unicode(data, startPosForLongName, data.size() - 3);
            cout << endl;
            break;
        }
        case TYPE_DRIVE_OLD:
            cout << "TYPE_DRIVE_OLD: " << endl;
            //break;
        case TYPE_DRIVE:
            Utils::print_vec_unicode(data);
            cout << endl;
            break;
        case TYPE_CLSID: {
            cout << "TYPE_CLSID: ";
            Utils::printSid(data, 2);
//            cout << endl;
//            Utils::print_vec(Utils::getSidForComparing(data, 2));
//            cout << endl;
            std::vector<unsigned int> dataTmp;
            for(int i = 2; i < data.size(); ++i) {
                cout << " Data i = " << data[i] ;
                dataTmp.push_back(data[i]);
            }
            cout << " : " << Utils::getClsidType(dataTmp) << endl;
            break;
        }
        default:
            cout << "UNKNOWN type for ItemID" << endl;
    }
}

LinkTargetIDList::LinkTargetIDList() { }
