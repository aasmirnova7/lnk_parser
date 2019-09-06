//
// Created by user on 23.08.2019.
//
#include <vector>
#include <iostream>
#include <algorithm>
#include <sstream>
#include <iterator>
#include <cmath>
#include <bitset>
#include "ShellLinkHeader.h"
#include "Utils.h"

using  namespace std;

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
        std::copy(it, it + 2, std::back_inserter(Reserved2));               // 2 byte
        it = it + 2;
        std::copy(it, it + 4, std::back_inserter(Reserved3));               // 4 byte

        /* Reverse All field (read left -> rigth) */
        reverseAllFields();
    }
    /* Reverse All field (read left -> rigth) */
    void ShellLinkHeader::reverseAllFields(){
        reverse(HeaderSize.begin(), HeaderSize.end());
        reverse(LinkCLSID.begin(), LinkCLSID.end());            //????????
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
        cout << "HeaderSize:           "; Utils::print_vec(HeaderSize);
        cout << "LinkCLSID:            "; Utils::print_vec(LinkCLSID);
        cout << "LinkFlags:            "; Utils::print_vec(LinkFlags);
        cout << "FileAttributes:       "; Utils::print_vec(FileAttributes);
        cout << "CreationTime:         "; Utils::print_vec(CreationTime);
        cout << "AccessTime:           "; Utils::print_vec(AccessTime);
        cout << "WriteTime:            "; Utils::print_vec(WriteTime);
        cout << "FileSize:             "; Utils::print_vec(FileSize);
        cout << "IconIndex:            "; Utils::print_vec(IconIndex);
        cout << "ShowCommand:          "; Utils::print_vec(ShowCommand);
        cout << "HotKey:               "; Utils::print_vec(HotKey);
        cout << "Reserved1:            "; Utils::print_vec(Reserved1);
        cout << "Reserved2:            "; Utils::print_vec(Reserved2);
        cout << "Reserved3:            "; Utils::print_vec(Reserved3);
        cout << "_________________________________________________________" << endl;
    }

    bool ShellLinkHeader::isHeaderValid() {
        /* Check HeaderSize */
        if(HeaderSize[0] != 0 && HeaderSize[1] != 0 && HeaderSize[2] != 0 && HeaderSize[3] != 76) {
            cout << "Invalid HeaderSize value. It MUST  be 0x0000004C" << endl;
            return false;
        }
        /* Check LinkCLSID */
        if(false) { // ДОДЕЛАТЬ!!!!!!!!!!!!!!1
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
        cout << "ShellLinkHeader is Valid" << endl;
        return true;
    }

    void ShellLinkHeader::parseLinkFlags() {
       // std::cout << "LinkFlags:            ";
        for (int i = 0; i < LinkFlags.size(); ++i){
            if (LinkFlags[i] & HasLinkTargetIDList) { cout << "HasLinkTargetIDList, "; HLTIDListIsSet = true;}
            if (LinkFlags[i] & HasLinkInfo) { cout << "HasLinkInfo, ";  HLIIsSet = true;}
            if (LinkFlags[i] & HasName) { cout << "HasName, "; HasNameSet = true;}
            if (LinkFlags[i] & HasRelativePath) { cout << "HasRelativePath, ";  HasRelativePathSet = true;}
            if (LinkFlags[i] & HasWorkingDir) { cout << "HasWorkingDir, ";  HasWorkingDirSet = true;}
            if (LinkFlags[i] & HasArguments) { cout << "HasArguments, ";  HasArgumentsSet = true;}
            if (LinkFlags[i] & HasIconLocation) { cout << "HasIconLocation, ";  HasIconLocationSet = true;}
            if (LinkFlags[i] & IsUnicode ) { cout << "IsUnicode, "; }
            if (LinkFlags[i] & ForceNoLinkInfo) cout << "ForceNoLinkInfo, ";
            if (LinkFlags[i] & HasExpString) {cout << "HasExpString, "; HasExpStringSet = true;}
            if (LinkFlags[i] & RunInSeparateProcess) cout << "RunInSeparateProcess, ";
            if (LinkFlags[i] & Unused1) cout << "Unused1, ";
            if (LinkFlags[i] & HasDarwinID) {cout << "HasDarwinID, "; HasDarwinIDSet = true;}
            if (LinkFlags[i] & RunAsUser) cout << "RunAsUser, ";
            if (LinkFlags[i] & HasExpIcon) {cout << "HasExpIcon, "; HasExpIconSet = true;}
            if (LinkFlags[i] & NoPidlAlias) cout << "NoPidlAlias, ";
            if (LinkFlags[i] & Unused2) cout << "Unused2, ";
            if (LinkFlags[i] & RunWithShimLayer) {cout << "RunWithShimLayer, "; RunWithShimLayerSet = true;}
            if (LinkFlags[i] & ForceNoLinkTrack) {cout << "ForceNoLinkTrack, "; ForceNoLinkTrackSet = true;}
            if (LinkFlags[i] & EnableTargetMetadata) {cout << "EnableTargetMetadata, "; EnableTargetMetadataSet = true;}
            if (LinkFlags[i] & DisableLinkPathTracking) cout << "DisableLinkPathTracking, ";
            if (LinkFlags[i] & DisableKnownFolderTracking) cout << "DisableKnownFolderTracking, ";
            if (LinkFlags[i] & DisableKnownFolderAlias) cout << "DisableKnownFolderAlias, ";
            if (LinkFlags[i] & AllowLinkToLink) cout << "AllowLinkToLink, ";
            if (LinkFlags[i] & UnaliasOnSave) cout << "UnaliasOnSave, ";
            if (LinkFlags[i] & PreferEnvironmentPath) cout << "PreferEnvironmentPath, ";
            if (LinkFlags[i] & KeepLocalIDListForUNCTarget) cout << "KeepLocalIDListForUNCTarget, ";
        }
        cout << endl;
    }

    void ShellLinkHeader::parseFileAttributesFlags() {
    //std::cout << "FileAttributes:       ";
    for (int i = 0; i < FileAttributes.size(); ++i) {
        if (FileAttributes[i] & FILE_ATTRIBUTE_READONLY) cout << "HasLinkTargetIDList, ";
        if (FileAttributes[i] & FILE_ATTRIBUTE_HIDDEN) cout << "FILE_ATTRIBUTE_HIDDEN, ";
        if (FileAttributes[i] & FILE_ATTRIBUTE_SYSTEM) cout << "FILE_ATTRIBUTE_SYSTEM, ";
        if (FileAttributes[i] & RESERVED1) cout << "RESERVED1, ";
        if (FileAttributes[i] & FILE_ATTRIBUTE_DIRECTORY) cout << "FILE_ATTRIBUTE_DIRECTORY, ";
        if (FileAttributes[i] & FILE_ATTRIBUTE_ARCHIVE) cout << "FILE_ATTRIBUTE_ARCHIVE, ";
        if (FileAttributes[i] & RESERVED2) cout << "RESERVED2, ";
        if (FileAttributes[i] & FILE_ATTRIBUTE_NORMAL) cout << "FILE_ATTRIBUTE_NORMAL, ";
        if (FileAttributes[i] & FILE_ATTRIBUTE_TEMPORARY) cout << "FILE_ATTRIBUTE_TEMPORARY, ";
        if (FileAttributes[i] & FILE_ATTRIBUTE_SPARSE_FILE) cout << "FILE_ATTRIBUTE_SPARSE_FILE, ";
        if (FileAttributes[i] & FILE_ATTRIBUTE_REPARSE_POINT) cout << "FILE_ATTRIBUTE_REPARSE_POINT, ";
        if (FileAttributes[i] & FILE_ATTRIBUTE_COMPRESSED) cout << "FILE_ATTRIBUTE_COMPRESSED, ";
        if (FileAttributes[i] & FILE_ATTRIBUTE_OFFLINE) cout << "FILE_ATTRIBUTE_OFFLINE, ";
        if (FileAttributes[i] & FILE_ATTRIBUTE_NOT_CONTENT_INDEXED) cout << "FILE_ATTRIBUTE_NOT_CONTENT_INDEXED, ";
        if (FileAttributes[i] & FILE_ATTRIBUTE_ENCRYPTED) cout << "FILE_ATTRIBUTE_ENCRYPTED, ";
    }
    cout << endl;
}

    void ShellLinkHeader::parseHotKeyFlags() { // вЗМОЖНО НУЖНО БАЙТЫ ПОМЕНЯТЬ МЕСТАМИ
        //std::cout << "HotKeyFlags:       ";
        if (HotKey[0] & VK_NUMPAD00) cout << "No key assigned, ";
        if (HotKey[0] & VK_NUMPAD0) cout << "\"0\" key, ";
        if (HotKey[0] & VK_NUMPAD1) cout << "\"1\" key, ";
        if (HotKey[0] & VK_NUMPAD2) cout << "\"2\" key, ";
        if (HotKey[0] & VK_NUMPAD3) cout << "\"3\" key, ";
        if (HotKey[0] & VK_NUMPAD4) cout << "\"4\" key, ";
        if (HotKey[0] & VK_NUMPAD5) cout << "\"5\" key, ";
        if (HotKey[0] & VK_NUMPAD6) cout << "\"6\" key, ";
        if (HotKey[0] & VK_NUMPAD7) cout << "\"7\" key, ";
        if (HotKey[0] & VK_NUMPAD8) cout << "\"8\" key, ";
        if (HotKey[0] & VK_NUMPAD9) cout << "\"9\" key, ";
        if (HotKey[0] & VK_NUMPAD_A) cout << "\"A\" key, ";
        if (HotKey[0] & VK_NUMPAD_B) cout << "\"B\" key, ";
        if (HotKey[0] & VK_NUMPAD_C) cout << "\"C\" key, ";
        if (HotKey[0] & VK_NUMPAD_D) cout << "\"D\" key, ";
        if (HotKey[0] & VK_NUMPAD_E) cout << "\"E\" key, ";
        if (HotKey[0] & VK_NUMPAD_F) cout << "\"F\" key, ";
        if (HotKey[0] & VK_NUMPAD_G) cout << "\"G\" key, ";
        if (HotKey[0] & VK_NUMPAD_H) cout << "\"H\" key, ";
        if (HotKey[0] & VK_NUMPAD_I) cout << "\"I\" key, ";
        if (HotKey[0] & VK_NUMPAD_J) cout << "\"J\" key, ";
        if (HotKey[0] & VK_NUMPAD_K) cout << "\"K\" key, ";
        if (HotKey[0] & VK_NUMPAD_L) cout << "\"L\" key, ";
        if (HotKey[0] & VK_NUMPAD_M) cout << "\"M\" key, ";
        if (HotKey[0] & VK_NUMPAD_N) cout << "\"N\" key, ";
        if (HotKey[0] & VK_NUMPAD_O) cout << "\"O\" key, ";
        if (HotKey[0] & VK_NUMPAD_P) cout << "\"P\" key, ";
        if (HotKey[0] & VK_NUMPAD_Q) cout << "\"Q\" key, ";
        if (HotKey[0] & VK_NUMPAD_R) cout << "\"R\" key, ";
        if (HotKey[0] & VK_NUMPAD_S) cout << "\"S\" key, ";
        if (HotKey[0] & VK_NUMPAD_T) cout << "\"T\" key, ";
        if (HotKey[0] & VK_NUMPAD_U) cout << "\"U\" key, ";
        if (HotKey[0] & VK_NUMPAD_V) cout << "\"V\" key, ";
        if (HotKey[0] & VK_NUMPAD_W) cout << "\"W\" key, ";
        if (HotKey[0] & VK_NUMPAD_X) cout << "\"X\" key, ";
        if (HotKey[0] & VK_NUMPAD_Y) cout << "\"Y\" key, ";
        if (HotKey[0] & VK_NUMPAD_Z) cout << "\"Z\" key, ";
        if (HotKey[0] & VK_F1) cout << "\"F1\" key, ";
        if (HotKey[0] & VK_F2) cout << "\"F2\" key, ";
        if (HotKey[0] & VK_F3) cout << "\"F3\" key, ";
        if (HotKey[0] & VK_F4) cout << "\"F4\" key, ";
        if (HotKey[0] & VK_F5) cout << "\"F5\" key, ";
        if (HotKey[0] & VK_F6) cout << "\"F6\" key, ";
        if (HotKey[0] & VK_F7) cout << "\"F7\" key, ";
        if (HotKey[0] & VK_F8) cout << "\"F8\" key, ";
        if (HotKey[0] & VK_F9) cout << "\"F9\" key, ";
        if (HotKey[0] & VK_F10) cout << "\"F10\" key, ";
        if (HotKey[0] & VK_F11) cout << "\"F11\" key, ";
        if (HotKey[0] & VK_F12) cout << "\"F12\" key, ";
        if (HotKey[0] & VK_F13) cout << "\"F13\" key, ";
        if (HotKey[0] & VK_F14) cout << "\"F14\" key, ";
        if (HotKey[0] & VK_F15) cout << "\"F15\" key, ";
        if (HotKey[0] & VK_F16) cout << "\"F16\" key, ";
        if (HotKey[0] & VK_F17) cout << "\"F17\" key, ";
        if (HotKey[0] & VK_F18) cout << "\"F18\" key, ";
        if (HotKey[0] & VK_F19) cout << "\"F19\" key, ";
        if (HotKey[0] & VK_F20) cout << "\"F20\" key, ";
        if (HotKey[0] & VK_F21) cout << "\"F21\" key, ";
        if (HotKey[0] & VK_F22) cout << "\"F22\" key, ";
        if (HotKey[0] & VK_F23) cout << "\"F23\" key, ";
        if (HotKey[0] & VK_F24) cout << "\"F24\" key, ";
        if (HotKey[0] & VK_NUMLOCK) cout << "\"NUM LOCK\" key, ";
        if (HotKey[0] & VK_SCROLL) cout << "\"SCROLL LOCK\" key, ";

        if (HotKey[1] & VK_NUMPAD00) cout << "No key assigned, ";
        if (HotKey[1] & HOTKEYF_SHIFT) cout << "The \"SHIFT\" key on the keyboard, ";
        if (HotKey[1] & HOTKEYF_CONTROL) cout << "The \"CTRL\" key on the keyboard., ";
        if (HotKey[1] & HOTKEYF_ALT) cout << "The \"ALT\" key on the keyboard, ";

        std::cout << endl;
    }
    void ShellLinkHeader::parseShowCommand(){
        if (ShowCommand[3] == 1) cout << "SW_SHOWNORMAL" << endl;
        if (ShowCommand[3] == 3) cout << "SW_SHOWMAXIMIZED" << endl;
        if (ShowCommand[3] == 7) cout << "SW_SHOWMINNOACTIVE" << endl;
    }

    void ShellLinkHeader::printHeader(){
        cout << "____________________ShellLinkHeader______________________" << endl;
        cout << "HeaderSize:           " << dec << Utils::lenFourBytes(HeaderSize) << " bytes" << endl;
        cout << "LinkCLSID:            "; Utils::print_vec(LinkCLSID);
        cout << "LinkFlags:            "; parseLinkFlags();
        cout << "FileAttributes:       "; parseFileAttributesFlags();
        cout << "CreationTime:         "; getDate(CreationTime);
        cout << "AccessTime:           "; getDate(AccessTime);
        cout << "WriteTime:            "; getDate(WriteTime);
        cout << "FileSize:             " << dec << Utils::lenFourBytes(FileSize) << " bytes" << endl;
        cout << "IconIndex:            "; Utils::print_vec(IconIndex);
        cout << "ShowCommand:          "; parseShowCommand();
        cout << "HotKey:               "; parseHotKeyFlags();
        cout << "Reserved1:            "; Utils::print_vec(Reserved1);
        cout << "Reserved2:            "; Utils::print_vec(Reserved2);
        cout << "Reserved3:            "; Utils::print_vec(Reserved3);
        cout << "_________________________________________________________" << endl;
    }

    void ShellLinkHeader::getDate(std::vector<unsigned int> vec){
        cout << endl;

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



