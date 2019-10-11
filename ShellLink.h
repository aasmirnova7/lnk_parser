//
// Created by user on 29.08.2019.
//

#ifndef LNK_JUMP_LIST_PARSER_SHELLLINK_H
#define LNK_JUMP_LIST_PARSER_SHELLLINK_H

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
    bool thisShellLinkHasErrors = false;
public:
    ShellLink(ReadStream* rs, int startPosition);

    int getShellLinkOffsetEnd();
    bool isThisShellLinkHasErrors();
    void resetAllFlags();
};


#endif //LNK_JUMP_LIST_PARSER_SHELLLINK_H
