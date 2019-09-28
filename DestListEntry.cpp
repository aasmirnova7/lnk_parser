//
// Created by ann19 on 28.09.2019.
//

#include <iostream>
#include <algorithm>
#include "DestListEntry.h"

using namespace std;

DestListEntry::DestListEntry(std::vector<unsigned char> destListEntry) {
    fillLinkTargetIDList(destListEntry);
}

void DestListEntry::fillLinkTargetIDList(std::vector<unsigned char> destListEntry) {
    auto it = destListEntry.begin();

    std::copy(it, it + 8, std::back_inserter(Checksum));                // 8 byte
    it = it + 8;
    std::copy(it, it + 16, std::back_inserter(VolumeId));               // 16 byte
    it = it + 16;
    std::copy(it, it + 16, std::back_inserter(ObjectId));               // 16 byte
    it = it + 16;
    std::copy(it, it + 16, std::back_inserter(BirthVolumeId));          // 16 byte
    it = it + 16;
    std::copy(it, it + 16, std::back_inserter(BirthObjectId));          // 16 byte
    it = it + 16;
    std::copy(it, it + 16, std::back_inserter(NetBIOSName));            // 16 byte
    it = it + 16;
    std::copy(it, it + 4, std::back_inserter(EntryId));                 // 4 byte
    it = it + 4;
    std::copy(it, it + 8, std::back_inserter(Reserved1));               // 8 byte
    it = it + 8;
    std::copy(it, it + 8, std::back_inserter(MSFileTime));              // 8 byte
    it = it + 8;
    std::copy(it, it + 4, std::back_inserter(EntryPinStatus));          // 4 byte
    it = it + 4;
    std::copy(it, it + 4, std::back_inserter(Reserved2));               // 4 byte
    it = it + 4;
    std::copy(it, it + 4, std::back_inserter(AccessedCount));           // 4 byte
    it = it + 4;
    std::copy(it, it + 8, std::back_inserter(Reserved3));               // 8 byte
    it = it + 8;
    std::copy(it, it + 8, std::back_inserter(LengthOfUnicodeData));     // 2 byte
    it = it + 8;
    reverse(LengthOfUnicodeData.begin(), LengthOfUnicodeData.end());
    int len = Utils::lenTwoBytes(LengthOfUnicodeData);
    std::copy(it, it + len, std::back_inserter(EntryStringData));           // len byte

    reverseAllFields();
}

void DestListEntry::reverseAllFields() {
    reverse(Checksum.begin(), Checksum.end());
    reverse(VolumeId.begin(), VolumeId.end());
    reverse(ObjectId.begin(), ObjectId.end());
    reverse(BirthVolumeId.begin(), BirthVolumeId.end());
    reverse(BirthObjectId.begin(), BirthObjectId.end());
    //reverse(NetBIOSName.begin(), NetBIOSName.end());
    reverse(EntryId.begin(), EntryId.end());
    reverse(Reserved1.begin(), Reserved1.end());
    reverse(MSFileTime.begin(), MSFileTime.end());
    reverse(EntryPinStatus.begin(), EntryPinStatus.end());
    reverse(Reserved2.begin(), Reserved2.end());
    reverse(AccessedCount.begin(), AccessedCount.end());
    reverse(Reserved3.begin(), Reserved3.end());
    //reverse(LengthOfUnicodeData.begin(), LengthOfUnicodeData.end());
    //reverse(EntryStringData.begin(), EntryStringData.end());
}

void DestListEntry::printDestListHeaderInHexStyle() {
    cout << "_____________DestListHeader in HEX style_________________" << endl;
    cout << "Checksum:                           "; Utils::print_vec(Checksum);
    cout << "VolumeId:                           "; Utils::print_vec(VolumeId);
    cout << "ObjectId:                           "; Utils::print_vec(ObjectId);
    cout << "BirthVolumeId:                      "; Utils::print_vec(BirthVolumeId);
    cout << "BirthObjectId:                      "; Utils::print_vec(BirthObjectId);
    cout << "NetBIOSName:                        "; Utils::print_vec(NetBIOSName);
    cout << "EntryId:                            "; Utils::print_vec(EntryId);
    cout << "Reserved1:                          "; Utils::print_vec(Reserved1);
    cout << "MSFileTime:                         "; Utils::print_vec(MSFileTime);
    cout << "EntryPinStatus:                     "; Utils::print_vec(EntryPinStatus);
    cout << "Reserved2:                          "; Utils::print_vec(Reserved2);
    cout << "AccessedCount:                      "; Utils::print_vec(AccessedCount);
    cout << "Reserved3:                          "; Utils::print_vec(Reserved3);
    cout << "LengthOfUnicodeData:                "; Utils::print_vec(LengthOfUnicodeData);
    cout << "EntryStringData:                    "; Utils::print_vec(EntryStringData);
    cout << "_________________________________________________________" << endl;
}
void DestListEntry::printDestListHeader() {
    cout << "____________________DestListHeader_______________________" << endl;
    cout << "Checksum:                           "; Utils::print_vec(Checksum);
    cout << "VolumeId:                           "; Utils::printSid(VolumeId, 0); cout << endl;
    cout << "ObjectId:                           "; Utils::printSid(ObjectId, 0); cout << endl;
    cout << "BirthVolumeId:                      "; Utils::printSid(BirthVolumeId, 0); cout << endl;
    cout << "BirthObjectId:                      "; Utils::printSid(BirthObjectId, 0); cout << endl;
    cout << "NetBIOSName:                        "; Utils::print_vec_unicode(NetBIOSName);
    cout << "EntryId:                            " << dec << Utils::lenFourBytes(EntryId) << endl;
    cout << "Reserved1:                          "; Utils::print_vec(Reserved1);
    cout << "MSFileTime:                         "; Utils::print_vec(MSFileTime);
    cout << "EntryPinStatus:                     "; Utils::print_vec(EntryPinStatus);
    cout << "Reserved2:                          "; Utils::print_vec(Reserved2);
    cout << "AccessedCount:                      " << dec << Utils::lenFourBytes(AccessedCount) << endl;
    cout << "Reserved3:                          "; Utils::print_vec(Reserved3);
    cout << "LengthOfUnicodeData:                "<< dec << Utils::lenTwoBytes(LengthOfUnicodeData) << endl;
    cout << "EntryStringData:                    "; Utils::print_vec_unicode(EntryStringData);
    cout << "_________________________________________________________" << endl;

}
