#include "ExtraData.h"

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wc++11-narrowing"
using namespace std;

ExtraData::ExtraData(ReadStream *readStream, int readFrom) {
    fillExtraData(readStream, readFrom);
}

void ExtraData::fillExtraData(ReadStream *readStream, int readFrom) {
    int tmpReadFrom = readFrom;

    while (true) {
        vector<unsigned char> blockSize  = readStream->read(tmpReadFrom,4);
        reverse(blockSize.begin(), blockSize.end());

        if (blockSize[3] == 0x00) {
            std::copy(blockSize.begin(), blockSize.begin() + 4, std::back_inserter(TerminalBlock));
            break;
        }
        int len = Utils::lenFourBytes(blockSize);

        vector<unsigned char> signatureTmp  = readStream->read(tmpReadFrom + 4 ,4);
        reverse(signatureTmp.begin(), signatureTmp.end());
        unsigned int signature = Utils::lenFourBytes(signatureTmp);

        if (len == 0x000000CC && !ShellLinkHeader::EnableTargetMetadataIsSet() &&
            !consolePropsIsSet && signature == 0xa0000002) { // чтобы пройти дальше в случе ошибки
            /* CONSOLE_PROPS struct*/
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
        if (len == 0x0000000C && !ShellLinkHeader::EnableTargetMetadataIsSet() &&
            !consoleFEIsSet && signature == 0xa0000004) {
            /* CONSOLE_FE_PROPS struct*/
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
        if (ShellLinkHeader::HasDarwinIDIsSet() && len ==  0x00000314 && !drownPropsIsSet && signature == 0xa0000006) {
            /* DARWIN_PROPS struct*/
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
        if (ShellLinkHeader::HasExpStringIsSet() && len ==  0x00000314 && !environmentPropsIsSet && signature == 0xa0000001) {
            /* ENVIRONMENT_PROPS struct*/
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
        if (ShellLinkHeader::HasExpIconIsSet() && len ==  0x00000314 && !iconEnvironmentPropsIsSet && signature == 0xa0000007) {
            /* ICON_ENVIRONMENT_PROPS struct*/
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
        if (len ==  0x0000001C && !ShellLinkHeader::EnableTargetMetadataIsSet() &&
            !knownFolderPropsIsSet && signature == 0xa000000b) {
            /* KNOWN_FOLDER_PROPS struct*/
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
        if ((ShellLinkHeader::EnableTargetMetadataIsSet() || (len >=  0x0000000C && !propertyStorePropsIsSet)) && signature == 0xa0000009) {
            /* PROPERTY_STORE_PROPS struct*/
            vector<unsigned char> propertyStoreBlockSize  = readStream->read(tmpReadFrom,4);
            std::copy(propertyStoreBlockSize.begin(), propertyStoreBlockSize.end(),
                      std::back_inserter(PROPERTY_STORE_PROPS.BlockSize));

            reverse(propertyStoreBlockSize.begin(), propertyStoreBlockSize.end());
            int lenTmp = Utils::lenFourBytes(propertyStoreBlockSize);
            int lenOfPropStore = lenTmp;

            vector<unsigned char> propertyStorePropsStruct  = readStream->read(tmpReadFrom, lenTmp - 4);
            auto it = propertyStorePropsStruct.begin() + 4;
            std::copy(it, it + 4, std::back_inserter(PROPERTY_STORE_PROPS.BlockSignature));
            it = it + 4;
            /* Parsing of PropertyStore struct */
            std::vector<unsigned char> tmpPropertyStore;
            std::copy(it, it + lenTmp - 8, std::back_inserter(tmpPropertyStore));
            auto tmpIt = tmpPropertyStore.begin();

            lenTmp -= 8;
            int storageSize = 0;
            do {
                PropertyStorePropsStruct::SerializedPropertyStorage tmpSerializedPropertyStorage;
                std::copy(tmpIt, tmpIt + 4, std::back_inserter(tmpSerializedPropertyStorage.StorageSize));
                tmpIt = tmpIt + 4;
                std::reverse(tmpSerializedPropertyStorage.StorageSize.begin(), tmpSerializedPropertyStorage.StorageSize.end());
                storageSize = Utils::lenFourBytes(tmpSerializedPropertyStorage.StorageSize);
                lenTmp -= storageSize;

                std::copy(tmpIt, tmpIt + 4, std::back_inserter(tmpSerializedPropertyStorage.Version));
                tmpIt = tmpIt + 4;
                std::copy(tmpIt, tmpIt + 16, std::back_inserter(tmpSerializedPropertyStorage.FormatID));
                tmpIt = tmpIt + 16;
                storageSize -= 24;

                int len = 0;
                do {
                    PropertyStorePropsStruct::StringOrIntegerName tmpStringOrIntegerName;
                    std::copy(tmpIt, tmpIt + 4, std::back_inserter(tmpStringOrIntegerName.ValueSize));
                    tmpIt = tmpIt + 4;
                    std::reverse(tmpStringOrIntegerName.ValueSize.begin(), tmpStringOrIntegerName.ValueSize.end());
                    len = Utils::lenFourBytes(tmpStringOrIntegerName.ValueSize);
                    if(((storageSize != 0) && (len > storageSize)) || len < 0) //Чтобы парсинг работал и для jump List
                        break;
                    int sizeOfValue = len;

                    std::copy(tmpIt, tmpIt + 4, std::back_inserter(tmpStringOrIntegerName.NameSizeOrId));
                    tmpIt = tmpIt + 4;
                    std::copy(tmpIt, tmpIt + 1, std::back_inserter(tmpStringOrIntegerName.Reserved));
                    tmpIt = tmpIt + 1;
                    sizeOfValue -= 9;
                    setStringNameStructInPropsStorage(tmpSerializedPropertyStorage);
                    if (isStringNameStructInPropsStorage) {
                        /* for StringName */
                        std::reverse(tmpStringOrIntegerName.NameSizeOrId.begin(), tmpStringOrIntegerName.NameSizeOrId.end());
                        int count  = Utils::lenFourBytes(tmpStringOrIntegerName.NameSizeOrId);
                        std::reverse(tmpStringOrIntegerName.NameSizeOrId.begin(), tmpStringOrIntegerName.NameSizeOrId.end());
                        std::copy(tmpIt, tmpIt + count, std::back_inserter(tmpStringOrIntegerName.Name));
                        tmpIt = tmpIt + count;
                        sizeOfValue -= count;
                    }

                    /* for TypedPropertyValue */
                    std::copy(tmpIt, tmpIt + 2, std::back_inserter(tmpStringOrIntegerName.Value.Type));
                    tmpIt = tmpIt + 2;
                    std::copy(tmpIt, tmpIt + 2, std::back_inserter(tmpStringOrIntegerName.Value.Padding));
                    tmpIt = tmpIt + 2;
                    sizeOfValue -= 4;
                    std::copy(tmpIt, tmpIt + sizeOfValue, std::back_inserter(tmpStringOrIntegerName.Value.Value));
                    tmpIt = tmpIt + sizeOfValue;

                    tmpSerializedPropertyStorage.SerializedPropertyValue.push_back(tmpStringOrIntegerName);
                    storageSize -= len;
                    if(storageSize == 4)
                        break;
                } while (len > 0);
                 std::copy(tmpIt, tmpIt + 4, std::back_inserter(
                        tmpSerializedPropertyStorage.TerminalIdentifier));
                tmpIt = tmpIt + 4;
                PROPERTY_STORE_PROPS.PropertyStore.push_back(tmpSerializedPropertyStorage);
            } while (lenTmp > 4);

            tmpReadFrom = tmpReadFrom + lenOfPropStore;
            vector<unsigned char> terminalId  = readStream->read(tmpReadFrom - 4, 4);
            std::copy(terminalId.begin() , terminalId.begin() + 4, std::back_inserter(PROPERTY_STORE_PROPS.TerminalId));
            propertyStorePropsIsSet = true;
            continue;
        }
        if (ShellLinkHeader::RunWithShimLayerIsSet() && len >= 0x00000088 && !shimPropsIsSet && signature == 0xa0000008) {
            /* SHIM_PROPS struct*/
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
        if (len == 0x00000010 && !sFolderPropsIsSet && signature == 0xa0000005) {
            /* SPECIAL_FOLDER_PROPS struct*/
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
        if (!ShellLinkHeader::ForceNoLinkTrackIsSet() && len == 0x00000060 && !trackerPropsIsSet && signature == 0xa0000003) {
            /* TRACKER_PROPS struct*/
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
        if (len >= 0x0000000A && !vistaAndAboveIDListPropsIsSet && signature == 0xa000000c) {
            /* VISTA_AND_ABOVE_IDLIST_PROPS struct*/
            vector<unsigned char> vistaBlockSize  = readStream->read(tmpReadFrom,4);
            std::copy(vistaBlockSize.begin(), vistaBlockSize.end(),
                      std::back_inserter(VISTA_AND_ABOVE_IDLIST_PROPS.BlockSize));

            reverse(vistaBlockSize.begin(), vistaBlockSize.end());
            int lenTmp = Utils::lenFourBytes(vistaBlockSize);

            vector<unsigned char> vistaStruct  = readStream->read(tmpReadFrom,lenTmp);
            auto it = vistaStruct.begin() + 4;
            std::copy(it, it + 4, std::back_inserter(VISTA_AND_ABOVE_IDLIST_PROPS.BlockSignature));
            it = it + 4;
            VISTA_AND_ABOVE_IDLIST_PROPS.IDList = Utils::fillItemIdList(lenTmp - 12, it);
            it = it + lenTmp - 12;
            std::copy(it, it + 2, std::back_inserter(VISTA_AND_ABOVE_IDLIST_PROPS.TerminalID));

            tmpReadFrom = tmpReadFrom + lenTmp;
            vistaAndAboveIDListPropsIsSet = true;
        }
    }

    ExtraDataOffsetEnd = tmpReadFrom;
    reverseAllFields();
}

int ExtraData::getExtraDataOffsetEnd() {
    return ExtraDataOffsetEnd;
}

void ExtraData::setStringNameStructInPropsStorage(PropertyStorePropsStruct::SerializedPropertyStorage tmpSerializedPropertyStorage) {
    if (tmpSerializedPropertyStorage.FormatID[0] == 0xD5 && tmpSerializedPropertyStorage.FormatID[1] == 0xCD &&
        tmpSerializedPropertyStorage.FormatID[2] == 0xD5 && tmpSerializedPropertyStorage.FormatID[3] == 0x05 &&
        tmpSerializedPropertyStorage.FormatID[4] == 0x2E && tmpSerializedPropertyStorage.FormatID[5] == 0x9C &&
        tmpSerializedPropertyStorage.FormatID[6] == 0x10 && tmpSerializedPropertyStorage.FormatID[7] == 0x1B &&
        tmpSerializedPropertyStorage.FormatID[8] == 0x93 && tmpSerializedPropertyStorage.FormatID[9] == 0x97 &&
        tmpSerializedPropertyStorage.FormatID[10] == 0x08 && tmpSerializedPropertyStorage.FormatID[11] == 0x00 &&
        tmpSerializedPropertyStorage.FormatID[12] == 0x2B && tmpSerializedPropertyStorage.FormatID[13] == 0x2C &&
        tmpSerializedPropertyStorage.FormatID[14] == 0xF9 && tmpSerializedPropertyStorage.FormatID[15] == 0xAE
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
    }
    if (iconEnvironmentPropsIsSet) {
        /* ICON_ENVIRONMENT_PROPS struct*/
        reverse(ICON_ENVIRONMENT_PROPS.BlockSize.begin(), ICON_ENVIRONMENT_PROPS.BlockSize.end());
        reverse(ICON_ENVIRONMENT_PROPS.BlockSignature.begin(), ICON_ENVIRONMENT_PROPS.BlockSignature.end());
    }
    if (knownFolderPropsIsSet) {
        /* KNOWN_FOLDER_PROPS struct*/
        reverse(KNOWN_FOLDER_PROPS.BlockSize.begin(), KNOWN_FOLDER_PROPS.BlockSize.end());
        reverse(KNOWN_FOLDER_PROPS.BlockSignature.begin(), KNOWN_FOLDER_PROPS.BlockSignature.end());
        reverse(KNOWN_FOLDER_PROPS.Offset.begin(), KNOWN_FOLDER_PROPS.Offset.end());
    }
    if (propertyStorePropsIsSet) {
        /* PROPERTY_STORE_PROPS struct*/
        reverse(PROPERTY_STORE_PROPS.BlockSize.begin(), PROPERTY_STORE_PROPS.BlockSize.end());
        reverse(PROPERTY_STORE_PROPS.BlockSignature.begin(), PROPERTY_STORE_PROPS.BlockSignature.end());
        /* parse of SerializedPropertyStorage */
        for (int j = 0; j < PROPERTY_STORE_PROPS.PropertyStore.size(); ++j) {
            reverse(PROPERTY_STORE_PROPS.PropertyStore[j].Version.begin(), PROPERTY_STORE_PROPS.PropertyStore[j].Version.end());
            for (int i = 0; i <  PROPERTY_STORE_PROPS.PropertyStore[j].SerializedPropertyValue.size(); ++i) {
                reverse(PROPERTY_STORE_PROPS.PropertyStore[j].SerializedPropertyValue[i].NameSizeOrId.begin(),
                        PROPERTY_STORE_PROPS.PropertyStore[j].SerializedPropertyValue[i].NameSizeOrId.end());
                reverse(PROPERTY_STORE_PROPS.PropertyStore[j].SerializedPropertyValue[i].Reserved.begin(),
                        PROPERTY_STORE_PROPS.PropertyStore[j].SerializedPropertyValue[i].Reserved.end());
                if (isStringNameStructInPropsStorage)
                    reverse(PROPERTY_STORE_PROPS.PropertyStore[j].SerializedPropertyValue[i].Name.begin(),
                            PROPERTY_STORE_PROPS.PropertyStore[j].SerializedPropertyValue[i].Name.end());
                /* parse of TypedPropertyValue */
                reverse(PROPERTY_STORE_PROPS.PropertyStore[j].SerializedPropertyValue[i].Value.Type.begin(),
                        PROPERTY_STORE_PROPS.PropertyStore[j].SerializedPropertyValue[i].Value.Type.end());
                reverse(PROPERTY_STORE_PROPS.PropertyStore[j].SerializedPropertyValue[i].Value.Padding.begin(),
                        PROPERTY_STORE_PROPS.PropertyStore[j].SerializedPropertyValue[i].Value.Padding.end());
                reverse(PROPERTY_STORE_PROPS.PropertyStore[j].SerializedPropertyValue[i].Value.Value.begin(),
                        PROPERTY_STORE_PROPS.PropertyStore[j].SerializedPropertyValue[i].Value.Value.end());
            }

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
    }
    if (vistaAndAboveIDListPropsIsSet) {
        /* VISTA_AND_ABOVE_IDLIST_PROPS struct*/
        reverse(VISTA_AND_ABOVE_IDLIST_PROPS.BlockSize.begin(), VISTA_AND_ABOVE_IDLIST_PROPS.BlockSize.end());
        reverse(VISTA_AND_ABOVE_IDLIST_PROPS.BlockSignature.begin(), VISTA_AND_ABOVE_IDLIST_PROPS.BlockSignature.end());
        reverse(VISTA_AND_ABOVE_IDLIST_PROPS.IDList.begin(), VISTA_AND_ABOVE_IDLIST_PROPS.IDList.end());
    }
}
void ExtraData::parseFillAttributes(bool popupFillAttributes) {
    if (popupFillAttributes) {
        for (int i = 0; i < CONSOLE_PROPS.PopupFillAttributes.size(); ++i) {
            if (CONSOLE_PROPS.PopupFillAttributes[i] & FOREGROUND_BLUE) cout << "FOREGROUND_BLUE: " <<
                Utils::defaultOffsetDocInfo << "The foreground text color contains blue." << endl;
            if (CONSOLE_PROPS.PopupFillAttributes[i] & FOREGROUND_GREEN) cout << "FOREGROUND_GREEN: "<<
                Utils::defaultOffsetDocInfo << "The foreground text color contains green." << endl;
            if (CONSOLE_PROPS.PopupFillAttributes[i] & FOREGROUND_RED) cout << "FOREGROUND_RED: "<<
                Utils::defaultOffsetDocInfo << "The foreground text color contains red." << endl;
            if (CONSOLE_PROPS.PopupFillAttributes[i] & FOREGROUND_INTENSITY) cout << "FOREGROUND_INTENSITY: "<<
                Utils::defaultOffsetDocInfo << "The foreground text color is intensified." << endl;
            if (CONSOLE_PROPS.PopupFillAttributes[i] & BACKGROUND_BLUE) cout << "BACKGROUND_BLUE: "<<
                Utils::defaultOffsetDocInfo << "The background text color contains blue." << endl;
            if (CONSOLE_PROPS.PopupFillAttributes[i] & BACKGROUND_GREEN) cout << "BACKGROUND_GREEN; "<<
                Utils::defaultOffsetDocInfo << "The background text color contains green." << endl;
            if (CONSOLE_PROPS.PopupFillAttributes[i] & BACKGROUND_RED) cout << "BACKGROUND_RED: "<<
                Utils::defaultOffsetDocInfo << "The background text color contains red." << endl;
            if (CONSOLE_PROPS.PopupFillAttributes[i] & BACKGROUND_INTENSITY) cout << "BACKGROUND_INTENSITY: "<<
                Utils::defaultOffsetDocInfo << "The background text color is intensified." << endl;
        }
    } else {
        for (int i = 0; i < CONSOLE_PROPS.FillAttributes.size(); ++i) {
            if (CONSOLE_PROPS.FillAttributes[i] & FOREGROUND_BLUE) cout << "FOREGROUND_BLUE: " <<
                Utils::defaultOffsetDocInfo << "The foreground text color contains blue." << endl;
            if (CONSOLE_PROPS.FillAttributes[i] & FOREGROUND_GREEN) cout << "FOREGROUND_GREEN: "<<
                Utils::defaultOffsetDocInfo << "The foreground text color contains green." << endl;
            if (CONSOLE_PROPS.FillAttributes[i] & FOREGROUND_RED) cout << "FOREGROUND_RED: "<<
                Utils::defaultOffsetDocInfo << "The foreground text color contains red." << endl;
            if (CONSOLE_PROPS.FillAttributes[i] & FOREGROUND_INTENSITY) cout << "FOREGROUND_INTENSITY: "<<
                Utils::defaultOffsetDocInfo << "The foreground text color is intensified." << endl;
            if (CONSOLE_PROPS.FillAttributes[i] & BACKGROUND_BLUE) cout << "BACKGROUND_BLUE: "<<
                Utils::defaultOffsetDocInfo << "The background text color contains blue." << endl;
            if (CONSOLE_PROPS.FillAttributes[i] & BACKGROUND_GREEN) cout << "BACKGROUND_GREEN; "<<
                Utils::defaultOffsetDocInfo << "The background text color contains green." << endl;
            if (CONSOLE_PROPS.FillAttributes[i] & BACKGROUND_RED) cout << "BACKGROUND_RED: "<<
                Utils::defaultOffsetDocInfo << "The background text color contains red." << endl;
            if (CONSOLE_PROPS.FillAttributes[i] & BACKGROUND_INTENSITY) cout << "BACKGROUND_INTENSITY: "<<
                Utils::defaultOffsetDocInfo << "The background text color is intensified." << endl;
        }
    }
}
void ExtraData::parseFontFamily() {
    // Первые 2 байта - font family
    for (int i = 0; i < CONSOLE_PROPS.PopupFillAttributes.size() - 2; ++i) {
        if (CONSOLE_PROPS.FontFamily[i] & FF_DONTCARE) cout << "FF_DONTCARE: "<<
            Utils::defaultOffsetDocInfo << "The font family is unknown." << endl;
        if (CONSOLE_PROPS.FontFamily[i] & FF_ROMAN) cout << "FF_ROMAN: "<<
            Utils::defaultOffsetDocInfo << "The font is variable-width with serifs; for example, \"Times New Roman\"." << endl;
        if (CONSOLE_PROPS.FontFamily[i] & FF_SWISS) cout << "FF_SWISS: "<<
            Utils::defaultOffsetDocInfo << "The font is variable-width without serifs; for example, \"Arial\"." << endl;
        if (CONSOLE_PROPS.FontFamily[i] & FF_MODERN) cout << "FF_MODERN: "<<
            Utils::defaultOffsetDocInfo << "The font is fixed-width, with or without serifs; for example, \"Courier New\"." << endl;
        if (CONSOLE_PROPS.FontFamily[i] & FF_SCRIPT) cout << "FF_SCRIPTE: "<<
            Utils::defaultOffsetDocInfo << "The font is designed to look like handwriting; for example, \"Cursive\"." << endl;
        if (CONSOLE_PROPS.FontFamily[i] & FF_DECORATIVE) cout << "FF_DECORATIVE: "<<
            Utils::defaultOffsetDocInfo << "The font is a novelty font; for example, \"Old English\"." << endl;
    }
    // Последние 2 байта - font pitch (A bitwise OR of one or more of the following font-pitch bits ?)
    for (int i = 2; i < CONSOLE_PROPS.PopupFillAttributes.size(); ++i) {
        if (CONSOLE_PROPS.FontFamily[i] & TMPF_NONE) cout << "TMPF_NONE: "<<
            Utils::defaultOffsetDocInfo << "A font pitch does not apply." << endl;
        if (CONSOLE_PROPS.FontFamily[i] & TMPF_FIXED_PITCH) cout << "TMPF_FIXED_PITCH: "<<
            Utils::defaultOffsetDocInfo << "The font is a fixed-pitch font." << endl;
        if (CONSOLE_PROPS.FontFamily[i] & TMPF_VECTOR) cout << "TMPF_VECTOR: "<<
            Utils::defaultOffsetDocInfo << "The font is a vector font." << endl;
        if (CONSOLE_PROPS.FontFamily[i] & TMPF_TRUETYPE) cout << "TMPF_TRUETYPE: "<<
            Utils::defaultOffsetDocInfo << "The font is a true-type font." << endl;
        if (CONSOLE_PROPS.FontFamily[i] & TMPF_DEVICE) cout << "TMPF_DEVICE: "<<
            Utils::defaultOffsetDocInfo << "The font is specific to the device." << endl;
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

int ExtraData::parseCodePageStream(ExtraData::PropertyStorePropsStruct::StringOrIntegerName::TypedPropertyValue value, int from) {
    cout << Utils::defaultOffsetDocInfo << "MUST be a CodePageString." << endl;
    cout << "              Value:                " << endl;
    cout << "                 CodePageString:    " << endl;
    int len = Utils::lenFourBytesFromPos(value.Value, from);
    cout << "                     Size:          " << len << " bytes" << endl <<
         Utils::defaultOffsetDocInfo << "The size in bytes of the Characters field, including the null terminator, " << endl <<
         Utils::defaultOffsetDocInfo << "but not including padding (if any). If the property set's CodePage property " << endl <<
         Utils::defaultOffsetDocInfo << "has the value CP_WINUNICODE (0x04B0), then the value MUST be a multiple of 2." << endl;
    if(len == 0x04B0)
        len *= 2;
    cout << "                     Characters:    " << endl;
    if(len > 0) {;
        int posNullTerminator = Utils::getCountOfBytesBeforeNullTerminatorInt(value.Value.begin());
        if(len == 0x04B0) {
            Utils::print_vec_unicode(value.Value, from + 4, from + posNullTerminator);
        } else {
            Utils::print_vec_unicode(value.Value, from + 4, from + posNullTerminator);
        }
    }
    cout << Utils::defaultOffsetDocInfo << "If Size is nonzero and the CodePage property set's CodePage property " <<
         Utils::defaultOffsetDocInfo << "has the value CP_WINUNICODE (0x04B0), then the value MUST be a null-terminated array " <<
         Utils::defaultOffsetDocInfo << "of 16-bit Unicode characters, followed by zero padding to a multiple of 4 bytes." << endl <<

         Utils::defaultOffsetDocInfo << "If Size is nonzero and the property set's CodePage property has any other value, " <<
         Utils::defaultOffsetDocInfo << "it MUST be a null-terminated array of 8-bit characters from the code page " <<
         Utils::defaultOffsetDocInfo << "identified by the CodePage property, followed by zero padding to a multiple of 4 bytes." << endl;
    return len + 4;
}
int ExtraData::getVectorHeader(std::vector<unsigned int> val) {
    int len = Utils::lenFourBytes(val);
    cout << "              VectorHeader:         " << endl;
    cout << "                 Length:            " << dec << len << " bytes. " << endl;
    return len;
}
int ExtraData::getArrayHeader(std::vector<unsigned int> val) {
    cout << "              ArrayHeader:          " << endl;
    cout << "                 Type:              "; Utils::print_vec_from_to(val, 0, 4);
    cout << Utils::defaultOffsetDocInfo << "MUST be set to the value obtained by clearing " <<
            Utils::defaultOffsetDocInfo << "the VT_ARRAY (0x2000) bit of this array property's PropertyType value." << endl;
        unsigned int flag = Utils::vectFourBytesToUnsignedInt(val, 0);
        ExtraData::PropertyStorePropsStruct::StringOrIntegerName::TypedPropertyValue tmpVal;
        parseTypedPropertyValueTypeAndValue(false, flag, tmpVal);
    int countOfDimen = Utils::lenFourBytesFromPos(val, 4);
    cout << "                 NumDimensions:     " << Utils::lenFourBytesFromPos(val, 4) << endl;
    cout << Utils::defaultOffsetDocInfo << "n unsigned integer representing the number of dimensions " <<
            Utils::defaultOffsetDocInfo << "in the array property. MUST be at least 1 and at most 31." << endl;
    int len = 8, size = 0, index = 0;
    for(int i = 0; i < countOfDimen; ++i) {
        cout << "                 Dimension " << dec << i << ":        " << endl;
        size = Utils::lenFourBytesFromPos(val, len);
        cout << "                   Size:            " << dec << size << endl <<
            Utils::defaultOffsetDocInfo << "An unsigned integer representing the size of the dimension." << endl;
        index = Utils::lenFourBytesFromPos(val, len + 4);
        cout << "                   IndexOffset:     " << hex << index << endl <<
             Utils::defaultOffsetDocInfo << "A signed integer representing the index offset of the dimension." << endl;
        if(index == 0x00000001)
            cout << Utils::defaultOffsetDocInfo << "An array dimension that is to be accessed with a 1-based index would have the value 0x00000001."
            << endl;
        if(index == 0)
            cout << Utils::defaultOffsetDocInfo << "An array dimension that is to be accessed with a 0-based index would have the value zero." << endl;
        len += size;
    }
    return len;
}
void ExtraData::parseCURRENCY(std::vector<unsigned int> val, int pos) {
    // TODO: нужно сичтать число от 8 байт и ставить запятую через 4 цифры с конца
    cout << Utils::defaultOffsetDocInfo << "MUST be a CURRENCY (Packet Version)." << endl;
    cout << "              Value:                ";
    cout << "$ "; Utils::lenFourBytesFromPos(val, pos); cout << endl;
}
void ExtraData::parseVT_ERROR(std::vector<unsigned int> val, int from, int to) {
    // TODO: распарсить значения из
    //  https://docs.microsoft.com/en-us/openspecs/windows_protocols/ms-erref/705fb797-2175-4a90-b5a3-3918024b10b8
    Utils::print_vec_from_to(val, from, to);
}
void ExtraData::parseVT_BOOL(std::vector<unsigned int> val, int pos){
    reverse(val.begin(), val.end());
    if(val[pos] == 0x00 && val[pos+1] == 0x00)
        cout << "VARIANT_FALSE = 0x0000 ";
    else
        cout << "VARIANT_TRUE = 0xFFFF ";
    cout << ", followed by " << val[pos+2] << " " << val[pos+3] << endl;
    reverse(val.begin(), val.end());
}
int ExtraData::parseUnicodeString(std::vector<unsigned int> val, int pos) {
    cout << "                 CodePageString:    " << endl;
    int len = Utils::lenFourBytesFromPos(val, pos);
    if(len == 0 && val.size() > 4)
        len = (val.size() - 2) / 2;
    reverse(val.begin(), val.end());
    cout << "                     Length:        " << dec << len*2 << " bytes" << endl <<
         Utils::defaultOffsetDocInfo << "The length in 16-bit Unicode characters of the Characters field, " << endl <<
         Utils::defaultOffsetDocInfo << "including the null terminator, but not including padding (if any). " << endl;
    cout << "                     Characters:    ";
    if(len > 0) {
        Utils::print_vec_unicode(val, pos+4, val.size());
    } else
        cout << endl;
    reverse(val.begin(), val.end());
    cout << Utils::defaultOffsetDocInfo << "If Length is nonzero, this field MUST be a null-terminated array " << endl <<
         Utils::defaultOffsetDocInfo << "of 16-bit Unicode characters followed by zero padding to a multiple of 4 bytes. " << endl <<

         Utils::defaultOffsetDocInfo << "If Length is zero, this field MUST be zero bytes in length." << endl;
    return len;// + 4;
}
int ExtraData::parseClipboardData(std::vector<unsigned int> val, int pos) {
    cout << "                ClipboardData:      " << endl;
    int len = Utils::lenFourBytesFromPos(val, pos);
    cout << "                     Size:          " << len << " bytes" << endl <<
         Utils::defaultOffsetDocInfo << "The total size in bytes of the Format and Data fields, not including padding (if any)." << endl;
    cout << "                     Format:        " << Utils::lenFourBytesFromPos(val, pos+4) << endl <<
         Utils::defaultOffsetDocInfo << "An application-specific identifier for the format of the data in the Data field." << endl;
    cout << "                     Data:          "; Utils::print_vec_unicode(val, pos+8, pos + len - 8);
    cout << Utils::defaultOffsetDocInfo << "MUST be an array of bytes, followed by zero padding to a multiple of 4 bytes." << endl;
    return len + 4;
}
void ExtraData::parseDECIMAL(std::vector<unsigned int> val, int pos) {
    cout << "                DECIMAL:            " << endl;
    cout << "                 wReserved:         " << val[pos] << " " << val[pos+1] <<
         Utils::defaultOffsetDocInfo << "MUST be set to zero and MUST be ignored. " << endl;
    cout << "                 scale:             " << dec << val[pos+2] <<
         Utils::defaultOffsetDocInfo << "Order of magnitude of the decimal number. " << endl <<
         Utils::defaultOffsetDocInfo << "MUST be the power of 10 by which to divide the 96-bit integer represented by Hi32 * 2^64 + Lo64. " << endl <<
         Utils::defaultOffsetDocInfo << "The value MUST be in the range of 0 to 28, inclusive. " << endl;
    cout << "                 sign:              ";
    if(val[pos+3] == 0)
        cout << Utils::defaultOffset << "The decimal contains a positive value. " << endl;
    if(val[pos+3] == 0x80)
        cout << Utils::defaultOffset << "The decimal contains a negative value. " << endl;
    cout << Utils::defaultOffsetDocInfo << "MUST equalMUST equal to 0 or 0x80." << endl;
    cout << "                 Hi32:              "; Utils::print_vec_from_to(val, pos+4, pos+8);
    cout << Utils::defaultOffsetDocInfo << "MUST be the high 32 bits of the 96-bit integer " << endl <<
         Utils::defaultOffsetDocInfo << "that is scaled and signed to represent the final DECIMAL value. " << endl;
    cout << "                 Lo64:              "; Utils::print_vec_from_to(val, pos+8, pos+16);
    cout << Utils::defaultOffsetDocInfo << "MUST be the low 64 bits of the 96-bit integer" << endl <<
         Utils::defaultOffsetDocInfo << "that is scaled and signed to represent the final DECIMAL value." << endl;
}

void ExtraData::parseTypedPropertyValueTypeAndValue(bool parseType, unsigned int flag,
        ExtraData::PropertyStorePropsStruct::StringOrIntegerName::TypedPropertyValue value) {
    if (flag == VT_EMPTY) {
        cout << "VT_EMPTY: " << endl;
        if (parseType) cout << Utils::defaultOffsetDocInfo << "MUST be zero bytes in length." << endl;
        else cout << Utils::defaultOffsetDocInfo << "Type is undefined, and the minimum property set version is 0." << endl;
        return;
    }
    if (flag == VT_NULL) {
        cout << "VT_NULL: " << endl;
        if (parseType) cout << Utils::defaultOffsetDocInfo << "MUST be zero bytes in length." << endl;
        else cout << Utils::defaultOffsetDocInfo << "Type is null, and the minimum property set version is 0." << endl;
        return;
    }
    if (flag == VT_I2) {
        cout << "VT_I2: " << endl;
        if (parseType) {
            cout << Utils::defaultOffsetDocInfo << "MUST be a 16-bit signed integer, followed by zero padding to 4 bytes." << endl;
            cout << "              Value:                ";
            Utils::lenTwoBytes(value.Value); cout << " signed integer, followed by " << value.Value[2] << " " << value.Value[3] << endl;
        } else cout << Utils::defaultOffsetDocInfo << "Type is 16-bit signed integer, and the minimum property set version is 0." << endl;
        return;
    }
    if (flag == VT_I4) {
        cout << "VT_I4: " << endl;
        if (parseType) {
            cout << Utils::defaultOffsetDocInfo << "MUST be a 32-bit signed integer." << endl;
            cout << "              Value:                ";
            Utils::lenFourBytes(value.Value); cout << " signed integer" << endl;
        } else cout << Utils::defaultOffsetDocInfo << "Type is 32-bit signed integer, and the minimum property set version is 0." << endl;
        return;
    }
    if (flag == VT_R4) {
        // TODO: не понятно, как переводить floating-point number
        cout << "VT_R4: " << endl;
        if (parseType) {
            cout << Utils::defaultOffsetDocInfo << "MUST be a 4-byte (single-precision) IEEE floating-point number." << endl;
            cout << "              Value:                ";
            Utils::print_vec(value.Value);
        } else cout << Utils::defaultOffsetDocInfo << "Type is 4-byte (single-precision) IEEE floating-point number, and the minimum property set version is 0." << endl;
        return;
    }
    if (flag == VT_R8) {
        // TODO: не понятно, как переводить floating-point number
        cout << "VT_R8: " << endl;
        if (parseType) {
            cout << Utils::defaultOffsetDocInfo << "MUST be an 8-byte (double-precision) IEEE floating-point number." << endl;
            cout << "              Value:                ";
            Utils::print_vec(value.Value);
        }
        else cout << Utils::defaultOffsetDocInfo << "Type is 8-byte (double-precision) IEEE floating-point number, and the minimum property set version is 0." << endl;
        return;
    }
    if (flag == VT_CY) {
        cout << "VT_CY: " << endl;
        if (parseType) parseCURRENCY(value.Value, 0);
        else cout << Utils::defaultOffsetDocInfo << "Type is CURRENCY, and the minimum property set version is 0." << endl;
        return;
    }
    if ((flag == VT_BSTR) || (flag == VT_LPSTR)) {
        if(flag == VT_BSTR)
            cout << "VT_BSTR: " << endl;
        else
            cout << "VT_LPSTR: " << endl;

        if (parseType) parseCodePageStream(value, 0);
        else cout << Utils::defaultOffsetDocInfo << "Type is CodePageString, and the minimum property set version is 0." << endl;
        return;
    }
    if (flag == VT_ERROR) {
        cout << "VT_ERROR: " << endl;
        if (parseType) {
            cout << Utils::defaultOffsetDocInfo << "MUST be a 32-bit unsigned integer representing an HRESULT, as specified in [MS-DTYP]." << endl;
            cout << "              Value:                ";
            parseVT_ERROR(value.Value, 0, value.Value.size());
        } else cout << Utils::defaultOffsetDocInfo << "Type is HRESULT, and the minimum property set version is 0." << endl;
        return;
    }
    if (flag == VT_BOOL) {
        cout << "VT_BOOL: " << endl;
        if (parseType) {
            cout << Utils::defaultOffsetDocInfo << "MUST be a VARIANT_BOOL as specified in [MS-OAUT], followed by zero padding to 4 bytes." << endl;
            cout << "              Value:                ";
            parseVT_BOOL(value.Value, 0);
        } else cout << Utils::defaultOffsetDocInfo << "Type is VARIANT_BOOL, and the minimum property set version is 0." << endl;
        return;
    }
    if ((flag == VT_DECIMAL) || (flag == VT_ARRAY_VT_DECIMAL)) {
        if (flag == VT_DECIMAL)
            cout << "VT_DECIMAL: " << endl;
        if (flag == VT_ARRAY_VT_DECIMAL)
            cout  << "VT_ARRAY_VT_DECIMAL: " << endl;

        if (parseType) {
            int lenTmp = 0;
            if (flag == VT_DECIMAL) cout << Utils::defaultOffsetDocInfo << "MUST be a DECIMAL (Packet Version). " << endl;
            if (flag == VT_ARRAY_VT_DECIMAL) {
                lenTmp = getArrayHeader(value.Value);
                cout << Utils::defaultOffsetDocInfo << "MUST be an ArrayHeader followed by a sequence of DECIMAL (Packet Version) packets." << endl;
            }
            cout << "              Value:                ";
            int countOfIntegers = (value.Value.size() - lenTmp)/16;
            for(int i=lenTmp; i < countOfIntegers; i += 16)
                parseDECIMAL(value.Value, i);
        } else {
            if (flag == VT_DECIMAL)
                cout << Utils::defaultOffsetDocInfo << "Type is DECIMAL, and the minimum property set version is 0." << endl;
            if (flag == VT_ARRAY_VT_DECIMAL)
                cout << Utils::defaultOffsetDocInfo << "Type is Array of DECIMAL, and the minimum property set version is 1." << endl;
        }
        return;
    }
    if (flag == VT_I1) {
        cout << "VT_I1: " << endl;
        if (parseType) {
            cout << Utils::defaultOffsetDocInfo << "MUST be a 1-byte signed integer, followed by zero padding to 4 bytes." << endl;
            cout << "              Value:                ";
            cout << Utils::defaultOffset << dec << (signed int)value.Value[0] << " , followed by " <<
                 value.Value[1] << " " << value.Value[2] << " " <<  value.Value[3] << endl;
        } else cout << Utils::defaultOffsetDocInfo << "Type is 1-byte unsigned integer, and the minimum property set version is 0." << endl;
        return;
    }
    if (flag == VT_UI1) {
        cout << "VT_UI1: " << endl;
        if (parseType) {
            cout << Utils::defaultOffsetDocInfo << "MUST be a 1-byte unsigned integer, followed by zero padding to 4 bytes." << endl;
            cout << "              Value:                ";
            cout << Utils::defaultOffset << dec << value.Value[0] << " , followed by " <<
                 value.Value[1] << " " << value.Value[2] << " " <<  value.Value[3] << endl;
        } else cout << Utils::defaultOffsetDocInfo << "Type is null, and the minimum property set version is 0." << endl;
        return;
    }
    if (flag == VT_UI2) {
        cout << "VT_UI2: " << endl;
        if (parseType) {
            cout << Utils::defaultOffsetDocInfo << "MUST be a 2-byte unsigned integer, followed by zero padding to 4 bytes." << endl;
            cout << "              Value:                ";
            cout << Utils::defaultOffset << dec << Utils::lenTwoBytes(value.Value) << " , followed by " <<
                 value.Value[2] << " " <<  value.Value[3] << endl;
        } else cout << Utils::defaultOffsetDocInfo << "Type is 2-byte unsigned integer, and the minimum property set version is 0." << endl;
        return;
    }
    if ((flag == VT_UI4) || (flag == VT_UINT)) {
        if(flag == VT_UI4)
            cout << "VT_UI4: " << endl;
        else
            cout << "VT_UINT: " << endl;
        if (parseType) {
            cout << Utils::defaultOffsetDocInfo << "MUST be a 4-byte unsigned integer." << endl;
            cout << "              Value:                ";
            cout << Utils::defaultOffset << dec << Utils::lenFourBytes(value.Value) << endl;
        } else {
            if(flag == VT_UI4)
                cout << Utils::defaultOffsetDocInfo << "Type is 4-byte unsigned integer, and the minimum property set version is 0." << endl;
            else
                cout << Utils::defaultOffsetDocInfo << "Type is 4-byte unsigned integer, and the minimum property set version is 1." << endl;
        }
        return;
    }
    if (flag == VT_I8) {
        cout << "VT_I8: " << endl;
        if (parseType) {
            cout << Utils::defaultOffsetDocInfo << "MUST be an 8-byte signed integer." << endl;
            cout << "              Value:                ";
            Utils::vectEightBytesToUnsignedInt(value.Value, 0);
        } else cout << Utils::defaultOffsetDocInfo << "Type is 8-byte signed integer, and the minimum property set version is 0." << endl;
        return;
    }
    if (flag == VT_UI8) {
        cout << "VT_UI8: " << endl;
        if (parseType) {
            cout << Utils::defaultOffsetDocInfo << "MUST be an 8-byte unsigned integer." << endl;
            cout << "              Value:                ";
            Utils::vectEightBytesToUnsignedInt(value.Value, 0);
        } else cout << Utils::defaultOffsetDocInfo << "Type is 8-byte unsigned integer, and the minimum property set version is 0." << endl;
        return;
    }
    if (flag == VT_INT) {
        cout << "VT_INT: " << endl;
        if (parseType) {
            cout << Utils::defaultOffsetDocInfo << "MUST be a 4-byte signed integer." << endl;
            cout << "              Value:                ";
            cout << Utils::defaultOffset << dec << (signed int)Utils::lenFourBytes(value.Value) << endl;
        } else cout << Utils::defaultOffsetDocInfo << "Type is 4-byte signed integer, and the minimum property set version is 1." << endl;

        return;
    }
    if (flag == VT_LPWSTR) {
        cout << "VT_LPWSTR: " << endl;
        if (parseType) {
            cout << Utils::defaultOffsetDocInfo << "MUST be a UnicodeString." << endl;
            cout << "              Value:                " << endl;
            parseUnicodeString(value.Value, 0);
        } else cout << Utils::defaultOffsetDocInfo << "Type is UnicodeString, and the minimum property set version is 0." << endl;
        return;
    }
    if ((flag == VT_BLOB) || (flag == VT_BLOB_OBJECT)) {
        if(flag == VT_BLOB_OBJECT)
            cout << "VT_BLOB_OBJECT: " << endl;
        else
            cout << "VT_BLOB: " << endl;

        if (parseType) {
            cout << Utils::defaultOffsetDocInfo << "MUST be a BLOB." << endl;
            cout << "              Value:                ";
            cout << "                VT_BLOB:            " << endl;
            int len = Utils::lenFourBytes(value.Value);
            cout << "                     Size:          " << len << " bytes" << endl <<
                 Utils::defaultOffsetDocInfo << "The size in bytes of the Bytes field, not including padding (if any)." << endl;
            cout << "                     Bytes:         "; Utils::print_vec_from_to(value.Value, 4, value.Value.size());
            cout << Utils::defaultOffsetDocInfo << "MUST be an array of bytes, followed by zero padding to a multiple of 4 bytes." << endl;
        } else {
            if(flag == VT_BLOB_OBJECT)
                cout << Utils::defaultOffsetDocInfo << "Type is BLOB representing an object in an application-specific manner. The minimum property set version is 0." << endl;
            else
                cout << Utils::defaultOffsetDocInfo << "Type is binary large object (BLOB), and the minimum property set version is 0." << endl;
        }
        return;
    }
    if ((flag == VT_STREAM) || (flag == VT_STORAGE) ||
            (flag == VT_STREAMED_OBJECT) || (flag == VT_STORED_OBJECT)) {
        if(flag == VT_STREAM)
            cout << "VT_STREAM: " << endl;
        if(flag == VT_STORAGE)
            cout << "VT_STORAGE: " << endl;
        if(flag == VT_STREAMED_OBJECT)
            cout << "VT_STREAMED_OBJEC: " << endl;
        if (flag == VT_STORED_OBJECT)
            cout << "VT_STORED_OBJECT: " << endl;

        if (parseType) {
            cout << Utils::defaultOffsetDocInfo << "MUST be an IndirectPropertyName. " << endl <<
                 Utils::defaultOffsetDocInfo << "The storage representing the (non-simple) property set MUST have a stream element with this name." << endl;
            parseCodePageStream(value, 0);
        } else {
            if(flag == VT_STREAM)
                cout << Utils::defaultOffsetDocInfo << "Type is Stream, and the minimum property set version is 0. VT_STREAM is not allowed in a simple property set." << endl;
            if(flag == VT_STORAGE)
                cout << Utils::defaultOffsetDocInfo << "Type is Storage, and the minimum property set version is 0. VT_STORAGE is not allowed in a simple property set." << endl;
            if(flag == VT_STREAMED_OBJECT)
                cout << Utils::defaultOffsetDocInfo << "Type is Stream representing an Object in an application-specific manner, and the minimum property set version is 0. " << endl
                     << Utils::defaultOffsetDocInfo << "VT_STREAMED_Object is not allowed in a simple property set." << endl;
            if (flag == VT_STORED_OBJECT)
                cout << Utils::defaultOffsetDocInfo << "Type is Storage representing an Object in an application-specific manner, and the minimum property set version is 0. " << endl
                     << Utils::defaultOffsetDocInfo << "VT_STORED_Object is not allowed in a simple property set." << endl;
        }
        return;
    }
    if (flag == VT_CF) {
        cout << "VT_CF: " << endl;
        if (parseType) {
            cout << Utils::defaultOffsetDocInfo << "MUST be a ClipboardData." << endl;
            cout << "              Value:                ";
            parseClipboardData(value.Value, 0);
        } else cout << Utils::defaultOffsetDocInfo << "Type is PropertyIdentifier, and the minimum property set version is 0." << endl;
        return;
    }
    if (flag == VT_CLSID) {
        cout << "VT_CLSID: " << endl;
        if (parseType) {
            cout << Utils::defaultOffsetDocInfo << "MUST be a GUID (Packet Version)." << endl;
            cout << "              Value:                ";
            reverse(value.Value.begin(), value.Value.end());
            Utils::printSid(value.Value, 0);
            cout << " : " << Utils::getClsidType(value.Value) << endl;
        } else cout << Utils::defaultOffsetDocInfo << "Type is CLSID, and the minimum property set version is 0." << endl;
        return;
    }
    if (flag == VT_VERSIONED_STREAM) {
        cout << "VT_VERSIONED_STREAM: " << endl;
        if (parseType) {
            cout << Utils::defaultOffsetDocInfo << "MUST be a VersionedStream. The storage representing the (non-simple) " << endl <<
                 Utils::defaultOffsetDocInfo << "property set MUST have a stream element with the name in the StreamName field." << endl;
            cout << "              Value:                ";
            cout << "                VersionedStream:    " << endl;
            cout << "                     VersionGuid:   " << endl ;
            reverse(value.Value.begin(), value.Value.end());
            Utils::printSid(value.Value, 0);
            cout << " : " << Utils::getClsidType(value.Value) << endl;
            cout << "                     StreamName:    " << endl;
            parseCodePageStream(value, 16);
        } else cout << Utils::defaultOffsetDocInfo << "Type is Stream with application-specific version GUID (VersionedStream). " << endl <<
                  Utils::defaultOffsetDocInfo << "The minimum property set version is 0. VT_VERSIONED_STREAM is not allowed in a simple property set." << endl;
        return;
    }
    if ((flag == VT_VECTOR_VT_I2) || (flag == VT_ARRAY_VT_I2)) {
        if (flag == VT_VECTOR_VT_I2)
            cout << "VT_VECTOR_VT_I2: " << endl;
        if (flag == VT_ARRAY_VT_I2)
            cout << "VT_ARRAY_VT_I2: " << endl;

        if (parseType) {
            int lenTmp = 0;
            if (flag == VT_VECTOR_VT_I2) {
                lenTmp = 4;
                getVectorHeader(value.Value);
                cout << Utils::defaultOffsetDocInfo << "MUST be a VectorHeader followed by a sequence of 16-bit signed integers, " << endl <<
                     Utils::defaultOffsetDocInfo << "followed by zero padding to a total length that is a multiple of 4 bytes." << endl;
            }
            if (flag == VT_ARRAY_VT_I2){
                lenTmp = getArrayHeader(value.Value);
                cout << Utils::defaultOffsetDocInfo << "MUST be an ArrayHeader followed by a sequence of 16-bit signed integers, " << endl <<
                     Utils::defaultOffsetDocInfo << "followed by zero padding to a total length that is a multiple of 4 bytes." << endl;
            }
            cout << "              Value:                ";
            int countOfIntegers = (value.Value.size() - lenTmp)/2;
            for(int i=lenTmp; i < countOfIntegers; i += 2){
                cout << "                     Signed Int:    " << endl ;
                cout << Utils::defaultOffset << dec << (signed int)Utils::lenTwoBytesFromPos(value.Value, i) << endl;
            }
        } else {
            if (flag == VT_VECTOR_VT_I2)
                cout << Utils::defaultOffsetDocInfo << "Type is Vector of 16-bit signed integers, and the minimum property set version is 0." << endl;
            if (flag == VT_ARRAY_VT_I2)
                cout << Utils::defaultOffsetDocInfo << "Type is Array of 16-bit signed integers, and the minimum property set version is 1." << endl;
        }
        return;
    }
    if ((flag == VT_VECTOR_VT_I4) || (flag == VT_ARRAY_VT_I4) ) {
        if (flag == VT_VECTOR_VT_I4)
            cout  << "VT_VECTOR_VT_I4: " << endl;
        if (flag == VT_ARRAY_VT_I4)
            cout << "VT_ARRAY_VT_I4: " << endl;

        if (parseType) {
            int lenTmp = 0;
            if (flag == VT_VECTOR_VT_I4) {
                lenTmp = 4;
                getVectorHeader(value.Value);
                cout << Utils::defaultOffsetDocInfo<< "MUST be a VectorHeader followed by a sequence of 32-bit signed integers." << endl;
            }
            if (flag == VT_ARRAY_VT_I4) {
                lenTmp = getArrayHeader(value.Value);
                cout << Utils::defaultOffsetDocInfo << "MUST be an ArrayHeader followed by a sequence of 32-bit signed integers." << endl;
            }
            cout << "              Value:                ";
            int countOfIntegers = (value.Value.size() - lenTmp)/4;
            for(int i=lenTmp; i < countOfIntegers; i += 4){
                cout << "                     Signed Int:    " << endl ;
                cout << Utils::defaultOffset << dec << (signed int)Utils::lenFourBytesFromPos(value.Value, i) << endl;
            }
        } else {
            if (flag == VT_VECTOR_VT_I4)
                cout << Utils::defaultOffsetDocInfo << "Type is Vector of 32-bit signed integers, and the minimum property set version is 0." << endl;
            if (flag == VT_ARRAY_VT_I4)
                cout << Utils::defaultOffsetDocInfo << "Type is Array of 32-bit signed integers, and the minimum property set version is 1." << endl;
        }
        return;
    }
    if ((flag == VT_VECTOR_VT_R4 ) || (flag == VT_ARRAY_VT_R4) ) {
        // TODO: 4-byte (single-precision) IEEE floating-point numbers
        if (flag == VT_VECTOR_VT_R4)
            cout << "VT_VECTOR_VT_R4: " << endl;
        if (flag == VT_ARRAY_VT_R4)
            cout << "VT_ARRAY_VT_R4: " << endl;

        if (parseType) {
            int lenTmp = 0;
            if (flag == VT_VECTOR_VT_R4){
                lenTmp = 4;
                getVectorHeader(value.Value);
                cout << Utils::defaultOffsetDocInfo << "MUST be a VectorHeader followed by a sequence of 4-byte (single-precision) IEEE floating-point numbers." << endl;

            }
            if (flag == VT_ARRAY_VT_R4){
                lenTmp = getArrayHeader(value.Value);
                cout << Utils::defaultOffsetDocInfo << "MUST be an ArrayHeader followed by a sequence of 4-byte (single-precision) IEEE floating-point numbers." << endl;
            }
            cout << "              Value:                ";
            int countOfIntegers = (value.Value.size() - lenTmp)/4;
            for(int i=lenTmp; i < countOfIntegers; i += 4){
                cout << "                     Signed Int:    " << endl ;
                cout << Utils::defaultOffset << dec << (signed int)Utils::lenFourBytesFromPos(value.Value, i) << endl;
            }
        } else {
            if (flag == VT_VECTOR_VT_R4)
                cout << Utils::defaultOffsetDocInfo << "Type is Vector of 4-byte (single-precision) IEEE floating-point numbers, and the minimum property set version is 0." << endl;
            if (flag == VT_ARRAY_VT_R4)
                cout << Utils::defaultOffsetDocInfo << "Type is Array of 4-byte (single-precision) IEEE floating-point numbers, and the minimum property set version is 1." << endl;
        }
        return;
    }
    if ((flag == VT_VECTOR_VT_R8) || (flag == VT_ARRAY_VT_R8)) {
        // TODO: 8-byte (single-precision) IEEE floating-point numbers
        if (flag == VT_VECTOR_VT_R8)
            cout << "VT_VECTOR_VT_R8: " << endl;
        if (flag == VT_ARRAY_VT_R8)
            cout << "VT_ARRAY_VT_R8: " << endl;

        if (parseType) {
            int lenTmp = 0;
            if (flag == VT_VECTOR_VT_R8) {
                lenTmp = 4;
                getVectorHeader(value.Value);
                cout << Utils::defaultOffsetDocInfo << "MUST be a VectorHeader followed by a sequence of 8-byte (double-precision) IEEE floating-point numbers." << endl;
            }
            if (flag == VT_ARRAY_VT_R8) {
                lenTmp  = getArrayHeader(value.Value);
                cout << Utils::defaultOffsetDocInfo << "MUST be an ArrayHeader followed by a sequence of 8-byte (double-precision) IEEE floating-point numbers." << endl;
            }
            cout << "              Value:                ";
            Utils::print_vec(value.Value);
        } else {
            if (flag == VT_VECTOR_VT_R8)
                cout << Utils::defaultOffsetDocInfo << "Type is Vector of 8-byte (double-precision) IEEE floating-point numbers, and the minimum property set version is 0." << endl;
            if (flag == VT_ARRAY_VT_R8)
                cout << Utils::defaultOffsetDocInfo << "Type is IEEE floating-point numbers, and the minimum property set version is 1." << endl;
        }
        return;
    }
    if ((flag == VT_VECTOR_VT_CY) || (flag == VT_ARRAY_VT_CY)) {
        if (flag == VT_VECTOR_VT_CY)
            cout << "VT_VECTOR_VT_CY: " << endl;
        if (flag == VT_ARRAY_VT_CY)
            cout << "VT_ARRAY_VT_CY: " << endl;

        if (parseType) {
            int lenTMP = 0;
            if (flag == VT_VECTOR_VT_CY) {
                lenTMP = 4;
                getVectorHeader(value.Value);
                cout << Utils::defaultOffsetDocInfo << "MUST be a VectorHeader followed by a sequence of CURRENCY (Packet Version) packets." << endl;
            }
            if (flag == VT_ARRAY_VT_CY) {
                lenTMP = getArrayHeader(value.Value);
                cout << Utils::defaultOffsetDocInfo << "MUST be an ArrayHeader followed by a sequence of CURRENCY (Packet Version) packets." << endl;
            }
            cout << "              Value:                ";
            int countOfCurrency =  (value.Value.size() - lenTMP)/4;
            for(int i=lenTMP; i<countOfCurrency; i += 4){
                cout << "                     CURRENCY:      " << endl ;
                parseCURRENCY(value.Value, i);
            }
        } else {
            if (flag == VT_VECTOR_VT_CY)
                cout << Utils::defaultOffsetDocInfo << "Type is Vector of CURRENCY, and the minimum property set version is 0." << endl;
            if (flag == VT_ARRAY_VT_CY)
                cout << Utils::defaultOffsetDocInfo << "Type is Array of CURRENCY, and the minimum property set version is 1." << endl;
        }
        return;
    }
    if ((flag == VT_VECTOR_VT_DATE)| (flag == VT_DATE) || (flag == VT_ARRAY_VT_DATE)) {
        if (flag == VT_DATE)
            cout << "VT_DATE: " << endl;
        if(flag == VT_VECTOR_VT_DATE)
            cout << "VT_VECTOR_VT_DATE: " << endl;
        if (flag == VT_ARRAY_VT_DATE)
            cout << "VT_ARRAY_VT_DATE: " << endl;

        if (parseType) {
            int lenTMP = 0;
            if (flag == VT_DATE)
                cout << Utils::defaultOffsetDocInfo << "MUST be a DATE (Packet Version)." << endl;
            if(flag == VT_VECTOR_VT_DATE) {
                lenTMP = 4;
                getVectorHeader(value.Value);
                cout << Utils::defaultOffsetDocInfo << "MUST be a VectorHeader followed by a sequence of DATE (Packet Version) packets." << endl;
            }
            if (flag == VT_ARRAY_VT_DATE) {
                lenTMP = getArrayHeader(value.Value);
                if (parseType) cout << Utils::defaultOffsetDocInfo << "MUST be an ArrayHeader followed by a sequence of DATE (Packet Version) packets." << endl;
            }
            cout << "              Value:                ";
            int countOfDates =  (value.Value.size() - lenTMP)/8;
            for(int i=lenTMP; i<countOfDates ; i += 8){
                cout << "                     Date:      " << endl ;
                cout << Utils::defaultOffset;
                // TODO: parse Date
                //Utils::getDateFromPos(value.Value, i);
            }
            cout << endl;
        } else {
            if (flag == VT_DATE)
                cout << Utils::defaultOffsetDocInfo << "Type is DATE, and the minimum property set version is 0." << endl;
            if(flag == VT_VECTOR_VT_DATE)
                cout << Utils::defaultOffsetDocInfo << "Type is Vector of DATE, and the minimum property set version is 0." << endl;
            if (flag == VT_ARRAY_VT_DATE)
                cout << Utils::defaultOffsetDocInfo << "Type is Array of DATE, and the minimum property set version is 1." << endl;
        }
        return;
    }
    if ((flag == VT_FILETIME) || (flag == VT_VECTOR_VT_FILETIME)) {
        if(flag == VT_FILETIME)
            cout << "VT_FILETIME: " << endl;
        if (flag == VT_VECTOR_VT_FILETIME)
            cout << "VT_VECTOR_VT_FILETIME: " << endl;

        if (parseType) {
            int lenTmp = 0;
            if (flag == VT_FILETIME) {
                getVectorHeader(value.Value);
                cout << Utils::defaultOffsetDocInfo << "MUST be FILETIME (Packet Version) packets." << endl;
            }
            if(flag == VT_VECTOR_VT_DATE) {
                lenTmp = 4;
                getVectorHeader(value.Value);
                cout << Utils::defaultOffsetDocInfo << "MUST be a VectorHeader followed by a sequence of FILETIME (Packet Version) packets." << endl;
            }
            cout << "              Value:                ";
            int countOfDates =  (value.Value.size() - lenTmp)/8;
            for(int i=lenTmp; i<countOfDates ; i += 8){
                cout << "                     CURRENCY:      " << endl ;
                cout << Utils::defaultOffset;
                Utils::getDateFromPos(value.Value, i);
            }
            cout << endl;
        } else {
            if (flag == VT_FILETIME)
                cout << Utils::defaultOffsetDocInfo << "Type is FILETIME, and the minimum property set version is 0." << endl;
            if(flag == VT_VECTOR_VT_FILETIME)
                cout << Utils::defaultOffsetDocInfo << "Type is Vector of FILETIME, and the minimum property set version is 0." << endl;
        }
        return;
    }
    if ((flag == VT_VECTOR_VT_BSTR) || (flag == VT_VECTOR_VT_LPSTR) || (flag == VT_ARRAY_VT_BSTR)) {
        if (flag == VT_VECTOR_VT_LPSTR)
            cout << "VT_VECTOR_VT_LPSTR: " << endl;
        if(flag == VT_VECTOR_VT_BSTR)
            cout << "VT_VECTOR_VT_BSTR: " << endl;
        if (flag == VT_ARRAY_VT_BSTR)
            cout << "VT_ARRAY_VT_BSTR: " << endl;

        if (parseType) {
            int lenTmp = 0;
            if ((flag == VT_VECTOR_VT_LPSTR) || (flag == VT_VECTOR_VT_BSTR)) {
                lenTmp = 4;
                getVectorHeader(value.Value);
                cout << Utils::defaultOffsetDocInfo << "MUST be a VectorHeader followed by a sequence of CodePageString packets." << endl;

            }
            if (flag == VT_ARRAY_VT_BSTR) {
                lenTmp = getArrayHeader(value.Value);
                if (parseType) cout << Utils::defaultOffsetDocInfo << "MUST be an ArrayHeader followed by a sequence of CodePageString packets." << endl;
            }
            cout << "              Value:                ";
            int size =  value.Value.size() - lenTmp;
            int codePageLen, i = lenTmp;
            do {
                cout << "                     CodePageString:" << endl ;
                codePageLen = parseCodePageStream(value, i);
                i += codePageLen;
                size -= codePageLen;
            } while(size > 0);
        } else {
            if ((flag == VT_VECTOR_VT_LPSTR) || (flag == VT_VECTOR_VT_BSTR))
                cout << Utils::defaultOffsetDocInfo << "Type is Vector of CodePageString, and the minimum property set version is 0." << endl;
            if (flag == VT_ARRAY_VT_BSTR)
               cout << Utils::defaultOffsetDocInfo << "Type is Array of CodePageString, and the minimum property set version is 1." << endl;
        }
        return;
    }
    if ((flag == VT_VECTOR_VT_ERROR) || (flag == VT_ARRAY_VT_ERROR)) {
        if (flag == VT_VECTOR_VT_ERROR)
            cout << "VT_VECTOR_VT_ERROR: " << endl;
        if (flag == VT_ARRAY_VT_ERROR)
            cout << "VT_ARRAY_VT_ERROR: " << endl;

        if (parseType) {
            int lenTmp = 0;
            if (flag == VT_VECTOR_VT_ERROR) {
                lenTmp = 4;
                getVectorHeader(value.Value);
                cout << Utils::defaultOffsetDocInfo << "MUST be a VectorHeader followed by a sequence of 32-bit unsigned integers representing HRESULTs, as specified in [MS-DTYP]." << endl;
            }
            if (flag == VT_ARRAY_VT_ERROR) {
                lenTmp = getArrayHeader(value.Value);
                if (parseType) cout << Utils::defaultOffsetDocInfo << "MUST be an ArrayHeader followed by a sequence of 32-bit unsigned integers representing HRESULTs, as specified in [MS-DTYP]." << endl;
            }
            cout << "              Value:                ";
            int countOfErrors =  (value.Value.size() - lenTmp)/4;
            for(int i=lenTmp; i<countOfErrors; i += 4){
                cout << "                     VT_ERROR      :" << endl ;
                parseVT_ERROR(value.Value, i, i + 4);
            }
        } else {
            if (flag == VT_VECTOR_VT_ERROR)
                cout << Utils::defaultOffsetDocInfo << "Type is Vector of HRESULT, and the minimum property set version is 0." << endl;
            if (flag == VT_ARRAY_VT_ERROR)
                cout << Utils::defaultOffsetDocInfo << "Type is Array of HRESULT, and the minimum property set version is 1." << endl;
        }
        return;
    }
    if ((flag == VT_VECTOR_VT_BOOL) || (flag == VT_ARRAY_VT_BOOL)) {
        if (flag == VT_VECTOR_VT_BOOL)
            cout << "VT_VECTOR_VT_BOOL: " << endl;
        if (flag == VT_ARRAY_VT_BOOL)
            cout << "VT_ARRAY_VT_BOOL: " << endl;

        if (parseType) {
            int lenTmp = 0;
            if (flag == VT_VECTOR_VT_BOOL) {
                lenTmp = 4;
                getVectorHeader(value.Value);
                cout << Utils::defaultOffsetDocInfo << "MUST be a VectorHeader followed by a sequence of VARIANT_BOOL as specified in [MS-OAUT], followed by zero padding to a total length that is a multiple of 4 bytes." << endl;
            }
            if (flag == VT_ARRAY_VT_BOOL) {
                lenTmp = getArrayHeader(value.Value);
                cout << Utils::defaultOffsetDocInfo << "MUST be an ArrayHeader followed by a sequence of VARIANT_BOOL as specified in [MS-OAUT], followed by zero padding to a total length that is a multiple of 4 bytes." << endl;
            }
            cout << "              Value:                ";
            int countOfErrors =  (value.Value.size() - lenTmp)/2;
            for(int i=lenTmp; i<countOfErrors; i += 2){
                cout << "                     VT_BOOL       :" << endl ;
                parseVT_BOOL(value.Value, i);
            }
        } else {
            if (flag == VT_VECTOR_VT_BOOL)
                cout << Utils::defaultOffsetDocInfo << "Type is Vector of VARIANT_BOOL, and the minimum property set version is 0." << endl;
            if (flag == VT_ARRAY_VT_BOOL)
                cout << Utils::defaultOffsetDocInfo << "Type is Array of VARIANT_BOOL, and the minimum property set version is 1." << endl;
            }
        return;
    }
    if ((flag == VT_VECTOR_VT_VARIANT) || (flag == VT_ARRAY_VT_VARIANT)) {
        // TODO: sequence of TypedPropertyValue packets
        if (flag == VT_VECTOR_VT_VARIANT)
            cout << "VT_VECTOR_VT_VARIANT: " << endl;
        if (flag == VT_ARRAY_VT_VARIANT)
            cout << "VT_ARRAY_VT_VARIANT: " << endl;

        if (parseType) {
            int lenTmp = 0;
            if (flag == VT_VECTOR_VT_VARIANT) {
                lenTmp = 4;
                getVectorHeader(value.Value);
                cout << Utils::defaultOffsetDocInfo << "MUST be a VectorHeader followed by a sequence of TypedPropertyValue packets." << endl;
            }
            if (flag == VT_ARRAY_VT_VARIANT) {
                lenTmp = getArrayHeader(value.Value);
                cout << Utils::defaultOffsetDocInfo << "MUST be an ArrayHeader followed by a sequence of TypedPropertyValue packets." << endl;
            }
            cout << "              Value:                ";
            Utils::print_vec(value.Value);
        } else {
            if (flag == VT_VECTOR_VT_VARIANT)
                cout << Utils::defaultOffsetDocInfo << "Type is Vector of variable-typed properties, and the minimum property set version is 0." << endl;
            if (flag == VT_ARRAY_VT_VARIANT)
                cout << Utils::defaultOffsetDocInfo << "Type is Array of variable-typed properties, and the minimum property set version is 1." << endl;
        }
        return;
    }
    if ((flag == VT_VECTOR_VT_I1) || (flag == VT_ARRAY_VT_I1)) {
        if (flag == VT_VECTOR_VT_I1)
            cout << "VT_VECTOR_VT_I1: " << endl;
        if (flag == VT_ARRAY_VT_I1)
            cout << "VT_ARRAY_VT_I1: " << endl;

        if (parseType) {
            int lemTmp = 0;
            if (flag == VT_VECTOR_VT_I1) {
                lemTmp = 4;
                getVectorHeader(value.Value);
                cout << Utils::defaultOffsetDocInfo << "MUST be a VectorHeader followed by a sequence of 1-byte signed integers, " << endl <<
                     Utils::defaultOffsetDocInfo << "followed by zero padding to a total length that is a multiple of 4 bytes." << endl;
            }
            if (flag == VT_ARRAY_VT_I1) {
                lemTmp = getArrayHeader(value.Value);
                cout << Utils::defaultOffsetDocInfo << "MUST be an ArrayHeader followed by a sequence of 1-byte signed integers, " << endl <<
                        Utils::defaultOffsetDocInfo << "followed by zero padding to a total length that is a multiple of 4 bytes." << endl;
            }
            cout << "              Value:                ";
            int countOfInt =  (value.Value.size() - lemTmp)/4;
            for(int i=lemTmp; i<countOfInt; i += 4)
                cout << "                     signed integer:" << endl <<
                     Utils::defaultOffset << dec << (signed int)value.Value[i] << " , followed by " <<
                     value.Value[i+1] << " " << value.Value[i+2] << " " <<  value.Value[i+3] << endl;
        } else {
            if (flag == VT_VECTOR_VT_I1)
                cout << Utils::defaultOffsetDocInfo << "Type is Vector of 1-byte signed integers and the minimum property set version is 1." << endl;
            if (flag == VT_ARRAY_VT_I1)
                cout << Utils::defaultOffsetDocInfo << "Type is Array of 1-byte signed integers, and the minimum property set version is 1." << endl;
        }
        return;
    }
    if ((flag == VT_VECTOR_VT_UI1) || (flag == VT_ARRAY_VT_UI1)) {
        if (flag == VT_VECTOR_VT_UI1)
            cout << "VT_VECTOR_VT_UI1: " << endl;
        if (flag == VT_ARRAY_VT_UI1)
            cout << "VT_ARRAY_VT_UI1: " << endl;

        if (parseType) {
            int lenTmp = 0;
            if (flag == VT_VECTOR_VT_UI1) {
                lenTmp = 4;
                getVectorHeader(value.Value);
                cout << Utils::defaultOffsetDocInfo << "MUST be a VectorHeader followed by a sequence of 1-byte unsigned integers, " << endl <<
                     Utils::defaultOffsetDocInfo << "followed by zero padding to a total length that is a multiple of 4 bytes." << endl;
            }
            if (flag == VT_ARRAY_VT_UI1) {
                lenTmp = getArrayHeader(value.Value);
                if (parseType) cout << Utils::defaultOffsetDocInfo << "MUST be an ArrayHeader followed by a sequence of 1-byte unsigned integers, " << endl <<
                                    Utils::defaultOffsetDocInfo << "followed by zero padding to a total length that is a multiple of 4 bytes." << endl;
            }
            cout << "              Value:                ";
            int countOfInt =  (value.Value.size() - lenTmp)/4;
            for(int i=lenTmp; i<countOfInt; i += 4)
                cout << "                     unsigned integer:" << endl <<
                     Utils::defaultOffset << dec << value.Value[i] << " , followed by " <<
                     value.Value[i+1] << " " << value.Value[i+2] << " " <<  value.Value[i+3] << endl;
        } else {
            if (flag == VT_VECTOR_VT_UI1)
                cout << Utils::defaultOffsetDocInfo << "Type is Vector of 1-byte unsigned integers, and the minimum property set version is 0." << endl;
            if (flag == VT_ARRAY_VT_UI1)
                cout << Utils::defaultOffsetDocInfo << "Type is Array of 1-byte unsigned integers, and the minimum property set version is 1." << endl;
        }
        return;
    }
    if ((flag == VT_VECTOR_VT_UI2) || (flag == VT_ARRAY_VT_UI2)) {
        if (flag == VT_VECTOR_VT_UI2)
            cout << "VT_VECTOR_VT_UI2: " << endl;
        if (flag == VT_ARRAY_VT_UI2)
            cout << "VT_ARRAY_VT_UI2: " << endl;

        if (parseType) {
            int lenTmp = 0;
            if (flag == VT_VECTOR_VT_UI2) {
                lenTmp = 4;
                getVectorHeader(value.Value);
                cout << Utils::defaultOffsetDocInfo << "MUST be a VectorHeader followed by a sequence of 2-byte unsigned integers, " << endl <<
                     Utils::defaultOffsetDocInfo << "followed by zero padding to a total length that is a multiple of 4 bytes." << endl;

            }
            if (flag == VT_ARRAY_VT_UI2) {
                lenTmp = getArrayHeader(value.Value);
                cout << Utils::defaultOffsetDocInfo << "MUST be an ArrayHeader followed by a sequence of 2-byte unsigned integers, " << endl <<
                        Utils::defaultOffsetDocInfo << "followed by zero padding to a total length that is a multiple of 4 bytes." << endl;
            }
            cout << "              Value:                ";
            int countOfInt =  (value.Value.size() - lenTmp)/4;
            for(int i=lenTmp; i<countOfInt; i += 4)
                cout << "                     unsigned integer:" << endl <<
                     Utils::defaultOffset << dec << Utils::lenTwoBytesFromPos(value.Value, i) << " , followed by " <<
                     value.Value[2] << " " <<  value.Value[3] << endl;
        } else {
            if (flag == VT_VECTOR_VT_UI2)
                cout << Utils::defaultOffsetDocInfo << "Type is Vector of 2-byte unsigned integers, and the minimum property set version is 0." << endl;
            if (flag == VT_ARRAY_VT_UI2)
                cout << Utils::defaultOffsetDocInfo << "Type is Array of 2-byte unsigned integers, and the minimum property set version is 1." << endl;
        }
        return;
    }
    if ((flag == VT_VECTOR_VT_UI4) || (flag == VT_ARRAY_VT_UI4) || (flag == VT_ARRAY_VT_UINT)) {
        if (flag == VT_VECTOR_VT_UI4)
            cout << "VT_VECTOR_VT_UI4: " << endl;
        if (flag == VT_ARRAY_VT_UI4)
            cout << "VT_ARRAY_VT_UI4: " << endl;

        if (parseType) {
            int lenTmp = 0;
            if (flag == VT_VECTOR_VT_UI4) {
                lenTmp = 4;
                getVectorHeader(value.Value);
                cout << Utils::defaultOffsetDocInfo << "MUST be a VectorHeader followed by a sequence of 4-byte unsigned integers." << endl;
            }
            if ((flag == VT_ARRAY_VT_UI4) || (flag == VT_ARRAY_VT_UINT) ) {
                lenTmp = getArrayHeader(value.Value);
                cout << Utils::defaultOffsetDocInfo << "MUST be an ArrayHeader followed by a sequence of 4-byte unsigned integers." << endl;
            }
            cout << "              Value:                ";
            int countOfInt =  (value.Value.size() - lenTmp)/4;
            for(int i=lenTmp; i<countOfInt; i += 4)
                cout << "                     unsigned integer:" << endl <<
                     Utils::defaultOffset << dec << Utils::lenFourBytesFromPos(value.Value, i) << endl;
        } else {
            if (flag == VT_VECTOR_VT_UI4)
                cout << Utils::defaultOffsetDocInfo << "Type is Vector of 4-byte unsigned integers, and the minimum property set version is 0." << endl;
            if (flag == VT_ARRAY_VT_UI4)
                cout << Utils::defaultOffsetDocInfo << "Type is Array of 4-byte unsigned integers, and the minimum property set version is 1." << endl;
            if (flag == VT_ARRAY_VT_UINT)
                cout << Utils::defaultOffsetDocInfo << "Type is Array of 4-byte unsigned integers, and the minimum property set version is 1." << endl;
        }
        return;
    }
    if (flag == VT_VECTOR_VT_I8) {
        cout << "VT_VECTOR_VT_I8: " << endl;
        if (parseType) {
            getVectorHeader(value.Value);
            cout << Utils::defaultOffsetDocInfo << "MUST be a VectorHeader followed by a sequence of 8-byte signed integers." << endl;
            cout << "              Value:                ";
            int countOfInt =  (value.Value.size() - 4)/8;
            for(int i=4; i<countOfInt; i += 8)
                cout << "                     signed integer:" << endl <<
                     Utils::defaultOffset << dec << (signed int)Utils::vectEightBytesToUnsignedInt(value.Value, i) << endl;
        } else cout << Utils::defaultOffsetDocInfo << "Type is Vector of 8-byte signed integers, and the minimum property set version is 0." << endl;
        return;
    }
    if (flag == VT_VECTOR_VT_UI8) {
        cout << "VT_VECTOR_VT_UI8: " << endl;
        if (parseType) {
            getVectorHeader(value.Value);
            cout << Utils::defaultOffsetDocInfo << "MUST be a VectorHeader followed by a sequence of 8-byte unsigned integers." << endl;
            cout << "              Value:                ";
            int countOfInt =  (value.Value.size() - 4)/8;
            for(int i=4; i<countOfInt; i += 8)
                cout << "                     signed integer:" << endl <<
                     Utils::defaultOffset << dec << Utils::vectEightBytesToUnsignedInt(value.Value, i) << endl;
        } else cout << Utils::defaultOffsetDocInfo << "Type is Vector of 8-byte unsigned integers and the minimum property set version is 0." << endl;
        return;
    }
    if (flag == VT_VECTOR_VT_LPWSTR) {
        cout << "VT_VECTOR_VT_LPWSTR: " << endl;
        if (parseType) {
            getVectorHeader(value.Value);
            cout << Utils::defaultOffsetDocInfo << "MUST be a VectorHeader followed by a sequence of UnicodeString packets." << endl;
            cout << "              Value:                ";
            int size =  value.Value.size() - 4;
            int unicodeStrLen, i = 4;
            do {
                cout << "                     UnicodeString:" << endl ;
                unicodeStrLen = parseUnicodeString(value.Value, i);
                i += unicodeStrLen;
                size -= unicodeStrLen;
            } while(size > 0);
        } else cout << Utils::defaultOffset << "Type is Vector of UnicodeString, and the minimum property set version is 0." << endl;
        return;
    }
    if (flag == VT_VECTOR_VT_CF) {
        cout << "VT_VECTOR_VT_CF: " << endl;
        if (parseType) {
            getVectorHeader(value.Value);
            cout << Utils::defaultOffsetDocInfo << "MUST be a VectorHeader followed by a sequence of ClipboardData packets." << endl;
            cout << "              Value:                ";
            int size =  value.Value.size() - 4;
            int clipboardDatLen, i = 4;
            do {
                cout << "                     ClipboardData: " << endl ;
                clipboardDatLen = parseClipboardData(value.Value, i);
                i += clipboardDatLen;
                size -= clipboardDatLen;
            } while(size > 0);
        } else cout << Utils::defaultOffsetDocInfo << "Type is Vector of PropertyIdentifier, and the minimum property set version is 0." << endl;
        return;
    }
    if (flag == VT_VECTOR_VT_CLSID) {
        cout << "VT_VECTOR_VT_CLSID: " << endl;
        if (parseType) {
            getVectorHeader(value.Value);
            cout << Utils::defaultOffsetDocInfo << "MUST be a VectorHeader followed by a sequence of GUID (Packet Version) packets." << endl;
            cout << "              Value:                ";
            int countOfInt =  (value.Value.size() - 4)/16;
            for(int i=4; i<countOfInt; i += 16){
                cout << "                     GUID:  ";
                Utils::printSid(value.Value, i);
                cout << endl;
            }
        } else cout << Utils::defaultOffsetDocInfo << "Type is Vector of CLSID, and the minimum property set version is 0." << endl;
        return;
    }
    if (flag == VT_ARRAY_VT_INT) {
        cout << "VT_ARRAY_VT_INT: " << endl;
        if (parseType) {
            int lenTmp = getArrayHeader(value.Value);
            cout << Utils::defaultOffsetDocInfo << "MUST be an ArrayHeader followed by a sequence of 4-byte signed integers." << endl;
            int countOfInt =  (value.Value.size() - lenTmp)/4;
            for(int i=lenTmp; i<countOfInt; i += 4)
                cout << "                     signed integer:  " << endl <<
                     Utils::defaultOffset << dec << (signed int)Utils::lenFourBytesFromPos(value.Value, i) << endl;
        } else cout << Utils::defaultOffsetDocInfo << "Type is Array of 4-byte signed integers, and the minimum property set version is 1." << endl;
        return;
    }
    cout <<  "Unknown" << endl;
    return;
}
void ExtraData::parseColorTableUtils(int posStart) {
    cout << Utils::defaultOffset << CONSOLE_PROPS.ColorTable[posStart] << " " << CONSOLE_PROPS.ColorTable[posStart + 1] << " " <<
         CONSOLE_PROPS.ColorTable[posStart + 2] << " " << CONSOLE_PROPS.ColorTable[posStart + 3] << endl;
}
void ExtraData::parseColorTable() {
    for(int i = 0 ; i < 15; ++i){
        cout << Utils::defaultOffset << i << ":" << endl;
        parseColorTableUtils(4*i);
    }
    cout << Utils::defaultOffsetDocInfo << "A table of 16 32-bit, unsigned integers specifying the RGB colors" << endl <<
        Utils::defaultOffsetDocInfo << " RGB(Red, Green, Blue) format: #RR GG BB" << endl;
}

void ExtraData::printExtraData() {
    cout << "_______________________ExtraData_________________________" << endl;

    if (consolePropsIsSet) {
        /* CONSOLE_PROPS struct*/
        cout << "CONSOLE_PROP: " << endl;
        cout << "   BlockSize:                       " << dec << Utils::lenFourBytes(CONSOLE_PROPS.BlockSize) << " bytes" << endl <<
            Utils::defaultOffsetDocInfo << "This value MUST be 204." << endl;
        cout << "   BlockSignature:                  "; Utils::print_vec(CONSOLE_PROPS.BlockSignature);
            cout << Utils::defaultOffsetDocInfo << "This value MUST be 0xA0000002." << endl;
        cout << "   FillAttributes:                  "; parseFillAttributes(false); cout << endl;
        cout << "   PopupFillAttributes:             "; parseFillAttributes(true); cout << endl;
        cout << "   ScreenBufferSizeX:               " << dec << Utils::lenTwoBytes(CONSOLE_PROPS.ScreenBufferSizeX) << " characters" << endl;
        cout << "   ScreenBufferSizeY:               " << dec << Utils::lenTwoBytes(CONSOLE_PROPS.ScreenBufferSizeY) << " characters" << endl;
        cout << "   WindowSizeX:                     " << dec << Utils::lenTwoBytes(CONSOLE_PROPS.WindowSizeX) << " characters" << endl;
        cout << "   WindowSizeY:                     " << dec << Utils::lenTwoBytes(CONSOLE_PROPS.WindowSizeY) << " characters" << endl;
        cout << "   WindowOriginX:                   " << dec << Utils::lenTwoBytes(CONSOLE_PROPS.WindowOriginX) << " pixels" << endl;
        cout << "   WindowOriginY:                   " << dec << Utils::lenTwoBytes(CONSOLE_PROPS.WindowOriginY) << " pixels" << endl;
        cout << "   UNUSED1:                         "; Utils::print_vec(CONSOLE_PROPS.UNUSED1);
            cout << Utils::defaultOffsetDocInfo << "A value that is undefined and MUST be ignored." << endl;
        cout << "   UNUSED2:                         "; Utils::print_vec(CONSOLE_PROPS.UNUSED2);
            cout << Utils::defaultOffsetDocInfo << "A value that is undefined and MUST be ignored." << endl;
       cout << "   FontSize:                        " << endl;
            int height  = ((CONSOLE_PROPS.FontSize[0] << 8) | CONSOLE_PROPS.FontSize[1]);
            int width = ((CONSOLE_PROPS.FontSize[2] << 8) | CONSOLE_PROPS.FontSize[3]);
            cout << "       Font height:                 " << dec << height << " pixels" << endl;
            cout << "       Font width:                  " << dec << width << " pixels" << endl;
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
        // Сделан просто вывод в hex формате без перевода в название цвета (не понятно, почему 16 записеё и по 4 байта)
        cout << "   ColorTable:                      "; parseColorTable();
    }
    if (consoleFEIsSet) {
        /* CONSOLE_FE_PROPS struct*/
        cout << "CONSOLE_FE_PROPS: " << endl;
        cout << "   BlockSize:                       " << dec << Utils::lenFourBytes(CONSOLE_FE_PROPS.BlockSize) << " bytes" << endl <<
            Utils::defaultOffsetDocInfo << "This value MUST be 12." << endl;
        cout << "   BlockSignature:                  "; Utils::print_vec(CONSOLE_FE_PROPS.BlockSignature);
            cout << Utils::defaultOffsetDocInfo << "This value MUST be 0xA0000004." << endl;
        // TODO: дописать парсинг: (очень много значений) - нужен ли детальный парсинг?
        // For details concerning the structure and meaning of language code identifiers, see [MS-LCID].
        cout << "   CodePage:                        "; Utils::print_vec(CONSOLE_FE_PROPS.CodePage);
    }
    if (drownPropsIsSet) {
        /* DARWIN_PROPS struct*/
        cout << "DARWIN_PROPS: " << endl;
        cout << "   BlockSize:                       " << dec << Utils::lenFourBytes(DARWIN_PROPS.BlockSize) << " bytes" << endl <<
            Utils::defaultOffsetDocInfo << "This value MUST be 788." << endl;
        cout << "   BlockSignature:                  "; Utils::print_vec(DARWIN_PROPS.BlockSignature);
            cout << Utils::defaultOffsetDocInfo << "This value MUST be 0xA0000006." << endl;
        cout << "   DarwinDataAnsi:                  "; Utils::print_vec(DARWIN_PROPS.DarwinDataAnsi);
        cout << "   DarwinDataUnicode:               "; Utils::print_vec_unicode(DARWIN_PROPS.DarwinDataUnicode);
    }
    if (environmentPropsIsSet) {
        /* ENVIRONMENT_PROPS struct*/
        cout << "ENVIRONMENT_PROPS: " << endl;
        cout << "   BlockSize:                       " << dec << Utils::lenFourBytes(ENVIRONMENT_PROPS.BlockSize) << " bytes" << endl <<
            Utils::defaultOffsetDocInfo << "This value MUST be 788." << endl;
        cout << "   BlockSignature:                  "; Utils::print_vec(ENVIRONMENT_PROPS.BlockSignature);
            cout << Utils::defaultOffsetDocInfo << "This value MUST be 0xA0000001." << endl;
        cout << "   TargetAnsi:                      "; Utils::print_vec_unicode(ENVIRONMENT_PROPS.TargetAnsi);
        cout << "   TargetUnicode:                   "; Utils::print_vec_unicode(ENVIRONMENT_PROPS.TargetUnicode);
    }
    if (iconEnvironmentPropsIsSet) { // Проверена
        /* ICON_ENVIRONMENT_PROPS struct*/
        cout << "ICON_ENVIRONMENT_PROPS: " << endl;
        cout << "   BlockSize:                       " << dec << Utils::lenFourBytes(ICON_ENVIRONMENT_PROPS.BlockSize) << " bytes" << endl <<
            Utils::defaultOffsetDocInfo << "This value MUST be 788." << endl;
        cout << "   BlockSignature:                  "; Utils::print_vec(ICON_ENVIRONMENT_PROPS.BlockSignature);
            cout << Utils::defaultOffsetDocInfo << "This value MUST be 0xA0000007." << endl;
        cout << "   TargetAnsi:                      "; Utils::print_vec_unicode(ICON_ENVIRONMENT_PROPS.TargetAnsi);
        cout << "   TargetUnicode:                   "; Utils::print_vec_unicode(ICON_ENVIRONMENT_PROPS.TargetUnicode);
    }
    if (knownFolderPropsIsSet) { //Проверена
        /* KNOWN_FOLDER_PROPS struct*/
        cout << "KNOWN_FOLDER_PROPS: " << endl;
        cout << "   BlockSize:                       " << dec << Utils::lenFourBytes(KNOWN_FOLDER_PROPS.BlockSize) << " bytes" << endl <<
            Utils::defaultOffsetDocInfo << "This value MUST be 28." << endl;
        cout << "   BlockSignature:                  "; Utils::print_vec(KNOWN_FOLDER_PROPS.BlockSignature);
            cout << Utils::defaultOffsetDocInfo << "This value MUST be 0xA000000B." << endl;
        cout << "   KnownFolderID:                   "; Utils::printSid(KNOWN_FOLDER_PROPS.KnownFolderID, 0);
            cout << " : " << Utils::getClsidType(KNOWN_FOLDER_PROPS.KnownFolderID) << endl;
        cout << "   Offset:                          " << dec << Utils::lenFourBytes(KNOWN_FOLDER_PROPS.Offset) << " bytes." << endl <<
            Utils::defaultOffsetDocInfo << "Specifies the location of the ItemID of the first child segment of the IDList specified by KnownFolderID. " << endl <<
            Utils::defaultOffsetDocInfo << "This value is the offset, in bytes, into the link target IDList." << endl;
    }
    if (propertyStorePropsIsSet) {
        /* PROPERTY_STORE_PROPS struct*/
        cout << "PROPERTY_STORE_PROPS: " << endl;
        cout << "   BlockSize:                       " << dec << Utils::lenFourBytes(PROPERTY_STORE_PROPS.BlockSize) << " bytes" << endl <<
        Utils::defaultOffsetDocInfo << "This value MUST be greater than or equal to 12." << endl;
        cout << "   BlockSignature:                  "; Utils::print_vec(PROPERTY_STORE_PROPS.BlockSignature);
            cout << Utils::defaultOffsetDocInfo << "This value MUST be 0xA0000009." << endl;
        cout << "   PropertyStore:                   " << endl;
        for (int j = 0; j < PROPERTY_STORE_PROPS.PropertyStore.size(); ++j) {
            cout << "   Serialized Property Storage " << j+1 << endl;
            cout << "          StorageSize:              " << dec << Utils::lenFourBytes(PROPERTY_STORE_PROPS.PropertyStore[j].StorageSize)
                 << " bytes" << endl;
            cout << "          Version:                  "; Utils::print_vec(PROPERTY_STORE_PROPS.PropertyStore[j].Version);
            cout << Utils::defaultOffsetDocInfo << "Has to be equal to 0x53505331." << endl;
            cout << "          FormatID:                 ";  Utils::printSid(PROPERTY_STORE_PROPS.PropertyStore[j].FormatID, 0);
            cout << " : " << Utils::getClsidType(PROPERTY_STORE_PROPS.PropertyStore[j].FormatID) << endl;

            for (int i = 0; i < PROPERTY_STORE_PROPS.PropertyStore[j].SerializedPropertyValue.size(); ++i) {
                cout << "          SerializedPropertyValue " << i + 1 << ":" << endl;
                cout << "            ValueSize:              " << dec <<
                     Utils::lenFourBytes(PROPERTY_STORE_PROPS.PropertyStore[j].SerializedPropertyValue[i].ValueSize)  << " bytes" << endl;
                if (isStringNameStructInPropsStorage) {
                    /* for StringName */
                    cout << "            NameSize:               "  << dec <<
                         Utils::lenFourBytes(PROPERTY_STORE_PROPS.PropertyStore[j].SerializedPropertyValue[i].NameSizeOrId) << " bytes" << endl;
                } else {
                    /* for IntegerName */
                    cout << "            Id:                     " << dec <<
                         Utils::lenFourBytes(PROPERTY_STORE_PROPS.PropertyStore[j].SerializedPropertyValue[i].NameSizeOrId) << endl;
                }
                cout << "            Reserved:               ";
                Utils::print_vec(PROPERTY_STORE_PROPS.PropertyStore[j].SerializedPropertyValue[i].Reserved);
                    cout << Utils::defaultOffsetDocInfo << "MUST be 0x00." << endl;
                if (isStringNameStructInPropsStorage) {
                    /* for StringName */
                    cout << "            Name:               ";
                    Utils::print_vec_unicode(PROPERTY_STORE_PROPS.PropertyStore[j].SerializedPropertyValue[i].Name);
                }
                cout << "            Value (TypedPropertyValue structure):" << endl;
                cout << "              Type:                 ";
                parseTypedPropertyValueTypeAndValue(true, Utils::vectTwoToUnsignedInt(
                                                    PROPERTY_STORE_PROPS.PropertyStore[j].SerializedPropertyValue[i].Value.Type, 0),
                                                    PROPERTY_STORE_PROPS.PropertyStore[j].SerializedPropertyValue[i].Value);
                cout << "              Padding:              ";
                Utils::print_vec(PROPERTY_STORE_PROPS.PropertyStore[j].SerializedPropertyValue[i].Value.Padding);
                cout << Utils::defaultOffsetDocInfo << "MUST be set to zero, and any nonzero value SHOULD be rejected." << endl;
            }
            cout << "          TerminalIdentifier:       ";
            Utils::print_vec(PROPERTY_STORE_PROPS.PropertyStore[j].TerminalIdentifier);
        }
        cout << "   TerminalId:                      "; Utils::print_vec(PROPERTY_STORE_PROPS.TerminalId);
    }
    if (shimPropsIsSet) {
        /* SHIM_PROPS struct*/
        cout << "SHIM_PROPS: " << endl;
        cout << "   BlockSize:                       " << dec << Utils::lenFourBytes(SHIM_PROPS.BlockSize) << " bytes" << endl <<
            Utils::defaultOffsetDocInfo << "This value MUST be greater than or equal to 136." << endl;
        cout << "   BlockSignature:                  "; Utils::print_vec(SHIM_PROPS.BlockSignature);
            cout << Utils::defaultOffsetDocInfo << "This value MUST be 0xA0000008." << endl;
        cout << "   LayerName:                       "; Utils::print_vec_unicode(SHIM_PROPS.LayerName);
    }
    if (sFolderPropsIsSet) { // Проверена
        /* SPECIAL_FOLDER_PROPS struct*/
        cout << "SPECIAL_FOLDER_PROPS: " << endl;
        cout << "   BlockSize:                       " << dec << Utils::lenFourBytes(SPECIAL_FOLDER_PROPS.BlockSize) << " bytes" << endl <<
            Utils::defaultOffsetDocInfo << "This value MUST be 16." << endl;
        cout << "   BlockSignature:                  "; Utils::print_vec(SPECIAL_FOLDER_PROPS.BlockSignature);
            cout << Utils::defaultOffsetDocInfo << "This value MUST be 0xA0000005." << endl;
        cout << "   SpecialFolderID:                 " << dec << Utils::lenFourBytes(SPECIAL_FOLDER_PROPS.SpecialFolderID) <<  " : " <<
            getSpecialFolderType(Utils::vectFourBytesToUnsignedInt(SPECIAL_FOLDER_PROPS.SpecialFolderID, 0)) << endl;
        cout << "   Offset:                          " << dec << Utils::lenFourBytes(SPECIAL_FOLDER_PROPS.Offset) << " bytes." << endl <<
            Utils::defaultOffsetDocInfo << "Specifies the location of the ItemID of the first child segment of the IDList specified by SpecialFolderID. " << endl <<
            Utils::defaultOffsetDocInfo << "This value is the offset, in bytes, into the link target IDList." << endl;
    }
    if (trackerPropsIsSet) {
        /* TRACKER_PROPS struct*/
        cout << "TRACKER_PROPS: " << endl;
        cout << "   BlockSize:                       " << dec << Utils::lenFourBytes(TRACKER_PROPS.BlockSize) << " bytes" << endl <<
            Utils::defaultOffsetDocInfo << "This value MUST be 96." << endl;
        cout << "   BlockSignature:                  "; Utils::print_vec(TRACKER_PROPS.BlockSignature);
            cout << Utils::defaultOffsetDocInfo << "This value MUST be 0xA0000003." << endl;
        cout << "   Length:                          "  << dec << Utils::lenFourBytes(TRACKER_PROPS.Length) << " bytes" << endl <<
            Utils::defaultOffsetDocInfo << "This value MUST be 88 bytes." << endl;
        cout << "   Version:                         " << dec << Utils::lenFourBytes(TRACKER_PROPS.Version) << endl;
            cout << Utils::defaultOffsetDocInfo << "This value MUST be 0." << endl;
        cout << "   MachineID (NetBIOS name):        "; Utils::print_vec_unicode(TRACKER_PROPS.MachineID);
        cout << "   Droid:                           " << endl;
        cout << "     Droid volume identifier:       "; Utils::printSid(TRACKER_PROPS.Droid, 16); cout << endl;
        cout << "     Droid file identifier:         "; Utils::printSid(TRACKER_PROPS.Droid, 0); cout << endl;
        cout << "     UUID Sequence number:          " << dec << Utils::vectTwoToUnsignedInt(TRACKER_PROPS.Droid, 24) << endl;
        cout << "     Mac address:                   "; Utils::printMacAddr(TRACKER_PROPS.Droid, 16);
        cout << "   DroidBirth:                      " << endl;
        cout << "     Birth droid volume identifier: "; Utils::printSid(TRACKER_PROPS.DroidBirth, 16); cout << endl;
        cout << "     Birth droid file identifier:   "; Utils::printSid(TRACKER_PROPS.DroidBirth, 0); cout << endl;
    }
    if (vistaAndAboveIDListPropsIsSet) {
        /* VISTA_AND_ABOVE_IDLIST_PROPS struct*/
        cout << "VISTA_AND_ABOVE_IDLIST_PROPS: " << endl;
        cout << "   BlockSize:                       " << dec
            << Utils::lenFourBytes(VISTA_AND_ABOVE_IDLIST_PROPS.BlockSize) << " bytes" << endl <<
            Utils::defaultOffsetDocInfo << "This value MUST be greater than or equal to 10." << endl;
        cout << "   BlockSignature:                  "; Utils::print_vec(VISTA_AND_ABOVE_IDLIST_PROPS.BlockSignature);
            cout << Utils::defaultOffsetDocInfo << "This value MUST be 0xA000000C." << endl;
        cout << "   IDList: " <<  endl;
        for(int i = 0; i < VISTA_AND_ABOVE_IDLIST_PROPS.IDList.size(); ++i){
            cout << "       ItemID " << i + 1 << endl;
            cout << "           ItemIDSize:              " << dec
                 << Utils::lenTwoBytes(VISTA_AND_ABOVE_IDLIST_PROPS.IDList[i].ItemIDSize) << " bytes" << endl;
            cout << "           Data:                    "; Utils::parseItemData(VISTA_AND_ABOVE_IDLIST_PROPS.IDList[i].Data);
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
        cout << "   KnownFolderID:                   "; Utils::printSid(KNOWN_FOLDER_PROPS.KnownFolderID, 0); cout << endl;
        cout << "   Offset:                          "; Utils::print_vec(KNOWN_FOLDER_PROPS.Offset);
    }
    if (propertyStorePropsIsSet) {
        /* PROPERTY_STORE_PROPS struct*/
        cout << "PROPERTY_STORE_PROPS: " << endl;
        cout << "   BlockSize:                       "; Utils::print_vec(PROPERTY_STORE_PROPS.BlockSize);
        cout << "   BlockSignature:                  "; Utils::print_vec(PROPERTY_STORE_PROPS.BlockSignature);
        cout << "   PropertyStore:                   " << endl;
        for (int j = 0; j < PROPERTY_STORE_PROPS.PropertyStore.size(); ++j) {
            cout << "   Serialized Property Storage " << j + 1 << endl;
            cout << "          StorageSize:              "; Utils::print_vec(PROPERTY_STORE_PROPS.PropertyStore[j].StorageSize);
            cout << "          Version:                  "; Utils::print_vec(PROPERTY_STORE_PROPS.PropertyStore[j].Version);
            cout << "          FormatID:                 "; Utils::printSid(PROPERTY_STORE_PROPS.PropertyStore[j].FormatID, 0); cout << endl;

            for (int i = 0; i < PROPERTY_STORE_PROPS.PropertyStore[j].SerializedPropertyValue.size(); ++i) {
                cout << "        SerializedPropertyValue " << i + 1 << ":" << endl;
                cout << "           ValueSize                ";
                    Utils::print_vec(PROPERTY_STORE_PROPS.PropertyStore[j].SerializedPropertyValue[i].ValueSize);
                if (isStringNameStructInPropsStorage) {
                    /* for StringName */
                    cout << "           NameSize                 ";
                    Utils::print_vec(PROPERTY_STORE_PROPS.PropertyStore[j].SerializedPropertyValue[i].NameSizeOrId);
                } else {
                    /* for IntegerName */
                    cout << "           Id                       ";
                    Utils::print_vec(PROPERTY_STORE_PROPS.PropertyStore[j].SerializedPropertyValue[i].NameSizeOrId);
                }
                cout << "           Reserved                 ";
                Utils::print_vec(PROPERTY_STORE_PROPS.PropertyStore[j].SerializedPropertyValue[i].Reserved);
                if (isStringNameStructInPropsStorage) {
                    /* for StringName */
                    cout << "           Name                 ";
                    Utils::print_vec(PROPERTY_STORE_PROPS.PropertyStore[j].SerializedPropertyValue[i].Name);
                }
                cout << "           Value (TypedPropertyValue structure):" << endl;
                cout << "              Type:                 ";
                Utils::print_vec(PROPERTY_STORE_PROPS.PropertyStore[j].SerializedPropertyValue[i].Value.Type);
                cout << "              Padding:              ";
                Utils::print_vec(PROPERTY_STORE_PROPS.PropertyStore[j].SerializedPropertyValue[i].Value.Padding);
                cout << "              Value:                ";
                Utils::print_vec(PROPERTY_STORE_PROPS.PropertyStore[j].SerializedPropertyValue[i].Value.Value);
            }
            cout << "          TerminalIdentifier:       ";
            Utils::print_vec(PROPERTY_STORE_PROPS.PropertyStore[j].TerminalIdentifier);
        }
        cout << "   TerminalId:                      "; Utils::print_vec(PROPERTY_STORE_PROPS.TerminalId);
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

std::string ExtraData::getSpecialFolderType(unsigned int type) {
    switch (type) {
        case SF_Desktop:				{ return "Desktop"; } break;
        case SF_Internet:				{ return "Internet"; } break;
        case SF_Programs:				{ return "Programs"; } break;
        case SF_Controls:				{ return "Controls"; } break;
        case SF_Printers:				{ return "Printers"; } break;
        case SF_Personal:				{ return "Personal"; } break;
        case SF_Favorites:				{ return "Favorites"; } break;
        case SF_Startup:				{ return "Startup"; } break;
        case SF_Recent:					{ return "Recent"; } break;
        case SF_SendTo:					{ return "SendTo"; } break;
        case SF_BitBucket:				{ return "BitBucket"; } break;
        case SF_StartMenu:				{ return "StartMenu"; } break;
        case SF_MyDocuments:			{ return "MyDocuments"; } break;
        case SF_MyMusic:				{ return "MyMusic"; } break;
        case SF_MyVideo:				{ return "MyVideo"; } break;
        case SF_DesktopDirectory:		{ return "DesktopDirectory"; } break;
        case SF_Drives:					{ return "Drives"; } break;
        case SF_Network:				{ return "Network"; } break;
        case SF_Nethood:				{ return "Nethood"; } break;
        case SF_Fonts:					{ return "Fonts"; } break;
        case SF_Templates:				{ return "Templates"; } break;
        case SF_CommonStartMenu:		{ return "CommonStartMenu"; } break;
        case SF_CommonPrograms:			{ return "CommonPrograms"; } break;
        case SF_CommonStartup:			{ return "CommonStartup"; } break;
        case SF_CommonDesktopDirectory:	{ return "CommonDesktopDirectory"; } break;
        case SF_AppData:				{ return "AppData"; } break;
        case SF_PrintHood:				{ return "PrintHood"; } break;
        case SF_LocalAppData:			{ return "LocalAppData"; } break;
        case SF_AltStartup:				{ return "AltStartup"; } break;
        case SF_CommonAltStartup:		{ return "CommonAltStartup"; } break;
        case SF_CommonFavorites:		{ return "CommonFavorites"; } break;
        case SF_InternetCache:			{ return "InternetCache"; } break;
        case SF_Cookies:				{ return "Cookies"; } break;
        case SF_History:				{ return "History"; } break;
        case SF_CommonAppData:			{ return "CommonAppData"; } break;
        case SF_Windows:				{ return "Windows"; } break;
        case SF_System:					{ return "System"; } break;
        case SF_ProgramFiles:			{ return "ProgramFiles"; } break;
        case SF_MyPictures:				{ return "MyPictures"; } break;
        case SF_Profile:				{ return "Profile"; } break;
        case SF_SystemX86:				{ return "SystemX86"; } break;
        case SF_ProgramFilesX86:		{ return "ProgramFilesX86"; } break;
        case SF_ProgramFilesCommon:		{ return "ProgramFilesCommon"; } break;
        case SF_ProgramFilesCommonX86:	{ return "ProgramFilesCommonX86"; } break;
        case SF_CommonTemplates:		{ return "CommonTemplates"; } break;
        case SF_CommonDocuments:		{ return "CommonDocuments"; } break;
        case SF_CommonAdminTools:		{ return "CommonAdminTools"; } break;
        case SF_AdminTools:				{ return "AdminTools"; } break;
        case SF_Connections:			{ return "Connections"; } break;
        case SF_CommonMusic:			{ return "CommonMusic"; } break;
        case SF_CommonPictures:			{ return "CommonPictures"; } break;
        case SF_CommonVideo:			{ return "CommonVideo"; } break;
        case SF_Resources:				{ return "Resources"; } break;
        case SF_ResourcesLocalized:		{ return "ResourcesLocalized"; } break;
        case SF_CommonOEMLinks:			{ return "CommonOEMLinks"; } break;
        case SF_CDBurnArea:				{ return "CDBurnArea"; } break;
        case SF_ComputersNearMe:		{ return "ComputersNearMe"; } break;
        case SF_FlagCreate:				{ return "FlagCreate"; } break;
        case SF_FlagDontVerify:			{ return "FlagDontVerify"; } break;
        case SF_FlagNoAlias:			{ return "FlagNoAlias"; } break;
        case SF_FlagPerUserInit:		{ return "FlagPerUserInit"; } break;
        case SF_FlagMask:				{ return "FlagMask"; } break;
        default:
            return "Unknown";
    }
}


#pragma clang diagnostic pop