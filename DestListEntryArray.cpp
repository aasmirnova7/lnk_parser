//
// Created by ann19 on 28.09.2019.
//

#include <iostream>
#include <algorithm>
#include "DestListEntryArray.h"
#include "DestListHeader.h"

using namespace std;

DestListEntryArray::DestListEntryArray(ReadStream *readStream, int readFrom, DestListHeader header) {
    fillLinkTargetIDList(readStream, readFrom, header);
}

void DestListEntryArray::fillLinkTargetIDList(ReadStream *rs, int readFrom, DestListHeader header) {
    int count = header.getTotalNumberOfCurrentEntries();
    int tmpReadFrom = readFrom;

    while(count > 0) {
        DestListEntry tmpDestListEntry;

        std::vector<unsigned char> checksum =  rs->read(tmpReadFrom,8);
        std::copy(checksum.begin(), checksum.end(), std::back_inserter(tmpDestListEntry.Checksum));
        tmpReadFrom = 8 + tmpReadFrom;
        std::vector<unsigned char> volumeId =  rs->read(tmpReadFrom,16);
        std::copy(volumeId.begin(), volumeId.end(), std::back_inserter(tmpDestListEntry.VolumeId));
        tmpReadFrom = 16 + tmpReadFrom;
        std::vector<unsigned char> objectId =  rs->read(tmpReadFrom,16);
        std::copy(objectId.begin(), objectId.end(), std::back_inserter(tmpDestListEntry.ObjectId));
        tmpReadFrom = 16 + tmpReadFrom;
        std::vector<unsigned char> birthVolumeId =  rs->read(tmpReadFrom,16);
        std::copy(birthVolumeId.begin(), birthVolumeId.end(), std::back_inserter(tmpDestListEntry.BirthVolumeId));
        tmpReadFrom = 16 + tmpReadFrom;
        std::vector<unsigned char> birthObjectId =  rs->read(tmpReadFrom,16);
        std::copy(birthObjectId.begin(), birthObjectId.end(), std::back_inserter(tmpDestListEntry.BirthObjectId));
        tmpReadFrom = 16 + tmpReadFrom;
        std::vector<unsigned char> netBIOSName =  rs->read(tmpReadFrom,16);
        std::copy(netBIOSName.begin(), netBIOSName.end(), std::back_inserter(tmpDestListEntry.NetBIOSName));
        tmpReadFrom = 16 + tmpReadFrom;
        std::vector<unsigned char> entryId =  rs->read(tmpReadFrom,4);
        std::copy(entryId.begin(), entryId.end(), std::back_inserter(tmpDestListEntry.EntryId));
        tmpReadFrom = 4 + tmpReadFrom;
        std::vector<unsigned char> reserved1 =  rs->read(tmpReadFrom,8);
        std::copy(reserved1.begin(), reserved1.end(), std::back_inserter(tmpDestListEntry.Reserved1));
        tmpReadFrom = 8 + tmpReadFrom;
        std::vector<unsigned char> msFileTime =  rs->read(tmpReadFrom,8);
        std::copy(msFileTime.begin(), msFileTime.end(), std::back_inserter(tmpDestListEntry.MSFileTime));
        tmpReadFrom = 8 + tmpReadFrom;
        std::vector<unsigned char> entryPinStatus =  rs->read(tmpReadFrom,4);
        std::copy(entryPinStatus.begin(), entryPinStatus.end(), std::back_inserter(tmpDestListEntry.EntryPinStatus));
        tmpReadFrom = 4 + tmpReadFrom;
        std::vector<unsigned char> reserved2 =  rs->read(tmpReadFrom,4);
        std::copy(reserved2.begin(), reserved2.end(), std::back_inserter(tmpDestListEntry.Reserved2));
        tmpReadFrom = 4 + tmpReadFrom;
        std::vector<unsigned char> accessedCount =  rs->read(tmpReadFrom,4);
        std::copy(accessedCount.begin(), accessedCount.end(), std::back_inserter(tmpDestListEntry.AccessedCount));
        tmpReadFrom = 4 + tmpReadFrom;
        std::vector<unsigned char> reserved3 =  rs->read(tmpReadFrom,8);
        std::copy(reserved3.begin(), reserved3.end(), std::back_inserter(tmpDestListEntry.Reserved3));
        tmpReadFrom = 8 + tmpReadFrom;
        std::vector<unsigned char> lengthOfUnicodeData =  rs->read(tmpReadFrom,2);
        std::copy(lengthOfUnicodeData.begin(), lengthOfUnicodeData.end(), std::back_inserter(tmpDestListEntry.LengthOfUnicodeData));
        tmpReadFrom = 2 + tmpReadFrom;
        reverse(tmpDestListEntry.LengthOfUnicodeData.begin(), tmpDestListEntry.LengthOfUnicodeData.end());
        int len = Utils::lenTwoBytes(tmpDestListEntry.LengthOfUnicodeData);
        std::vector<unsigned char> entryStringData =  rs->read(tmpReadFrom,len);
        std::copy(entryStringData.begin(), entryStringData.end(), std::back_inserter(tmpDestListEntry.EntryStringData));

        destListEntryArray.push_back(tmpDestListEntry);
        --count;
    }
    reverseAllFields();
}

void DestListEntryArray::reverseAllFields() {
    for(DestListEntry entry: destListEntryArray) {
        reverse(entry.Checksum.begin(), entry.Checksum.end());
        reverse(entry.VolumeId.begin(), entry.VolumeId.end());
        reverse(entry.ObjectId.begin(), entry.ObjectId.end());
        reverse(entry.BirthVolumeId.begin(), entry.BirthVolumeId.end());
        reverse(entry.BirthObjectId.begin(), entry.BirthObjectId.end());
        //reverse(entry.NetBIOSName.begin(), entry.NetBIOSName.end());
        reverse(entry.EntryId.begin(), entry.EntryId.end());
        reverse(entry.Reserved1.begin(), entry.Reserved1.end());
        reverse(entry.MSFileTime.begin(), entry.MSFileTime.end());
        reverse(entry.EntryPinStatus.begin(), entry.EntryPinStatus.end());
        reverse(entry.Reserved2.begin(), entry.Reserved2.end());
        reverse(entry.AccessedCount.begin(), entry.AccessedCount.end());
        reverse(entry.Reserved3.begin(), entry.Reserved3.end());
        //reverse(entry.LengthOfUnicodeData.begin(), entry.LengthOfUnicodeData.end());
        //reverse(entry.EntryStringData.begin(), entry.EntryStringData.end());
    }
}

void DestListEntryArray::printDestListEntryArrayInHexStyle() {
    cout << "_____________DestListHeader in HEX style_________________" << endl;
    for(int i = 0; i < destListEntryArray.size(); ++i) {
        cout << "DestListEntry " << i + 1<< endl;
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
    }
    cout << "_________________________________________________________" << endl;
}
void DestListEntryArray::printDestListEntryArray() {
    cout << "____________________DestListHeader_______________________" << endl;
    for(int i = 0; i < destListEntryArray.size(); ++i) {
        cout << "DestListEntry " << i + 1 << endl;
        cout << "  Checksum:                         "; Utils::print_vec(destListEntryArray[i].Checksum);
        cout << "  VolumeId:                         "; Utils::printSid(destListEntryArray[i].VolumeId, 0); cout << endl;
        cout << "  ObjectId:                         "; Utils::printSid(destListEntryArray[i].ObjectId, 0); cout << endl;
        cout << "  BirthVolumeId:                    "; Utils::printSid(destListEntryArray[i].BirthVolumeId, 0); cout << endl;
        cout << "  BirthObjectId:                    "; Utils::printSid(destListEntryArray[i].BirthObjectId, 0); cout << endl;
        cout << "  NetBIOSName:                      "; Utils::print_vec_unicode(destListEntryArray[i].NetBIOSName);
        cout << "  EntryId:                          " << dec << Utils::lenFourBytes(destListEntryArray[i].EntryId) << endl;
        cout << "  Reserved1:                        "; Utils::print_vec(destListEntryArray[i].Reserved1);
        cout << "  MSFileTime:                       "; Utils::print_vec(destListEntryArray[i].MSFileTime);
        cout << "  EntryPinStatus:                   "; Utils::print_vec(destListEntryArray[i].EntryPinStatus);
        cout << "  Reserved2:                        "; Utils::print_vec(destListEntryArray[i].Reserved2);
        cout << "  AccessedCount:                    " << dec << Utils::lenFourBytes(destListEntryArray[i].AccessedCount) << endl;
        cout << "  Reserved3:                        "; Utils::print_vec(destListEntryArray[i].Reserved3);
        cout << "  LengthOfUnicodeData:              "<< dec << Utils::lenTwoBytes(destListEntryArray[i].LengthOfUnicodeData) << endl;
        cout << "  EntryStringData:                  "; Utils::print_vec_unicode(destListEntryArray[i].EntryStringData);
    }
    cout << "_________________________________________________________" << endl;

}
