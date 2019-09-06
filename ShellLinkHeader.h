//
// Created by user on 23.08.2019.
//

#ifndef MY_DIPLOM_SHELLLINKHEADER_H
#define MY_DIPLOM_SHELLLINKHEADER_H

#include <vector>
#include <iostream>
#include <algorithm>
#include <sstream>
#include <iterator>
#include "ShellLinkHeader.h"

// (ShellLinkHeader) LinkFlags (27 flags)
#define HasLinkTargetIDList			0x00000001	// The shell link is saved with an item ID list (IDList).
#define HasLinkInfo					0x00000002	// The shell link is saved with link information.
#define HasName						0x00000004	// The shell link is saved with a name string.
#define HasRelativePath				0x00000008	// The shell link is saved with a relative path string.
#define HasWorkingDir				0x00000010	// The shell link is saved with a working directory string.
#define HasArguments				0x00000020	// The shell link is saved with command line arguments.
#define HasIconLocation				0x00000040	// The shell link is saved with an icon location string.
#define IsUnicode					0x00000080	// The shell link contains Unicode encoded strings. This bit SHOULD be set.
#define ForceNoLinkInfo				0x00000100	// The LinkInfo structure is ignored.
#define HasExpString				0x00000200	// The shell link is saved with an EnvironmentVariableDataBlock.
#define RunInSeparateProcess		0x00000400	// The target is run in a separate virtual machine when launching a link target that is a 16-bit application.
#define Unused1						0x00000800
#define HasDarwinID					0x00001000	// The shell link is saved with a DarwinDataBlock.
#define RunAsUser					0x00002000	// The application is run as a different user when the target of the shell link is activated.
#define HasExpIcon					0x00004000	// The shell link is saved with an IconEnvironmentDataBlock.
#define NoPidlAlias					0x00008000	// The file system location is represented in the shell namespace when the path to an item is parsed into an IDList.
#define Unused2						0x00010000
#define RunWithShimLayer			0x00020000	// The shell link is saved with a ShimDataBlock.
#define ForceNoLinkTrack			0x00040000	// The TrackerDataBlock is ignored.
#define EnableTargetMetadata		0x00080000	// The shell link attempts to collect target properties and store them in the PropertyStoreDataBlock when the link target is set.
#define DisableLinkPathTracking		0x00100000	// The EnvironmentVariableDataBlock is ignored.
#define DisableKnownFolderTracking	0x00200000	// The SpecialFolderDataBlock and the KnownFolderDataBlock are ignored when loading the shell link.
#define DisableKnownFolderAlias		0x00400000	// If the link has a KnownFolderDataBlock (section 2.5.6), the unaliased form of the known folder IDList SHOULD be used when translating the target IDList at the time that the link is loaded.
#define AllowLinkToLink				0x00800000	// Creating a link that references another link is enabled. Otherwise, specifying a link as the target IDList SHOULD NOT be allowed.
#define UnaliasOnSave				0x01000000	// When saving a link for which the target IDList is under a known folder, either the unaliased form of that known folder or the target IDList SHOULD be used.
#define PreferEnvironmentPath		0x02000000	// The target IDList SHOULD NOT be stored; instead, the path specified in the EnvironmentVariableDataBlock SHOULD be used to refer to the target.
#define KeepLocalIDListForUNCTarget	0x04000000	// When the target is a UNC name that refers to a location on a local machine, the local path IDList in the PropertyStoreDataBlock SHOULD be stored, so it can be used when the link is loaded on the local machine.

// FileAttributesFlags
#define FILE_ATTRIBUTE_READONLY             0x00000001      // The file or directory is read-only. For a file, if this bit is set, applications can read the file but cannot write to it or delete it. For a directory, if this bit is set, applications cannot delete the directory.
#define FILE_ATTRIBUTE_HIDDEN               0x00000002      // The file or directory is hidden. If this bit is set, the file or folder is not included in an ordinary directory listing.
#define FILE_ATTRIBUTE_SYSTEM               0x00000004      // The file or directory is part of the operating system or is used exclusively by the operating system.
#define RESERVED1                           0x00000008      // ??? A bit that MUST be zero.
#define FILE_ATTRIBUTE_DIRECTORY            0x00000010      // The link target is a directory instead of a file.
#define FILE_ATTRIBUTE_ARCHIVE              0x00000020      // The file or directory is an archive file. Applications use this flag to mark files for backup or removal.
#define RESERVED2                           0x00000040      // ??? A bit that MUST be zero.
//#define FILE_ATTRIBUTE_DEVICE               0x00000040      // в winapi
#define FILE_ATTRIBUTE_NORMAL               0x00000080      // The file or directory has no other flags set. If this bit is 1, all other bits in this structure MUST be clear.
#define FILE_ATTRIBUTE_TEMPORARY            0x00000100      // The file is being used for temporary storage.
#define FILE_ATTRIBUTE_SPARSE_FILE          0x00000200      // The file is a sparse file.
#define FILE_ATTRIBUTE_REPARSE_POINT        0x00000400      // The file or directory has an associated reparse point.
#define FILE_ATTRIBUTE_COMPRESSED           0x00000800      // The file or directory is compressed. For a file, this means that all data in the file is compressed. For a directory, this means that compression is the default for newly created files and subdirectories.
#define FILE_ATTRIBUTE_OFFLINE              0x00001000      // The data of the file is not immediately available.
#define FILE_ATTRIBUTE_NOT_CONTENT_INDEXED  0x00002000      // The contents of the file need to be indexed.
#define FILE_ATTRIBUTE_ENCRYPTED            0x00004000      // The file or directory is encrypted. For a file, this means that all data in the file is encrypted. For a directory, this means that encryption is the default for newly created files and subdirectories.

/* HotKeyFlags */
//LowByte
#define VK_NUMPAD00 0x00        // No key assigned.
#define VK_NUMPAD0  0x30        // "0" key
#define VK_NUMPAD1  0x31        // "1" key
#define VK_NUMPAD2  0x32        // "2" key
#define VK_NUMPAD3  0x33        // "3" key
#define VK_NUMPAD4  0x34        // "4" key
#define VK_NUMPAD5  0x35        // "5" key
#define VK_NUMPAD6  0x36        // "6" key
#define VK_NUMPAD7  0x37        // "7" key
#define VK_NUMPAD8  0x38        // "8" key
#define VK_NUMPAD9  0x39        // "9" key
#define VK_NUMPAD_A 0x41        // "A" key
#define VK_NUMPAD_B 0x42        // "B" key
#define VK_NUMPAD_C 0x43        // "C" key
#define VK_NUMPAD_D 0x44        // "D" key
#define VK_NUMPAD_E 0x45        // "E" key
#define VK_NUMPAD_F 0x46        // "F" key
#define VK_NUMPAD_G 0x47        // "J" key
#define VK_NUMPAD_H 0x48        // "H" key
#define VK_NUMPAD_I 0x49        // "I" key
#define VK_NUMPAD_J 0x4A        // "J" key
#define VK_NUMPAD_K 0x4B        // "K" key
#define VK_NUMPAD_L 0x4C        // "L" key
#define VK_NUMPAD_M 0x4D        // "M" key
#define VK_NUMPAD_N 0x4E        // "N" key
#define VK_NUMPAD_O 0x4F        // "O" key
#define VK_NUMPAD_P 0x50        // "P" key
#define VK_NUMPAD_Q 0x51        // "Q" key
#define VK_NUMPAD_R 0x52        // "R" key
#define VK_NUMPAD_S 0x53        // "S" key
#define VK_NUMPAD_T 0x54        // "T" key
#define VK_NUMPAD_U 0x55        // "U" key
#define VK_NUMPAD_V 0x56        // "V" key
#define VK_NUMPAD_W 0x57        // "W" key
#define VK_NUMPAD_X 0x58        // "X" key
#define VK_NUMPAD_Y 0x59        // "Y" key
#define VK_NUMPAD_Z 0x5A        // "Z" key
#define VK_F1       0x70        // "F1" key
#define VK_F2       0x71        // "F2" key
#define VK_F3       0x72        // "F3" key
#define VK_F4       0x73        // "F4" key
#define VK_F5       0x74        // "F5" key
#define VK_F6       0x75        // "F6" key
#define VK_F7       0x76        // "F7" key
#define VK_F8       0x77        // "F8" key
#define VK_F9       0x78        // "F9" key
#define VK_F10      0x79        // "F10" key
#define VK_F11      0x7A        // "F11" key
#define VK_F12      0x7B        // "F12" key
#define VK_F13      0x7C        // "F13" key
#define VK_F14      0x7D        // "F14" key
#define VK_F15      0x7E        // "F15" key
#define VK_F16      0x7F        // "F16" key
#define VK_F17      0x80        // "F17" key
#define VK_F18      0x81        // "F18" key
#define VK_F19      0x82        // "F19" key
#define VK_F20      0x83        // "F20" key
#define VK_F21      0x84        // "F21" key
#define VK_F22      0x85        // "F22" key
#define VK_F23      0x86        // "F23" key
#define VK_F24      0x87        // "F24" key
#define VK_NUMLOCK  0x90        // "NUM LOCK" key
#define VK_SCROLL 0x91          // "SCROLL LOCK" key
// Hot key modifier flags. (HighByte)
#define HOTKEYF_SHIFT	0x01    // The "SHIFT" key on the keyboard.
#define HOTKEYF_CONTROL	0x02    // The "CTRL" key on the keyboard.
#define HOTKEYF_ALT		0x04    // The "ALT" key on the keyboard.


// Special Folder types
#define SF_Desktop					0x0000	// Desktop
#define SF_Internet					0x0001	// Internet Explorer (icon on desktop)
#define SF_Programs					0x0002	// Start Menu\Programs
#define SF_Controls					0x0003	// My Computer\Control Panel
#define SF_Printers					0x0004	// My Computer\Printers
#define SF_Personal					0x0005	// My Documents
#define SF_Favorites				0x0006	// user name\Favorites
#define SF_Startup					0x0007	// Start Menu\Programs\Startup
#define SF_Recent					0x0008	// user name\Recent
#define SF_SendTo					0x0009	// user name\SendTo
#define SF_BitBucket				0x000a	// desktop\Recycle Bin
#define SF_StartMenu				0x000b	// user name\Start Menu
#define SF_MyDocuments				0x000c	// logical "My Documents" desktop icon
#define SF_MyMusic					0x000d	// "My Music" folder
#define SF_MyVideo					0x000e	// "My Videos" folder
#define SF_DesktopDirectory			0x0010	// user name\Desktop
#define SF_Drives					0x0011	// My Computer
#define SF_Network					0x0012	// Network Neighborhood (My Network Places)
#define SF_Nethood					0x0013	// user name\nethood
#define SF_Fonts					0x0014	// windows\fonts
#define SF_Templates				0x0015
#define SF_CommonStartMenu			0x0016	// All Users\Start Menu
#define SF_CommonPrograms			0x0017	// All Users\Start Menu\Programs
#define SF_CommonStartup			0x0018	// All Users\Startup
#define SF_CommonDesktopDirectory	0x0019	// All Users\Desktop
#define SF_AppData					0x001a	// user name\Application Data
#define SF_PrintHood				0x001b	// user name\PrintHood
#define SF_LocalAppData				0x001c	// user name\Local Settings\Applicaiton Data (non roaming)
#define SF_AltStartup				0x001d	// non localized startup
#define SF_CommonAltStartup			0x001e	// non localized common startup
#define SF_CommonFavorites			0x001f
#define SF_InternetCache			0x0020
#define SF_Cookies					0x0021
#define SF_History					0x0022
#define SF_CommonAppData			0x0023	// All Users\Application Data
#define SF_Windows					0x0024	// GetWindowsDirectory()
#define SF_System					0x0025	// GetSystemDirectory()
#define SF_ProgramFiles				0x0026	// C:\Program Files
#define SF_MyPictures				0x0027	// C:\Program Files\My Pictures
#define SF_Profile					0x0028	// USERPROFILE
#define SF_SystemX86				0x0029	// x86 system directory on RISC
#define SF_ProgramFilesX86			0x002a	// x86 C:\Program Files on RISC
#define SF_ProgramFilesCommon		0x002b	// C:\Program Files\Common
#define SF_ProgramFilesCommonX86	0x002c	// x86 Program Files\Common on RISC
#define SF_CommonTemplates			0x002d	// All Users\Templates
#define SF_CommonDocuments			0x002e	// All Users\Documents
#define SF_CommonAdminTools			0x002f	// All Users\Start Menu\Programs\Administrative Tools
#define SF_AdminTools				0x0030	// user name\Start Menu\Programs\Administrative Tools
#define SF_Connections				0x0031	// Network and Dial-up Connections
#define SF_CommonMusic				0x0035	// All Users\My Music
#define SF_CommonPictures			0x0036	// All Users\My Pictures
#define SF_CommonVideo				0x0037	// All Users\My Video
#define SF_Resources				0x0038	// Resource Direcotry
#define SF_ResourcesLocalized		0x0039	// Localized Resource Direcotry
#define SF_CommonOEMLinks			0x003a	// Links to All Users OEM specific apps
#define SF_CDBurnArea				0x003b	// USERPROFILE\Local Settings\Application Data\Microsoft\CD Burning
#define SF_ComputersNearMe			0x003d	// Computers Near Me (computered from Workgroup membership)
#define SF_FlagCreate				0x8000	// combine with CSIDL_ value to force folder creation in SHGetFolderPath()
#define SF_FlagDontVerify			0x4000	// combine with CSIDL_ value to return an unverified folder path
#define SF_FlagNoAlias				0x1000	// combine with CSIDL_ value to insure non-alias versions of the pidl
#define SF_FlagPerUserInit			0x0800	// combine with CSIDL_ value to indicate per-user init (eg. upgrade)
#define SF_FlagMask					0xFF00	// mask for all possible flag values


class ShellLinkHeader {
private:
    // 76 байт
    std::vector<unsigned int> HeaderSize;           //MUST be 0x0000004C
    std::vector<unsigned int> LinkCLSID;            //MUST be 00021401-0000-0000-C000-000000000046 - ЧТО-ТО НЕ СХОДИТСЯ!!!!!!!!!!
    std::vector<unsigned int> LinkFlags;
    std::vector<unsigned int> FileAttributes;
    std::vector<unsigned int> CreationTime;
    std::vector<unsigned int> AccessTime;
    std::vector<unsigned int> WriteTime;
    std::vector<unsigned int> FileSize;
    std::vector<unsigned int> IconIndex;
    std::vector<unsigned int> ShowCommand;         // 3 значения
    std::vector<unsigned int> HotKey;
    std::vector<unsigned int> Reserved1;           //MUST be zero
    std::vector<unsigned int> Reserved2;           //MUST be zero
    std::vector<unsigned int> Reserved3;           //MUST be zero

    bool HLTIDListIsSet = false;
    bool HLIIsSet = false;


    void fillShellLinkHeader(std::vector<unsigned char> header);
    /* Reverse All field (read left -> rigth) */
    void reverseAllFields();
    void getDate(std::vector<unsigned int> vec);

public:
    ShellLinkHeader(std::vector<unsigned char> header);

    void printHeaderInHexStyle();
    bool isHeaderValid();
    void parseLinkFlags();
    void parseFileAttributesFlags();
    void parseHotKeyFlags();
    void printHeader();
    void parseShowCommand();

    // Check that structures are present
    bool HasLinkTargetIDListIsSet();
    bool HasLinkInfoIsSet();
    bool HasStringDataIsSet();
    static bool HasNameIsSet();
    static bool HasRelativePathIsSet();
    static bool HasWorkingDirIsSet();
    static bool HasArgumentsIsSet();
    static bool HasIconLocationIsSet();

    /* For ExtraData structure */
    static bool HasDarwinIDIsSet();
    static bool HasExpStringIsSet();
    static bool HasExpIconIsSet();
    static bool EnableTargetMetadataIsSet();
    static bool RunWithShimLayerIsSet();
    static bool ForceNoLinkTrackIsSet();
};


#endif //MY_DIPLOM_SHELLLINKHEADER_H
