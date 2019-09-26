//
// Created by user on 30.08.2019.
//

#ifndef MY_DIPLOM_EXTRADATA_H
#define MY_DIPLOM_EXTRADATA_H


#include <vector>
#include "ReadStream.h"
#include "LinkTargetIDList.h"

// EXTRA_DATA signatures
/*#define ENVIRONMENT_PROPS				0xA0000001
#define CONSOLE_PROPS					0xA0000002
#define TRACKER_PROPS					0xA0000003
#define CONSOLE_FE_PROPS				0xA0000004
#define SPECIAL_FOLDER_PROPS			0xA0000005
#define DARWIN_PROPS					0xA0000006
#define ICON_ENVIRONMENT_PROPS			0xA0000007
#define SHIM_PROPS						0xA0000008
#define PROPERTY_STORE_PROPS			0xA0000009
#define KNOWN_FOLDER_PROPS				0xA000000B
#define VISTA_AND_ABOVE_IDLIST_PROPS	0xA000000C */

// FillAttributes for ConsolePropsStruct
#define FOREGROUND_BLUE         0x0001      // The foreground text color contains blue.
#define FOREGROUND_GREEN        0x0002      // The foreground text color contains green.
#define FOREGROUND_RED          0x0004      // The foreground text color contains red.
#define FOREGROUND_INTENSITY    0x0008      // The foreground text color is intensified.
#define BACKGROUND_BLUE         0x0010      // The background text color contains blue.
#define BACKGROUND_GREEN        0x0020      // The background text color contains green.
#define BACKGROUND_RED          0x0040      // The background text color contains red.
#define BACKGROUND_INTENSITY    0x0080      // The background text color is intensified.

// FontFamily  for ConsolePropsStruct
#define FF_DONTCARE      0x0000      // The font family is unknown.
#define FF_ROMAN         0x0010      // The font is variable-width with serifs; for example, "Times New Roman".
#define FF_SWISS         0x0020      // The font is variable-width without serifs; for example, "Arial".
#define FF_MODERN        0x0030      // The font is fixed-width, with or without serifs; for example, "Courier New".
#define FF_SCRIPT        0x0040      // The font is designed to look like handwriting; for example, "Cursive".
#define FF_DECORATIVE    0x0050      // The font is a novelty font; for example, "Old English".
// font-pitch
#define TMPF_NONE          0x0000      // A font pitch does not apply.
#define TMPF_FIXED_PITCH   0x0001      // The font is a fixed-pitch font.
#define TMPF_VECTOR        0x0002      // The font is a vector font.
#define TMPF_TRUETYPE      0x0004      // The font is a true-type font.
#define TMPF_DEVICE        0x0008      // The font is specific to the device.

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
            // TODO: дописать [MS-OLEPS] section 2.15.
            struct TypedPropertyValue {
                std::vector<unsigned int> Type;                 // 2 bytes
                std::vector<unsigned int> Padding;              // 2 bytes
                std::vector<unsigned int> Value;
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
        SerializedPropertyStorage PropertyStore;
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
    void parseTypedPropertyValueTypeAndValue(bool parseType,
                PropertyStorePropsStruct::StringOrIntegerName::TypedPropertyValue tpv);
    void setStringNameStructInPropsStorage();

public:
    ExtraData(ReadStream *readStream, int readFrom);
    void printExtraData();
    void printExtraDataInHexStyle();

};


#endif //MY_DIPLOM_EXTRADATA_H
