//
// Created by ann19 on 28.09.2019.
//

#ifndef MY_DIPLOM_DESTLISTHEADER_H
#define MY_DIPLOM_DESTLISTHEADER_H


#include <vector>
#include "Utils.h"

class DestListHeader {
private:
    std::vector<unsigned int> Version;                         // 4 bytes
    std::vector<unsigned int> TotalNumberOfCurrentEntries;     // 4 bytes
    std::vector<unsigned int> TotalNumberOfPinnedEntries;      // 4 bytes
    std::vector<unsigned int> Unknown;                         // 4 bytes
    std::vector<unsigned int> LastIssuedEntryId;               // 8 bytes
    std::vector<unsigned int> NumberOfAddedDeletedReopened;    // 8 bytes

    void fillLinkTargetIDList(std::vector<unsigned char> destListHeader);
    void reverseAllFields();

public:
    DestListHeader(std::vector<unsigned char> destListHeader);

    void printDestListHeaderInHexStyle();
    void printDestListHeader();
};


#endif //MY_DIPLOM_DESTLISTHEADER_H
