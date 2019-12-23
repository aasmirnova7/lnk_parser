#include "Utils.h"
#include "../lnkStructure/LinkTargetIDList.h"
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

std::string Utils::defaultOffset = "                                    ";
std::string Utils::defaultOffsetDocInfo = "                                      ";

const Utils::clsid_type clsid_list[] = {{ GUID_AddNewPrograms, "AddNewPrograms" }, { GUID_AdminTools, "AdminTools" },
                                            { GUID_AppDataLow, "AppDataLow" }, { GUID_ApplicationShortcuts, "ApplicationShortcuts" },
                                            { GUID_AppsFolder, "AppsFolder" }, { GUID_AppUpdates, "AppUpdates" },
                                            { GUID_CDBurning, "CDBurning" }, { GUID_ChangeRemovePrograms, "ChangeRemovePrograms" },
                                            { GUID_CommonAdminTools, "CommonAdminTools" }, { GUID_CommonOEMLinks, "CommonOEMLinks" },
                                            { GUID_CommonPrograms, "CommonPrograms" }, { GUID_CommonStartMenu, "CommonStartMenu" },
                                            { GUID_CommonStartup, "CommonStartup" }, { GUID_CommonTemplates, "CommonTemplates" },
                                            { GUID_ComputerFolder, "ComputerFolder" }, { GUID_ConflictFolder, "ConflictFolder" },
                                            { GUID_ConnectionsFolder, "ConnectionsFolder" }, { GUID_Contacts, "Contacts" },
                                            { GUID_ControlPanelFolder, "ControlPanelFolder" }, { GUID_Cookies, "Cookies" },
                                            { GUID_Desktop, "Desktop" }, { GUID_DeviceMetadataStore, "DeviceMetadataStore" },
                                            { GUID_Documents, "Documents" }, { GUID_DocumentsLibrary, "DocumentsLibrary" },
                                            { GUID_Downloads, "Downloads" }, { GUID_Favorites, "Favorites" },
                                            { GUID_Fonts, "Fonts" }, { GUID_Games, "Games" },
                                            { GUID_GameTasks, "GameTasks" }, { GUID_History, "History" },
                                            { GUID_HomeGroup, "HomeGroup" }, { GUID_HomeGroupCurrentUser, "HomeGroupCurrentUser" },
                                            { GUID_ImplicitAppShortcuts, "ImplicitAppShortcuts" }, { GUID_InternetCache, "InternetCache" },
                                            { GUID_InternetFolder, "InternetFolder" }, { GUID_Libraries, "Libraries" },
                                            { GUID_Links, "Links" }, { GUID_LocalAppData, "LocalAppData" },
                                            { GUID_LocalAppDataLow, "LocalAppDataLow" }, { GUID_LocalizedResourcesDir, "LocalizedResourcesDir" },
                                            { GUID_Music, "Music" }, { GUID_MusicLibrary, "MusicLibrary" },
                                            { GUID_NetHood, "NetHood" }, { GUID_NetworkFolder, "NetworkFolder" },
                                            { GUID_OriginalImages, "OriginalImages" }, { GUID_PhotoAlbums, "PhotoAlbums" },
                                            { GUID_Pictures, "Pictures" }, { GUID_PicturesLibrary, "PicturesLibrary" },
                                            { GUID_Playlists, "Playlists" }, { GUID_PrintersFolder, "PrintersFolder" },
                                            { GUID_PrintHood, "PrintHood" }, { GUID_Profile, "Profile" },
                                            { GUID_ProgramData, "ProgramData" }, { GUID_ProgramFiles, "ProgramFiles" },
                                            { GUID_ProgramFilesCommon, "ProgramFilesCommon" }, { GUID_ProgramFilesCommonX64, "ProgramFilesCommonX64" },
                                            { GUID_ProgramFilesCommonX86, "ProgramFilesCommonX86" }, { GUID_ProgramFilesX64, "ProgramFilesX64" },
                                            { GUID_ProgramFilesX86, "ProgramFilesX86" }, { GUID_Programs, "Programs" },
                                            { GUID_Public, "Public" }, { GUID_PublicDesktop, "PublicDesktop" },
                                            { GUID_PublicDocuments, "PublicDocuments" }, { GUID_PublicDownloads, "PublicDownloads" },
                                            { GUID_PublicGameTasks, "PublicGameTasks" }, { GUID_PublicLibraries, "PublicLibraries" },
                                            { GUID_PublicMusic, "PublicMusic" }, { GUID_PublicPictures, "PublicPictures" },
                                            { GUID_PublicRingtones, "PublicRingtones" }, { GUID_PublicUserTiles, "PublicUserTiles" },
                                            { GUID_PublicVideos, "PublicVideos" }, { GUID_QuickLaunch, "QuickLaunch" },
                                            { GUID_Recent, "Recent" }, { GUID_RecordedTV, "RecordedTV" },
                                            { GUID_RecordedTVLibrary, "RecordedTVLibrary" }, { GUID_RecycleBin, "RecycleBin" },
                                            { GUID_ResourceDir, "ResourceDir" }, { GUID_Ringtones, "Ringtones" },
                                            { GUID_RoamingAppData, "RoamingAppData" }, { GUID_RoamingTiles, "RoamingTiles" },
                                            { GUID_SampleMusic, "SampleMusic" }, { GUID_SamplePictures, "SamplePictures" },
                                            { GUID_SamplePlaylists, "SamplePlaylists" }, { GUID_SampleVideos, "SampleVideos" },
                                            { GUID_SavedGames, "SavedGames" }, { GUID_SavedSearches, "SavedSearches" },
                                            { GUID_SEARCH_CSC, "SEARCH_CSC" }, { GUID_SEARCH_MAPI, "SEARCH_MAPI" },
                                            { GUID_SearchHome, "SearchHome" }, { GUID_SendTo, "SendTo" },
                                            { GUID_SidebarDefaultParts, "SidebarDefaultParts" }, { GUID_SidebarParts, "SidebarParts" },
                                            { GUID_StartMenu, "StartMenu" }, { GUID_Startup, "Startup" },
                                            { GUID_SyncManagerFolder, "SyncManagerFolder" }, { GUID_SyncResults, "SyncResults" },
                                            { GUID_SyncSetupFolder, "SyncSetupFolder" }, { GUID_System, "System" },
                                            { GUID_SystemX86, "SystemX86" }, { GUID_Templates, "Templates" },
                                            { GUID_TreeProperties, "TreeProperties" }, { GUID_UserPinned, "UserPinned" },
                                            { GUID_UserProfiles, "UserProfiles" }, { GUID_UserProgramFiles, "UserProgramFiles" },
                                            { GUID_UserProgramFilesCommon, "UserProgramFilesCommon" }, { GUID_UsersFiles, "UsersFiles" },
                                            { GUID_UsersLibraries, "UsersLibraries" }, { GUID_UsersLibrariesFolder, "UsersLibrariesFolder" },
                                            { GUID_UserTiles, "UserTiles" }, { GUID_Videos, "Videos" },
                                            { GUID_VideosLibrary, "VideosLibrary" }, { GUID_Windows, "Windows" },

                                            { GUID_My_Computer, "My Computer" }, { GUID_My_Documents, "My Documents" },
                                            { GUID_Control_Panel, "Control Panel" }, { GUID_Control_Panel2, "Control Panel" },
                                            { GUID_Internet_Explorer, "Internet Explorer" }, { GUID_My_Games, "My Games" },
                                            { GUID_My_Network_Places, "My Network Places" }, { GUID_Network_Connections, "Network Connections" },
                                            { GUID_Printers_and_Faxes, "Printers and Faxes" }, { GUID_Dial_up_Connection, "Dial-up Connection" },
                                            { GUID_Show_Desktop, "Show Desktop" }, { GUID_Users, "Users" },
                                            { GUID_Window_Switcher, "Window Switcher" }, { GUID_CD_Burner, "CD Burner" },
                                            { GUID_CSC_Folder, "CSC Folder" }, { GUID_Search, "Search" },
                                            { GUID_Help_and_Support, "Help and Support" }, { GUID_Windows_Security, "Windows Security" },
                                            { GUID_Run, "Run..." }, { GUID_Email, "E-mail" },
                                            { GUID_Set_Program_Access, "Set Program Access and Defaults" }, { GUID_Start_Menu_Provider, "StartMenuProviderFolder" },
                                            { GUID_Start_Menu, "Start Menu" }, { GUID_Search_Results, "Search Results" },
                                            { GUID_Unknown, "GUID_Unknown" }};

unsigned int Utils::lenFourBytes(std::vector<unsigned int> vec) {
    // std::cout << "__lenFourBytes start__" << std::endl;
    unsigned int result = (vec[0] << 8) | vec[1];
    unsigned int result2 = (vec[2] << 8) | vec[3];
    unsigned int result3 = (result << 16) | result2;

    return result3;
}

int Utils::lenFourBytesChar(std::vector<unsigned char> vec) {
    // std::cout << "__lenFourBytesChar start__" << std::endl;
    if(vec.size() == 4) {
        unsigned int result = (vec[0] << 8) | vec[1];
        unsigned int result2 = (vec[2] << 8) | vec[3];
        unsigned int result3 = (result << 16) | result2;
        return result3;
    }
    return 0;
}
int Utils::lenFourBytesFromPos(std::vector<unsigned int> vec, int pos) {
    // std::cout << "__lenFourBytesFromPos start__" << std::endl;
    unsigned int result = (vec[pos] << 8) | vec[pos+1];
    unsigned int result2 = (vec[pos+2] << 8) | vec[pos+3];
    unsigned int result3 = (result << 16) | result2;

    return result3;
}

int Utils::lenTwoBytesChar(std::vector<unsigned char> vec) {
    // std::cout << "__lenTwoBytesChar start__" << std::endl;
    unsigned int result = (vec[0] << 8) | vec[1];
    std::string r = to_string(result);

    return result;
}

int Utils::lenTwoBytes(std::vector<unsigned int> vec) {
    // std::cout << "__lenTwoBytes start__" << std::endl;
    unsigned int result = (vec[0] << 8) | vec[1];
    return result;
}
int Utils::lenTwoBytesFromPos(std::vector<unsigned int> vec, int pos){
    // std::cout << "__lenTwoBytesFromPos start__" << std::endl;
    unsigned int result = (vec[pos] << 8) | vec[pos+1];
    return result;
}

void Utils::print_vec(std::vector<unsigned int> vec) {
    // std::cout << "__print_vec start__" << std::endl;
    int count = 0;
    for (int x: vec) {
        if(count >= 25) {
            std::cout << endl << "                                    ";
            count = 0;
        }
        std::cout << hex << x << ' ';
        ++count;
    }
    std::cout << endl;
}
void Utils::print_vec_from_to(std::vector<unsigned int> vec, int from, int to) {
    // std::cout << "__print_vec_from_to start__" << std::endl;
    int count = 0;
    for (int i = from; i < to; ++i) {
        if(count >= 25) {
            std::cout << endl << "                                    ";
            count = 0;
        }
        std::cout << hex << vec[i] << ' ';
        ++count;
    }
    std::cout << endl;
}

void Utils::print_vec_unicode(std::vector<unsigned int>& vec) {
    // std::cout << "__print_vec_unicode start__" << std::endl;
    bool lastCharIsBlank = false;
    for(int i=0; i < vec.size(); ++i){
        if(i > 0 && vec[i] == 0 && !lastCharIsBlank) {
            std::cout << (char)vec[i];
            continue;
        }
        if (vec[i] == 0) {
            lastCharIsBlank = true;
            continue;
        }
        std::cout << (char)vec[i];
    }
    std::cout << endl;
}

void Utils::print_vec_unicode_from_to(std::vector<unsigned int>& vec, int from, int to) {
    // std::cout << "__print_vec_unicode_from_to start__" << std::endl;
    bool lastCharIsBlank = false;
    for(int i=from; i < to; ++i){
        if(i > 0 && vec[i] == 0 && !lastCharIsBlank) {
            std::cout << (char)vec[i];
            continue;
        }
        if (vec[i] == 0) {
            lastCharIsBlank = true;
            continue;
        }
        std::cout << (char)vec[i];
    }
    std::cout << endl;
}
int Utils::getFirstPosWhereByteIsNull(std::vector<unsigned int>& vec, int from) {
    // std::cout << "__getFirstPosWhereByteIsNull start__" << std::endl;
    for(int i=from; i < vec.size(); ++i){
        if(vec[i] == 0x00)
            return i;
    }
    return vec.size()-1;
}

int Utils::getCountOfBytesBeforeNullTerminator(std::vector<unsigned char>::const_iterator it) {
    // std::cout << "__getCountOfBytesBeforeNullTerminator start__" << std::endl;
    int countBytesBeforeNullTerminated = 0;
    auto itCopy = it;
    // Получаем сколько байт нужно считать до нультермитатора
    while ((int)*itCopy != 0x00 && (int)*(itCopy + 1) != 0x00 ) {
        ++countBytesBeforeNullTerminated;
        ++itCopy;
    }
    return countBytesBeforeNullTerminated + 3;
}
int Utils::getCountOfBytesBeforeNullTerminatorInt(std::vector<unsigned int>::const_iterator it) {
    // std::cout << "__getCountOfBytesBeforeNullTerminatorInt start__" << std::endl;
    int countBytesBeforeNullTerminated = 0;
    auto itCopy = it;
    // Получаем сколько байт нужно считать до нультермитатора
    while ((int)*itCopy != 0x00 && (int)*(itCopy + 1) != 0x00 ) {
        ++countBytesBeforeNullTerminated;
        ++itCopy;
    }
    return countBytesBeforeNullTerminated + 3;
}

std::vector<LinkTargetIDList::ItemIDList> Utils::fillItemIdList(int count, std::vector<unsigned char>::const_iterator it) {
    // std::cout << "__fillItemIdList start__" << std::endl;
    std::vector<LinkTargetIDList::ItemIDList> IDList;
    while (count > 0) {
        LinkTargetIDList::ItemIDList itemIdList;
        copy(it, it + 2, std::back_inserter(itemIdList.ItemIDSize));          // 2 byte
        it = it + 2;
        reverse(itemIdList.ItemIDSize.begin(), itemIdList.ItemIDSize.end());
        int itemIDSize = Utils::lenTwoBytes(itemIdList.ItemIDSize);

        copy(it, it + itemIDSize - 2, std::back_inserter(itemIdList.Data));       // itemIDSize byte
        reverse(itemIdList.Data.begin(), itemIdList.Data.end());
        it = it + itemIDSize - 2;

        IDList.push_back(itemIdList);
        count = count - itemIDSize;
    }
    return IDList;
}

long long int Utils::vectEightBytesToUnsignedInt(std::vector<unsigned int> vec, int pos) {
    // std::cout << "__vectEightBytesToUnsignedInt start__" << std::endl;
    unsigned int result = (vec[pos+0] << 8) | vec[pos+1];
    unsigned int result2 = (vec[pos+2] << 8) | vec[pos+3];
    long long int result3 = (result << 16) | result2;

    unsigned int result4 = (vec[pos+4] << 8) | vec[pos+5];
    unsigned int result5 = (vec[pos+6] << 8) | vec[pos+7];
    long long int result6 = (result4 << 16) | result5;

    long long int result7 = (result3 << 32) | result6;
    return  result7;
}
unsigned int Utils::vectFourBytesToUnsignedInt(std::vector<unsigned int> vec, int pos) {
    // std::cout << "__vectFourBytesToUnsignedInt start__" << std::endl;
    unsigned int result = (vec[pos] << 8) | vec[pos+1];
    unsigned int result2 = (vec[pos+2] << 8) | vec[pos+3];
    unsigned int result3 = (result << 16) | result2;
    return result3;
}
unsigned int Utils::vectTwoToUnsignedInt(std::vector<unsigned int> vec, int pos) {
    // std::cout << "__vectTwoToUnsignedInt start__" << std::endl;
    unsigned int result = (vec[pos] << 8) | vec[pos + 1];
    return result;
}

time_t Utils::convertWindowsTimeToUnixTime(long long int input) {
    // std::cout << "__convertWindowsTimeToUnixTime start__" << std::endl;
    long long int temp;
    temp = input / TICKS_PER_SECOND; //convert from 100ns intervals to seconds;
    temp = temp - EPOCH_DIFFERENCE;  //subtract number of seconds between epochs
    return (time_t) temp;
}
void Utils::getDateFromPos(std::vector<unsigned int> vec, int pos) {
    // std::cout << "__getDateFromPos start__" << std::endl;
    long long int time_l = vectEightBytesToUnsignedInt(vec, pos);
    time_t rawtime = convertWindowsTimeToUnixTime(time_l);
    struct tm * timeinfo;

    timeinfo = localtime(&rawtime);
    cout << asctime(timeinfo);
}

void Utils::printSid(std::vector<unsigned int> vec, int pos) {
    // std::cout << "__printSid start__" << std::endl;
    cout << hex << vec[pos+3] <<  " " << hex << vec[pos+2] << " " << hex << vec[pos+1] << " " << hex << vec[pos] << " " << "-" << " " <<
            hex << vec[pos+5] << " " << hex << vec[pos+4] << " " << "-" << " " << hex << vec[pos+7] << " " << hex << vec[pos+6] << " " << "-"  << " " <<
            hex << vec[pos+8] << " " << hex << vec[pos+9] << " " << "-" << " " <<
            hex << vec[pos+10] << " " << hex << vec[pos+11] << " " << hex << vec[pos+12] << " " <<
            hex << vec[pos+13] << " " << hex << vec[pos+14] << " " << hex << vec[pos+15];
}

void Utils::printMacAddr(std::vector<unsigned int> vec, int pos) {
    // std::cout << "__printMacAddr start__" << std::endl;
    cout << hex << vec[pos+10] <<  ":" << vec[pos+11] << ":" << vec[pos+12] << ":"
        << vec[pos+13] << ":" << vec[pos+14]  << ":" << vec[pos+15] << endl;
}

std::string Utils::getClsidType(std::vector<unsigned int> vec) {
    // std::cout << "__getClsidType start__" << std::endl;
    for (int i = 0; clsid_list[i].clsid != GUID_Unknown; i++) {
        if (compareClsidType(vec, clsid_list[i].clsid)) {
            return clsid_list[i].name;
        }
    }
    return "Not found";
}
bool Utils::compareClsidType(std::vector<unsigned int> vec, std::string clsid) {
    // std::cout << "__compareClsidType start__" << std::endl;
    int j = 0;      // Used for cases when clsid contains \x00 -> I remove all \x00 from clsid-s and it's len = 15 or 14

    for(int i = 0 ; i < 16; ++i) {
        if((vec[i] == 0x00) && (clsid.size() == 15 || clsid.size() == 14))
            continue;

        if((char)vec[i] != (char)clsid.at(j))
            return false;

        ++j;
    }
    return true;
}

void Utils::parseItemData(std::vector<unsigned int> data) {
    // std::cout << "__parseItemData start__" << std::endl;
    if(data.size() == 0)        // For cases when  ItemID has len = 0
        return;
    unsigned int type = data[0];
    switch (type) {
        case TYPE_FILE_OLD:
            cout << "TYPE_FILE_OLD: " << endl;
        case TYPE_DIRECTORY_OLD:{
            if (type == TYPE_DIRECTORY_OLD)
                cout << "TYPE_DIRECTORY_OLD: " << endl;
        }
        case TYPE_FILE: {
            if (type == TYPE_FILE)
                cout << "TYPE_FILE: " << endl;
        }
        case TYPE_DIRECTORY: {
            if (type == TYPE_DIRECTORY)
                cout << "TYPE_DIRECTORY: " << endl;
            cout << Utils::defaultOffset << "  Short Name: ";
            int endNamePos = Utils::getFirstPosWhereByteIsNull(data, 12);
            int i = endNamePos;
            int rightPartOfData = data.size() - endNamePos - 15;

            while(rightPartOfData > 0) {
                if((data[i]==0) && (data[i+1]==0) && (data[i+2]==0) && (data[i+3]==0) && (data[i+4]==0) &&
                   (data[i+5]==0) && (data[i+6]==0) && (data[i+7]==0) && (data[i+8]==0) && (data[i+9]==0) &&
                   (data[i+10]==0) && (data[i+11]==0) && (data[i+12]==0) && (data[i+13]==0) && (data[i+14]==0))
                    break;

                ++i;
                --rightPartOfData;
            }

            Utils::print_vec_unicode_from_to(data, 12, endNamePos);
            cout  << Utils::defaultOffset << "  Long Name:  ";
            Utils::print_vec_unicode_from_to(data, i + 19, data.size() - 3);
            cout << endl;
            break;
        }
        case TYPE_DRIVE_OLD:
            cout << "TYPE_DRIVE_OLD: " << endl;
            //break;
        case TYPE_DRIVE:
            Utils::print_vec_unicode(data);
            cout << endl;
            break;
        case TYPE_CLSID: {
            cout << "TYPE_CLSID: ";
            Utils::printSid(data, 2);
            std::vector<unsigned int> dataTmp;
            for(int i = 2; i < data.size(); ++i) {
                dataTmp.push_back(data[i]);
            }
            cout << " : " << Utils::getClsidType(dataTmp) << endl;
            break;
        }
        default:
            cout << "UNKNOWN type for ItemID" << endl;
    }
}