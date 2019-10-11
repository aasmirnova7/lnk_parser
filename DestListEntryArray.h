//
// Created by ann19 on 28.09.2019.
//

#ifndef LNK_JUMP_LIST_PARSER_DESTLISTENTRYARRAY_H
#define LNK_JUMP_LIST_PARSER_DESTLISTENTRYARRAY_H


#include <vector>
#include "Utils.h"
#include "ReadStream.h"
#include "DestListHeader.h"

class DestListEntryArray {
private:
    struct DestListEntry {
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
    };
    std::vector<DestListEntry> destListEntryArray;


    void fillLinkTargetIDList(ReadStream *rs, int readFrom, DestListHeader header);
    void reverseAllFields();

public:
    DestListEntryArray(ReadStream *readStream, int readFrom, DestListHeader header);

    void printDestListEntryArrayInHexStyle();
    void printDestListEntryArray();

};


#endif //LNK_JUMP_LIST_PARSER_DESTLISTENTRYARRAY_H
