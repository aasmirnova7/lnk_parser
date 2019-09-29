//
// Created by user on 29.08.2019.
//

#ifndef MY_DIPLOM_SHELLLINK_H
#define MY_DIPLOM_SHELLLINK_H

#include "ReadStream.h"
#include "ShellLinkHeader.h"
#include "LinkTargetIDList.h"
#include "Utils.h"
#include "LinkInfo.h"
#include "StringData.h"
#include "ExtraData.h"

class ShellLink {
private:
    int ShellLinkOffsetEnd;
public:
    ShellLink(ReadStream* rs, int startPosition);

    int getShellLinkOffsetEnd();
};


#endif //MY_DIPLOM_SHELLLINK_H
