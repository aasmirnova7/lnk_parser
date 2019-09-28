//
// Created by ann19 on 28.09.2019.
//

#ifndef MY_DIPLOM_DESTLISTENTRY_H
#define MY_DIPLOM_DESTLISTENTRY_H


#include <vector>
#include "Utils.h"

class DestListEntry {
private:
    std::vector<unsigned int> Checksum;                 // 8 bytes
    std::vector<unsigned int> VolumeId;                 // 16 bytes
    std::vector<unsigned int> ObjectId;                 // 16 bytes
    std::vector<unsigned int> BirthVolumeId;            // 16 bytes
    std::vector<unsigned int> BirthObjectId;            // 16 bytes
    std::vector<unsigned int> NetBIOSName;              // 16 bytes
    std::vector<unsigned int> EntryId;                  // 4 bytes
    std::vector<unsigned int> Reserved1;                // 8 bytes
    std::vector<unsigned int> MSFileTime;               // 8 bytes
    std::vector<unsigned int> EntryPinStatus;           // 4 bytes
    std::vector<unsigned int> Reserved2;                // 4 bytes
    std::vector<unsigned int> AccessedCount;            // 4 bytes
    std::vector<unsigned int> Reserved3;                // 8 bytes
    std::vector<unsigned int> LengthOfUnicodeData;      // 2 bytes
    std::vector<unsigned int> EntryStringData;          // variable

    void fillLinkTargetIDList(std::vector<unsigned char> destListEntry);
    void reverseAllFields();

public:
    DestListEntry(std::vector<unsigned char> destListEntry);

    void printDestListHeaderInHexStyle();
    void printDestListHeader();

};


#endif //MY_DIPLOM_DESTLISTENTRY_H
