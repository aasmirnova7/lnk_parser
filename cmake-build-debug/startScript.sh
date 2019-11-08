#!/bin/bash

cd ..
cmake CMakeLists.txt
make -f Makefile
chmod +x lnk_jump_list_parser
./lnk_jump_list_parser

