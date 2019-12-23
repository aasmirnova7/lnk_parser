#include <iostream>
#include <algorithm>
#include "DestListEntryArray.h"
#include "DestListHeader.h"

using namespace std;

void DestListEntryArray::fillDestListEntryArray(ReadStream *rs, int readFrom, DestListHeader header) {
    // std::cout << "__fillDestListEntryArray start__" << std::endl;
    int count = header.getTotalNumberOfCurrentEntries();
    int tmpReadFrom = readFrom;

    while(count > 0) {
        DestListEntry tmpDestListEntry;

        std::vector<unsigned char> firstPartOfEntry = rs->read(tmpReadFrom,130);
        tmpReadFrom = 130 + tmpReadFrom;
        auto it = firstPartOfEntry.begin();

       if(firstPartOfEntry.size() != 0) {
            std::copy(it, it + 8, std::back_inserter(tmpDestListEntry.Checksum));
            it += 8;
            std::copy(it, it + 16, std::back_inserter(tmpDestListEntry.VolumeId));
            it += 16;
            std::copy(it, it + 16, std::back_inserter(tmpDestListEntry.ObjectId));
            it += 16;
            std::copy(it , it + 16, std::back_inserter(tmpDestListEntry.BirthVolumeId));
            it += 16;
            std::copy(it, it + 16, std::back_inserter(tmpDestListEntry.BirthObjectId));
            it += 16;
            std::copy(it , it + 16, std::back_inserter(tmpDestListEntry.NetBIOSName));
            it += 16;
            std::copy(it, it + 4, std::back_inserter(tmpDestListEntry.EntryId));
            tmpReadFrom = 4 + tmpReadFrom;
            it += 4;
            std::copy(it , it + 8, std::back_inserter(tmpDestListEntry.Reserved1));
            it += 8;
            std::copy(it , it + 8, std::back_inserter(tmpDestListEntry.MSFileTime));
            it += 8;
            std::copy(it , it + 4, std::back_inserter(tmpDestListEntry.EntryPinStatus));
            it += 4;
            std::copy(it , it + 4, std::back_inserter(tmpDestListEntry.Reserved2));
            it += 4;
            std::copy(it , it + 4, std::back_inserter(tmpDestListEntry.AccessedCount));
            it += 4;
            std::copy(it , it + 8, std::back_inserter(tmpDestListEntry.Reserved3));
            it += 8;
            std::copy(it, it + 2, std::back_inserter(tmpDestListEntry.LengthOfUnicodeData));
            reverse(tmpDestListEntry.LengthOfUnicodeData.begin(), tmpDestListEntry.LengthOfUnicodeData.end());
            int len = Utils::lenTwoBytes(tmpDestListEntry.LengthOfUnicodeData);
            len *= 2; // Because it is unicode characters
            //cout << " len = " << dec << len  << endl;
            std::vector<unsigned char> entryStringData =  rs->read(tmpReadFrom, len);
            std::copy(entryStringData.begin(), entryStringData.end(), std::back_inserter(tmpDestListEntry.EntryStringData));
            tmpReadFrom = len + tmpReadFrom;
            DestListEntryArray::reverseAllFields(&tmpDestListEntry);
            destListEntryArray.push_back(tmpDestListEntry);
            --count;
        } else break;
    }
}

void DestListEntryArray::reverseAllFields(DestListEntry* tmpDestListEntry) {
    // std::cout << "__reverseAllFields start__" << std::endl;
    reverse(tmpDestListEntry->Checksum.begin(), tmpDestListEntry->Checksum.end());
    reverse(tmpDestListEntry->EntryId.begin(), tmpDestListEntry->EntryId.end());
    reverse(tmpDestListEntry->Reserved1.begin(), tmpDestListEntry->Reserved1.end());
    reverse(tmpDestListEntry->MSFileTime.begin(), tmpDestListEntry->MSFileTime.end());
    reverse(tmpDestListEntry->EntryPinStatus.begin(), tmpDestListEntry->EntryPinStatus.end());
    reverse(tmpDestListEntry->Reserved2.begin(), tmpDestListEntry->Reserved2.end());
    reverse(tmpDestListEntry->AccessedCount.begin(), tmpDestListEntry->AccessedCount.end());
    reverse(tmpDestListEntry->Reserved3.begin(), tmpDestListEntry->Reserved3.end());
}

void DestListEntryArray::printDestListEntryArrayInHexStyle() {
    // std::cout << "__printDestListEntryArrayInHexStyle start__" << std::endl;
    cout << "________________DestList in HEX style____________________" << endl;
    for(int i = 0; i < destListEntryArray.size(); ++i) {
        cout << "DestListEntry " << dec << i + 1<< endl;
        cout << "  Checksum:                         "; Utils::print_vec(destListEntryArray[i].Checksum);
        cout << "  VolumeId:                         "; Utils::print_vec(destListEntryArray[i].VolumeId);
        cout << "  ObjectId:                         "; Utils::print_vec(destListEntryArray[i].ObjectId);
        cout << "  BirthVolumeId:                    "; Utils::print_vec(destListEntryArray[i].BirthVolumeId);
        cout << "  BirthObjectId:                    "; Utils::print_vec(destListEntryArray[i].BirthObjectId);
        cout << "  NetBIOSName:                      "; Utils::print_vec(destListEntryArray[i].NetBIOSName);
        cout << "  EntryId:                          "; Utils::print_vec(destListEntryArray[i].EntryId);
        cout << "  Reserved1:                        "; Utils::print_vec(destListEntryArray[i].Reserved1);
        cout << "  MSFileTime:                       "; Utils::print_vec(destListEntryArray[i].MSFileTime);
        cout << "  EntryPinStatus:                   "; Utils::print_vec(destListEntryArray[i].EntryPinStatus);
        cout << "  Reserved2:                        "; Utils::print_vec(destListEntryArray[i].Reserved2);
        cout << "  AccessedCount:                    "; Utils::print_vec(destListEntryArray[i].AccessedCount);
        cout << "  Reserved3:                        "; Utils::print_vec(destListEntryArray[i].Reserved3);
        cout << "  LengthOfUnicodeData:              "; Utils::print_vec(destListEntryArray[i].LengthOfUnicodeData);
        cout << "  EntryStringData:                  "; Utils::print_vec(destListEntryArray[i].EntryStringData);
        cout << endl;
    }
    cout << "_________________________________________________________" << endl;
}
void DestListEntryArray::printDestListEntryArray() {
    // std::cout << "__printDestListEntryArray start__" << std::endl;
    cout << "_______________________DestList__________________________" << endl;
    for(int i = 0; i < destListEntryArray.size(); ++i) {
        cout << "DestListEntry " << dec << i + 1 << endl;
        cout << "  Checksum:                         "; Utils::print_vec(destListEntryArray[i].Checksum);
        cout << "  VolumeId:                         "; Utils::printSid(destListEntryArray[i].VolumeId, 0); cout << endl;
        cout << "  ObjectId:                         "; Utils::printSid(destListEntryArray[i].ObjectId, 0); cout << endl;
        cout << "     Birth Mac:                     "; Utils::printMacAddr(destListEntryArray[i].ObjectId, 0);

        cout << "     Sequence Number:               " <<
            dec << Utils::lenTwoBytesFromPos(destListEntryArray[i].ObjectId, 8) << endl;
//        cout << "     Creation Date:                 "; Utils::getDateFromPos(destListEntryArray[i].ObjectId, 0);
        cout << "  BirthVolumeId:                    "; Utils::printSid(destListEntryArray[i].BirthVolumeId, 0); cout << endl;
        cout << "  BirthObjectId:                    "; Utils::printSid(destListEntryArray[i].BirthObjectId, 0); cout << endl;
        cout << "  NetBIOSName:                      "; Utils::print_vec_unicode(destListEntryArray[i].NetBIOSName);
        cout << "  EntryId:                          " << dec << Utils::lenFourBytes(destListEntryArray[i].EntryId) << endl;
        cout << "  Reserved1:                        "; Utils::print_vec(destListEntryArray[i].Reserved1);
        cout << "  MSFileTime:                       "; Utils::getDateFromPos(destListEntryArray[i].MSFileTime, 0);
            cout << Utils::defaultOffsetDocInfo << " Time of last recorded access." << endl;
        cout << "  EntryPinStatus:                   "; Utils::print_vec(destListEntryArray[i].EntryPinStatus);
        cout << "  Reserved2:                        "; Utils::print_vec(destListEntryArray[i].Reserved2);
        cout << "  AccessedCount:                    " << dec << Utils::lenFourBytes(destListEntryArray[i].AccessedCount) << endl;
        cout << "  Reserved3:                        "; Utils::print_vec(destListEntryArray[i].Reserved3);
        cout << "  LengthOfUnicodeData:              "<< dec <<
            2 * Utils::lenTwoBytes(destListEntryArray[i].LengthOfUnicodeData) << " bytes" << endl;
        cout << "  EntryStringData:                  "; Utils::print_vec_unicode(destListEntryArray[i].EntryStringData);
        cout << endl;
    }
    cout << "_________________________________________________________" << endl;
}
