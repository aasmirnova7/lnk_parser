#include "DestList.h"
#include "../utils/ReadStream.h"

void DestList::parseDestListStructure(ReadStream* rs, int startPosition) {
    std::vector<unsigned char> header =  rs->read(startPosition,32);
    startPosition += 32;

    DestListHeader destListHeader =  DestListHeader(header);
    destListHeader.printDestListHeaderInHexStyle();
    destListHeader.printDestListHeader();

    DestListEntryArray destListEntryArray = DestListEntryArray(rs, startPosition, header);
    destListEntryArray.printDestListEntryArrayInHexStyle();
    destListEntryArray.printDestListEntryArray();
}