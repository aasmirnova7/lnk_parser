//
// Created by user on 30.08.2019.
//

#ifndef MY_DIPLOM_EXTRADATA_H
#define MY_DIPLOM_EXTRADATA_H


#include <vector>
#include <string>
#include <iostream>
#include <Windows.h>
#include <cstdio>

#include "ReadStream.h"
#include "LinkTargetIDList.h"
#include "ExtraDataConstants.h"
#include "ExtraData.h"
#include "ShellLinkHeader.h"
#include "Utils.h"

class ExtraData {
private:
    struct ConsolePropsStruct {
        std::vector<unsigned int> BlockSize;                // 4 bytes
        std::vector<unsigned int> BlockSignature;           // 4 bytes
        std::vector<unsigned int> FillAttributes;           // 2 bytes
        std::vector<unsigned int> PopupFillAttributes;      // 2 bytes
        std::vector<unsigned int> ScreenBufferSizeX;        // 2 bytes
        std::vector<unsigned int> ScreenBufferSizeY;        // 2 bytes
        std::vector<unsigned int> WindowSizeX;              // 2 bytes
        std::vector<unsigned int> WindowSizeY;              // 2 bytes
        std::vector<unsigned int> WindowOriginX;            // 2 bytes
        std::vector<unsigned int> WindowOriginY;            // 2 bytes
        std::vector<unsigned int> UNUSED1;                  // 4 bytes
        std::vector<unsigned int> UNUSED2;                  // 4 bytes
        std::vector<unsigned int> FontSize;                 // 4 bytes
        std::vector<unsigned int> FontFamily;               // 4 bytes
        std::vector<unsigned int> FontWeight;               // 4 bytes
        std::vector<unsigned int> FaceName;                 // 64 bytes (Unicode string)
        std::vector<unsigned int> CursorSize;               // 4 bytes
        std::vector<unsigned int> FullScreen;               // 4 bytes
        std::vector<unsigned int> QuickEdit;                // 4 bytes
        std::vector<unsigned int> InsertMode;               // 4 bytes
        std::vector<unsigned int> AutoPosition;             // 4 bytes
        std::vector<unsigned int> HistoryBufferSize;        // 4 bytes
        std::vector<unsigned int> NumberOfHistoryBuffers;   // 4 bytes
        std::vector<unsigned int> HistoryNoDup;             // 4 bytes
        std::vector<unsigned int> ColorTable;               // 64 bytes
    };
    struct ConsoleFEStruct {
        std::vector<unsigned int> BlockSize;            // 4 bytes
        std::vector<unsigned int> BlockSignature;       // 4 bytes
        std::vector<unsigned int> CodePage;             // 4 bytes
    };
    struct DrownPropsStruct {
        std::vector<unsigned int> BlockSize;            // 4 bytes
        std::vector<unsigned int> BlockSignature;       // 4 bytes
        std::vector<unsigned int> DarwinDataAnsi;       // 260 bytes
        std::vector<unsigned int> DarwinDataUnicode;    // 520 bytes
    };
    struct EnvironmentPropsStruct {
        std::vector<unsigned int> BlockSize;            // 4 bytes
        std::vector<unsigned int> BlockSignature;       // 4 bytes
        std::vector<unsigned int> TargetAnsi;           // 260 bytes
        std::vector<unsigned int> TargetUnicode;        // 520 bytes
    };
    struct IconEnvironmentPropsStruct {
        std::vector<unsigned int> BlockSize;            // 4 bytes
        std::vector<unsigned int> BlockSignature;       // 4 bytes
        std::vector<unsigned int> TargetAnsi;           // 260 bytes
        std::vector<unsigned int> TargetUnicode;        // 520 bytes
    };
    struct KnownFolderPropsStruct {
        std::vector<unsigned int> BlockSize;            // 4 bytes
        std::vector<unsigned int> BlockSignature;       // 4 bytes
        std::vector<unsigned int> KnownFolderID;        // 16 bytes
        std::vector<unsigned int> Offset;               // 4 bytes
    };
    struct PropertyStorePropsStruct {
        struct StringOrIntegerName {
            // [MS-OLEPS] section 2.15.
            struct TypedPropertyValue {
                std::vector<unsigned int> Type;                 // 2 bytes
                std::vector<unsigned int> Padding;              // 2 bytes
                std::vector<unsigned int> Value;                // 4 bytes
            };

            std::vector<unsigned int> ValueSize;                // 4 bytes
            std::vector<unsigned int> NameSizeOrId;             // 4 bytes
            std::vector<unsigned int> Reserved;                 // 1 byte (Has to be 0x00.)
            std::vector<unsigned int> Name;                     // A null-terminated Unicode string - presents just for StringName
            TypedPropertyValue Value;                           // A TypedPropertyValue structure, as specified in [MS-OLEPS] section 2.15.
        };

        struct SerializedPropertyStorage {
            std::vector<unsigned int> StorageSize;              // 4 bytes
            std::vector<unsigned int> Version;                  // 4 bytes (Has to be equal to 0x53505331.)
            std::vector<unsigned int> FormatID;                 // 16 bytes
            // If the Format ID field is equal to the GUID {D5CDD505-2E9C-101B-9397-08002B2CF9AE},
            // then all values in the sequence MUST be Serialized Property Value (String Name) structures;
            // otherwise, all values MUST be Serialized Property Value (Integer Name) structures
            std::vector<StringOrIntegerName> SerializedPropertyValue;
        };

        std::vector<unsigned int> BlockSize;            // 4 bytes
        std::vector<unsigned int> BlockSignature;       // 4 bytes
        std::vector<SerializedPropertyStorage> PropertyStore;       // На самом деле
        //SerializedPropertyStorage PropertyStore; // По спецификации
    };
    struct ShimPropsStruct {
        std::vector<unsigned int> BlockSize;            // 4 bytes
        std::vector<unsigned int> BlockSignature;       // 4 bytes
        std::vector<unsigned int> LayerName;            // Unicode string
    };
    struct SpecialFolderPropsStruct {
        std::vector<unsigned int> BlockSize;            // 4 bytes
        std::vector<unsigned int> BlockSignature;       // 4 bytes
        std::vector<unsigned int> SpecialFolderID;      // 4 bytes
        std::vector<unsigned int> Offset;               // 4 bytes
    };
    struct TrackerPropsStruct {
        std::vector<unsigned int> BlockSize;            // 4 bytes
        std::vector<unsigned int> BlockSignature;       // 4 bytes
        std::vector<unsigned int> Length;               // 4 bytes
        std::vector<unsigned int> Version;              // 4 bytes
        std::vector<unsigned int> MachineID;            // 16 bytes
        std::vector<unsigned int> Droid;                // 32 bytes
        std::vector<unsigned int> DroidBirth;           // 32 bytes
    };
    struct VistaAndAboveIDListPropsStruct {
        std::vector<unsigned int> BlockSize;                // 4 bytes
        std::vector<unsigned int> BlockSignature;           // 4 bytes
        std::vector<LinkTargetIDList::ItemIDList> IDList;   //  IDList structure (section 2.2.1)
        std::vector<unsigned int> TerminalID;               // 4 bytes - ?????
    };

    ConsolePropsStruct CONSOLE_PROPS;
    ConsoleFEStruct CONSOLE_FE_PROPS;
    DrownPropsStruct DARWIN_PROPS;
    EnvironmentPropsStruct ENVIRONMENT_PROPS;
    IconEnvironmentPropsStruct ICON_ENVIRONMENT_PROPS;
    KnownFolderPropsStruct KNOWN_FOLDER_PROPS;
    PropertyStorePropsStruct PROPERTY_STORE_PROPS;
    ShimPropsStruct SHIM_PROPS;
    SpecialFolderPropsStruct SPECIAL_FOLDER_PROPS;
    TrackerPropsStruct TRACKER_PROPS;
    VistaAndAboveIDListPropsStruct VISTA_AND_ABOVE_IDLIST_PROPS;
    std::vector<unsigned int> TerminalBlock;                     // 4 bytes

    bool consolePropsIsSet = false;
    bool consoleFEIsSet = false;
    bool drownPropsIsSet = false;
    bool environmentPropsIsSet = false;
    bool iconEnvironmentPropsIsSet = false;
    bool knownFolderPropsIsSet = false;
    bool propertyStorePropsIsSet = false;
    bool shimPropsIsSet = false;
    bool sFolderPropsIsSet = false;
    bool trackerPropsIsSet = false;
    bool vistaAndAboveIDListPropsIsSet = false;
    bool isStringNameStructInPropsStorage = false;
    int ExtraDataOffsetEnd;

    void fillExtraData(ReadStream *readStream, int readFrom);
    void reverseAllFields();
    void parseFillAttributes(bool popupFillAttributes);
    void parseFontFamily();
    void parseFontWeight();
    void parseCursorSize();
    void parseFullScreen();
    void parseQuickEdit();
    void parseInsertMode();
    void parseAutoPosition();
    void parseHistoryNoDup();
    void parseColorTable();
    void parseColorTableUtils(int posStart);
    void parseTypedPropertyValueTypeAndValue(bool parseType, unsigned int flag,
            ExtraData::PropertyStorePropsStruct::StringOrIntegerName::TypedPropertyValue value);
    void setStringNameStructInPropsStorage(PropertyStorePropsStruct::SerializedPropertyStorage tmpSerializedPropertyStorage);
    std::string getSpecialFolderType(unsigned int type);
    int parseCodePageStream(ExtraData::PropertyStorePropsStruct::StringOrIntegerName::TypedPropertyValue value, int from);
    int getVectorHeader(std::vector<unsigned int> val);
    int getArrayHeader(std::vector<unsigned int> val);
    void parseCURRENCY(std::vector<unsigned int> val, int pos);
    void parseVT_ERROR(std::vector<unsigned int> val, int from, int to);
    void parseVT_BOOL(std::vector<unsigned int> val, int pos);
    int parseUnicodeString(std::vector<unsigned int> val, int pos);
    int parseClipboardData(std::vector<unsigned int> val, int pos);

public:
    ExtraData(ReadStream *readStream, int readFrom);
    void printExtraData();
    void printExtraDataInHexStyle();
    int getExtraDataOffsetEnd();
};


#endif //MY_DIPLOM_EXTRADATA_H
