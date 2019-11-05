cmake_minimum_required(VERSION 3.10)
project(lnk_jump_list_parser)

set(CMAKE_CXX_STANDARD 14)

add_executable(lnk_jump_list_parser source/main.cpp source/utils/ReadStream.cpp source/lnkStructure/ShellLinkHeader.cpp source/lnkStructure/ShellLinkHeader.h
        source/lnkStructure/ShellLink.cpp source/lnkStructure/ShellLink.h source/utils/ReadStream.h source/lnkStructure/LinkTargetIDList.cpp source/lnkStructure/LinkTargetIDList.h source/utils/Utils.cpp source/utils/Utils.h source/lnkStructure/LinkInfo.cpp source/lnkStructure/LinkInfo.h source/lnkStructure/StringData.cpp
        source/lnkStructure/StringData.h source/lnkStructure/ExtraData.cpp source/lnkStructure/ExtraData.h source/lnkStructure/ExtraDataConstants.h source/jumpListStructure/DestList.cpp source/jumpListStructure/DestList.h source/jumpListStructure/DestListHeader.cpp source/jumpListStructure/DestListHeader.h source/jumpListStructure/DestListEntryArray.cpp source/jumpListStructure/DestListEntryArray.h source/utils/ShellLinkAndJumpListHandler.cpp source/utils/ShellLinkAndJumpListHandler.h source/utils/UtilsConstant.h source/utils/ParserUtils.cpp source/utils/ParserUtils.h source/lnkStructure/ShellLinkHeaderConstants.h source/lnkStructure/LinkInfoConstants.h)