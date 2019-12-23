#include <iostream>
#include <algorithm>
#include "DestListHeader.h"

using namespace std;

void DestListHeader::fillDestListHeader(std::vector<unsigned char> destListHeader) {
    // std::cout << "__fillDestListHeader start__" << std::endl;
    auto it = destListHeader.begin();

    std::copy(it, it + 4, std::back_inserter(Version));                         // 4 byte
    it = it + 4;
    std::copy(it, it + 4, std::back_inserter(TotalNumberOfCurrentEntries));     // 4 byte
    it = it + 4;
    std::copy(it, it + 4, std::back_inserter(TotalNumberOfPinnedEntries));      // 4 byte
    it = it + 4;
    std::copy(it, it + 4, std::back_inserter(Unknown));                         // 4 byte
    it = it + 4;
    std::copy(it, it + 8, std::back_inserter(LastIssuedEntryId));               // 8 byte
    it = it + 8;
    std::copy(it, it + 8, std::back_inserter(NumberOfAddedDeletedReopened));    // 8 byte

    DestListHeader::reverseAllFields();
}

void DestListHeader::reverseAllFields() {
    // std::cout << "__reverseAllFields start__" << std::endl;
    reverse(Version.begin(), Version.end());
    reverse(TotalNumberOfCurrentEntries.begin(), TotalNumberOfCurrentEntries.end());
    reverse(TotalNumberOfPinnedEntries.begin(), TotalNumberOfPinnedEntries.end());
    reverse(Unknown.begin(), Unknown.end());
    reverse(LastIssuedEntryId.begin(), LastIssuedEntryId.end());
    reverse(NumberOfAddedDeletedReopened.begin(), NumberOfAddedDeletedReopened.end());
}

void DestListHeader::printDestListHeaderInHexStyle() {
    // std::cout << "__printDestListHeaderInHexStyle start__" << std::endl;
    cout << "_____________DestListHeader in HEX style________________" << endl;
    cout << "Version:                            "; Utils::print_vec(Version);
    cout << "TotalNumberOfCurrentEntries:        "; Utils::print_vec(TotalNumberOfCurrentEntries);
    cout << "TotalNumberOfPinnedEntries:         "; Utils::print_vec(TotalNumberOfPinnedEntries);
    cout << "Unknown:                            "; Utils::print_vec(Unknown);
    cout << "LastIssuedEntryId:                  "; Utils::print_vec(LastIssuedEntryId);
    cout << "NumberOfAddedDeletedReopened:       "; Utils::print_vec(NumberOfAddedDeletedReopened);
    cout << "_________________________________________________________" << endl;
}
void DestListHeader::printDestListHeader() {
    // std::cout << "__printDestListHeader start__" << std::endl;
    cout << "____________________DestListHeader______________________" << endl;
    cout << "Version:                            " << dec<< Utils::lenFourBytes(Version) << endl;
    cout << "TotalNumberOfCurrentEntries:        " << dec<< Utils::lenFourBytes(TotalNumberOfCurrentEntries) << endl;
    cout << "TotalNumberOfPinnedEntries:         " << dec<< Utils::lenFourBytes(TotalNumberOfPinnedEntries) << endl;
    cout << "Unknown:                            "; Utils::print_vec(Unknown);
    cout << "LastIssuedEntryId:                  " << dec <<
         Utils::vectEightBytesToUnsignedInt(LastIssuedEntryId, 0) << endl;
    cout << "NumberOfAddedDeletedReopened:       " << dec <<
         Utils::vectEightBytesToUnsignedInt(NumberOfAddedDeletedReopened, 0) << endl;
    cout << "_________________________________________________________" << endl;
}

unsigned int DestListHeader::getTotalNumberOfCurrentEntries() {
    // std::cout << "__getTotalNumberOfCurrentEntries start__" << std::endl;
    return Utils::lenFourBytes(TotalNumberOfCurrentEntries);
}