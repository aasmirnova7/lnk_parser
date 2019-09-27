cmake_minimum_required(VERSION 3.14)
project(my_diplom)

set(CMAKE_CXX_STANDARD 14)

add_executable(my_diplom main.cpp ReadStream.cpp ShellLinkHeader.cpp ShellLinkHeader.h
        ShellLink.cpp ShellLink.h ReadStream.h LinkTargetIDList.cpp LinkTargetIDList.h Utils.cpp Utils.h LinkInfo.cpp LinkInfo.h StringData.cpp
        StringData.h ExtraData.cpp ExtraData.h)