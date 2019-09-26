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
            /* Parsing of PropertyStore struct */
            std::vector<unsigned char> tmpPropertyStore;
            std::copy(it, it + lenTmp - 8, std::back_inserter(tmpPropertyStore));
            auto tmpIt = tmpPropertyStore.begin();
            std::copy(tmpIt, tmpIt + 4, std::back_inserter(PROPERTY_STORE_PROPS.PropertyStore.StorageSize));
            tmpIt = tmpIt + 4;
            std::copy(tmpIt, tmpIt + 4, std::back_inserter(PROPERTY_STORE_PROPS.PropertyStore.Version));
            tmpIt = tmpIt + 4;
            std::copy(tmpIt, tmpIt + 16, std::back_inserter(PROPERTY_STORE_PROPS.PropertyStore.FormatID));
            tmpIt = tmpIt + 16;

            int len = 0;
            do {
                PropertyStorePropsStruct::StringOrIntegerName tmpStringOrIntegerName;
                std::copy(tmpIt, tmpIt + 4, std::back_inserter(tmpStringOrIntegerName.ValueSize));
                tmpIt = tmpIt + 4;
                std::reverse(tmpStringOrIntegerName.ValueSize.begin(), tmpStringOrIntegerName.ValueSize.end());
                len = Utils::lenFourBytes(tmpStringOrIntegerName.ValueSize);
                std::copy(tmpIt, tmpIt + 4, std::back_inserter(tmpStringOrIntegerName.NameSizeOrId));
                tmpIt = tmpIt + 4;
                std::copy(tmpIt, tmpIt + 1, std::back_inserter(tmpStringOrIntegerName.Reserved));
                tmpIt = tmpIt + 1;

                setStringNameStructInPropsStorage();
                if (isStringNameStructInPropsStorage) {
                    /* for StringName */
                    std::reverse(tmpStringOrIntegerName.NameSizeOrId.begin(), tmpStringOrIntegerName.NameSizeOrId.end());
                    int count  = Utils::lenFourBytes(tmpStringOrIntegerName.NameSizeOrId);
                    std::copy(tmpIt, tmpIt + count, std::back_inserter(tmpStringOrIntegerName.Name));
                    tmpIt = tmpIt + count;
                }

                /* for TypedPropertyValue */
                std::copy(tmpIt, tmpIt + 2, std::back_inserter(tmpStringOrIntegerName.Value.Type));
                tmpIt = tmpIt + 2;
                std::copy(tmpIt, tmpIt + 2, std::back_inserter(tmpStringOrIntegerName.Value.Padding));
                tmpIt = tmpIt + 2;
                std::copy(tmpIt, tmpIt + 4, std::back_inserter(tmpStringOrIntegerName.Value.Value));
                tmpIt = tmpIt + 4;

                PROPERTY_STORE_PROPS.PropertyStore.SerializedPropertyValue.push_back(tmpStringOrIntegerName);
            } while (len > 0);

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
            // TODO:  TerminalID как 4 байта???
            VISTA_AND_ABOVE_IDLIST_PROPS.IDList = Utils::fillItemIdList(lenTmp - 12, it);
            it = it + lenTmp - 12;
            std::copy(it, it + 4, std::back_inserter(VISTA_AND_ABOVE_IDLIST_PROPS.TerminalID));

            tmpReadFrom = tmpReadFrom + lenTmp;
            vistaAndAboveIDListPropsIsSet = true;
        }
    }

    reverseAllFields();
}
void ExtraData::setStringNameStructInPropsStorage() {
    if (PROPERTY_STORE_PROPS.PropertyStore.FormatID[0] == 0xD5 && PROPERTY_STORE_PROPS.PropertyStore.FormatID[1] == 0xCD &&
        PROPERTY_STORE_PROPS.PropertyStore.FormatID[2] == 0xD5 && PROPERTY_STORE_PROPS.PropertyStore.FormatID[3] == 0x05 &&
        PROPERTY_STORE_PROPS.PropertyStore.FormatID[4] == 0x2E && PROPERTY_STORE_PROPS.PropertyStore.FormatID[5] == 0x9C &&
        PROPERTY_STORE_PROPS.PropertyStore.FormatID[6] == 0x10 && PROPERTY_STORE_PROPS.PropertyStore.FormatID[7] == 0x1B &&
        PROPERTY_STORE_PROPS.PropertyStore.FormatID[8] == 0x93 && PROPERTY_STORE_PROPS.PropertyStore.FormatID[9] == 0x97 &&
        PROPERTY_STORE_PROPS.PropertyStore.FormatID[10] == 0x08 && PROPERTY_STORE_PROPS.PropertyStore.FormatID[11] == 0x00 &&
        PROPERTY_STORE_PROPS.PropertyStore.FormatID[12] == 0x2B && PROPERTY_STORE_PROPS.PropertyStore.FormatID[13] == 0x2C &&
        PROPERTY_STORE_PROPS.PropertyStore.FormatID[14] == 0xF9 && PROPERTY_STORE_PROPS.PropertyStore.FormatID[15] == 0xAE
        ) { isStringNameStructInPropsStorage = true;}
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
        /* parse of SerializedPropertyStorage */
        reverse(PROPERTY_STORE_PROPS.PropertyStore.StorageSize.begin(), PROPERTY_STORE_PROPS.PropertyStore.StorageSize.end());
        reverse(PROPERTY_STORE_PROPS.PropertyStore.Version.begin(), PROPERTY_STORE_PROPS.PropertyStore.Version.end());
        reverse(PROPERTY_STORE_PROPS.PropertyStore.FormatID.begin(), PROPERTY_STORE_PROPS.PropertyStore.FormatID.end());
        for (int i = 0; i <  PROPERTY_STORE_PROPS.PropertyStore.SerializedPropertyValue.size(); ++i) {
            if (!isStringNameStructInPropsStorage)
                reverse(PROPERTY_STORE_PROPS.PropertyStore.SerializedPropertyValue[i].NameSizeOrId.begin(),
                        PROPERTY_STORE_PROPS.PropertyStore.SerializedPropertyValue[i].NameSizeOrId.end());
            reverse(PROPERTY_STORE_PROPS.PropertyStore.SerializedPropertyValue[i].Reserved.begin(),
                    PROPERTY_STORE_PROPS.PropertyStore.SerializedPropertyValue[i].Reserved.end());
            if (isStringNameStructInPropsStorage)
                reverse(PROPERTY_STORE_PROPS.PropertyStore.SerializedPropertyValue[i].Name.begin(),
                        PROPERTY_STORE_PROPS.PropertyStore.SerializedPropertyValue[i].Name.end());
            /* parse of TypedPropertyValue */
            reverse(PROPERTY_STORE_PROPS.PropertyStore.SerializedPropertyValue[i].Value.Type.begin(),
                    PROPERTY_STORE_PROPS.PropertyStore.SerializedPropertyValue[i].Value.Type.end());
            reverse(PROPERTY_STORE_PROPS.PropertyStore.SerializedPropertyValue[i].Value.Padding.begin(),
                    PROPERTY_STORE_PROPS.PropertyStore.SerializedPropertyValue[i].Value.Padding.end());
            reverse(PROPERTY_STORE_PROPS.PropertyStore.SerializedPropertyValue[i].Value.Value.begin(),
                    PROPERTY_STORE_PROPS.PropertyStore.SerializedPropertyValue[i].Value.Value.end());
        }
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
void ExtraData::parseFillAttributes(bool popupFillAttributes) {
    // std::cout << "LinkFlags:
    if (popupFillAttributes) {
        for (int i = 0; i < CONSOLE_PROPS.PopupFillAttributes.size(); ++i) {
            if (CONSOLE_PROPS.PopupFillAttributes[i] & FOREGROUND_BLUE) cout << "FOREGROUND_BLUE, ";
            if (CONSOLE_PROPS.PopupFillAttributes[i] & FOREGROUND_GREEN) cout << "FOREGROUND_GREEN, ";
            if (CONSOLE_PROPS.PopupFillAttributes[i] & FOREGROUND_RED) cout << "FOREGROUND_RED, ";
            if (CONSOLE_PROPS.PopupFillAttributes[i] & FOREGROUND_INTENSITY) cout << "FOREGROUND_INTENSITY, ";
            if (CONSOLE_PROPS.PopupFillAttributes[i] & BACKGROUND_BLUE) cout << "BACKGROUND_BLUE, ";
            if (CONSOLE_PROPS.PopupFillAttributes[i] & BACKGROUND_GREEN) cout << "BACKGROUND_GREEN, ";
            if (CONSOLE_PROPS.PopupFillAttributes[i] & BACKGROUND_RED) cout << "BACKGROUND_RED, ";
            if (CONSOLE_PROPS.PopupFillAttributes[i] & BACKGROUND_INTENSITY) cout << "BACKGROUND_INTENSITY, ";
        }
    } else {
        for (int i = 0; i < CONSOLE_PROPS.FillAttributes.size(); ++i) {
            if (CONSOLE_PROPS.FillAttributes[i] & FOREGROUND_BLUE) cout << "FOREGROUND_BLUE, ";
            if (CONSOLE_PROPS.FillAttributes[i] & FOREGROUND_GREEN) cout << "FOREGROUND_GREEN, ";
            if (CONSOLE_PROPS.FillAttributes[i] & FOREGROUND_RED) cout << "FOREGROUND_RED, ";
            if (CONSOLE_PROPS.FillAttributes[i] & FOREGROUND_INTENSITY) cout << "FOREGROUND_INTENSITY, ";
            if (CONSOLE_PROPS.FillAttributes[i] & BACKGROUND_BLUE) cout << "BACKGROUND_BLUE, ";
            if (CONSOLE_PROPS.FillAttributes[i] & BACKGROUND_GREEN) cout << "BACKGROUND_GREEN, ";
            if (CONSOLE_PROPS.FillAttributes[i] & BACKGROUND_RED) cout << "BACKGROUND_RED, ";
            if (CONSOLE_PROPS.FillAttributes[i] & BACKGROUND_INTENSITY) cout << "BACKGROUND_INTENSITY, ";
        }
    }
}
// TODO: Проверить корректность
void ExtraData::parseFontFamily() {
    // Первые 2 байта - font family
    for (int i = 0; i < CONSOLE_PROPS.PopupFillAttributes.size() - 2; ++i) {
        if (CONSOLE_PROPS.FontFamily[i] & FF_DONTCARE) cout << "FF_DONTCARE, ";
        if (CONSOLE_PROPS.FontFamily[i] & FF_ROMAN) cout << "FF_ROMAN, ";
        if (CONSOLE_PROPS.FontFamily[i] & FF_SWISS) cout << "FF_SWISS, ";
        if (CONSOLE_PROPS.FontFamily[i] & FF_MODERN) cout << "FF_MODERN, ";
        if (CONSOLE_PROPS.FontFamily[i] & FF_SCRIPT) cout << "FF_SCRIPTE, ";
        if (CONSOLE_PROPS.FontFamily[i] & FF_DECORATIVE) cout << "FF_DECORATIVE, ";
    }
    // Последние 2 байта - font pitch (A bitwise OR of one or more of the following font-pitch bits ?)
    for (int i = 2; i < CONSOLE_PROPS.PopupFillAttributes.size(); ++i) {
        if (CONSOLE_PROPS.FontFamily[i] & TMPF_NONE) cout << "TMPF_NONE, ";
        if (CONSOLE_PROPS.FontFamily[i] & TMPF_FIXED_PITCH) cout << "TMPF_FIXED_PITCH, ";
        if (CONSOLE_PROPS.FontFamily[i] & TMPF_VECTOR) cout << "TMPF_VECTOR, ";
        if (CONSOLE_PROPS.FontFamily[i] & TMPF_TRUETYPE) cout << "TMPF_TRUETYPE, ";
        if (CONSOLE_PROPS.FontFamily[i] & TMPF_DEVICE) cout << "TMPF_DEVICE, ";
    }
}
void ExtraData::parseFontWeight() {
    int len = Utils::lenFourBytes(CONSOLE_PROPS.FontWeight);
    if (len >= 700)
        cout << "A bold font." << endl;
    else
        cout << "A regular-weight font." << endl;
}
void ExtraData::parseCursorSize() {
    int len = Utils::lenFourBytes(CONSOLE_PROPS.CursorSize);
    cout << dec << len;
    if (len <= 25)
        cout << " pixels. A small cursor." << endl;
    if (len > 25 && len < 51)
        cout << "A medium cursor." << endl;
    if (len > 50)
        cout << "A large cursor." << endl;
}
void ExtraData::parseFullScreen() {
    if (Utils::lenFourBytes(CONSOLE_PROPS.FullScreen) > 0x00000000)
        cout << "Full-screen mode is on." << endl;
    else
        cout << "Full-screen mode is off." << endl;
}
void ExtraData::parseQuickEdit() {
    if (Utils::lenFourBytes(CONSOLE_PROPS.QuickEdit) > 0x00000000)
        cout << "QuickEdit mode is on." << endl;
    else
        cout << "QuickEdit mode is off." << endl;
}
void ExtraData::parseInsertMode() {
    if (Utils::lenFourBytes(CONSOLE_PROPS.InsertMode) > 0x00000000)
        cout << "Insert mode is enabled." << endl;
    else
        cout << "Insert mode is disabled." << endl;
}
void ExtraData::parseAutoPosition() {
    if (Utils::lenFourBytes(CONSOLE_PROPS.AutoPosition) > 0x00000000)
        cout << "The console window is positioned automatically." << endl;
    else
        cout << "The values of the WindowOriginX and WindowOriginY fields are used to position the console window." << endl;
}
void ExtraData::parseHistoryNoDup() {
    if (Utils::lenFourBytes(CONSOLE_PROPS.HistoryNoDup) > 0x00000000)
        cout << "Duplicates are allowed." << endl;
    else
        cout << "Duplicates are not allowed." << endl;
}
void  ExtraData::parseTypedPropertyValueTypeAndValue(bool parseType,
            PropertyStorePropsStruct::StringOrIntegerName::TypedPropertyValue tpv) {
    if ((tpv.Type[0] == 0x0) && (tpv.Type[3] == 0x0) && (tpv.Type[2] == 0x0)) {
        cout << Utils::defaultOffset << "VT_EMPTY: " << endl;
        if (parseType) cout << Utils::defaultOffsetDocInfo << "MUST be zero bytes in length." << endl;
        else cout << Utils::defaultOffsetDocInfo << "Type is undefined, and the minimum property set version is 0." << endl;
    }
    if ((tpv.Type[0] == 0x0) && (tpv.Type[3] == 0x1) && (tpv.Type[2] == 0x0)) {
        cout << Utils::defaultOffset << "VT_NULL: " << endl;
        if (parseType) cout << Utils::defaultOffsetDocInfo << "MUST be zero bytes in length." << endl;
        else cout << Utils::defaultOffsetDocInfo << "Type is null, and the minimum property set version is 0." << endl;
    }
    if ((tpv.Type[0] == 0x0) && (tpv.Type[3] == 0x2) && (tpv.Type[2] == 0x0)) {
        cout << Utils::defaultOffset << "VT_I2: " << endl;
        if (parseType) cout << Utils::defaultOffsetDocInfo << "MUST be a 16-bit signed integer, followed by zero padding to 4 bytes." << endl;
        else cout << Utils::defaultOffsetDocInfo << "Type is 16-bit signed integer, and the minimum property set version is 0." << endl;
    }
    if ((tpv.Type[0] == 0x0) && (tpv.Type[3] == 0x3) && (tpv.Type[2] == 0x0)) {
        cout << Utils::defaultOffset << "VT_I4: " << endl;
        if (parseType) cout << Utils::defaultOffsetDocInfo << "MUST be a 32-bit signed integer." << endl;
        else cout << Utils::defaultOffsetDocInfo << "Type is 32-bit signed integer, and the minimum property set version is 0." << endl;
    }
    if ((tpv.Type[0] == 0x0) && (tpv.Type[3] == 0x4) && (tpv.Type[2] == 0x0)) {
        cout << Utils::defaultOffset << "VT_R4: " << endl;
        if (parseType) cout << Utils::defaultOffsetDocInfo << "MUST be a 4-byte (single-precision) IEEE floating-point number." << endl;
        else cout << Utils::defaultOffsetDocInfo << "Type is 4-byte (single-precision) IEEE floating-point number, and the minimum property set version is 0." << endl;
    }
    if ((tpv.Type[0] == 0x0) && (tpv.Type[3] == 0x5) && (tpv.Type[2] == 0x0)) {
        cout << Utils::defaultOffset << "VT_R8: " << endl;
        if (parseType) cout << Utils::defaultOffsetDocInfo << "MUST be an 8-byte (double-precision) IEEE floating-point number." << endl;
        else cout << Utils::defaultOffsetDocInfo << "Type is 8-byte (double-precision) IEEE floating-point number, and the minimum property set version is 0." << endl;
    }
    if ((tpv.Type[0] == 0x0) && (tpv.Type[3] == 0x6) && (tpv.Type[2] == 0x0)) {
        cout << Utils::defaultOffset << "VT_CY: " << endl;
        if (parseType) cout << Utils::defaultOffsetDocInfo << "MUST be a CURRENCY (Packet Version)." << endl;
        else cout << Utils::defaultOffsetDocInfo << "Type is CURRENCY, and the minimum property set version is 0." << endl;
    }
    if ((tpv.Type[0] == 0x0) && (tpv.Type[3] == 0x7) && (tpv.Type[2] == 0x0)) {
        cout << Utils::defaultOffset << "VT_DATE: " << endl;
        if (parseType) cout << Utils::defaultOffsetDocInfo << "MUST be a DATE (Packet Version)." << endl;
        else cout << Utils::defaultOffsetDocInfo << "Type is DATE, and the minimum property set version is 0." << endl;
    }
    if ((tpv.Type[0] == 0x0) && (tpv.Type[3] == 0x8)) {
        cout << Utils::defaultOffset << "VT_BSTR: " << endl;
        if (parseType) cout << Utils::defaultOffsetDocInfo << "MUST be a CodePageString." << endl;
        else cout << Utils::defaultOffsetDocInfo << "Type is CodePageString, and the minimum property set version is 0." << endl;
    }
    if ((tpv.Type[0] == 0x0) && (tpv.Type[3] == 0xA)) {
        cout << Utils::defaultOffset << "VT_ERROR: " << endl;
        if (parseType) cout << Utils::defaultOffsetDocInfo << "MUST be a 32-bit unsigned integer representing an HRESULT, as specified in [MS-DTYP]." << endl;
        else cout << Utils::defaultOffsetDocInfo << "Type is HRESULT, and the minimum property set version is 0." << endl;
    }
    if ((tpv.Type[0] == 0x0) && (tpv.Type[3] == 0xB)) {
        cout << Utils::defaultOffset << "VT_BOOL: " << endl;
        if (parseType) cout << Utils::defaultOffsetDocInfo << "MUST be a VARIANT_BOOL as specified in [MS-OAUT], followed by zero padding to 4 bytes." << endl;
        else cout << Utils::defaultOffsetDocInfo << "Type is VARIANT_BOOL, and the minimum property set version is 0." << endl;
    }
    if ((tpv.Type[0] == 0x0) && (tpv.Type[3] == 0xE)) {
        cout << Utils::defaultOffset << "VT_DECIMAL: " << endl;
        if (parseType) cout << Utils::defaultOffsetDocInfo << "MUST be a DECIMAL (Packet Version)." << endl;
        else cout << Utils::defaultOffsetDocInfo << "Type is DECIMAL, and the minimum property set version is 0." << endl;
    }
    if ((tpv.Type[0] == 0x0) && (tpv.Type[3] == 0x0) && (tpv.Type[2] == 0x1)) {
        cout << Utils::defaultOffset << "VT_I1: " << endl;
        if (parseType) cout << Utils::defaultOffsetDocInfo << "MUST be a 1-byte signed integer, followed by zero padding to 4 bytes." << endl;
        else cout << Utils::defaultOffsetDocInfo << "Type is 1-byte unsigned integer, and the minimum property set version is 0." << endl;
    }
    if ((tpv.Type[0] == 0x0) && (tpv.Type[3] == 0x1) && (tpv.Type[2] == 0x1)) {
        cout << Utils::defaultOffset << "VT_UI1: " << endl;
        if (parseType) cout << Utils::defaultOffsetDocInfo << "MUST be a 1-byte unsigned integer, followed by zero padding to 4 bytes." << endl;
        else cout << Utils::defaultOffsetDocInfo << "Type is null, and the minimum property set version is 0." << endl;
    }
    if ((tpv.Type[0] == 0x0) && (tpv.Type[3] == 0x2) && (tpv.Type[2] == 0x1)) {
        cout << Utils::defaultOffset << "VT_UI2: " << endl;
        if (parseType) cout << Utils::defaultOffsetDocInfo << "MUST be a 2-byte unsigned integer, followed by zero padding to 4 bytes." << endl;
        else cout << Utils::defaultOffsetDocInfo << "Type is 2-byte unsigned integer, and the minimum property set version is 0." << endl;
    }
    if ((tpv.Type[0] == 0x0) && (tpv.Type[3] == 0x3) && (tpv.Type[2] == 0x1)) {
        cout << Utils::defaultOffset << "VT_UI4: " << endl;
        if (parseType) cout << Utils::defaultOffsetDocInfo << "MUST be a 4-byte unsigned integer." << endl;
        else cout << Utils::defaultOffsetDocInfo << "Type is 4-byte unsigned integer, and the minimum property set version is 0." << endl;
    }
    if ((tpv.Type[0] == 0x0) && (tpv.Type[3] == 0x4) && (tpv.Type[2] == 0x1)) {
        cout << Utils::defaultOffset << "VT_I8: " << endl;
        if (parseType) cout << Utils::defaultOffsetDocInfo << "MUST be an 8-byte signed integer." << endl;
        else cout << Utils::defaultOffsetDocInfo << "Type is 8-byte signed integer, and the minimum property set version is 0." << endl;
    }
    if ((tpv.Type[0] == 0x0) && (tpv.Type[3] == 0x5) && (tpv.Type[2] == 0x1)) {
        cout << Utils::defaultOffset << "VT_UI8: " << endl;
        if (parseType) cout << Utils::defaultOffsetDocInfo << "MUST be an 8-byte unsigned integer." << endl;
        else cout << Utils::defaultOffsetDocInfo << "Type is 8-byte unsigned integer, and the minimum property set version is 0." << endl;
    }
    if ((tpv.Type[0] == 0x0) && (tpv.Type[3] == 0x6) && (tpv.Type[2] == 0x1)) {
        cout << Utils::defaultOffset << "VT_INT: " << endl;
        if (parseType) cout << Utils::defaultOffsetDocInfo << "MUST be a 4-byte signed integer." << endl;
        else cout << Utils::defaultOffsetDocInfo << "Type is 4-byte signed integer, and the minimum property set version is 1." << endl;
    }
    if ((tpv.Type[0] == 0x0) && (tpv.Type[3] == 0x7) && (tpv.Type[2] == 0x1)) {
        cout << Utils::defaultOffset << "VT_UINT: " << endl;
        if (parseType) cout << Utils::defaultOffsetDocInfo << "MUST be a 4-byte unsigned integer." << endl;
        else cout << Utils::defaultOffsetDocInfo << "Type is 4-byte unsigned integer, and the minimum property set version is 1." << endl;
    }
    if ((tpv.Type[0] == 0x0) && (tpv.Type[3] == 0xE) && (tpv.Type[2] == 0x1)) {
        cout << Utils::defaultOffset << "VT_LPSTR: " << endl;
        if (parseType) cout << Utils::defaultOffsetDocInfo << "MUST be a CodePageString." << endl;
        else cout << Utils::defaultOffsetDocInfo << "Type is CodePageString, and the minimum property set version is 0." << endl;
    }
    if ((tpv.Type[0] == 0x0) && (tpv.Type[3] == 0xF) && (tpv.Type[2] == 0x1)) {
        cout << Utils::defaultOffset << "VT_LPWSTR: " << endl;
        if (parseType) cout << Utils::defaultOffsetDocInfo << "MUST be a UnicodeString." << endl;
        else cout << Utils::defaultOffsetDocInfo << "Type is UnicodeString, and the minimum property set version is 0." << endl;
    }
    if ((tpv.Type[0] == 0x0) && (tpv.Type[3] == 0x0) && (tpv.Type[2] == 0x4)) {
        cout << Utils::defaultOffset << "VT_FILETIME: " << endl;
        if (parseType) cout << Utils::defaultOffsetDocInfo << "MUST be a FILETIME (Packet Version)." << endl;
        else cout << Utils::defaultOffsetDocInfo << "Type is FILETIME, and the minimum property set version is 0." << endl;
    }
    if ((tpv.Type[0] == 0x0) && (tpv.Type[3] == 0x1) && (tpv.Type[2] == 0x4)) {
        cout << Utils::defaultOffset << "VT_BLOB: " << endl;
        if (parseType) cout << Utils::defaultOffsetDocInfo << "MUST be a BLOB." << endl;
        else cout << Utils::defaultOffsetDocInfo << "Type is binary large object (BLOB), and the minimum property set version is 0." << endl;
    }
    if ((tpv.Type[0] == 0x0) && (tpv.Type[3] == 0x2) && (tpv.Type[2] == 0x4)) {
        cout << Utils::defaultOffset << "VT_STREAM: " << endl;
        if (parseType) cout << Utils::defaultOffsetDocInfo << "MUST be an IndirectPropertyName. " <<
                               Utils::defaultOffsetDocInfo << "The storage representing the (non-simple) property set MUST have a stream element with this name." << endl;
        else cout << Utils::defaultOffsetDocInfo << "Type is Stream, and the minimum property set version is 0. VT_STREAM is not allowed in a simple property set." << endl;
    }
    if ((tpv.Type[0] == 0x0) && (tpv.Type[3] == 0x3) && (tpv.Type[2] == 0x4)) {
        cout << Utils::defaultOffset << "VT_STORAGE: " << endl;
        if (parseType) cout << Utils::defaultOffsetDocInfo << "MUST be an IndirectPropertyName. " <<
                               Utils::defaultOffsetDocInfo << "The storage representing the (non-simple) property set MUST have a storage element with this name." << endl;
        else cout << Utils::defaultOffsetDocInfo << "Type is Storage, and the minimum property set version is 0. VT_STORAGE is not allowed in a simple property set." << endl;
    }
    if ((tpv.Type[0] == 0x0) && (tpv.Type[3] == 0x4) && (tpv.Type[2] == 0x4)) {
        cout << Utils::defaultOffset << "VT_STREAMED_Object: " << endl;
        if (parseType) cout << Utils::defaultOffsetDocInfo << "MUST be an IndirectPropertyName. " <<
                            Utils::defaultOffsetDocInfo << "The storage representing the (non-simple) property set MUST have a stream element with this name." << endl;
        else cout << Utils::defaultOffsetDocInfo << "Type is Stream representing an Object in an application-specific manner, and the minimum property set version is 0. " <<
                     Utils::defaultOffsetDocInfo << "VT_STREAMED_Object is not allowed in a simple property set." << endl;
    }
    if ((tpv.Type[0] == 0x0) && (tpv.Type[3] == 0x5) && (tpv.Type[2] == 0x4)) {
        cout << Utils::defaultOffset << "VT_STORED_Object: " << endl;
        if (parseType) cout << Utils::defaultOffsetDocInfo << "MUST be an IndirectPropertyName. " <<
                               Utils::defaultOffsetDocInfo << "The storage representing the (non-simple) property set MUST have a storage element with this name." << endl;
        else cout << Utils::defaultOffsetDocInfo << "Type is Storage representing an Object in an application-specific manner, and the minimum property set version is 0. " <<
                     Utils::defaultOffsetDocInfo << "VT_STORED_Object is not allowed in a simple property set." << endl;
    }
    if ((tpv.Type[0] == 0x0) && (tpv.Type[3] == 0x6) && (tpv.Type[2] == 0x4)) {
        cout << Utils::defaultOffset << "VT_BLOB_Object: " << endl;
        if (parseType) cout << Utils::defaultOffsetDocInfo << "MUST be a BLOB." << endl;
        else cout << Utils::defaultOffsetDocInfo << "Type is BLOB representing an object in an application-specific manner. The minimum property set version is 0." << endl;
    }
    if ((tpv.Type[0] == 0x0) && (tpv.Type[3] == 0x7) && (tpv.Type[2] == 0x4)) {
        cout << Utils::defaultOffset << "VT_CF: " << endl;
        if (parseType) cout << Utils::defaultOffsetDocInfo << "MUST be a ClipboardData." << endl;
        else cout << Utils::defaultOffsetDocInfo << "Type is PropertyIdentifier, and the minimum property set version is 0." << endl;
    }
    if ((tpv.Type[0] == 0x0) && (tpv.Type[3] == 0x8) && (tpv.Type[2] == 0x4)) {
        cout << Utils::defaultOffset << "VT_CLSID: " << endl;
        if (parseType) cout << Utils::defaultOffsetDocInfo << "MUST be a GUID (Packet Version)." << endl;
        else cout << Utils::defaultOffsetDocInfo << "Type is CLSID, and the minimum property set version is 0." << endl;
    }
    if ((tpv.Type[0] == 0x0) && (tpv.Type[3] == 0x9) && (tpv.Type[2] == 0x4)) {
        cout << Utils::defaultOffset << "VT_VERSIONED_STREAM: " << endl;
        if (parseType) cout << Utils::defaultOffsetDocInfo << "MUST be a VersionedStream. The storage representing the (non-simple) property set MUST have a stream element with the name in the StreamName field." << endl;
        else cout << Utils::defaultOffsetDocInfo << "Type is Stream with application-specific version GUID (VersionedStream). " <<
                     Utils::defaultOffsetDocInfo << "The minimum property set version is 0. VT_VERSIONED_STREAM is not allowed in a simple property set." << endl;
    }
    if ((tpv.Type[0] == 0x1) && (tpv.Type[3] == 0x2) && (tpv.Type[2] == 0x0)) {
        cout << Utils::defaultOffset << "VT_VECTOR_VT_I2: " << endl;
        if (parseType) cout << Utils::defaultOffsetDocInfo << "MUST be a VectorHeader followed by a sequence of 16-bit signed integers, " <<
                               Utils::defaultOffsetDocInfo << "followed by zero padding to a total length that is a multiple of 4 bytes." << endl;
        else cout << Utils::defaultOffsetDocInfo << "Type is Vector of 16-bit signed integers, and the minimum property set version is 0." << endl;
    }
    if ((tpv.Type[0] == 0x1) && (tpv.Type[3] == 0x3) && (tpv.Type[2] == 0x0)) {
        cout << Utils::defaultOffset << "VT_VECTOR_VT_I4: " << endl;
        if (parseType) cout << Utils::defaultOffsetDocInfo<< "MUST be a VectorHeader followed by a sequence of 32-bit signed integers." << endl;
        else cout << Utils::defaultOffsetDocInfo << "Type is Vector of 32-bit signed integers, and the minimum property set version is 0." << endl;
    }
    if ((tpv.Type[0] == 0x1) && (tpv.Type[3] == 0x4) && (tpv.Type[2] == 0x0)) {
        cout << Utils::defaultOffset << "VT_VECTOR_VT_R4: " << endl;
        if (parseType) cout << Utils::defaultOffsetDocInfo << "MUST be a VectorHeader followed by a sequence of 4-byte (single-precision) IEEE floating-point numbers." << endl;
        else cout << Utils::defaultOffsetDocInfo << "Type is Vector of 4-byte (single-precision) IEEE floating-point numbers, and the minimum property set version is 0." << endl;
    }
    if ((tpv.Type[0] == 0x1) && (tpv.Type[3] == 0x5) && (tpv.Type[2] == 0x0)) {
        cout << Utils::defaultOffset << "VT_VECTOR_VT_R8: " << endl;
        if (parseType) cout << Utils::defaultOffsetDocInfo << "MUST be a VectorHeader followed by a sequence of 8-byte (double-precision) IEEE floating-point numbers." << endl;
        else cout << Utils::defaultOffsetDocInfo << "Type is Vector of 8-byte (double-precision) IEEE floating-point numbers, and the minimum property set version is 0." << endl;
    }
    if ((tpv.Type[0] == 0x1) && (tpv.Type[3] == 0x6) && (tpv.Type[2] == 0x0)) {
        cout << Utils::defaultOffset << "VT_VECTOR_VT_CY: " << endl;
        if (parseType) cout << Utils::defaultOffsetDocInfo << "MUST be a VectorHeader followed by a sequence of CURRENCY (Packet Version) packets." << endl;
        else cout << Utils::defaultOffsetDocInfo << "Type is Vector of CURRENCY, and the minimum property set version is 0." << endl;
    }
    if ((tpv.Type[0] == 0x1) && (tpv.Type[3] == 0x7) && (tpv.Type[2] == 0x0)) {
        cout << Utils::defaultOffset << "VT_VECTOR_VT_DATE: " << endl;
        if (parseType) cout << Utils::defaultOffsetDocInfo << "MUST be a VectorHeader followed by a sequence of DATE (Packet Version) packets." << endl;
        else cout << Utils::defaultOffsetDocInfo << "Type is Vector of DATE, and the minimum property set version is 0." << endl;
    }
    if ((tpv.Type[0] == 0x1) && (tpv.Type[3] == 0x8) && (tpv.Type[2] == 0x0)) {
        cout << Utils::defaultOffset << "VT_VECTOR_VT_BSTR: " << endl;
        if (parseType) cout << Utils::defaultOffsetDocInfo << "MUST be a VectorHeader followed by a sequence of CodePageString packets." << endl;
        else cout << Utils::defaultOffsetDocInfo << "Type is Vector of CodePageString, and the minimum property set version is 0." << endl;
    }
    if ((tpv.Type[0] == 0x1) && (tpv.Type[3] == 0xA)) {
        cout << Utils::defaultOffset << "VT_VECTOR_VT_ERROR: " << endl;
        if (parseType) cout << Utils::defaultOffsetDocInfo << "MUST be a VectorHeader followed by a sequence of 32-bit unsigned integers representing HRESULTs, as specified in [MS-DTYP]." << endl;
        else cout << Utils::defaultOffsetDocInfo << "Type is Vector of HRESULT, and the minimum property set version is 0." << endl;
    }
    if ((tpv.Type[0] == 0x1) && (tpv.Type[3] == 0xB)) {
        cout << Utils::defaultOffset << "VT_VECTOR_VT_BOOL: " << endl;
        if (parseType) cout << Utils::defaultOffsetDocInfo << "MUST be a VectorHeader followed by a sequence of VARIANT_BOOL as specified in [MS-OAUT], followed by zero padding to a total length that is a multiple of 4 bytes." << endl;
        else cout << Utils::defaultOffsetDocInfo << "Type is Vector of VARIANT_BOOL, and the minimum property set version is 0." << endl;
    }
    if ((tpv.Type[0] == 0x1) && (tpv.Type[3] == 0xC) && (tpv.Type[2] == 0x1)) {
        cout << Utils::defaultOffset << "VT_VECTOR_VT_VARIANT: " << endl;
        if (parseType) cout << Utils::defaultOffsetDocInfo << "MUST be a VectorHeader followed by a sequence of TypedPropertyValue packets." << endl;
        else cout << Utils::defaultOffsetDocInfo << "Type is Vector of variable-typed properties, and the minimum property set version is 0." << endl;
    }
    if ((tpv.Type[0] == 0x1) && (tpv.Type[3] == 0x0) && (tpv.Type[2] == 0x1)) {
        cout << Utils::defaultOffset << "VT_VECTOR_VT_I1: " << endl;
        if (parseType) cout << Utils::defaultOffsetDocInfo << "MUST be a VectorHeader followed by a sequence of 1-byte signed integers, " <<
                               Utils::defaultOffsetDocInfo << "followed by zero padding to a total length that is a multiple of 4 bytes." << endl;
        else cout << Utils::defaultOffsetDocInfo << "Type is Vector of 1-byte signed integers and the minimum property set version is 1." << endl;
    }
    if ((tpv.Type[0] == 0x1) && (tpv.Type[3] == 0x1) && (tpv.Type[2] == 0x1)) {
        cout << Utils::defaultOffset << "VT_VECTOR_VT_UI1: " << endl;
        if (parseType) cout << Utils::defaultOffsetDocInfo << "MUST be a VectorHeader followed by a sequence of 1-byte unsigned integers, " <<
                               Utils::defaultOffsetDocInfo << "followed by zero padding to a total length that is a multiple of 4 bytes." << endl;
        else cout << Utils::defaultOffsetDocInfo << "Type is Vector of 1-byte unsigned integers, and the minimum property set version is 0." << endl;
    }
    if ((tpv.Type[0] == 0x1) && (tpv.Type[3] == 0x2) && (tpv.Type[2] == 0x1)) {
        cout << Utils::defaultOffset << "VT_VECTOR_VT_UI2: " << endl;
        if (parseType) cout << Utils::defaultOffsetDocInfo << "MUST be a VectorHeader followed by a sequence of 2-byte unsigned integers, " <<
                               Utils::defaultOffsetDocInfo << "followed by zero padding to a total length that is a multiple of 4 bytes." << endl;
        else cout << Utils::defaultOffsetDocInfo << "Type is Vector of 2-byte unsigned integers, and the minimum property set version is 0." << endl;
    }
    if ((tpv.Type[0] == 0x1) && (tpv.Type[3] == 0x3) && (tpv.Type[2] == 0x1)) {
        cout << Utils::defaultOffset << "VT_VECTOR_VT_UI4: " << endl;
        if (parseType) cout << Utils::defaultOffsetDocInfo << "MUST be a VectorHeader followed by a sequence of 4-byte unsigned integers." << endl;
        else cout << Utils::defaultOffsetDocInfo << "Type is Vector of 4-byte unsigned integers, and the minimum property set version is 0." << endl;
    }
    if ((tpv.Type[0] == 0x1) && (tpv.Type[3] == 0x4) && (tpv.Type[2] == 0x1)) {
        cout << Utils::defaultOffset << "VT_VECTOR_VT_I8: " << endl;
        if (parseType) cout << Utils::defaultOffsetDocInfo << "MUST be a VectorHeader followed by a sequence of 8-byte signed integers." << endl;
        else cout << Utils::defaultOffsetDocInfo << "Type is Vector of 8-byte signed integers, and the minimum property set version is 0." << endl;
    }
    if ((tpv.Type[0] == 0x1) && (tpv.Type[3] == 0x5) && (tpv.Type[2] == 0x1)) {
        cout << Utils::defaultOffset << "VT_VECTOR_VT_UI8: " << endl;
        if (parseType) cout << Utils::defaultOffsetDocInfo << "MUST be a VectorHeader followed by a sequence of 8-byte unsigned integers." << endl;
        else cout << Utils::defaultOffsetDocInfo << "Type is Vector of 8-byte unsigned integers and the minimum property set version is 0." << endl;
    }
    if ((tpv.Type[0] == 0x1) && (tpv.Type[3] == 0xE) && (tpv.Type[2] == 0x1)) {
        cout << Utils::defaultOffset << "VT_VECTOR_VT_LPSTR: " << endl;
        if (parseType) cout << Utils::defaultOffsetDocInfo << "MUST be a VectorHeader followed by a sequence of CodePageString packets." << endl;
        else cout << Utils::defaultOffsetDocInfo << "Type is Vector of CodePageString, and the minimum property set version is 0." << endl;
    }
    if ((tpv.Type[0] == 0x1) && (tpv.Type[3] == 0xF) && (tpv.Type[2] == 0x1)) {
        cout << Utils::defaultOffset << "VT_VECTOR_VT_LPWSTR: " << endl;
        if (parseType) cout << Utils::defaultOffsetDocInfo << "MUST be a VectorHeader followed by a sequence of UnicodeString packets." << endl;
        else cout << Utils::defaultOffset << "Type is Vector of UnicodeString, and the minimum property set version is 0." << endl;
    }
    if ((tpv.Type[0] == 0x1) && (tpv.Type[3] == 0x0) && (tpv.Type[2] == 0x4)) {
        cout << Utils::defaultOffset << "VT_VECTOR_VT_FILETIME: " << endl;
        if (parseType) cout << Utils::defaultOffsetDocInfo << "MUST be a VectorHeader followed by a sequence of FILETIME (Packet Version) packets." << endl;
        else cout << Utils::defaultOffsetDocInfo << "Type is Vector of FILETIME, and the minimum property set version is 0." << endl;
    }
    if ((tpv.Type[0] == 0x1) && (tpv.Type[3] == 0x7) && (tpv.Type[2] == 0x4)) {
        cout << Utils::defaultOffset << "VT_VECTOR_VT_CF: " << endl;
        if (parseType) cout << Utils::defaultOffsetDocInfo << "MUST be a VectorHeader followed by a sequence of ClipboardData packets." << endl;
        else cout << Utils::defaultOffsetDocInfo << "Type is Vector of PropertyIdentifier, and the minimum property set version is 0." << endl;
    }
    if ((tpv.Type[0] == 0x1) && (tpv.Type[3] == 0x8) && (tpv.Type[2] == 0x4)) {
        cout << Utils::defaultOffset << "VT_VECTOR_VT_CLSID: " << endl;
        if (parseType) cout << Utils::defaultOffsetDocInfo << "MUST be a VectorHeader followed by a sequence of GUID (Packet Version) packets." << endl;
        else cout << Utils::defaultOffsetDocInfo << "Type is Vector of CLSID, and the minimum property set version is 0." << endl;
    }
    if ((tpv.Type[0] == 0x2) && (tpv.Type[3] == 0x2) && (tpv.Type[2] == 0x0)) {
        cout << Utils::defaultOffset << "VT_ARRAY_VT_I2: " << endl;
        if (parseType) cout << Utils::defaultOffsetDocInfo << "MUST be an ArrayHeader followed by a sequence of 16-bit signed integers, " <<
                               Utils::defaultOffsetDocInfo << "followed by zero padding to a total length that is a multiple of 4 bytes." << endl;
        else cout << Utils::defaultOffsetDocInfo << "Type is Array of 16-bit signed integers, and the minimum property set version is 1." << endl;
    }
    if ((tpv.Type[0] == 0x2) && (tpv.Type[3] == 0x3) && (tpv.Type[2] == 0x0)) {
        cout << Utils::defaultOffset << "VT_ARRAY_VT_I4: " << endl;
        if (parseType) cout << Utils::defaultOffsetDocInfo << "MUST be an ArrayHeader followed by a sequence of 32-bit signed integers." << endl;
        else cout << Utils::defaultOffsetDocInfo << "Type is Array of 32-bit signed integers, and the minimum property set version is 1." << endl;
    }
    if ((tpv.Type[0] == 0x2) && (tpv.Type[3] == 0x4) && (tpv.Type[2] == 0x0)) {
        cout << Utils::defaultOffset << "VT_ARRAY_VT_R4: " << endl;
        if (parseType) cout << Utils::defaultOffsetDocInfo << "MUST be an ArrayHeader followed by a sequence of 4-byte (single-precision) IEEE floating-point numbers." << endl;
        else cout << Utils::defaultOffsetDocInfo << "Type is Array of 4-byte (single-precision) IEEE floating-point numbers, and the minimum property set version is 1." << endl;
    }
    if ((tpv.Type[0] == 0x2) && (tpv.Type[3] == 0x5) && (tpv.Type[2] == 0x0)) {
        cout << Utils::defaultOffset << "VT_ARRAY_VT_R8: " << endl;
        if (parseType) cout << Utils::defaultOffsetDocInfo << "MUST be an ArrayHeader followed by a sequence of 8-byte (double-precision) IEEE floating-point numbers." << endl;
        else cout << Utils::defaultOffsetDocInfo << "Type is IEEE floating-point numbers, and the minimum property set version is 1." << endl;
    }
    if ((tpv.Type[0] == 0x2) && (tpv.Type[3] == 0x6) && (tpv.Type[2] == 0x0)) {
        cout << Utils::defaultOffset << "VT_ARRAY_VT_CY: " << endl;
        if (parseType) cout << Utils::defaultOffsetDocInfo << "MUST be an ArrayHeader followed by a sequence of CURRENCY (Packet Version) packets." << endl;
        else cout << Utils::defaultOffsetDocInfo << "Type is Array of CURRENCY, and the minimum property set version is 1." << endl;
    }
    if ((tpv.Type[0] == 0x2) && (tpv.Type[3] == 0x7) && (tpv.Type[2] == 0x0)) {
        cout << Utils::defaultOffset << "VT_ARRAY_VT_DATE: " << endl;
        if (parseType) cout << Utils::defaultOffsetDocInfo << "MUST be an ArrayHeader followed by a sequence of DATE (Packet Version) packets." << endl;
        else cout << Utils::defaultOffsetDocInfo << "Type is Array of DATE, and the minimum property set version is 1." << endl;
    }
    if ((tpv.Type[0] == 0x2) && (tpv.Type[3] == 0x8)) {
        cout << Utils::defaultOffset << "VT_ARRAY_VT_BSTR: " << endl;
        if (parseType) cout << Utils::defaultOffsetDocInfo << "MUST be an ArrayHeader followed by a sequence of CodePageString packets." << endl;
        else cout << Utils::defaultOffsetDocInfo << "Type is Array of CodePageString, and the minimum property set version is 1." << endl;
    }
    if ((tpv.Type[0] == 0x2) && (tpv.Type[3] == 0xA)) {
        cout << Utils::defaultOffset << "VT_ARRAY_VT_ERROR: " << endl;
        if (parseType) cout << Utils::defaultOffsetDocInfo << "MUST be an ArrayHeader followed by a sequence of 32-bit unsigned integers representing HRESULTs, as specified in [MS-DTYP]." << endl;
        else cout << Utils::defaultOffsetDocInfo << "Type is Array of HRESULT, and the minimum property set version is 1." << endl;
    }
    if ((tpv.Type[0] == 0x2) && (tpv.Type[3] == 0xB)) {
        cout << Utils::defaultOffset << "VT_ARRAY_VT_BOOL: " << endl;
        if (parseType) cout << Utils::defaultOffsetDocInfo << "MUST be an ArrayHeader followed by a sequence of VARIANT_BOOL as specified in [MS-OAUT], followed by zero padding to a total length that is a multiple of 4 bytes." << endl;
        else cout << Utils::defaultOffsetDocInfo << "Type is Array of VARIANT_BOOL, and the minimum property set version is 1." << endl;
    }
    if ((tpv.Type[0] == 0x2) && (tpv.Type[3] == 0xC) && (tpv.Type[2] == 0x1)) {
        cout << Utils::defaultOffset << "VT_ARRAY_VT_VARIANT: " << endl;
        if (parseType) cout << Utils::defaultOffsetDocInfo << "MUST be an ArrayHeader followed by a sequence of TypedPropertyValue packets." << endl;
        else cout << Utils::defaultOffsetDocInfo << "Type is Array of variable-typed properties, and the minimum property set version is 1." << endl;
    }
    if ((tpv.Type[0] == 0x2) && (tpv.Type[3] == 0xE) && (tpv.Type[2] == 0x0)) {
        cout << Utils::defaultOffset << "VT_ARRAY_VT_DECIMAL: " << endl;
        if (parseType) cout << Utils::defaultOffsetDocInfo << "MUST be an ArrayHeader followed by a sequence of DECIMAL (Packet Version) packets." << endl;
        else cout << Utils::defaultOffsetDocInfo << "Type is Array of DECIMAL, and the minimum property set version is 1." << endl;
    }
    if ((tpv.Type[0] == 0x2) && (tpv.Type[3] == 0x0) && (tpv.Type[2] == 0x1)) {
        cout << Utils::defaultOffset << "VT_ARRAY_VT_I1: " << endl;
        if (parseType) cout << Utils::defaultOffsetDocInfo << "MUST be an ArrayHeader followed by a sequence of 1-byte signed integers, " <<
                            Utils::defaultOffsetDocInfo << "followed by zero padding to a total length that is a multiple of 4 bytes." << endl;
        else cout << Utils::defaultOffsetDocInfo << "Type is Array of 1-byte signed integers, and the minimum property set version is 1." << endl;
    }
    if ((tpv.Type[0] == 0x2) && (tpv.Type[3] == 0x1) && (tpv.Type[2] == 0x1)) {
        cout << Utils::defaultOffset << "VT_ARRAY_VT_UI1: " << endl;
        if (parseType) cout << Utils::defaultOffsetDocInfo << "MUST be an ArrayHeader followed by a sequence of 1-byte unsigned integers, " <<
                            Utils::defaultOffsetDocInfo << "followed by zero padding to a total length that is a multiple of 4 bytes." << endl;
        else cout << Utils::defaultOffsetDocInfo << "Type is Array of 1-byte unsigned integers, and the minimum property set version is 1." << endl;
    }
    if ((tpv.Type[0] == 0x2) && (tpv.Type[3] == 0x2) && (tpv.Type[2] == 0x1)) {
        cout << Utils::defaultOffset << "VT_ARRAY_VT_UI2: " << endl;
        if (parseType) cout << Utils::defaultOffsetDocInfo << "MUST be an ArrayHeader followed by a sequence of 2-byte unsigned integers, " <<
                            Utils::defaultOffsetDocInfo << "followed by zero padding to a total length that is a multiple of 4 bytes." << endl;
        else cout << Utils::defaultOffsetDocInfo << "Type is Array of 2-byte unsigned integers, and the minimum property set version is 1." << endl;
    }
    if ((tpv.Type[0] == 0x2) && (tpv.Type[3] == 0x3) && (tpv.Type[2] == 0x1)) {
        cout << Utils::defaultOffset << "VT_ARRAY_VT_UI4: " << endl;
        if (parseType) cout << Utils::defaultOffsetDocInfo << "MUST be an ArrayHeader followed by a sequence of 4-byte unsigned integers." << endl;
        else cout << Utils::defaultOffsetDocInfo << "Type is Array of 4-byte unsigned integers, and the minimum property set version is 1." << endl;
    }
    if ((tpv.Type[0] == 0x2) && (tpv.Type[3] == 0x6) && (tpv.Type[2] == 0x1)) {
        cout << Utils::defaultOffset << "VT_ARRAY_VT_INT: " << endl;
        if (parseType) cout << Utils::defaultOffsetDocInfo << "MUST be an ArrayHeader followed by a sequence of 4-byte signed integers." << endl;
        else cout << Utils::defaultOffsetDocInfo << "Type is Array of 4-byte signed integers, and the minimum property set version is 1." << endl;
    }
    if ((tpv.Type[0] == 0x2) && (tpv.Type[3] == 0x7) && (tpv.Type[2] == 0x1)) {
        cout << Utils::defaultOffset << "VT_ARRAY_VT_UINT: " << endl;
        if (parseType) cout << Utils::defaultOffsetDocInfo << "MUST be an ArrayHeader followed by a sequence of 4-byte unsigned integers." << endl;
        else cout << Utils::defaultOffsetDocInfo << "Type is Array of 4-byte unsigned integers, and the minimum property set version is 1." << endl;
    }
}

// TODO: рассмотреть ещё не распаршенные структуры в полях (цвета, шрифты...)
void ExtraData::printExtraData() {
    cout << "_______________________ExtraData_________________________" << endl;

    if (consolePropsIsSet) {
        /* CONSOLE_PROPS struct*/
        cout << "CONSOLE_PROP: " << endl;
        cout << "   BlockSize:                       " << dec << Utils::lenFourBytes(CONSOLE_PROPS.BlockSize) << " bytes" << endl;
        cout << "   BlockSignature:                  "; Utils::print_vec(CONSOLE_PROPS.BlockSignature);
        cout << "   FillAttributes:                  "; parseFillAttributes(false); cout << endl;
        cout << "   PopupFillAttributes:             "; parseFillAttributes(true); cout << endl;
        cout << "   ScreenBufferSizeX:               " << dec << Utils::lenTwoBytes(CONSOLE_PROPS.ScreenBufferSizeX) << " characters" << endl;
        cout << "   ScreenBufferSizeY:               " << dec << Utils::lenTwoBytes(CONSOLE_PROPS.ScreenBufferSizeY) << " characters" << endl;
        cout << "   WindowSizeX:                     " << dec << Utils::lenTwoBytes(CONSOLE_PROPS.WindowSizeX) << " characters" << endl;
        cout << "   WindowSizeY:                     " << dec << Utils::lenTwoBytes(CONSOLE_PROPS.WindowSizeY) << " characters" << endl;
        cout << "   WindowOriginX:                   " << dec << Utils::lenTwoBytes(CONSOLE_PROPS.WindowOriginX) << " pixels" << endl;
        cout << "   WindowOriginY:                   " << dec << Utils::lenTwoBytes(CONSOLE_PROPS.WindowOriginY) << " pixels" << endl;
        cout << "   UNUSED1:                         "; Utils::print_vec(CONSOLE_PROPS.UNUSED1);
        cout << "   UNUSED2:                         "; Utils::print_vec(CONSOLE_PROPS.UNUSED2);
        cout << "   FontSize:                        " << dec << Utils::lenFourBytes(CONSOLE_PROPS.FontSize) << " pixels" << endl;
        cout << "   FontFamily:                      "; parseFontFamily();
        cout << "   FontWeight:                      "; parseFontWeight();
        cout << "   FaceName:                        "; Utils::print_vec_unicode(CONSOLE_PROPS.FaceName);
        cout << "   CursorSize:                      "; parseCursorSize();
        cout << "   FullScreen:                      "; parseFullScreen();
        cout << "   QuickEdit:                       "; parseQuickEdit();
        cout << "   InsertMode:                      "; parseInsertMode();
        cout << "   AutoPosition:                    "; parseAutoPosition();
        cout << "   HistoryBufferSize:               " << dec << Utils::lenFourBytes(CONSOLE_PROPS.HistoryBufferSize) << " characters" << endl;
        cout << "   NumberOfHistoryBuffers:          " << dec << Utils::lenFourBytes(CONSOLE_PROPS.NumberOfHistoryBuffers) << endl;
        cout << "   HistoryNoDup:                    "; parseHistoryNoDup();
        // TODO: дописать парсинг RGB colors - red (R), green (G), and blue (B) intensities in a color.
        cout << "   ColorTable:                      "; Utils::print_vec(CONSOLE_PROPS.ColorTable);
    }
    if (consoleFEIsSet) {
        /* CONSOLE_FE_PROPS struct*/
        cout << "CONSOLE_FE_PROPS: " << endl;
        cout << "   BlockSize:                       " << dec << Utils::lenFourBytes(CONSOLE_FE_PROPS.BlockSize) << " bytes" << endl;
        cout << "   BlockSignature:                  "; Utils::print_vec(CONSOLE_FE_PROPS.BlockSignature);
        // TODO: дописать парсинг:
        // For details concerning the structure and meaning of language code identifiers, see [MS-LCID].
        // For additional background information, see [MSCHARSET], [MSDN-CS], and [MSDOCS-CodePage].
        cout << "   CodePage:                        "; Utils::print_vec(CONSOLE_FE_PROPS.CodePage);
    }
    if (drownPropsIsSet) {
        /* DARWIN_PROPS struct*/
        cout << "DARWIN_PROPS: " << endl;
        cout << "   BlockSize:                       " << dec << Utils::lenFourBytes(DARWIN_PROPS.BlockSize) << " bytes" << endl;
        cout << "   BlockSignature:                  "; Utils::print_vec(DARWIN_PROPS.BlockSignature);
        cout << "   DarwinDataAnsi:                  "; Utils::print_vec(DARWIN_PROPS.DarwinDataAnsi);
        cout << "   DarwinDataUnicode:               "; Utils::print_vec_unicode(DARWIN_PROPS.DarwinDataUnicode);
    }
    if (environmentPropsIsSet) {
        /* ENVIRONMENT_PROPS struct*/
        cout << "ENVIRONMENT_PROPS: " << endl;
        cout << "   BlockSize:                       " << dec << Utils::lenFourBytes(ENVIRONMENT_PROPS.BlockSize) << " bytes" << endl;
        cout << "   BlockSignature:                  "; Utils::print_vec(ENVIRONMENT_PROPS.BlockSignature);
        cout << "   TargetAnsi:                      "; Utils::print_vec_unicode(ENVIRONMENT_PROPS.TargetAnsi);
        cout << "   TargetUnicode:                   "; Utils::print_vec_unicode(ENVIRONMENT_PROPS.TargetUnicode);
    }
    if (iconEnvironmentPropsIsSet) {
        /* ICON_ENVIRONMENT_PROPS struct*/
        cout << "ICON_ENVIRONMENT_PROPS: " << endl;
        cout << "   BlockSize:                       " << dec << Utils::lenFourBytes(ICON_ENVIRONMENT_PROPS.BlockSize) << " bytes" << endl;
        cout << "   BlockSignature:                  "; Utils::print_vec(ICON_ENVIRONMENT_PROPS.BlockSignature);
        cout << "   TargetAnsi:                      "; Utils::print_vec_unicode(ICON_ENVIRONMENT_PROPS.TargetAnsi);
        cout << "   TargetUnicode:                   "; Utils::print_vec_unicode(ICON_ENVIRONMENT_PROPS.TargetUnicode);
    }
    if (knownFolderPropsIsSet) {
        /* KNOWN_FOLDER_PROPS struct*/
        cout << "KNOWN_FOLDER_PROPS: " << endl;
        cout << "   BlockSize:                       " << dec << Utils::lenFourBytes(KNOWN_FOLDER_PROPS.BlockSize) << " bytes" << endl;
        cout << "   BlockSignature:                  "; Utils::print_vec(KNOWN_FOLDER_PROPS.BlockSignature);
        // TODO: дописать парсинг
        // A value in GUID packet representation ([MS-DTYP] section 2.3.4.2) that specifies the folder GUID ID.
        cout << "   KnownFolderID:                   "; Utils::print_vec(KNOWN_FOLDER_PROPS.KnownFolderID);
        cout << "   Offset:                          "; Utils::print_vec(KNOWN_FOLDER_PROPS.Offset);
    }
    if (propertyStorePropsIsSet) {
        /* PROPERTY_STORE_PROPS struct*/
        cout << "PROPERTY_STORE_PROPS: " << endl;
        cout << "   BlockSize:                       " << dec << Utils::lenFourBytes(PROPERTY_STORE_PROPS.BlockSize) << " bytes" << endl;
        cout << "   BlockSignature:                  "; Utils::print_vec(PROPERTY_STORE_PROPS.BlockSignature);
        cout << "   PropertyStore:                   ";                             // A serialized property storage structure ([MS-PROPSTORE] section 2.2).
        cout << "       StorageSize:                 " << dec << Utils::lenFourBytes(PROPERTY_STORE_PROPS.PropertyStore.StorageSize)
                                                       << " bytes" << endl;
        cout << "       Version:                     "; Utils::print_vec(PROPERTY_STORE_PROPS.PropertyStore.Version);
        cout << "       FormatID:                    "; Utils::print_vec(PROPERTY_STORE_PROPS.PropertyStore.FormatID);
            cout << " Has to be equal to 0x53505331." <<  endl;

        for (int i = 0; i < PROPERTY_STORE_PROPS.PropertyStore.SerializedPropertyValue.size(); ++i) {
            cout << "     SerializedPropertyValue " << i << ":" << endl;
            cout << "           ValueSize                " << dec <<
                Utils::lenFourBytes(PROPERTY_STORE_PROPS.PropertyStore.SerializedPropertyValue[i].ValueSize)  << " bytes" << endl;
            if (isStringNameStructInPropsStorage) {
                /* for StringName */
                cout << "           NameSize                 "  << dec <<
                    Utils::lenFourBytes(PROPERTY_STORE_PROPS.PropertyStore.SerializedPropertyValue[i].NameSizeOrId) << " bytes" << endl;
            } else {
                /* for IntegerName */
                cout << "           Id                       " << dec <<
                     Utils::lenFourBytes(PROPERTY_STORE_PROPS.PropertyStore.SerializedPropertyValue[i].NameSizeOrId) << endl;
            }
            cout << "           Reserved                 ";
                Utils::print_vec(PROPERTY_STORE_PROPS.PropertyStore.SerializedPropertyValue[i].Reserved);
                cout << " MUST be 0x00." << endl;
            if (isStringNameStructInPropsStorage) {
                /* for StringName */
                cout << "           Name                 ";
                    Utils::print_vec_unicode(PROPERTY_STORE_PROPS.PropertyStore.SerializedPropertyValue[i].Name);
            }
            cout << "           Value: A TypedPropertyValue structure";
            cout << "              Type:                 ";
                parseTypedPropertyValueTypeAndValue(true, PROPERTY_STORE_PROPS.PropertyStore.SerializedPropertyValue[i].Value);
            cout << "              Padding:              ";
                Utils::print_vec(PROPERTY_STORE_PROPS.PropertyStore.SerializedPropertyValue[i].Value.Padding);
                cout << "MUST be set to zero, and any nonzero value SHOULD be rejected." << endl;
            cout << "              Value:                ";
                parseTypedPropertyValueTypeAndValue(false, PROPERTY_STORE_PROPS.PropertyStore.SerializedPropertyValue[i].Value);
        }
    }
    if (shimPropsIsSet) {
        /* SHIM_PROPS struct*/
        cout << "SHIM_PROPS: " << endl;
        cout << "   BlockSize:                       " << dec << Utils::lenFourBytes(SHIM_PROPS.BlockSize) << " bytes" << endl;
        cout << "   BlockSignature:                  "; Utils::print_vec(SHIM_PROPS.BlockSignature);
        cout << "   LayerName:                       "; Utils::print_vec_unicode(SHIM_PROPS.LayerName);
    }
    if (sFolderPropsIsSet) {
        /* SPECIAL_FOLDER_PROPS struct*/
        cout << "SPECIAL_FOLDER_PROPS: " << endl;
        cout << "   BlockSize:                       " << dec << Utils::lenFourBytes(SPECIAL_FOLDER_PROPS.BlockSize) << " bytes" << endl;
        cout << "   BlockSignature:                  "; Utils::print_vec(SPECIAL_FOLDER_PROPS.BlockSignature);
        cout << "   SpecialFolderID:                 "; Utils::print_vec(SPECIAL_FOLDER_PROPS.SpecialFolderID);
        cout << "   Offset:                          "; Utils::print_vec(SPECIAL_FOLDER_PROPS.Offset);
    }
    if (trackerPropsIsSet) {
        /* TRACKER_PROPS struct*/
        cout << "TRACKER_PROPS: " << endl;
        cout << "   BlockSize:                       " << dec << Utils::lenFourBytes(TRACKER_PROPS.BlockSize) << " bytes" << endl;
        cout << "   BlockSignature:                  "; Utils::print_vec(TRACKER_PROPS.BlockSignature);
        cout << "   Length:                          "  << dec << Utils::lenFourBytes(TRACKER_PROPS.Length) << " bytes" << endl;
        cout << "   Version:                         "; Utils::print_vec(TRACKER_PROPS.Version);
        // TODO: дописать парсинг
        // NetBIOS name: A 16-byte address that is used to identify a NetBIOS resource on the network.
        // For more information, see [RFC1001] and [RFC1002].
        cout << "   MachineID:                       "; Utils::print_vec_unicode(TRACKER_PROPS.MachineID);
        // TODO: дописать парсинг
        //Two values in GUID packet representation ([MS-DTYP] section 2.3.4.2)
        cout << "   Droid:                           "; Utils::print_vec(TRACKER_PROPS.Droid);
        cout << "   DroidBirth:                      "; Utils::print_vec(TRACKER_PROPS.DroidBirth);
    }
    if (vistaAndAboveIDListPropsIsSet) {
        /* VISTA_AND_ABOVE_IDLIST_PROPS struct*/
        cout << "VISTA_AND_ABOVE_IDLIST_PROPS: " << endl;
        cout << "   BlockSize:                       " << dec
            << Utils::lenFourBytes(VISTA_AND_ABOVE_IDLIST_PROPS.BlockSize) << " bytes" << endl;
        cout << "   BlockSignature:                  "; Utils::print_vec(VISTA_AND_ABOVE_IDLIST_PROPS.BlockSignature);
        cout << "   IDList: " <<  endl;
        for(int i = 0; i < VISTA_AND_ABOVE_IDLIST_PROPS.IDList.size(); ++i){
            cout << "       ItemID " << i + 1 << endl;
            cout << "           ItemIDSize:              " << dec
                 << Utils::lenTwoBytes(VISTA_AND_ABOVE_IDLIST_PROPS.IDList[i].ItemIDSize) << " bytes" << endl;
            cout << "           Data:                    "; Utils::print_vec(VISTA_AND_ABOVE_IDLIST_PROPS.IDList[i].Data);
        }
        cout << "           TerminalID:              "; Utils::print_vec(VISTA_AND_ABOVE_IDLIST_PROPS.TerminalID);
    }
    cout << "TerminalBlock:                      "; Utils::print_vec(TerminalBlock);
    cout << "_________________________________________________________" << endl;
}

void ExtraData::printExtraDataInHexStyle() {
    cout << "________________ExtraData in HEX style___________________" << endl;

    if (consolePropsIsSet) {
        /* CONSOLE_PROPS struct*/
        cout << "CONSOLE_PROPS: " << endl;
        cout << "   BlockSize:                       "; Utils::print_vec(CONSOLE_PROPS.BlockSize);
        cout << "   BlockSignature:                  "; Utils::print_vec(CONSOLE_PROPS.BlockSignature);
        cout << "   FillAttributes:                  "; Utils::print_vec(CONSOLE_PROPS.FillAttributes);
        cout << "   PopupFillAttributes:             "; Utils::print_vec(CONSOLE_PROPS.PopupFillAttributes);
        cout << "   ScreenBufferSizeX:               "; Utils::print_vec(CONSOLE_PROPS.ScreenBufferSizeX);
        cout << "   ScreenBufferSizeY:               "; Utils::print_vec(CONSOLE_PROPS.ScreenBufferSizeY);
        cout << "   WindowSizeX:                     "; Utils::print_vec(CONSOLE_PROPS.WindowSizeX);
        cout << "   WindowSizeY:                     "; Utils::print_vec(CONSOLE_PROPS.WindowSizeY);
        cout << "   WindowOriginX:                   "; Utils::print_vec(CONSOLE_PROPS.WindowOriginX);
        cout << "   WindowOriginY:                   "; Utils::print_vec(CONSOLE_PROPS.WindowOriginY);
        cout << "   UNUSED1:                         "; Utils::print_vec(CONSOLE_PROPS.UNUSED1);
        cout << "   UNUSED2:                         "; Utils::print_vec(CONSOLE_PROPS.UNUSED2);
        cout << "   FontSize:                        "; Utils::print_vec(CONSOLE_PROPS.FontSize);
        cout << "   FontFamily:                      "; Utils::print_vec(CONSOLE_PROPS.FontFamily);
        cout << "   FontWeight:                      "; Utils::print_vec(CONSOLE_PROPS.FontWeight);
        cout << "   FaceName:                        "; Utils::print_vec(CONSOLE_PROPS.FaceName);
        cout << "   CursorSize:                      "; Utils::print_vec(CONSOLE_PROPS.CursorSize);
        cout << "   FullScreen:                      "; Utils::print_vec(CONSOLE_PROPS.FullScreen);
        cout << "   QuickEdit:                       "; Utils::print_vec(CONSOLE_PROPS.QuickEdit);
        cout << "   InsertMode:                      "; Utils::print_vec(CONSOLE_PROPS.InsertMode);
        cout << "   AutoPosition:                    "; Utils::print_vec(CONSOLE_PROPS.AutoPosition);
        cout << "   HistoryBufferSize:               "; Utils::print_vec(CONSOLE_PROPS.HistoryBufferSize);
        cout << "   NumberOfHistoryBuffers:          "; Utils::print_vec(CONSOLE_PROPS.NumberOfHistoryBuffers);
        cout << "   HistoryNoDup:                    "; Utils::print_vec(CONSOLE_PROPS.HistoryNoDup);
        cout << "   ColorTable:                      "; Utils::print_vec(CONSOLE_PROPS.ColorTable);
    }
    if (consoleFEIsSet) {
        /* CONSOLE_FE_PROPS struct*/
        cout << "CONSOLE_FE_PROPS: " << endl;
        cout << "   BlockSize:                       "; Utils::print_vec(CONSOLE_FE_PROPS.BlockSize);
        cout << "   BlockSignature:                  "; Utils::print_vec(CONSOLE_FE_PROPS.BlockSignature);
        cout << "   CodePage:                        "; Utils::print_vec(CONSOLE_FE_PROPS.CodePage);
    }
    if (drownPropsIsSet) {
        /* DARWIN_PROPS struct*/
        cout << "DARWIN_PROPS: " << endl;
        cout << "   BlockSize:                       "; Utils::print_vec(DARWIN_PROPS.BlockSize);
        cout << "   BlockSignature:                  "; Utils::print_vec(DARWIN_PROPS.BlockSignature);
        cout << "   DarwinDataAnsi:                  "; Utils::print_vec(DARWIN_PROPS.DarwinDataAnsi);
        cout << "   DarwinDataUnicode:               "; Utils::print_vec(DARWIN_PROPS.DarwinDataUnicode);
    }
    if (environmentPropsIsSet) {
        /* ENVIRONMENT_PROPS struct*/
        cout << "ENVIRONMENT_PROPS: " << endl;
        cout << "   BlockSize:                       "; Utils::print_vec(ENVIRONMENT_PROPS.BlockSize);
        cout << "   BlockSignature:                  "; Utils::print_vec(ENVIRONMENT_PROPS.BlockSignature);
        cout << "   TargetAnsi:                      "; Utils::print_vec(ENVIRONMENT_PROPS.TargetAnsi);
        cout << "   TargetUnicode:                   "; Utils::print_vec(ENVIRONMENT_PROPS.TargetUnicode);
    }
    if (iconEnvironmentPropsIsSet) {
        /* ICON_ENVIRONMENT_PROPS struct*/
        cout << "ICON_ENVIRONMENT_PROPS: " << endl;
        cout << "   BlockSize:                       "; Utils::print_vec(ICON_ENVIRONMENT_PROPS.BlockSize);
        cout << "   BlockSignature:                  "; Utils::print_vec(ICON_ENVIRONMENT_PROPS.BlockSignature);
        cout << "   TargetAnsi:                      "; Utils::print_vec(ICON_ENVIRONMENT_PROPS.TargetAnsi);
        cout << "   TargetUnicode:                   "; Utils::print_vec(ICON_ENVIRONMENT_PROPS.TargetUnicode);

    }
    if (knownFolderPropsIsSet) {
        /* KNOWN_FOLDER_PROPS struct*/
        cout << "KNOWN_FOLDER_PROPS: " << endl;
        cout << "   BlockSize:                       "; Utils::print_vec(KNOWN_FOLDER_PROPS.BlockSize);
        cout << "   BlockSignature:                  "; Utils::print_vec(KNOWN_FOLDER_PROPS.BlockSignature);
        cout << "   KnownFolderID:                   "; Utils::print_vec(KNOWN_FOLDER_PROPS.KnownFolderID);
        cout << "   Offset:                          "; Utils::print_vec(KNOWN_FOLDER_PROPS.Offset);
    }
    if (propertyStorePropsIsSet) {
        /* PROPERTY_STORE_PROPS struct*/
        cout << "PROPERTY_STORE_PROPS: " << endl;
        cout << "   BlockSize:                       "; Utils::print_vec(PROPERTY_STORE_PROPS.BlockSize);
        cout << "   BlockSignature:                  "; Utils::print_vec(PROPERTY_STORE_PROPS.BlockSignature);
        // TODO: дописать парсинг
        // A serialized property storage structure ([MS-PROPSTORE] section 2.2).
        cout << "   PropertyStore:                   ";
        cout << "       StorageSize:                 "; Utils::print_vec(PROPERTY_STORE_PROPS.PropertyStore.StorageSize);
        cout << "       Version:                     "; Utils::print_vec(PROPERTY_STORE_PROPS.PropertyStore.Version);
        cout << "       FormatID:                    "; Utils::print_vec(PROPERTY_STORE_PROPS.PropertyStore.FormatID);
            cout << " Has to be equal to 0x53505331." <<  endl;

        for (int i = 0; i < PROPERTY_STORE_PROPS.PropertyStore.SerializedPropertyValue.size(); ++i) {
            cout << "     SerializedPropertyValue " << i << ":" << endl;
            cout << "           ValueSize                ";
                Utils::print_vec(PROPERTY_STORE_PROPS.PropertyStore.SerializedPropertyValue[i].ValueSize);
            if (isStringNameStructInPropsStorage) {
                /* for StringName */
                cout << "           NameSize                 ";
                    Utils::print_vec(PROPERTY_STORE_PROPS.PropertyStore.SerializedPropertyValue[i].NameSizeOrId);
            } else {
                /* for IntegerName */
                cout << "           Id                       ";
                    Utils::print_vec(PROPERTY_STORE_PROPS.PropertyStore.SerializedPropertyValue[i].NameSizeOrId);
            }
            cout << "           Reserved                 ";
            Utils::print_vec(PROPERTY_STORE_PROPS.PropertyStore.SerializedPropertyValue[i].Reserved);
                cout << " MUST be 0x00." << endl;
            if (isStringNameStructInPropsStorage) {
                /* for StringName */
                cout << "           Name                 ";
                    Utils::print_vec(PROPERTY_STORE_PROPS.PropertyStore.SerializedPropertyValue[i].Name);
            }
            cout << "           Value: A TypedPropertyValue structure";
            cout << "              Type:                 ";
                Utils::print_vec(PROPERTY_STORE_PROPS.PropertyStore.SerializedPropertyValue[i].Value.Type);
            cout << "              Padding:              ";
                Utils::print_vec(PROPERTY_STORE_PROPS.PropertyStore.SerializedPropertyValue[i].Value.Padding);
            cout << "              Value:                ";
                Utils::print_vec(PROPERTY_STORE_PROPS.PropertyStore.SerializedPropertyValue[i].Value.Value);
        }
    }
    if (shimPropsIsSet) {
        /* SHIM_PROPS struct*/
        cout << "SHIM_PROPS: " << endl;
        cout << "   BlockSize:                       "; Utils::print_vec(SHIM_PROPS.BlockSize);
        cout << "   BlockSignature:                  "; Utils::print_vec(SHIM_PROPS.BlockSignature);
        cout << "   LayerName:                       "; Utils::print_vec(SHIM_PROPS.LayerName);

    }
    if (sFolderPropsIsSet) {
        /* SPECIAL_FOLDER_PROPS struct*/
        cout << "SPECIAL_FOLDER_PROPS: " << endl;
        cout << "   BlockSize:                       "; Utils::print_vec(SPECIAL_FOLDER_PROPS.BlockSize);
        cout << "   BlockSignature:                  "; Utils::print_vec(SPECIAL_FOLDER_PROPS.BlockSignature);
        cout << "   SpecialFolderID:                 "; Utils::print_vec(SPECIAL_FOLDER_PROPS.SpecialFolderID);
        cout << "   Offset:                          "; Utils::print_vec(SPECIAL_FOLDER_PROPS.Offset);
    }
    if (trackerPropsIsSet) {
        /* TRACKER_PROPS struct*/
        cout << "TRACKER_PROPS: " << endl;
        cout << "   BlockSize:                       "; Utils::print_vec(TRACKER_PROPS.BlockSize);
        cout << "   BlockSignature:                  "; Utils::print_vec(TRACKER_PROPS.BlockSignature);
        cout << "   Length:                          "; Utils::print_vec(TRACKER_PROPS.Length);
        cout << "   Version:                         "; Utils::print_vec(TRACKER_PROPS.Version);
        cout << "   MachineID:                       "; Utils::print_vec(TRACKER_PROPS.MachineID);
        cout << "   Droid:                           "; Utils::print_vec(TRACKER_PROPS.Droid);
        cout << "   DroidBirth:                      "; Utils::print_vec(TRACKER_PROPS.DroidBirth);
    }
    if (vistaAndAboveIDListPropsIsSet) {
        /* VISTA_AND_ABOVE_IDLIST_PROPS struct*/
        cout << "VISTA_AND_ABOVE_IDLIST_PROPS: " << endl;
        cout << "   BlockSize:                       "; Utils::print_vec(VISTA_AND_ABOVE_IDLIST_PROPS.BlockSize);
        cout << "   BlockSignature:                  "; Utils::print_vec(VISTA_AND_ABOVE_IDLIST_PROPS.BlockSignature);
        cout << "   IDList:" <<  endl;
        for(int i = 0; i < VISTA_AND_ABOVE_IDLIST_PROPS.IDList.size(); ++i){
            cout << "       ItemID " << i + 1 << endl;
            cout << "           ItemIDSize:              "; Utils::print_vec(VISTA_AND_ABOVE_IDLIST_PROPS.IDList[i].ItemIDSize);
            cout << "           Data:                    "; Utils::print_vec(VISTA_AND_ABOVE_IDLIST_PROPS.IDList[i].Data);
        }
        cout << "   TerminalID:                      "; Utils::print_vec(VISTA_AND_ABOVE_IDLIST_PROPS.TerminalID);
    }
    cout << "TerminalBlock:                      "; Utils::print_vec(TerminalBlock);
    cout << "_________________________________________________________" << endl;
}

