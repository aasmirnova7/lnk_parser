//
// Created by user on 24.08.2019.
//

#include "ShellLinkHeader_Test.h"


//
// Created by user on 23.08.2019.
//
#include <vector>
#include <iostream>
#include <algorithm>
#include <sstream>
#include <iterator>
#include "ShellLinkHeader.h"
#include "ReadStream.h"

using namespace std;

class ShellLinkHeader_Test {
private:
    // 76 байт
    unsigned int HeaderSize;           //MUST be 0x0000004C
    unsigned int LinkCLSID;           //MUST be 00021401-0000-0000-C000-000000000046 - ЧТО-ТО НЕ СХОДИТСЯ!!!!!!!!!!
    unsigned int LinkFlags;
    unsigned int FileAttributes;
    unsigned int CreationTime;
    unsigned int AccessTime;
    unsigned int WriteTime;
    unsigned int FileSize;
    unsigned int IconIndex;
    unsigned int ShowCommand;         // 3 значения
    unsigned int HotKey;
    unsigned int Reserved1;           //MUST be zero
    unsigned int Reserved2;           //MUST be zero
    unsigned int Reserved3;           //MUST be zero

    void fillShellLinkHeader(ReadStream *rs) {
        HeaderSize = rs->read_with_string(0,4);          // 4 byte
        LinkCLSID = rs->read_with_string(4,16);          // 16 byte
       /* LinkFlags = rs->read_with_string(20,4);          // 4 byte
        FileAttributes = rs->read_with_string(24,4);     // 4 byte
        CreationTime = rs->read_with_string(28,8);       // 8 byte
        AccessTime = rs->read_with_string(36,8);         // 8 byte
        WriteTime = rs->read_with_string(44,8);          // 8 byte
        FileSize = rs->read_with_string(52,4);           // 4 byte
        IconIndex = rs->read_with_string(56,4);          // 4 byte
        ShowCommand = rs->read_with_string(60,4);        // 4 byte
        HotKey = rs->read_with_string(64,2);             // 2 byte
        Reserved1 = rs->read_with_string(66,2);          // 2 byte
        Reserved2 = rs->read_with_string(68,2);          // 2 byte
        Reserved3 = rs->read_with_string(70,4);          // 4 byte */
    }

public:
    ShellLinkHeader_Test(ReadStream *rs){
        fillShellLinkHeader(rs);
        printHeaderInHexStyle();
    }


    void printHeaderInHexStyle() {
        cout << "_____________ShellLinkHeader in HEX style________________" << endl;
        cout << "HeaderSize:           " << hex << HeaderSize << endl;
        cout << "LinkCLSID:            "<< hex << LinkCLSID << endl;
        /*  cout << "LinkFlags:            "; LinkFlags;
          cout << "FileAttributes:       "; FileAttributes;
          cout << "CreationTime:         "; CreationTime;
          cout << "AccessTime:           "; AccessTime;
          cout << "WriteTime:            "; WriteTime;
          cout << "FileSize:             "; FileSize;
          cout << "IconIndex:            "; IconIndex;
          cout << "ShowCommand:          "; ShowCommand;
          cout << "HotKey:               "; HotKey;
          cout << "Reserved1:            "; Reserved1;
          cout << "Reserved2:            "; Reserved2;
          cout << "Reserved3:            "; Reserved3;
          cout << "_________________________________________________________" << endl; */
    }


    void parseLinkFlags() {
        /* if (LinkFlags & HasLinkTargetIDList ) cout << "HasLinkTargetIDList, ";
         cout << ( d_flags & HasLinkInfo ) ? L"HasLinkInfo, " : L"" ),
                 ( ( d_flags & HasName ) ? L"HasName, " : L"" ),
                 ( ( d_flags & HasRelativePath ) ? L"HasRelativePath, " : L"" ),
                 ( ( d_flags & HasWorkingDir ) ? L"HasWorkingDir, " : L"" ),
                 ( ( d_flags & HasArguments ) ? L"HasArguments, " : L"" ),
                 ( ( d_flags & HasIconLocation ) ? L"HasIconLocation, " : L"" ),
                 ( ( d_flags & IsUnicode ) ? L"IsUnicode, " : L"" ),
                 ( ( d_flags & ForceNoLinkInfo ) ? L"ForceNoLinkInfo, " : L"" ),
                 ( ( d_flags & HasExpString ) ? L"HasExpString, " : L"" ),
                 ( ( d_flags & RunInSeparateProcess ) ? L"RunInSeparateProcess, " : L"" ),
                 ( ( d_flags & Unused1 ) ? L"Unused1, " : L"" ),
                 ( ( d_flags & HasDarwinID ) ? L"HasDarwinID, " : L"" ),
                 ( ( d_flags & RunAsUser ) ? L"RunAsUser, " : L"" ),
                 ( ( d_flags & HasExpIcon ) ? L"HasExpIcon, " : L"" ),
                 ( ( d_flags & NoPidlAlias ) ? L"NoPidlAlias, " : L"" ),
                 ( ( d_flags & Unused2 ) ? L"Unused2, " : L"" ),
                 ( ( d_flags & RunWithShimLayer ) ? L"RunWithShimLayer, " : L"" ),
                 ( ( d_flags & ForceNoLinkTrack ) ? L"ForceNoLinkTrack, " : L"" ),
                 ( ( d_flags & EnableTargetMetadata ) ? L"EnableTargetMetadata, " : L"" ),
                 ( ( d_flags & DisableLinkPathTracking ) ? L"DisableLinkPathTracking, " : L"" ),
                 ( ( d_flags & DisableKnownFolderTracking ) ? L"DisableKnownFolderTracking, " : L"" ),
                 ( ( d_flags & DisableKnownFolderAlias ) ? L"DisableKnownFolderAlias, " : L"" ),
                 ( ( d_flags & AllowLinkToLink ) ? L"AllowLinkToLink, " : L"" ),
                 ( ( d_flags & UnaliasOnSave ) ? L"UnaliasOnSave, " : L"" ),
                 ( ( d_flags & PreferEnvironmentPath ) ? L"PreferEnvironmentPath, " : L"" ),
                 ( ( d_flags & KeepLocalIDListForUNCTarget ) ? L"KeepLocalIDListForUNCTarget" : L"" ) */

    }
};
