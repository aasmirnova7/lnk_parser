//
// Created by user on 23.08.2019.
//
#include <vector>
#include <iostream>
#include <algorithm>
#include <bitset>
#include "ShellLinkHeader.h"
#include "Utils.h"

using  namespace std;

static bool HLTIDListIsSet = false;
static bool HLIIsSet = false;

static bool HasNameSet = false;
static bool HasRelativePathSet = false;
static bool HasWorkingDirSet = false;
static bool HasArgumentsSet = false;
static bool HasIconLocationSet = false;

static bool HasDarwinIDSet = false;             // DARWIN_PROPS
static bool HasExpStringSet = false;            // ENVIRONMENT_PROPS
static bool HasExpIconSet = false;              // ICON_ENVIRONMENT_PROPS
static bool EnableTargetMetadataSet = false;    // PROPERTY_STORE_PROPS
static bool RunWithShimLayerSet = false;        // SHIM_PROPS
static bool ForceNoLinkTrackSet = false;        // TRACKER_PROPS - The TrackerDataBlock (section 2.5.10) is ignored.

ShellLinkHeader::ShellLinkHeader(std::vector<unsigned char> header){
        fillShellLinkHeader(header);
    }
    void ShellLinkHeader::fillShellLinkHeader(std::vector<unsigned char> header) {
        /* Fill all field */
        auto it = header.begin();

        std::copy(it, it + 4, std::back_inserter(HeaderSize));              // 4 byte
        it = it + 4;
        std::copy(it, it + 16, std::back_inserter(LinkCLSID));              // 16 byte
        it = it + 16;
        std::copy(it, it + 4, std::back_inserter(LinkFlags));               // 4 byte
        it = it + 4;
        std::copy(it, it + 4, std::back_inserter(FileAttributes));          // 4 byte
        it = it + 4;
        std::copy(it, it + 8, std::back_inserter(CreationTime));            // 8 byte
        it = it + 8;
        std::copy(it, it + 8, std::back_inserter(AccessTime));              // 8 byte
        it = it + 8;
        std::copy(it, it + 8, std::back_inserter(WriteTime));               // 8 byte
        it = it + 8;
        std::copy(it, it + 4, std::back_inserter(FileSize));                // 4 byte
        it = it + 4;
        std::copy(it, it + 4, std::back_inserter(IconIndex));               // 4 byte
        it = it + 4;
        std::copy(it, it + 4, std::back_inserter(ShowCommand));             // 4 byte
        it = it + 4;
        std::copy(it, it + 2, std::back_inserter(HotKey));                  // 2 byte
        it = it + 2;
        std::copy(it, it + 2, std::back_inserter(Reserved1));               // 2 byte
        it = it + 2;
        std::copy(it, it + 4, std::back_inserter(Reserved2));               // 4 byte
        it = it + 4;
        std::copy(it, it + 4, std::back_inserter(Reserved3));               // 4 byte

        /* Reverse All field (read left -> rigth) */
        reverseAllFields();
    }
    /* Reverse All field (read left -> rigth) */
    void ShellLinkHeader::reverseAllFields(){
        reverse(HeaderSize.begin(), HeaderSize.end());
        reverse(LinkFlags.begin(), LinkFlags.end());
        reverse(FileAttributes.begin(), FileAttributes.end());
        reverse(CreationTime.begin(), CreationTime.end());
        reverse(AccessTime.begin(), AccessTime.end());
        reverse(WriteTime.begin(), WriteTime.end());
        reverse(FileSize.begin(), FileSize.end());
        reverse(IconIndex.begin(), IconIndex.end());
        reverse(ShowCommand.begin(), ShowCommand.end());
        reverse(HotKey.begin(), HotKey.end());
        reverse(Reserved1.begin(), Reserved1.end());
        reverse(Reserved2.begin(), Reserved2.end());
        reverse(Reserved3.begin(), Reserved3.end());
    }

    void ShellLinkHeader::printHeaderInHexStyle() {
        cout << "_____________ShellLinkHeader in HEX style________________" << endl;
        cout << "HeaderSize:                         "; Utils::print_vec(HeaderSize);
        cout << "LinkCLSID:                          "; Utils::printSid(LinkCLSID, 0); cout << endl;
        cout << "LinkFlags:                          "; Utils::print_vec(LinkFlags);
        cout << "FileAttributes:                     "; Utils::print_vec(FileAttributes);
        cout << "CreationTime:                       "; Utils::print_vec(CreationTime);
        cout << "AccessTime:                         "; Utils::print_vec(AccessTime);
        cout << "WriteTime:                          "; Utils::print_vec(WriteTime);
        cout << "FileSize:                           "; Utils::print_vec(FileSize);
        cout << "IconIndex:                          "; Utils::print_vec(IconIndex);
        cout << "ShowCommand:                        "; Utils::print_vec(ShowCommand);
        cout << "HotKey:                             "; Utils::print_vec(HotKey);
        cout << "Reserved1:                          "; Utils::print_vec(Reserved1);
        cout << "Reserved2:                          "; Utils::print_vec(Reserved2);
        cout << "Reserved3:                          "; Utils::print_vec(Reserved3);
        cout << "_________________________________________________________" << endl;
    }

    bool ShellLinkHeader::isHeaderValid() {
        /* Check HeaderSize */
        if(HeaderSize[0] != 0 && HeaderSize[1] != 0 && HeaderSize[2] != 0 && HeaderSize[3] != 76) {
            cout << "Invalid HeaderSize value. It MUST  be 0x0000004C" << endl;
            return false;
        }
        /* Check LinkCLSID */
        if(!(LinkCLSID[3] == 0x00 && LinkCLSID[2] == 0x02 && LinkCLSID[1] == 0x14 && LinkCLSID[0] == 0x01 &&
             LinkCLSID[5] == 0x00 && LinkCLSID[4] == 0x00 &&  LinkCLSID[7] == 0x00 && LinkCLSID[6] == 0x00 &&
             LinkCLSID[8] == 0xC0 && LinkCLSID[9] == 0x00 && LinkCLSID[10] == 0x00 && LinkCLSID[11] == 0x00 &&
             LinkCLSID[12] == 0x00 && LinkCLSID[13] == 0x00 && LinkCLSID[14] == 0x00 && LinkCLSID[15] == 0x46)) {
            cout << "Invalid LinkCLSID value. It MUST be 00021401-0000-0000-C000-000000000046" << endl;
            return false;
        }
        /* Check ShowCommand */
        switch (ShowCommand[3]) {
            case 1: break;
            case 3: break;
            case 7: break;
            default:
                cout << "Invalid ShowCommand value. It MUST  be 0x0000001 or 0x0000003 or 0x0000007" << endl;
                return false;
        }

        /* Check Reserved1 */
        if(Reserved1[0] != 0 && Reserved1[1] != 0) {
            cout << "Invalid Reserved1 value. It MUST  be 0x0000" << endl;
            return false;
        }
        /* Check Reserved2 */
        if(Reserved2[0] != 0 && Reserved2[1] != 0) {
            cout << "Invalid Reserved2 value. It MUST  be 0x0000" << endl;
            return false;
        }
        /* Check Reserved3 */
        if(Reserved3[0] != 0 && Reserved3[1] != 0 && Reserved3[2] != 0 && Reserved3[3] != 0) {
            cout << "Invalid Reserved3 value. It MUST  be 0x00000000" << endl;
            return false;
        }
        return true;
    }

    void ShellLinkHeader::parseLinkFlags(unsigned int flags) {
        if (flags == 0x00000000)
            cout << Utils::defaultOffset << "NONE" << endl;
        if (flags & HasLinkTargetIDList) {
            cout << Utils::defaultOffset << "HasLinkTargetIDList:" << endl <<
                 Utils::defaultOffsetDocInfo << "The shell link is saved with an item ID list (IDList). " << endl <<
                 Utils::defaultOffsetDocInfo << "If this bit is set, a LinkTargetIDList structure MUST follow the ShellLinkHeader. " << endl <<
                 Utils::defaultOffsetDocInfo << "If this bit is not set, this structure MUST NOT be present." << endl;
            HLTIDListIsSet = true;
        }
        if (flags & HasLinkInfo) {
            cout << Utils::defaultOffset << "HasLinkInfo:" << endl <<
                 Utils::defaultOffsetDocInfo << "The shell link is saved with link information." << endl <<
                 Utils::defaultOffsetDocInfo << "If this bit is set, a LinkInfo structure MUST be present." << endl <<
                 Utils::defaultOffsetDocInfo << "If this bit is not set, this structure MUST NOT be present." << endl;
            HLIIsSet = true;
        }
        if (flags & HasName) {
            cout << Utils::defaultOffset << "HasName:" << endl <<
                 Utils::defaultOffsetDocInfo << "The shell link is saved with a name string." << endl <<
                 Utils::defaultOffsetDocInfo << "If this bit is set, a NAME_STRING StringData structure MUST be present." << endl <<
                 Utils::defaultOffsetDocInfo << "If this bit is not set, this structure MUST NOT be present." << endl;
            HasNameSet = true;
        }
        if (flags & HasRelativePath) {
            cout << Utils::defaultOffset << "HasRelativePath:" << endl <<
                 Utils::defaultOffsetDocInfo << "The shell link is saved with a relative path string." << endl <<
                 Utils::defaultOffsetDocInfo << "If this bit is set, a RELATIVE_PATH StringData structure MUST be present." << endl <<
                 Utils::defaultOffsetDocInfo << "If this bit is not set, this structure MUST NOT be present." << endl;
            HasRelativePathSet = true;
        }
        if (flags & HasWorkingDir) {
            cout << Utils::defaultOffset << "HasWorkingDir:" << endl <<
                 Utils::defaultOffsetDocInfo << "The shell link is saved with a working directory string." << endl <<
                 Utils::defaultOffsetDocInfo << "If this bit is set, a WORKING_DIR StringData structure MUST be present." << endl <<
                 Utils::defaultOffsetDocInfo << "If this bit is not set, this structure MUST NOT be present." << endl;
            HasWorkingDirSet = true;
        }
        if (flags & HasArguments) {
            cout << Utils::defaultOffset << "HasArguments:" << endl <<
                 Utils::defaultOffsetDocInfo << "The shell link is saved with command line arguments." << endl <<
                 Utils::defaultOffsetDocInfo << "If this bit is set, a COMMAND_LINE_ARGUMENTS StringData structure MUST be present." << endl <<
                 Utils::defaultOffsetDocInfo << "If this bit is not set, this structure MUST NOT be present." << endl;
            HasArgumentsSet = true;
        }
        if (flags & HasIconLocation) {
            cout << Utils::defaultOffset << "HasIconLocation:" << endl <<
                 Utils::defaultOffsetDocInfo << "The shell link is saved with an icon location string." << endl <<
                 Utils::defaultOffsetDocInfo << "If this bit is set, an ICON_LOCATION StringData structure MUST be present." << endl <<
                 Utils::defaultOffsetDocInfo << "If this bit is not set, this structure MUST NOT be present." << endl;
            HasIconLocationSet = true;
        }
        if (flags & IsUnicode ) {
            cout << Utils::defaultOffset << "IsUnicode:" << endl <<
                 Utils::defaultOffsetDocInfo << "The shell link contains Unicode encoded strings. This bit SHOULD be set." << endl <<
                 Utils::defaultOffsetDocInfo << "If this bit is set, the StringData section contains Unicode-encoded strings; " << endl <<
                 Utils::defaultOffsetDocInfo << "otherwise, it contains strings that are encoded using the system default code page." << endl;
        }
        if (flags & ForceNoLinkInfo) {
            cout << Utils::defaultOffset << "ForceNoLinkInfo:" << endl <<
                 Utils::defaultOffsetDocInfo << "The LinkInfo structure is ignored." << endl;
        }
        if (flags & HasExpString) {
            cout << Utils::defaultOffset << "HasExpString:" << endl <<
                 Utils::defaultOffsetDocInfo << "The shell link is saved with an EnvironmentVariableDataBlock" << endl;
            HasExpStringSet = true;
        }
        if (flags & RunInSeparateProcess) {
            cout << Utils::defaultOffset << "RunInSeparateProcess:" << endl <<
                 Utils::defaultOffsetDocInfo << "The target is run in a separate virtual machine when launching a link target that is a 16-bit application." << endl;
        }
        if (flags & Unused1) {
            cout << Utils::defaultOffset << "Unused1:" << endl <<
                 Utils::defaultOffsetDocInfo << "A bit that is undefined and MUST be ignored." << endl;
        }
        if (flags & HasDarwinID) {
            cout << Utils::defaultOffset << "HasDarwinID:" << endl <<
                 Utils::defaultOffsetDocInfo << "The shell link is saved with a DarwinDataBlock." << endl;
            HasDarwinIDSet = true;
        }
        if (flags & RunAsUser) {
            cout << Utils::defaultOffset << "RunAsUser:" << endl <<
                 Utils::defaultOffsetDocInfo << "The application is run as a different user when the target of the shell link is activated." << endl;
        }
        if (flags & HasExpIcon) {
            cout << Utils::defaultOffset << "HasExpIcon:" << endl <<
                 Utils::defaultOffsetDocInfo << "The shell link is saved with an IconEnvironmentDataBlock." << endl;
            HasExpIconSet = true;
        }
        if (flags & NoPidlAlias) {
            cout << Utils::defaultOffset << "NoPidlAlias:" << endl <<
                 Utils::defaultOffsetDocInfo << "The file system location is represented in the shell namespace when the path to an item is parsed into an IDList." << endl;
        }
        if (flags & Unused2) {
            cout << Utils::defaultOffset << "Unused2:" << endl <<
                 Utils::defaultOffsetDocInfo << "A bit that is undefined and MUST be ignored." << endl;
        }
        if (flags & RunWithShimLayer) {
            cout << Utils::defaultOffset << "RunWithShimLayer:" << endl <<
                 Utils::defaultOffsetDocInfo << "The shell link is saved with a ShimDataBlock." << endl;
            RunWithShimLayerSet = true;
        }
        if (flags & ForceNoLinkTrack) {
            cout << Utils::defaultOffset << "ForceNoLinkTrack:" << endl <<
                 Utils::defaultOffsetDocInfo << "The TrackerDataBlock is ignored." << endl;
            ForceNoLinkTrackSet = true;
        }
        if (flags & EnableTargetMetadata) {
            cout << Utils::defaultOffset << "EnableTargetMetadata:" << endl <<
                 Utils::defaultOffsetDocInfo << "The shell link attempts to collect target properties and store them in the PropertyStoreDataBlock when the link target is set." << endl;
            EnableTargetMetadataSet = true;
        }
        if (flags & DisableLinkPathTracking) {
            cout << Utils::defaultOffset << "DisableLinkPathTracking:" << endl <<
                 Utils::defaultOffsetDocInfo << "The EnvironmentVariableDataBlock is ignored." << endl;
        }
        if (flags & DisableKnownFolderTracking) {
            cout << Utils::defaultOffset << "DisableKnownFolderTracking:" << endl <<
                 Utils::defaultOffsetDocInfo << "The SpecialFolderDataBlock and the KnownFolderDataBlock are ignored when loading the shell link." << endl <<
                 Utils::defaultOffsetDocInfo << "If this bit is set, these extra data blocks SHOULD NOT be saved when saving the shell link." << endl;

        }
        if (flags & DisableKnownFolderAlias) {
            cout << Utils::defaultOffset << "DisableKnownFolderAlias:" << endl <<
                 Utils::defaultOffsetDocInfo << "If the link has a KnownFolderDataBlock, the unaliased form of the known folder IDList " << endl <<
                 Utils::defaultOffsetDocInfo << "SHOULD be used when translating the target IDList at the time that the link is loaded." << endl;

        }
        if (flags & AllowLinkToLink) {
            cout << Utils::defaultOffset << "AllowLinkToLink:" << endl <<
                 Utils::defaultOffsetDocInfo << "Creating a link that references another link is enabled. " << endl <<
                 Utils::defaultOffsetDocInfo << "Otherwise, specifying a link as the target IDList SHOULD NOT be allowed." << endl;
        }
        if (flags & UnaliasOnSave) {
            cout << Utils::defaultOffset << "UnaliasOnSave:" << endl <<
                 Utils::defaultOffsetDocInfo << "When saving a link for which the target IDList is under a known folder," << endl <<
                 Utils::defaultOffsetDocInfo << "either the unaliased form of that known folder or the target IDList SHOULD be used." << endl;
        }
        if (flags & PreferEnvironmentPath) {
            cout << Utils::defaultOffset << "PreferEnvironmentPath:" << endl <<
                 Utils::defaultOffsetDocInfo << "The target IDList SHOULD NOT be stored;" << endl <<
                 Utils::defaultOffsetDocInfo << "instead, the path specified in the EnvironmentVariableDataBlock SHOULD be used to refer to the target." << endl;
        }
        if (flags & KeepLocalIDListForUNCTarget) {
            cout << Utils::defaultOffset << "KeepLocalIDListForUNCTarget:" << endl <<
                 Utils::defaultOffsetDocInfo << "When the target is a UNC name that refers to a location on a local machine," << endl <<
                 Utils::defaultOffsetDocInfo << "the local path IDList in the PropertyStoreDataBlock SHOULD be stored," << endl <<
                 Utils::defaultOffsetDocInfo << "so it can be used when the link is loaded on the local machine." << endl;
        }
    }

    void ShellLinkHeader::parseFileAttributesFlags(unsigned int flags) {
        if (flags == 0x00000000)
            cout << Utils::defaultOffset << "NONE" << endl;
        if (flags & FILE_ATTRIBUTE_READONLY) {
            cout << Utils::defaultOffset << "FILE_ATTRIBUTE_READONLY" << endl <<
                 Utils::defaultOffsetDocInfo << "The file or directory is read-only. For a file, if this bit is set, " << endl <<
                 Utils::defaultOffsetDocInfo << "applications can read the file but cannot write to it or delete it. " << endl <<
                 Utils::defaultOffsetDocInfo << "For a directory, if this bit is set, applications cannot delete the directory." << endl;
        }
        if (flags & FILE_ATTRIBUTE_HIDDEN) {
            cout << Utils::defaultOffset << "FILE_ATTRIBUTE_HIDDEN" << endl <<
                 Utils::defaultOffsetDocInfo << "The file or directory is hidden. " << endl <<
                 Utils::defaultOffsetDocInfo << "If this bit is set, the file or folder is not included in an ordinary directory listing." << endl;
        }
        if (flags & FILE_ATTRIBUTE_SYSTEM) {
            cout << Utils::defaultOffset << "ILE_ATTRIBUTE_SYSTEM" << endl <<
                 Utils::defaultOffsetDocInfo << "The file or directory is part of the operating system or is used exclusively by the operating system." << endl;
        }
        if (flags & RESERVED1) {
            cout << Utils::defaultOffset << "RESERVED1" << endl <<
                 Utils::defaultOffsetDocInfo << "A bit that MUST be zero." << endl;
        }
        if (flags & FILE_ATTRIBUTE_DIRECTORY) {
            cout << Utils::defaultOffset << "FILE_ATTRIBUTE_DIRECTORY" << endl <<
                 Utils::defaultOffsetDocInfo << "The link target is a directory instead of a file." << endl;
        }
        if (flags & FILE_ATTRIBUTE_ARCHIVE) {
            cout << Utils::defaultOffset << "FILE_ATTRIBUTE_ARCHIVE" << endl <<
                 Utils::defaultOffsetDocInfo << "The file or directory is an archive file. " << endl <<
                 Utils::defaultOffsetDocInfo << "Applications use this flag to mark files for backup or removal." << endl;
        }
        if (flags & RESERVED2) {
            cout << Utils::defaultOffset << "RESERVED2" << endl <<
                 Utils::defaultOffsetDocInfo << "A bit that MUST be zero." << endl;
        }
        if (flags & FILE_ATTRIBUTE_NORMAL) {
            cout << Utils::defaultOffset << "FILE_ATTRIBUTE_NORMAL" << endl <<
                 Utils::defaultOffsetDocInfo << "The file or directory has no other flags set. " << endl <<
                 Utils::defaultOffsetDocInfo << "If this bit is 1, all other bits in this structure MUST be clear." << endl;
        }
        if (flags & FILE_ATTRIBUTE_TEMPORARY) {
            cout << Utils::defaultOffset << " FILE_ATTRIBUTE_TEMPORARY" << endl <<
                 Utils::defaultOffsetDocInfo << "The file is being used for temporary storage." << endl;
        }
        if (flags & FILE_ATTRIBUTE_SPARSE_FILE) {
            cout << Utils::defaultOffset << "FILE_ATTRIBUTE_SPARSE_FILE" << endl <<
                 Utils::defaultOffsetDocInfo << "The file is a sparse file." << endl;
        }
        if (flags & FILE_ATTRIBUTE_REPARSE_POINT) {
            cout << Utils::defaultOffset << "FILE_ATTRIBUTE_REPARSE_POINT" << endl <<
                 Utils::defaultOffsetDocInfo << "The file or directory has an associated reparse point." << endl;
        }
        if (flags & FILE_ATTRIBUTE_COMPRESSED) {
            cout << Utils::defaultOffset << "FILE_ATTRIBUTE_COMPRESSED" << endl <<
                 Utils::defaultOffsetDocInfo << "The file or directory is compressed. For a file, this means that all data in the file is compressed. " << endl <<
                 Utils::defaultOffsetDocInfo << "For a directory, this means that compression is the default for newly created files and subdirectories." << endl;
        }
        if (flags & FILE_ATTRIBUTE_OFFLINE) {
            cout << Utils::defaultOffset << "FILE_ATTRIBUTE_OFFLINE" << endl <<
                 Utils::defaultOffsetDocInfo << "The data of the file is not immediately available." << endl;
        }
        if (flags & FILE_ATTRIBUTE_NOT_CONTENT_INDEXED) {
            cout << Utils::defaultOffset << "FILE_ATTRIBUTE_NOT_CONTENT_INDEXED" << endl <<
                 Utils::defaultOffsetDocInfo << "The contents of the file need to be indexed." << endl;
        }
        if (flags & FILE_ATTRIBUTE_ENCRYPTED) {
            cout << Utils::defaultOffset << "FILE_ATTRIBUTE_ENCRYPTED" << endl <<
                 Utils::defaultOffsetDocInfo << "The file or directory is encrypted. For a file, this means that all data in the file is encrypted. " << endl <<
                 Utils::defaultOffsetDocInfo << "For a directory, this means that encryption is the default for newly created files and subdirectories." << endl;
        }
    }

    void ShellLinkHeader::parseHotKeyFlags() { // вЗМОЖНО НУЖНО БАЙТЫ ПОМЕНЯТЬ МЕСТАМИ
        if (HotKey[0] == VK_NUMPAD00) cout << "No key assigned, ";
        if (HotKey[0] == VK_NUMPAD0) cout << "\"0\" key, ";
        if (HotKey[0] == VK_NUMPAD1) cout << "\"1\" key, ";
        if (HotKey[0] == VK_NUMPAD2) cout << "\"2\" key, ";
        if (HotKey[0] == VK_NUMPAD3) cout << "\"3\" key, ";
        if (HotKey[0] == VK_NUMPAD4) cout << "\"4\" key, ";
        if (HotKey[0] == VK_NUMPAD5) cout << "\"5\" key, ";
        if (HotKey[0] == VK_NUMPAD6) cout << "\"6\" key, ";
        if (HotKey[0] == VK_NUMPAD7) cout << "\"7\" key, ";
        if (HotKey[0] == VK_NUMPAD8) cout << "\"8\" key, ";
        if (HotKey[0] == VK_NUMPAD9) cout << "\"9\" key, ";
        if (HotKey[0] == VK_NUMPAD_A) cout << "\"A\" key, ";
        if (HotKey[0] == VK_NUMPAD_B) cout << "\"B\" key, ";
        if (HotKey[0] == VK_NUMPAD_C) cout << "\"C\" key, ";
        if (HotKey[0] == VK_NUMPAD_D) cout << "\"D\" key, ";
        if (HotKey[0] == VK_NUMPAD_E) cout << "\"E\" key, ";
        if (HotKey[0] == VK_NUMPAD_F) cout << "\"F\" key, ";
        if (HotKey[0] == VK_NUMPAD_G) cout << "\"G\" key, ";
        if (HotKey[0] == VK_NUMPAD_H) cout << "\"H\" key, ";
        if (HotKey[0] == VK_NUMPAD_I) cout << "\"I\" key, ";
        if (HotKey[0] == VK_NUMPAD_J) cout << "\"J\" key, ";
        if (HotKey[0] == VK_NUMPAD_K) cout << "\"K\" key, ";
        if (HotKey[0] == VK_NUMPAD_L) cout << "\"L\" key, ";
        if (HotKey[0] == VK_NUMPAD_M) cout << "\"M\" key, ";
        if (HotKey[0] == VK_NUMPAD_N) cout << "\"N\" key, ";
        if (HotKey[0] == VK_NUMPAD_O) cout << "\"O\" key, ";
        if (HotKey[0] == VK_NUMPAD_P) cout << "\"P\" key, ";
        if (HotKey[0] == VK_NUMPAD_Q) cout << "\"Q\" key, ";
        if (HotKey[0] == VK_NUMPAD_R) cout << "\"R\" key, ";
        if (HotKey[0] == VK_NUMPAD_S) cout << "\"S\" key, ";
        if (HotKey[0] == VK_NUMPAD_T) cout << "\"T\" key, ";
        if (HotKey[0] == VK_NUMPAD_U) cout << "\"U\" key, ";
        if (HotKey[0] == VK_NUMPAD_V) cout << "\"V\" key, ";
        if (HotKey[0] == VK_NUMPAD_W) cout << "\"W\" key, ";
        if (HotKey[0] == VK_NUMPAD_X) cout << "\"X\" key, ";
        if (HotKey[0] == VK_NUMPAD_Y) cout << "\"Y\" key, ";
        if (HotKey[0] == VK_NUMPAD_Z) cout << "\"Z\" key, ";
        if (HotKey[0] == VK_F1) cout << "\"F1\" key, ";
        if (HotKey[0] == VK_F2) cout << "\"F2\" key, ";
        if (HotKey[0] == VK_F3) cout << "\"F3\" key, ";
        if (HotKey[0] == VK_F4) cout << "\"F4\" key, ";
        if (HotKey[0] == VK_F5) cout << "\"F5\" key, ";
        if (HotKey[0] == VK_F6) cout << "\"F6\" key, ";
        if (HotKey[0] == VK_F7) cout << "\"F7\" key, ";
        if (HotKey[0] == VK_F8) cout << "\"F8\" key, ";
        if (HotKey[0] == VK_F9) cout << "\"F9\" key, ";
        if (HotKey[0] == VK_F10) cout << "\"F10\" key, ";
        if (HotKey[0] == VK_F11) cout << "\"F11\" key, ";
        if (HotKey[0] == VK_F12) cout << "\"F12\" key, ";
        if (HotKey[0] == VK_F13) cout << "\"F13\" key, ";
        if (HotKey[0] == VK_F14) cout << "\"F14\" key, ";
        if (HotKey[0] == VK_F15) cout << "\"F15\" key, ";
        if (HotKey[0] == VK_F16) cout << "\"F16\" key, ";
        if (HotKey[0] == VK_F17) cout << "\"F17\" key, ";
        if (HotKey[0] == VK_F18) cout << "\"F18\" key, ";
        if (HotKey[0] == VK_F19) cout << "\"F19\" key, ";
        if (HotKey[0] == VK_F20) cout << "\"F20\" key, ";
        if (HotKey[0] == VK_F21) cout << "\"F21\" key, ";
        if (HotKey[0] == VK_F22) cout << "\"F22\" key, ";
        if (HotKey[0] == VK_F23) cout << "\"F23\" key, ";
        if (HotKey[0] == VK_F24) cout << "\"F24\" key, ";
        if (HotKey[0] == VK_NUMLOCK) cout << "\"NUM LOCK\" key, ";
        if (HotKey[0] == VK_SCROLL) cout << "\"SCROLL LOCK\" key, ";

        if (HotKey[1] == VK_NUMPAD00) cout << "No modifier key is being used.";
        if (HotKey[1] == HOTKEYF_SHIFT) cout << "The \"SHIFT\" key on the keyboard.";
        if (HotKey[1] == HOTKEYF_CONTROL) cout << "The \"CTRL\" key on the keyboard.";
        if (HotKey[1] == HOTKEYF_ALT) cout << "The \"ALT\" key on the keyboard.";
        std::cout << endl;
    }
    void ShellLinkHeader::parseShowCommand(){
        if (ShowCommand[3] == 1)
            cout << "SW_SHOWNORMAL" << endl << Utils::defaultOffsetDocInfo << "The application is open and its window is open in a normal fashion." << endl;
        if (ShowCommand[3] == 3)
            cout << "SW_SHOWMAXIMIZED" << endl << Utils::defaultOffsetDocInfo << "The application is open, and keyboard focus is given to the application, but its window is not shown." << endl;
        if (ShowCommand[3] == 7)
            cout << "SW_SHOWMINNOACTIVE" << endl << Utils::defaultOffsetDocInfo << "The application is open, but its window is not shown. It is not given the keyboard focus." << endl;
    }

    // TODO: Дописать парсинг времени НЕ через winApi (некорректно работает)
    void ShellLinkHeader::printHeader(){
        cout << "____________________ShellLinkHeader______________________" << endl;
        cout << "HeaderSize:                         " << dec << Utils::lenFourBytes(HeaderSize) << " bytes" << endl;
        cout << "LinkCLSID:                          "; Utils::printSid(LinkCLSID, 0); cout << endl;
        cout << "LinkFlags:                          " << endl; parseLinkFlags(Utils::vectFourBytesToUnsignedInt(LinkFlags,0));
        cout << "FileAttributes:                     " << endl; parseFileAttributesFlags(Utils::vectFourBytesToUnsignedInt(FileAttributes,0));
        cout << "CreationTime:                       "; Utils::getDate(CreationTime);
        cout << "AccessTime:                         "; Utils::getDate(AccessTime);
        cout << "WriteTime:                          "; Utils::getDate(WriteTime);
        cout << "FileSize:                           " << dec << Utils::lenFourBytes(FileSize) << " bytes" << endl;
        cout << "IconIndex:                          "; Utils::print_vec(IconIndex);
        cout << "ShowCommand:                        "; parseShowCommand();
        cout << "HotKey:                             "; parseHotKeyFlags();
        cout << "Reserved1:                          "; Utils::print_vec(Reserved1);
        cout << "Reserved2:                          "; Utils::print_vec(Reserved2);
        cout << "Reserved3:                          "; Utils::print_vec(Reserved3);
        cout << "_________________________________________________________" << endl;
    }

    bool ShellLinkHeader::HasLinkTargetIDListIsSet() {
        return HLTIDListIsSet;
    }
    bool ShellLinkHeader::HasLinkInfoIsSet(){
        return HLIIsSet;
    }

    bool ShellLinkHeader::HasNameIsSet(){
        return HasNameSet;
    }
    bool ShellLinkHeader::HasRelativePathIsSet(){
        return HasRelativePathSet;
    }
    bool ShellLinkHeader::HasWorkingDirIsSet(){
        return HasWorkingDirSet;
    }
    bool ShellLinkHeader::HasArgumentsIsSet(){
        return HasArgumentsSet;
    }
    bool ShellLinkHeader::HasIconLocationIsSet(){
        return HasIconLocationSet;
    }
    bool ShellLinkHeader::HasStringDataIsSet(){
        if (HasNameSet == true || HasRelativePathSet == true || HasWorkingDirSet == true ||
                HasArgumentsSet == true || HasIconLocationSet == true)
            return true;
        return  false;
    }

    /* For ExtraData structure */
bool ShellLinkHeader::HasDarwinIDIsSet(){
    return HasDarwinIDSet;
}
bool ShellLinkHeader::HasExpStringIsSet(){
    return HasExpStringSet;
}
bool ShellLinkHeader::HasExpIconIsSet(){
    return HasExpIconSet;
}
bool ShellLinkHeader::EnableTargetMetadataIsSet(){
    return EnableTargetMetadataSet;
}
bool ShellLinkHeader::RunWithShimLayerIsSet(){
    return RunWithShimLayerSet;
}
bool ShellLinkHeader::ForceNoLinkTrackIsSet(){
    return ForceNoLinkTrackSet;
}

void ShellLinkHeader::setHltidListIsSet(bool hltidListIsSet) {
    HLTIDListIsSet = hltidListIsSet;
}
void ShellLinkHeader::setHliIsSet(bool hliIsSet) {
    HLIIsSet = hliIsSet;
}
void ShellLinkHeader::setHasNameSet(bool hasNameSet) {
    HasNameSet = hasNameSet;
}
void ShellLinkHeader::setHasRelativePathSet(bool hasRelativePathSet) {
    HasRelativePathSet = hasRelativePathSet;
}
void ShellLinkHeader::setHasWorkingDirSet(bool hasWorkingDirSet) {
    HasWorkingDirSet = hasWorkingDirSet;
}
void ShellLinkHeader::setHasArgumentsSet(bool hasArgumentsSet) {
    HasArgumentsSet = hasArgumentsSet;
}
void ShellLinkHeader::setHasIconLocationSet(bool hasIconLocationSet) {
    HasIconLocationSet = hasIconLocationSet;
}
void ShellLinkHeader::setHasDarwinIdSet(bool hasDarwinIdSet) {
    HasDarwinIDSet = hasDarwinIdSet;
}
void ShellLinkHeader::setHasExpStringSet(bool hasExpStringSet) {
    HasExpStringSet = hasExpStringSet;
}
void ShellLinkHeader::setHasExpIconSet(bool hasExpIconSet) {
    HasExpIconSet = hasExpIconSet;
}
void ShellLinkHeader::setEnableTargetMetadataSet(bool enableTargetMetadataSet) {
    EnableTargetMetadataSet = enableTargetMetadataSet;
}
void ShellLinkHeader::setRunWithShimLayerSet(bool runWithShimLayerSet) {
    RunWithShimLayerSet = runWithShimLayerSet;
}
void ShellLinkHeader::setForceNoLinkTrackSet(bool forceNoLinkTrackSet) {
    ForceNoLinkTrackSet = forceNoLinkTrackSet;
}



