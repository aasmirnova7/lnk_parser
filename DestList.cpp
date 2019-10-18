//
// Created by ann19 on 28.09.2019.
//

#include "DestList.h"
#include "ReadStream.h"

DestList::DestList(ReadStream* rs, int startPosition) {
    std::vector<unsigned char> header =  rs->read(startPosition,32);
    startPosition += 32;

    DestListHeader destListHeader =  DestListHeader(header);
    destListHeader.printDestListHeaderInHexStyle();
    destListHeader.printDestListHeader();

    DestListEntryArray destListEntryArray = DestListEntryArray(rs, startPosition, header);
    destListEntryArray.printDestListEntryArrayInHexStyle();
    destListEntryArray.printDestListEntryArray();
}