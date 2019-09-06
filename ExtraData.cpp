//
// Created by user on 30.08.2019.
//

#include "ExtraData.h"
#include "ShellLinkHeader.h"
#include "Utils.h"

using namespace std;

ExtraData::ExtraData(ReadStream *readStream, int readFrom) {
    fillExtraData(readStream, readFrom);
}

void ExtraData::fillExtraData(ReadStream *readStream, int readFrom) {
    int tmpReadFrom = readFrom;

    while (true) {
        vector<unsigned char> blockSize  = readStream->read(tmpReadFrom,4);
        reverse(blockSize.begin(), blockSize.end());

        if (blockSize[3] == 0x00000000) {
            std::copy(blockSize.begin(), blockSize.begin() + 4, std::back_inserter(TerminalBlock));
            break;
        }

        int len = Utils::lenFourBytes(blockSize);

        // Но что, если обе структуры должны быть?????
        if (len == 0x000000CC && !ShellLinkHeader::EnableTargetMetadataIsSet() && !consolePropsIsSet) { // чтобы пройти дальше в случе ошибки
            /* CONSOLE_PROPS struct*/
            std::cout << "CONSOLE_PROPS struct" << endl;
            vector<unsigned char> consolePropsStruct  = readStream->read(tmpReadFrom,204);
            auto it = consolePropsStruct.begin();

            std::copy(it, it + 4, std::back_inserter(CONSOLE_PROPS.BlockSize));
            it = it + 4;
            std::copy(it, it + 4, std::back_inserter(CONSOLE_PROPS.BlockSignature));
            it = it + 4;
            std::copy(it, it + 2, std::back_inserter(CONSOLE_PROPS.FillAttributes));
            it = it + 2;
            std::copy(it, it + 2, std::back_inserter(CONSOLE_PROPS.PopupFillAttributes));
            it = it + 2;
            std::copy(it, it + 2, std::back_inserter(CONSOLE_PROPS.ScreenBufferSizeX));
            it = it + 2;
            std::copy(it, it + 2, std::back_inserter(CONSOLE_PROPS.ScreenBufferSizeY));
            it = it + 2;
            std::copy(it, it + 2, std::back_inserter(CONSOLE_PROPS.WindowSizeX));
            it = it + 2;
            std::copy(it, it + 2, std::back_inserter(CONSOLE_PROPS.WindowSizeY));
            it = it + 2;
            std::copy(it, it + 2, std::back_inserter(CONSOLE_PROPS.WindowOriginX));
            it = it + 2;
            std::copy(it, it + 2, std::back_inserter(CONSOLE_PROPS.WindowOriginY));
            it = it + 2;
            std::copy(it, it + 4, std::back_inserter(CONSOLE_PROPS.UNUSED1));
            it = it + 4;
            std::copy(it, it + 4, std::back_inserter(CONSOLE_PROPS.UNUSED2));
            it = it + 4;
            std::copy(it, it + 4, std::back_inserter(CONSOLE_PROPS.FontSize));
            it = it + 4;
            std::copy(it, it + 4, std::back_inserter(CONSOLE_PROPS.FontFamily));
            it = it + 4;
            std::copy(it, it + 4, std::back_inserter(CONSOLE_PROPS.FontWeight));
            it = it + 4;
            std::copy(it, it + 64, std::back_inserter(CONSOLE_PROPS.FaceName));
            it = it + 64;
            std::copy(it, it + 4, std::back_inserter(CONSOLE_PROPS.CursorSize));
            it = it + 4;
            std::copy(it, it + 4, std::back_inserter(CONSOLE_PROPS.FullScreen));
            it = it + 4;
            std::copy(it, it + 4, std::back_inserter(CONSOLE_PROPS.QuickEdit));
            it = it + 4;
            std::copy(it, it + 4, std::back_inserter(CONSOLE_PROPS.InsertMode));
            it = it + 4;
            std::copy(it, it + 4, std::back_inserter(CONSOLE_PROPS.AutoPosition));
            it = it + 4;
            std::copy(it, it + 4, std::back_inserter(CONSOLE_PROPS.HistoryBufferSize));
            it = it + 4;
            std::copy(it, it + 4, std::back_inserter(CONSOLE_PROPS.NumberOfHistoryBuffers));
            it = it + 4;
            std::copy(it, it + 4, std::back_inserter(CONSOLE_PROPS.HistoryNoDup));
            it = it + 4;
            std::copy(it, it + 64, std::back_inserter(CONSOLE_PROPS.ColorTable));

            tmpReadFrom = tmpReadFrom + 204;
            consolePropsIsSet= true;
            continue;
        }
        if (len == 0x0000000C && !ShellLinkHeader::EnableTargetMetadataIsSet() && !consoleFEIsSet) {
            /* CONSOLE_FE_PROPS struct*/
            std::cout << "CONSOLE_FE_PROPS struct" << endl;
            vector<unsigned char> consoleFEPropsStruct  = readStream->read(tmpReadFrom,12);
            auto it = consoleFEPropsStruct.begin();

            std::copy(it, it + 4, std::back_inserter(CONSOLE_FE_PROPS.BlockSize));
            it = it + 4;
            std::copy(it, it + 4, std::back_inserter(CONSOLE_FE_PROPS.BlockSignature));
            it = it + 4;
            std::copy(it, it + 4, std::back_inserter(CONSOLE_FE_PROPS.CodePage));

            tmpReadFrom = tmpReadFrom + 12;
            consoleFEIsSet = true;
            continue;
        }
        if (ShellLinkHeader::HasDarwinIDIsSet() && len ==  0x00000314 && !drownPropsIsSet) {
            /* DARWIN_PROPS struct*/
            std::cout << "DARWIN_PROPS struct" << endl;
            vector<unsigned char> darwinPropsStruct  = readStream->read(tmpReadFrom,788);
            auto it = darwinPropsStruct.begin();

            std::copy(it, it + 4, std::back_inserter(DARWIN_PROPS.BlockSize));
            it = it + 4;
            std::copy(it, it + 4, std::back_inserter(DARWIN_PROPS.BlockSignature));
            it = it + 4;
            std::copy(it, it + 260, std::back_inserter(DARWIN_PROPS.DarwinDataAnsi));
            it = it + 260;
            std::copy(it, it + 520, std::back_inserter(DARWIN_PROPS.DarwinDataUnicode));

            tmpReadFrom = tmpReadFrom + 788;
            drownPropsIsSet = true;
            continue;
        }
        if (ShellLinkHeader::HasExpStringIsSet() && len ==  0x00000314 && !environmentPropsIsSet) {
            /* ENVIRONMENT_PROPS struct*/
            std::cout << "ENVIRONMENT_PROPS struct" << endl;
            vector<unsigned char> environmentPropsStruct  = readStream->read(tmpReadFrom,788);
            auto it = environmentPropsStruct.begin();

            std::copy(it, it + 4, std::back_inserter(ENVIRONMENT_PROPS.BlockSize));
            it = it + 4;
            std::copy(it, it + 4, std::back_inserter(ENVIRONMENT_PROPS.BlockSignature));
            it = it + 4;
            std::copy(it, it + 260, std::back_inserter(ENVIRONMENT_PROPS.TargetAnsi));
            it = it + 260;
            std::copy(it, it + 520, std::back_inserter(ENVIRONMENT_PROPS.TargetUnicode));

            tmpReadFrom = tmpReadFrom + 788;
            environmentPropsIsSet = true;
            continue;
        }
        if (ShellLinkHeader::HasExpIconIsSet() && len ==  0x00000314 && !iconEnvironmentPropsIsSet) {
            /* ICON_ENVIRONMENT_PROPS struct*/
            std::cout << "ICON_ENVIRONMENT_PROPS struct" << endl;
            vector<unsigned char> iconEnvironmentPropsStruct  = readStream->read(tmpReadFrom,788);
            auto it = iconEnvironmentPropsStruct.begin();

            std::copy(it, it + 4, std::back_inserter(ICON_ENVIRONMENT_PROPS.BlockSize));
            it = it + 4;
            std::copy(it, it + 4, std::back_inserter(ICON_ENVIRONMENT_PROPS.BlockSignature));
            it = it + 4;
            std::copy(it, it + 260, std::back_inserter(ICON_ENVIRONMENT_PROPS.TargetAnsi));
            it = it + 260;
            std::copy(it, it + 520, std::back_inserter(ICON_ENVIRONMENT_PROPS.TargetUnicode));

            tmpReadFrom = tmpReadFrom + 788;
            iconEnvironmentPropsIsSet = true;
            continue;
        }
        // Но что, если обе структуры должны быть?????
        if (len ==  0x0000001C && !ShellLinkHeader::EnableTargetMetadataIsSet() && !knownFolderPropsIsSet) {
            /* KNOWN_FOLDER_PROPS struct*/
            std::cout << "KNOWN_FOLDER_PROP struct" << endl;
            vector<unsigned char> knownFolderPropsStruct  = readStream->read(tmpReadFrom,28);
            auto it = knownFolderPropsStruct.begin();

            std::copy(it, it + 4, std::back_inserter(KNOWN_FOLDER_PROPS.BlockSize));
            it = it + 4;
            std::copy(it, it + 4, std::back_inserter(KNOWN_FOLDER_PROPS.BlockSignature));
            it = it + 4;
            std::copy(it, it + 16, std::back_inserter(KNOWN_FOLDER_PROPS.KnownFolderID));
            it = it + 16;
            std::copy(it, it + 4, std::back_inserter(KNOWN_FOLDER_PROPS.Offset));

            tmpReadFrom = tmpReadFrom + 28;
            knownFolderPropsIsSet = true;
            continue;
        }
        if (ShellLinkHeader::EnableTargetMetadataIsSet() && len >=  0x0000000C && !propertyStorePropsIsSet) {
            /* PROPERTY_STORE_PROPS struct*/
            std::cout << "PROPERTY_STORE_PROPS struct" << endl;
            vector<unsigned char> propertyStoreBlockSize  = readStream->read(tmpReadFrom,4);
            std::copy(propertyStoreBlockSize.begin(), propertyStoreBlockSize.end(),
                      std::back_inserter(PROPERTY_STORE_PROPS.BlockSize));

            reverse(propertyStoreBlockSize.begin(), propertyStoreBlockSize.end());
            int lenTmp = Utils::lenFourBytes(propertyStoreBlockSize);

            vector<unsigned char> propertyStorePropsStruct  = readStream->read(tmpReadFrom, lenTmp);
            auto it = propertyStorePropsStruct.begin() + 4;
            std::copy(it, it + 4, std::back_inserter(PROPERTY_STORE_PROPS.BlockSignature));
            it = it + 4;
            std::copy(it, it + lenTmp - 8, std::back_inserter(PROPERTY_STORE_PROPS.PropertyStore));

            tmpReadFrom = tmpReadFrom + lenTmp;
            propertyStorePropsIsSet = true;
            continue;
        }
        if (ShellLinkHeader::RunWithShimLayerIsSet() && len >= 0x00000088 && !shimPropsIsSet) {
            /* SHIM_PROPS struct*/
            std::cout << "SHIM_PROPS struct" << endl;
            vector<unsigned char> shimPropsBlockSize  = readStream->read(tmpReadFrom,4);
            std::copy(shimPropsBlockSize.begin(), shimPropsBlockSize.end(),
                      std::back_inserter(SHIM_PROPS.BlockSize));

            reverse(shimPropsBlockSize.begin(), shimPropsBlockSize.end());
            int lenTmp = Utils::lenFourBytes(shimPropsBlockSize);

            vector<unsigned char> shimPropsStruct  = readStream->read(tmpReadFrom,lenTmp);
            auto it = shimPropsStruct.begin() + 4;
            std::copy(it, it + 4, std::back_inserter(SHIM_PROPS.BlockSignature));
            it = it + 4;
            std::copy(it, it + lenTmp - 8, std::back_inserter(SHIM_PROPS.LayerName));

            tmpReadFrom = tmpReadFrom + lenTmp;
            shimPropsIsSet = true;
            continue;
        }
        if (len == 0x00000010 && !sFolderPropsIsSet) {
            /* SPECIAL_FOLDER_PROPS struct*/
            std::cout << "SPECIAL_FOLDER_PROPS struct" << endl;
            vector<unsigned char> specialFolderPropsStruct  = readStream->read(tmpReadFrom,16);
            auto it = specialFolderPropsStruct.begin();

            std::copy(it, it + 4, std::back_inserter(SPECIAL_FOLDER_PROPS.BlockSize));
            it = it + 4;
            std::copy(it, it + 4, std::back_inserter(SPECIAL_FOLDER_PROPS.BlockSignature));
            it = it + 4;
            std::copy(it, it + 4, std::back_inserter(SPECIAL_FOLDER_PROPS.SpecialFolderID));
            it = it + 4;
            std::copy(it, it + 4, std::back_inserter(SPECIAL_FOLDER_PROPS.Offset));

            tmpReadFrom = tmpReadFrom + 16;
            sFolderPropsIsSet = true;
            continue;
        }
        if (!ShellLinkHeader::ForceNoLinkTrackIsSet() && len == 0x00000060 && !trackerPropsIsSet) {
            /* TRACKER_PROPS struct*/
            std::cout << "TRACKER_PROPS struct" << endl;
            vector<unsigned char> trackerPropsStruct  = readStream->read(tmpReadFrom,96);
            auto it = trackerPropsStruct.begin();

            std::copy(it, it + 4, std::back_inserter(TRACKER_PROPS.BlockSize));
            it = it + 4;
            std::copy(it, it + 4, std::back_inserter(TRACKER_PROPS.BlockSignature));
            it = it + 4;
            std::copy(it, it + 4, std::back_inserter(TRACKER_PROPS.Length));
            it = it + 4;
            std::copy(it, it + 4, std::back_inserter(TRACKER_PROPS.Version));
            it = it + 4;
            std::copy(it, it + 16, std::back_inserter(TRACKER_PROPS.MachineID));
            it = it + 16;
            std::copy(it, it + 32, std::back_inserter(TRACKER_PROPS.Droid));
            it = it + 32;
            std::copy(it, it + 32, std::back_inserter(TRACKER_PROPS.DroidBirth));
            it = it + 32;

            tmpReadFrom = tmpReadFrom + 96;
            trackerPropsIsSet = true;
            continue;
        }
        if (len >= 0x0000000A && !vistaAndAboveIDListPropsIsSet) {
            /* VISTA_AND_ABOVE_IDLIST_PROPS struct*/
            std::cout << "VISTA_AND_ABOVE_IDLIST_PROPS struct" << endl;
            vector<unsigned char> vistaBlockSize  = readStream->read(tmpReadFrom,4);
            std::copy(vistaBlockSize.begin(), vistaBlockSize.end(),
                      std::back_inserter(VISTA_AND_ABOVE_IDLIST_PROPS.BlockSize));

            reverse(vistaBlockSize.begin(), vistaBlockSize.end());
            int lenTmp = Utils::lenFourBytes(vistaBlockSize);

            vector<unsigned char> vistaStruct  = readStream->read(tmpReadFrom,lenTmp);
            auto it = vistaStruct.begin() + 4;
            std::copy(it, it + 4, std::back_inserter(VISTA_AND_ABOVE_IDLIST_PROPS.BlockSignature));
            it = it + 4;
            Utils::fillItemIdList(VISTA_AND_ABOVE_IDLIST_PROPS.IDList,  lenTmp - 10, it);
            it = it + lenTmp - 10;
            std::copy(it, it + 2, std::back_inserter(VISTA_AND_ABOVE_IDLIST_PROPS.TerminalID));

            tmpReadFrom = tmpReadFrom + lenTmp;
            vistaAndAboveIDListPropsIsSet = true;
        }
    }

    reverseAllFields();
}

/* Reverse All field (read left -> rigth) */
void ExtraData::reverseAllFields() {
    if (consolePropsIsSet) {
        /* CONSOLE_PROPS struct*/
        reverse(CONSOLE_PROPS.BlockSize.begin(), CONSOLE_PROPS.BlockSize.end());
        reverse(CONSOLE_PROPS.BlockSignature.begin(), CONSOLE_PROPS.BlockSignature.end());
        reverse(CONSOLE_PROPS.FillAttributes.begin(), CONSOLE_PROPS.FillAttributes.end());
        reverse(CONSOLE_PROPS.PopupFillAttributes.begin(), CONSOLE_PROPS.PopupFillAttributes.end());
        reverse(CONSOLE_PROPS.ScreenBufferSizeX.begin(), CONSOLE_PROPS.ScreenBufferSizeX.end());
        reverse(CONSOLE_PROPS.ScreenBufferSizeY.begin(), CONSOLE_PROPS.ScreenBufferSizeY.end());
        reverse(CONSOLE_PROPS.WindowSizeX.begin(), CONSOLE_PROPS.WindowSizeX.end());
        reverse(CONSOLE_PROPS.WindowSizeY.begin(), CONSOLE_PROPS.WindowSizeY.end());
        reverse(CONSOLE_PROPS.WindowOriginX.begin(), CONSOLE_PROPS.WindowOriginX.end());
        reverse(CONSOLE_PROPS.WindowOriginY.begin(), CONSOLE_PROPS.WindowOriginY.end());
        reverse(CONSOLE_PROPS.UNUSED1.begin(), CONSOLE_PROPS.UNUSED1.end());
        reverse(CONSOLE_PROPS.UNUSED2.begin(), CONSOLE_PROPS.UNUSED2.end());
        reverse(CONSOLE_PROPS.FontSize.begin(), CONSOLE_PROPS.FontSize.end());
        reverse(CONSOLE_PROPS.FontFamily.begin(), CONSOLE_PROPS.FontFamily.end());
        reverse(CONSOLE_PROPS.FontWeight.begin(), CONSOLE_PROPS.FontWeight.end());
       // reverse(CONSOLE_PROPS.FaceName.begin(), CONSOLE_PROPS.FaceName.end());   // 64 bytes (Unicode string)
        reverse(CONSOLE_PROPS.CursorSize.begin(), CONSOLE_PROPS.CursorSize.end());
        reverse(CONSOLE_PROPS.FullScreen.begin(), CONSOLE_PROPS.FullScreen.end());
        reverse(CONSOLE_PROPS.QuickEdit.begin(), CONSOLE_PROPS.QuickEdit.end());
        reverse(CONSOLE_PROPS.InsertMode.begin(), CONSOLE_PROPS.InsertMode.end());
        reverse(CONSOLE_PROPS.AutoPosition.begin(), CONSOLE_PROPS.AutoPosition.end());
        reverse(CONSOLE_PROPS.HistoryBufferSize.begin(), CONSOLE_PROPS.HistoryBufferSize.end());
        reverse(CONSOLE_PROPS.NumberOfHistoryBuffers.begin(), CONSOLE_PROPS.NumberOfHistoryBuffers.end());
        reverse(CONSOLE_PROPS.HistoryNoDup.begin(), CONSOLE_PROPS.HistoryNoDup.end());
        reverse(CONSOLE_PROPS.ColorTable.begin(), CONSOLE_PROPS.ColorTable.end());
    }
    if (consoleFEIsSet) {
        /* CONSOLE_FE_PROPS struct*/
        reverse(CONSOLE_FE_PROPS.BlockSize.begin(), CONSOLE_FE_PROPS.BlockSize.end());
        reverse(CONSOLE_FE_PROPS.BlockSignature.begin(), CONSOLE_FE_PROPS.BlockSignature.end());
        reverse(CONSOLE_FE_PROPS.CodePage.begin(), CONSOLE_FE_PROPS.CodePage.end());
    }
    if (drownPropsIsSet) {
        /* DARWIN_PROPS struct*/
        reverse(DARWIN_PROPS.BlockSize.begin(), DARWIN_PROPS.BlockSize.end());
        reverse(DARWIN_PROPS.BlockSignature.begin(), DARWIN_PROPS.BlockSignature.end());
        reverse(DARWIN_PROPS.DarwinDataAnsi.begin(), DARWIN_PROPS.DarwinDataAnsi.end());
        reverse(DARWIN_PROPS.DarwinDataUnicode.begin(), DARWIN_PROPS.DarwinDataUnicode.end());
    }
    if (environmentPropsIsSet) {
        /* ENVIRONMENT_PROPS struct*/
        reverse(ENVIRONMENT_PROPS.BlockSize.begin(), ENVIRONMENT_PROPS.BlockSize.end());
        reverse(ENVIRONMENT_PROPS.BlockSignature.begin(), ENVIRONMENT_PROPS.BlockSignature.end());
        reverse(ENVIRONMENT_PROPS.TargetAnsi.begin(), ENVIRONMENT_PROPS.TargetAnsi.end());
        reverse(ENVIRONMENT_PROPS.TargetUnicode.begin(), ENVIRONMENT_PROPS.TargetUnicode.end());
    }
    if (iconEnvironmentPropsIsSet) {
        /* ICON_ENVIRONMENT_PROPS struct*/
        reverse(ICON_ENVIRONMENT_PROPS.BlockSize.begin(), ICON_ENVIRONMENT_PROPS.BlockSize.end());
        reverse(ICON_ENVIRONMENT_PROPS.BlockSignature.begin(), ICON_ENVIRONMENT_PROPS.BlockSignature.end());
        reverse(ICON_ENVIRONMENT_PROPS.TargetAnsi.begin(), ICON_ENVIRONMENT_PROPS.TargetAnsi.end());
        reverse(ICON_ENVIRONMENT_PROPS.TargetUnicode.begin(), ICON_ENVIRONMENT_PROPS.TargetUnicode.end());
    }
    if (knownFolderPropsIsSet) {
        /* KNOWN_FOLDER_PROPS struct*/
        reverse(KNOWN_FOLDER_PROPS.BlockSize.begin(), KNOWN_FOLDER_PROPS.BlockSize.end());
        reverse(KNOWN_FOLDER_PROPS.BlockSignature.begin(), KNOWN_FOLDER_PROPS.BlockSignature.end());
        reverse(KNOWN_FOLDER_PROPS.KnownFolderID.begin(), KNOWN_FOLDER_PROPS.KnownFolderID.end());
        reverse(KNOWN_FOLDER_PROPS.Offset.begin(), KNOWN_FOLDER_PROPS.Offset.end());
    }
    if (propertyStorePropsIsSet) {
        /* PROPERTY_STORE_PROPS struct*/
        reverse(PROPERTY_STORE_PROPS.BlockSize.begin(), PROPERTY_STORE_PROPS.BlockSize.end());
        reverse(PROPERTY_STORE_PROPS.BlockSignature.begin(), PROPERTY_STORE_PROPS.BlockSignature.end());
        reverse(PROPERTY_STORE_PROPS.PropertyStore.begin(), PROPERTY_STORE_PROPS.PropertyStore.end());
    }
    if (shimPropsIsSet) {
        /* SHIM_PROPS struct*/
        reverse(SHIM_PROPS.BlockSize.begin(), SHIM_PROPS.BlockSize.end());
        reverse(SHIM_PROPS.BlockSignature.begin(), SHIM_PROPS.BlockSignature.end());
        reverse(SHIM_PROPS.LayerName.begin(), SHIM_PROPS.LayerName.end());
    }
    if (sFolderPropsIsSet) {
        /* SPECIAL_FOLDER_PROPS struct*/
        reverse(SPECIAL_FOLDER_PROPS.BlockSize.begin(), SPECIAL_FOLDER_PROPS.BlockSize.end());
        reverse(SPECIAL_FOLDER_PROPS.BlockSignature.begin(), SPECIAL_FOLDER_PROPS.BlockSignature.end());
        reverse(SPECIAL_FOLDER_PROPS.SpecialFolderID.begin(), SPECIAL_FOLDER_PROPS.SpecialFolderID.end());
        reverse(SPECIAL_FOLDER_PROPS.Offset.begin(), SPECIAL_FOLDER_PROPS.Offset.end());
    }
    if (trackerPropsIsSet) {
        /* TRACKER_PROPS struct*/
        reverse(TRACKER_PROPS.BlockSize.begin(), TRACKER_PROPS.BlockSize.end());
        reverse(TRACKER_PROPS.BlockSignature.begin(), TRACKER_PROPS.BlockSignature.end());
        reverse(TRACKER_PROPS.Length.begin(), TRACKER_PROPS.Length.end());
        reverse(TRACKER_PROPS.Version.begin(), TRACKER_PROPS.Version.end());
        reverse(TRACKER_PROPS.MachineID.begin(), TRACKER_PROPS.MachineID.end());
        reverse(TRACKER_PROPS.Droid.begin(), TRACKER_PROPS.Droid.end());
        reverse(TRACKER_PROPS.DroidBirth.begin(), TRACKER_PROPS.DroidBirth.end());
    }
    if (vistaAndAboveIDListPropsIsSet) {
        /* VISTA_AND_ABOVE_IDLIST_PROPS struct*/
        reverse(VISTA_AND_ABOVE_IDLIST_PROPS.BlockSize.begin(), VISTA_AND_ABOVE_IDLIST_PROPS.BlockSize.end());
        reverse(VISTA_AND_ABOVE_IDLIST_PROPS.BlockSignature.begin(), VISTA_AND_ABOVE_IDLIST_PROPS.BlockSignature.end());
        reverse(VISTA_AND_ABOVE_IDLIST_PROPS.IDList.begin(), VISTA_AND_ABOVE_IDLIST_PROPS.IDList.end());
    }
}

void ExtraData::printExtraData() {
    cout << "_______________________ExtraData_________________________" << endl;

    if (consolePropsIsSet) {
        /* CONSOLE_PROPS struct*/
        cout << "CONSOLE_PROP:               " << endl;
    }
    if (consoleFEIsSet) {
        /* CONSOLE_FE_PROPS struct*/
        cout << "CONSOLE_FE_PROPS:               " << endl;

    }
    if (drownPropsIsSet) {
        /* DARWIN_PROPS struct*/
        cout << "DARWIN_PROPS:               " << endl;

    }
    if (environmentPropsIsSet) {
        /* ENVIRONMENT_PROPS struct*/
        cout << "ENVIRONMENT_PROPS:               " << endl;

    }
    if (iconEnvironmentPropsIsSet) {
        /* ICON_ENVIRONMENT_PROPS struct*/
        cout << "ICON_ENVIRONMENT_PROPS:               " << endl;

    }
    if (knownFolderPropsIsSet) {
        /* KNOWN_FOLDER_PROPS struct*/
        cout << "KNOWN_FOLDER_PROPS:               " << endl;

    }
    if (propertyStorePropsIsSet) {
        /* PROPERTY_STORE_PROPS struct*/
        cout << "PROPERTY_STORE_PROPS:               " << endl;

    }
    if (shimPropsIsSet) {
        /* SHIM_PROPS struct*/
        cout << "SHIM_PROPS:               " << endl;

    }
    if (sFolderPropsIsSet) {
        /* SPECIAL_FOLDER_PROPS struct*/
        cout << "SPECIAL_FOLDER_PROPS:               " << endl;

    }
    if (trackerPropsIsSet) {
        /* TRACKER_PROPS struct*/
        cout << "TRACKER_PROPS:               " << endl;
        cout << "   BlockSize:                "  << dec << Utils::lenFourBytes(TRACKER_PROPS.BlockSize) << " bytes" << endl;
        cout << "   BlockSignature:           "; Utils::print_vec(TRACKER_PROPS.BlockSignature);
        cout << "   Length:                   "  << dec << Utils::lenFourBytes(TRACKER_PROPS.Length) << " bytes" << endl;
        cout << "   Version:                  "; Utils::print_vec(TRACKER_PROPS.Version);
        cout << "   MachineID:                "; Utils::print_vec(TRACKER_PROPS.MachineID);
        cout << "   Droid:                    "; Utils::print_vec(TRACKER_PROPS.Droid);
        cout << "   DroidBirth:               "; Utils::print_vec(TRACKER_PROPS.DroidBirth);
    }
    if (vistaAndAboveIDListPropsIsSet) {
        /* VISTA_AND_ABOVE_IDLIST_PROPS struct*/
        cout << "VISTA_AND_ABOVE_IDLIST_PROPS:               " << endl;
        cout << "   BlockSize:                " << dec << Utils::lenFourBytes(VISTA_AND_ABOVE_IDLIST_PROPS.BlockSize) << " bytes" << endl;
        cout << "   BlockSignature:           "; Utils::print_vec(VISTA_AND_ABOVE_IDLIST_PROPS.BlockSignature);
        cout << "   IDList:" << endl;
        for(int i = 0; i < VISTA_AND_ABOVE_IDLIST_PROPS.IDList.size(); ++i){
            cout << "   ItemID " << i + 1 << endl;
            cout << "       ItemIDSize:           "; Utils::print_vec(VISTA_AND_ABOVE_IDLIST_PROPS.IDList[i].ItemIDSize);
            cout << "       Data:                 "; Utils::print_vec(VISTA_AND_ABOVE_IDLIST_PROPS.IDList[i].Data);
        }
        cout << "       TerminalID:         "; Utils::print_vec(VISTA_AND_ABOVE_IDLIST_PROPS.TerminalID);
    }
    cout << "TerminalBlock:                "; Utils::print_vec(TerminalBlock);
    cout << "_________________________________________________________" << endl;
}



void ExtraData::printExtraDataInHexStyle() {
    cout << "________________ExtraData in HEX style___________________" << endl;

    if (consolePropsIsSet) {
        /* CONSOLE_PROPS struct*/
        cout << "CONSOLE_PROPS:               " << endl;
        cout << "   BlockSize:                "; Utils::print_vec(CONSOLE_PROPS.BlockSize);
        cout << "   BlockSignature:           "; Utils::print_vec(CONSOLE_PROPS.BlockSignature);
        cout << "   FillAttributes:           "; Utils::print_vec(CONSOLE_PROPS.FillAttributes);
        cout << "   PopupFillAttributes:      "; Utils::print_vec(CONSOLE_PROPS.PopupFillAttributes);
        cout << "   ScreenBufferSizeX:        "; Utils::print_vec(CONSOLE_PROPS.ScreenBufferSizeX);
        cout << "   ScreenBufferSizeY:        "; Utils::print_vec(CONSOLE_PROPS.ScreenBufferSizeY);
        cout << "   WindowSizeX:              "; Utils::print_vec(CONSOLE_PROPS.WindowSizeX);
        cout << "   WindowSizeY:              "; Utils::print_vec(CONSOLE_PROPS.WindowSizeY);
        cout << "   WindowOriginX:            "; Utils::print_vec(CONSOLE_PROPS.WindowOriginX);
        cout << "   WindowOriginY:            "; Utils::print_vec(CONSOLE_PROPS.WindowOriginY);
        cout << "   UNUSED1:                  "; Utils::print_vec(CONSOLE_PROPS.UNUSED1);
        cout << "   UNUSED2:                  "; Utils::print_vec(CONSOLE_PROPS.UNUSED2);
        cout << "   FontSize:                 "; Utils::print_vec(CONSOLE_PROPS.FontSize);
        cout << "   FontFamily:               "; Utils::print_vec(CONSOLE_PROPS.FontFamily);
        cout << "   FontWeight:               "; Utils::print_vec(CONSOLE_PROPS.FontWeight);
        cout << "   FaceName:                 "; Utils::print_vec(CONSOLE_PROPS.FaceName);
        cout << "   CursorSize:               "; Utils::print_vec(CONSOLE_PROPS.CursorSize);
        cout << "   FullScreen:               "; Utils::print_vec(CONSOLE_PROPS.FullScreen);
        cout << "   QuickEdit:                "; Utils::print_vec(CONSOLE_PROPS.QuickEdit);
        cout << "   InsertMode:               "; Utils::print_vec(CONSOLE_PROPS.InsertMode);
        cout << "   AutoPosition:             "; Utils::print_vec(CONSOLE_PROPS.AutoPosition);
        cout << "   HistoryBufferSize:        "; Utils::print_vec(CONSOLE_PROPS.HistoryBufferSize);
        cout << "   NumberOfHistoryBuffers:   "; Utils::print_vec(CONSOLE_PROPS.NumberOfHistoryBuffers);
        cout << "   HistoryNoDup:             "; Utils::print_vec(CONSOLE_PROPS.HistoryNoDup);
        cout << "   ColorTable:               "; Utils::print_vec(CONSOLE_PROPS.ColorTable);
    }
    if (consoleFEIsSet) {
        /* CONSOLE_FE_PROPS struct*/
        cout << "CONSOLE_FE_PROPS:               " << endl;
        cout << "   BlockSize:                "; Utils::print_vec(CONSOLE_FE_PROPS.BlockSize);
        cout << "   BlockSignature:           "; Utils::print_vec(CONSOLE_FE_PROPS.BlockSignature);
        cout << "   CodePage:                 "; Utils::print_vec(CONSOLE_FE_PROPS.CodePage);
    }
    if (drownPropsIsSet) {
        /* DARWIN_PROPS struct*/
        cout << "DARWIN_PROPS:               " << endl;
        cout << "   BlockSize:                "; Utils::print_vec(DARWIN_PROPS.BlockSize);
        cout << "   BlockSignature:           "; Utils::print_vec(DARWIN_PROPS.BlockSignature);
        cout << "   DarwinDataAnsi:           "; Utils::print_vec(DARWIN_PROPS.DarwinDataAnsi);
        cout << "   DarwinDataUnicode:        "; Utils::print_vec(DARWIN_PROPS.DarwinDataUnicode);
    }
    if (environmentPropsIsSet) {
        /* ENVIRONMENT_PROPS struct*/
        cout << "ENVIRONMENT_PROPS:               " << endl;
        cout << "   BlockSize:                "; Utils::print_vec(ENVIRONMENT_PROPS.BlockSize);
        cout << "   BlockSignature:           "; Utils::print_vec(ENVIRONMENT_PROPS.BlockSignature);
        cout << "   TargetAnsi:               "; Utils::print_vec(ENVIRONMENT_PROPS.TargetAnsi);
        cout << "   TargetUnicode:            "; Utils::print_vec(ENVIRONMENT_PROPS.TargetUnicode);
    }
    if (iconEnvironmentPropsIsSet) {
        /* ICON_ENVIRONMENT_PROPS struct*/
        cout << "ICON_ENVIRONMENT_PROPS:               " << endl;
        cout << "   BlockSize:                "; Utils::print_vec(ICON_ENVIRONMENT_PROPS.BlockSize);
        cout << "   BlockSignature:           "; Utils::print_vec(ICON_ENVIRONMENT_PROPS.BlockSignature);
        cout << "   TargetAnsi:               "; Utils::print_vec(ICON_ENVIRONMENT_PROPS.TargetAnsi);
        cout << "   TargetUnicode:            "; Utils::print_vec(ICON_ENVIRONMENT_PROPS.TargetUnicode);

    }
    if (knownFolderPropsIsSet) {
        /* KNOWN_FOLDER_PROPS struct*/
        cout << "KNOWN_FOLDER_PROPS:               " << endl;
        cout << "   BlockSize:                "; Utils::print_vec(KNOWN_FOLDER_PROPS.BlockSize);
        cout << "   BlockSignature:           "; Utils::print_vec(KNOWN_FOLDER_PROPS.BlockSignature);
        cout << "   KnownFolderID:            "; Utils::print_vec(KNOWN_FOLDER_PROPS.KnownFolderID);
        cout << "   Offset:                   "; Utils::print_vec(KNOWN_FOLDER_PROPS.Offset);
    }
    if (propertyStorePropsIsSet) {
        /* PROPERTY_STORE_PROPS struct*/
        cout << "PROPERTY_STORE_PROPS:               " << endl;
        cout << "   BlockSize:                "; Utils::print_vec(PROPERTY_STORE_PROPS.BlockSize);
        cout << "   BlockSignature:           "; Utils::print_vec(PROPERTY_STORE_PROPS.BlockSignature);
        cout << "   PropertyStore:            "; Utils::print_vec(PROPERTY_STORE_PROPS.PropertyStore);
    }
    if (shimPropsIsSet) {
        /* SHIM_PROPS struct*/
        cout << "SHIM_PROPS:               " << endl;
        cout << "   BlockSize:                "; Utils::print_vec(SHIM_PROPS.BlockSize);
        cout << "   BlockSignature:           "; Utils::print_vec(SHIM_PROPS.BlockSignature);
        cout << "   LayerName:                "; Utils::print_vec(SHIM_PROPS.LayerName);

    }
    if (sFolderPropsIsSet) {
        /* SPECIAL_FOLDER_PROPS struct*/
        cout << "SPECIAL_FOLDER_PROPS:               " << endl;
        cout << "   BlockSize:                "; Utils::print_vec(SPECIAL_FOLDER_PROPS.BlockSize);
        cout << "   BlockSignature:           "; Utils::print_vec(SPECIAL_FOLDER_PROPS.BlockSignature);
        cout << "   SpecialFolderID:          "; Utils::print_vec(SPECIAL_FOLDER_PROPS.SpecialFolderID);
        cout << "   Offset:                   "; Utils::print_vec(SPECIAL_FOLDER_PROPS.Offset);
    }
    if (trackerPropsIsSet) {
        /* TRACKER_PROPS struct*/
        cout << "TRACKER_PROPS:               " << endl;
        cout << "   BlockSize:                "; Utils::print_vec(TRACKER_PROPS.BlockSize);
        cout << "   BlockSignature:           "; Utils::print_vec(TRACKER_PROPS.BlockSignature);
        cout << "   Length:                   "; Utils::print_vec(TRACKER_PROPS.Length);
        cout << "   Version:                  "; Utils::print_vec(TRACKER_PROPS.Version);
        cout << "   MachineID:                "; Utils::print_vec(TRACKER_PROPS.MachineID);
        cout << "   Droid:                    "; Utils::print_vec(TRACKER_PROPS.Droid);
        cout << "   DroidBirth:               "; Utils::print_vec(TRACKER_PROPS.DroidBirth);
    }
    if (vistaAndAboveIDListPropsIsSet) {
        /* VISTA_AND_ABOVE_IDLIST_PROPS struct*/
        cout << "VISTA_AND_ABOVE_IDLIST_PROPS:               " << endl;
        cout << "   BlockSize:                "; Utils::print_vec(VISTA_AND_ABOVE_IDLIST_PROPS.BlockSize);
        cout << "   BlockSignature:           "; Utils::print_vec(VISTA_AND_ABOVE_IDLIST_PROPS.BlockSignature);
        cout << "   IDList:" << endl;
        for(int i = 0; i < VISTA_AND_ABOVE_IDLIST_PROPS.IDList.size(); ++i){
            cout << "   ItemID " << i + 1 << endl;
            cout << "       ItemIDSize:           " << dec
                << Utils::lenTwoBytes(VISTA_AND_ABOVE_IDLIST_PROPS.IDList[i].ItemIDSize) << " bytes" << endl;
            cout << "       Data:                 "; Utils::print_vec(VISTA_AND_ABOVE_IDLIST_PROPS.IDList[i].Data);
        }
        cout << "       TerminalID:         "; Utils::print_vec(VISTA_AND_ABOVE_IDLIST_PROPS.TerminalID);
    }
    cout << "TerminalBlock:                "; Utils::print_vec(TerminalBlock);
    cout << "_________________________________________________________" << endl;
}

