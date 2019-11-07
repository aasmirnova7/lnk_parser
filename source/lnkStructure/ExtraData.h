#ifndef LNK_JUMP_LIST_PARSER_EXTRADATA_H
#define LNK_JUMP_LIST_PARSER_EXTRADATA_H

#include <vector>
#include <string>
#include <iostream>
#include <cstdio>

#include "../utils/ReadStream.h"
#include "LinkTargetIDList.h"
#include "ExtraDataConstants.h"
#include "ExtraData.h"
#include "ShellLinkHeader.h"
#include "../utils/Utils.h"

/**
    @class ExtraData
    Класс производит разбор ExtraData для Shell Link (.LNK) Binary File Format.
    Докуметация структуры: 2.5 ExtraData
    https://docs.microsoft.com/en-us/openspecs/windows_protocols/ms-shllink/c41e062d-f764-4f13-bd4f-ea812ab9a4d1 */
class ExtraData {
private:
    /* ----------------------------------------------------------------------------------------------- */
    /*! \brief Структура ConsolePropsStruct задает параметры отображения,
         используемые при указании целевого объекта ссылки на приложение, запускаемое в окне консоли.  */
    /*!  Включает следующие поля:
        BlockSize;                // 4 bytes
        BlockSignature;           // 4 bytes
        FillAttributes;           // 2 bytes
        PopupFillAttributes;      // 2 bytes
        ScreenBufferSizeX;        // 2 bytes
        ScreenBufferSizeY;        // 2 bytes
        WindowSizeX;              // 2 bytes
        WindowSizeY;              // 2 bytes
        WindowOriginX;            // 2 bytes
        WindowOriginY;            // 2 bytes
        UNUSED1;                  // 4 bytes
        UNUSED2;                  // 4 bytes
        FontSize;                 // 4 bytes
        FontFamily;               // 4 bytes
        FontWeight;               // 4 bytes
        FaceName;                 // 64 bytes (Unicode string)
        CursorSize;               // 4 bytes
        FullScreen;               // 4 bytes
        QuickEdit;                // 4 bytes
        InsertMode;               // 4 bytes
        AutoPosition;             // 4 bytes
        HistoryBufferSize;        // 4 bytes
        NumberOfHistoryBuffers;   // 4 bytes
        HistoryNoDup;             // 4 bytes
        ColorTable;               // 64 bytes                                                          */
    /* ----------------------------------------------------------------------------------------------- */
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
    /* ----------------------------------------------------------------------------------------------- */
    /*! \brief Структура ConsoleFEStruct задает кодовую страницу для отображения текста.               */
    /*!  Включает следующие поля:
            BlockSize;            // 4 bytes
            BlockSignature;       // 4 bytes
            CodePage;             // 4 bytes                                                           */
    /* ----------------------------------------------------------------------------------------------- */
    struct ConsoleFEStruct {
        std::vector<unsigned int> BlockSize;            // 4 bytes
        std::vector<unsigned int> BlockSignature;       // 4 bytes
        std::vector<unsigned int> CodePage;             // 4 bytes
    };
    /* ----------------------------------------------------------------------------------------------- */
    /*! \brief Структура DrownPropsStruct задает идентификатор приложения, который можно использовать
               вместо списка идентификаторов целевых ссылок                                            */
    /*!  Включает следующие поля:
            BlockSize;            // 4 bytes
            BlockSignature;       // 4 bytes
            DarwinDataAnsi;       // 260 bytes
            DarwinDataUnicode;    // 520 bytes                                                         */
    /* ----------------------------------------------------------------------------------------------- */
    struct DrownPropsStruct {
        std::vector<unsigned int> BlockSize;            // 4 bytes
        std::vector<unsigned int> BlockSignature;       // 4 bytes
        std::vector<unsigned int> DarwinDataAnsi;       // 260 bytes
        std::vector<unsigned int> DarwinDataUnicode;    // 520 bytes
    };
    /* ----------------------------------------------------------------------------------------------- */
    /*! \brief Структура EnvironmentPropsStruct задает путь к информации о переменной среды.           */
    /*!  Включает следующие поля:
            BlockSize;            // 4 bytes
            BlockSignature;       // 4 bytes
            TargetAnsi;           // 260 bytes
            TargetUnicode;        // 520 bytes                                                         */
    /* ----------------------------------------------------------------------------------------------- */
    struct EnvironmentPropsStruct {
        std::vector<unsigned int> BlockSize;            // 4 bytes
        std::vector<unsigned int> BlockSignature;       // 4 bytes
        std::vector<unsigned int> TargetAnsi;           // 260 bytes
        std::vector<unsigned int> TargetUnicode;        // 520 bytes
    };
    /* ----------------------------------------------------------------------------------------------- */
    /*! \brief Структура IconEnvironmentPropsStruct задает путь до иконки приложения.                  */
    /*!  Включает следующие поля:
            BlockSize;            // 4 bytes
            BlockSignature;       // 4 bytes
            TargetAnsi;           // 260 bytes
            TargetUnicode;        // 520 bytes                                                         */
    /* ----------------------------------------------------------------------------------------------- */
    struct IconEnvironmentPropsStruct {
        std::vector<unsigned int> BlockSize;            // 4 bytes
        std::vector<unsigned int> BlockSignature;       // 4 bytes
        std::vector<unsigned int> TargetAnsi;           // 260 bytes
        std::vector<unsigned int> TargetUnicode;        // 520 bytes
    };
    /* ----------------------------------------------------------------------------------------------- */
    /*! \brief Структура KnownFolderPropsStruct указывает расположение известной папки.                */
    /*!  Включает следующие поля:
            BlockSize;            // 4 bytes
            BlockSignature;       // 4 bytes
            KnownFolderID;        // 16 bytes
            Offset;               // 4 bytes                                                           */
    /* ----------------------------------------------------------------------------------------------- */
    struct KnownFolderPropsStruct {
        std::vector<unsigned int> BlockSize;            // 4 bytes
        std::vector<unsigned int> BlockSignature;       // 4 bytes
        std::vector<unsigned int> KnownFolderID;        // 16 bytes
        std::vector<unsigned int> Offset;               // 4 bytes
    };
    /* ----------------------------------------------------------------------------------------------- */
    /*! \brief СтруктураPropertyStorePropsStruct задает набор свойств, которые могут использоваться
               приложениями для хранения дополнительных данных в ярлыке.                               */
    /*!  Включает следующие поля:
            BlockSize;            // 4 bytes
            BlockSignature;       // 4 bytes
            KnownFolderID;        // 16 bytes
            PropertyStore:;       // variable                                                          */
    /* ----------------------------------------------------------------------------------------------- */
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
            std::vector<unsigned int> TerminalIdentifier;       // 4 bytes
        };

        std::vector<unsigned int> BlockSize;            // 4 bytes
        std::vector<unsigned int> BlockSignature;       // 4 bytes
        std::vector<SerializedPropertyStorage> PropertyStore;
        std::vector<unsigned int> TerminalId;           // 4 bytes
    };
    /* ----------------------------------------------------------------------------------------------- */
    /*! \brief Структура ShimPropsStruct задает задает имя оболочки.                                   */
    /*!  Включает следующие поля:
            BlockSize;            // 4 bytes
            BlockSignature;       // 4 bytes
            LayerName;            // Unicode string                                                   */
    /* ----------------------------------------------------------------------------------------------- */
    struct ShimPropsStruct {
        std::vector<unsigned int> BlockSize;            // 4 bytes
        std::vector<unsigned int> BlockSignature;       // 4 bytes
        std::vector<unsigned int> LayerName;            // Unicode string
    };
    /* ----------------------------------------------------------------------------------------------- */
    /*! \brief Структура SpecialFolderPropsStruct указывает расположение специальной папки.            */
    /*!  Включает следующие поля:
            BlockSize;            // 4 bytes
            BlockSignature;       // 4 bytes
            SpecialFolderID;      // 4 bytes
            Offset;               // 4 bytes                                                           */
    /* ----------------------------------------------------------------------------------------------- */
    struct SpecialFolderPropsStruct {
        std::vector<unsigned int> BlockSize;            // 4 bytes
        std::vector<unsigned int> BlockSignature;       // 4 bytes
        std::vector<unsigned int> SpecialFolderID;      // 4 bytes
        std::vector<unsigned int> Offset;               // 4 bytes
    };
    /* ----------------------------------------------------------------------------------------------- */
    /*! \brief Структура TrackerPropsStruct указывает данные, которые можно использовать для разрешения
               целевого объекта ссылки, если он не найден в исходном расположении при разрешении ссылки. */
    /*!  Включает следующие поля:
            BlockSize;            // 4 bytes
            BlockSignature;       // 4 bytes
            Length;               // 4 bytes
            Version;              // 4 bytes
            MachineID;            // 16 bytes
            Droid;                // 32 bytes
            DroidBirth;           // 32 bytes                                                          */
    /* ----------------------------------------------------------------------------------------------- */
    struct TrackerPropsStruct {
        std::vector<unsigned int> BlockSize;            // 4 bytes
        std::vector<unsigned int> BlockSignature;       // 4 bytes
        std::vector<unsigned int> Length;               // 4 bytes
        std::vector<unsigned int> Version;              // 4 bytes
        std::vector<unsigned int> MachineID;            // 16 bytes
        std::vector<unsigned int> Droid;                // 32 bytes
        std::vector<unsigned int> DroidBirth;           // 32 bytes
    };
    /* ----------------------------------------------------------------------------------------------- */
    /*! \brief Структура VistaAndAboveIDListPropsStruct  содержит IDList, которая может быть
               использована как альтернатива LinkTargetIDList structure.                               */
    /*!  Включает следующие поля:
            BlockSize;            // 4 bytes
            BlockSignature;       // 4 bytes
            IDList;   //  IDList structure (section 2.2.1)
            TerminalID;               // 2 bytes                                                       */
    /* ----------------------------------------------------------------------------------------------- */
    struct VistaAndAboveIDListPropsStruct {
        std::vector<unsigned int> BlockSize;                // 4 bytes
        std::vector<unsigned int> BlockSignature;           // 4 bytes
        std::vector<LinkTargetIDList::ItemIDList> IDList;   //  IDList structure (section 2.2.1)
        std::vector<unsigned int> TerminalID;               // 2 bytes
    };

    /// Поле содержит информацию структуры CONSOLE_PROPS.
    ConsolePropsStruct CONSOLE_PROPS;
    /// Поле содержит информацию структуры CONSOLE_FE_PROPS.
    ConsoleFEStruct CONSOLE_FE_PROPS;
    /// Поле содержит информацию структуры  DARWIN_PROPS.
    DrownPropsStruct DARWIN_PROPS;
    /// Поле содержит информацию структуры  ENVIRONMENT_PROPS.
    EnvironmentPropsStruct ENVIRONMENT_PROPS;
    /// Поле содержит информацию структуры  ICON_ENVIRONMENT_PROPS.
    IconEnvironmentPropsStruct ICON_ENVIRONMENT_PROPS;
    /// Поле содержит информацию структуры  KNOWN_FOLDER_PROPS.
    KnownFolderPropsStruct KNOWN_FOLDER_PROPS;
    /// Поле содержит информацию структуры  PROPERTY_STORE_PROPS.
    PropertyStorePropsStruct PROPERTY_STORE_PROPS;
    /// Поле содержит информацию структуры  SHIM_PROPS.
    ShimPropsStruct SHIM_PROPS;
    /// Поле содержит информацию структуры  SPECIAL_FOLDER_PROPS.
    SpecialFolderPropsStruct SPECIAL_FOLDER_PROPS;
    /// Поле содержит информацию структуры  TRACKER_PROPS.
    TrackerPropsStruct TRACKER_PROPS;
    /// Поле содержит информацию структуры  VISTA_AND_ABOVE_IDLIST_PROPS.
    VistaAndAboveIDListPropsStruct VISTA_AND_ABOVE_IDLIST_PROPS;
    /// Поле показывающее окончание структуры ExtraData. Занимает 4 байта.
    std::vector<unsigned int> TerminalBlock;                     // 4 bytes

    /// Поле для проверки устновлена ли структура CONSOLE_PROPS.
    bool consolePropsIsSet = false;
    /// Поле для проверки устновлена ли структура CONSOLE_FE_PROPS.
    bool consoleFEIsSet = false;
    /// Поле для проверки устновлена ли структура DARWIN_PROPS.
    bool drownPropsIsSet = false;
    /// Поле для проверки устновлена ли структура ENVIRONMENT_PROPS.
    bool environmentPropsIsSet = false;
    /// Поле для проверки устновлена ли структура ICON_ENVIRONMENT_PROPS.
    bool iconEnvironmentPropsIsSet = false;
    /// Поле для проверки устновлена ли структура KNOWN_FOLDER_PROPS.
    bool knownFolderPropsIsSet = false;
    /// Поле для проверки устновлена ли структура PROPERTY_STORE_PROPS.
    bool propertyStorePropsIsSet = false;
    /// Поле для проверки устновлена ли структура SHIM_PROPS.
    bool shimPropsIsSet = false;
    /// Поле для проверки устновлена ли структура SPECIAL_FOLDER_PROPS.
    bool sFolderPropsIsSet = false;
    /// Поле для проверки устновлена ли структура TRACKER_PROPS.
    bool trackerPropsIsSet = false;
    /// Поле для проверки устновлена ли структура VISTA_AND_ABOVE_IDLIST_PROPS.
    bool vistaAndAboveIDListPropsIsSet = false;
    /// Поле для проверки того, что в PropsStorage используется поле Name.
    bool isStringNameStructInPropsStorage = false;
    /// Поле для хранения информации о позиции окончания структуры ExtraData
    /// от начала файла в байтах.
    int ExtraDataOffsetEnd;

    /* ----------------------------------------------------------------------------------------------- */
    /*! Функиця для разбора данных структуры ExtraData.
        @param readStream Поток для чтения из файла
        @param readFrom Позиция начала чтения из потока rs
        @return void                                                                                   */
    /* ----------------------------------------------------------------------------------------------- */
    void fillExtraData(ReadStream *readStream, int readFrom);
    /* ----------------------------------------------------------------------------------------------- */
    /*! Функция отображения справа налево всех полей структуры DestListHeader.
        @return void                                                                                   */
    /* ----------------------------------------------------------------------------------------------- */
    void reverseAllFields();
    /* ----------------------------------------------------------------------------------------------- */
    /*! Функция вывода информации по занным атрибутам файла поля PopupFillAttributes.
        @param popupFillAttributes Значение поля PopupFillAttributes.
        @return void                                                                                   */
    /* ----------------------------------------------------------------------------------------------- */
    void parseFillAttributes(bool popupFillAttributes);
    /* ----------------------------------------------------------------------------------------------- */
    /*! Функция вывода информации по информации поля FontFamily.
        @return void                                                                                   */
    /* ----------------------------------------------------------------------------------------------- */
    void parseFontFamily();
    /* ----------------------------------------------------------------------------------------------- */
    /*! Функция вывода информации по информации поля FontWeight.
        @return void                                                                                   */
    /* ----------------------------------------------------------------------------------------------- */
    void parseFontWeight();
    /* ----------------------------------------------------------------------------------------------- */
    /*! Функция вывода информации по информации поля CursorSize.
        @return void                                                                                   */
    /* ----------------------------------------------------------------------------------------------- */
    void parseCursorSize();
    /* ----------------------------------------------------------------------------------------------- */
    /*! Функция вывода информации по информации поля FullScreen.
        @return void                                                                                   */
    /* ----------------------------------------------------------------------------------------------- */
    void parseFullScreen();
    /* ----------------------------------------------------------------------------------------------- */
    /*! Функция вывода информации по информации поля QuickEdit.
        @return void                                                                                   */
    /* ----------------------------------------------------------------------------------------------- */
    void parseQuickEdit();
    /* ----------------------------------------------------------------------------------------------- */
    /*! Функция вывода информации по информации поля InsertMode.
        @return void                                                                                   */
    /* ----------------------------------------------------------------------------------------------- */
    void parseInsertMode();
    /* ----------------------------------------------------------------------------------------------- */
    /*! Функция вывода информации по информации поля AutoPosition.
        @return void                                                                                   */
    /* ----------------------------------------------------------------------------------------------- */
    void parseAutoPosition();
    /* ----------------------------------------------------------------------------------------------- */
    /*! Функция вывода информации по информации поля HistoryNoDup.
        @return void                                                                                   */
    /* ----------------------------------------------------------------------------------------------- */
    void parseHistoryNoDup();
    /* ----------------------------------------------------------------------------------------------- */
    /*! Функция вывода информации по информации поля ColorTable.
        @return void                                                                                   */
    /* ----------------------------------------------------------------------------------------------- */
    void parseColorTable();
    /* ----------------------------------------------------------------------------------------------- */
    /*! Функция вывода информации по информации поля ColorTable.
        @return void                                                                                   */
    /* ----------------------------------------------------------------------------------------------- */
    void parseColorTableUtils(int posStart);
    /* ----------------------------------------------------------------------------------------------- */
    /*! Функция вывода информации для TypedPropertyValue.
        @param parseType false - если парсим тип PropertyType, true - если парсим сериализованное значение
        @param flag Значение типа, которое сравниваем
        @param value Экземпляр структуры TypedPropertyValue.
        @return void                                                                                   */
    /* ----------------------------------------------------------------------------------------------- */
    void parseTypedPropertyValueTypeAndValue(bool parseType, unsigned int flag,
            ExtraData::PropertyStorePropsStruct::StringOrIntegerName::TypedPropertyValue value);
    /* ----------------------------------------------------------------------------------------------- */
    /*! Функция задания флага isStringNameStructInPropsStorage, если в PropsStorage используется поле Name.
        @param tmpSerializedPropertyStorage Значение вектора для проверки
        @return void                                                                                   */
    /* ----------------------------------------------------------------------------------------------- */
    void setStringNameStructInPropsStorage(PropertyStorePropsStruct::SerializedPropertyStorage tmpSerializedPropertyStorage);
    /* ----------------------------------------------------------------------------------------------- */
    /*! Функция для определения типа SpecialFolder.
        @param type Значение для проверки
        @return std::string Тип для SpecialFolder.                                                                                  */
    /* ----------------------------------------------------------------------------------------------- */
    std::string getSpecialFolderType(unsigned int type);
    /* ----------------------------------------------------------------------------------------------- */
    /*! Вспомогательная функция для разбора CodePageStream.
        @param value Значение TypedPropertyValue для разбора
        @param from Позиция в векторе, с которой нужно производить разбор
        @return int Размер в батах структуры CodePage.                                                 */
    /* ----------------------------------------------------------------------------------------------- */
    int parseCodePageStream(ExtraData::PropertyStorePropsStruct::StringOrIntegerName::TypedPropertyValue value, int from);
    /* ----------------------------------------------------------------------------------------------- */
    /*! Вспомогательная функция для разбора VectorHeader.
        @param val Значение вектора для разбора
        @return int Размер в батах структуры VectorHeader.                                             */
    /* ----------------------------------------------------------------------------------------------- */
    int getVectorHeader(std::vector<unsigned int> val);
    /* ----------------------------------------------------------------------------------------------- */
    /*! Вспомогательная функция для разбора ArrayHeader.
        @param val Значение вектора для разбора
        @return int Размер в батах структуры ArrayHeader.                                              */
    /* ----------------------------------------------------------------------------------------------- */
    int getArrayHeader(std::vector<unsigned int> val);
    /* ----------------------------------------------------------------------------------------------- */
    /*! Вспомогательная функция для разбора CURRENCY (Packet Version).
        @param val Значение вектора для разбора
        @param pos Позиция в векторе с которой нужно производить разбор
        @return int Размер в батах структуры CURRENCY (Packet Version).                                */
    /* ----------------------------------------------------------------------------------------------- */
    void parseCURRENCY(std::vector<unsigned int> val, int pos);
    /* ----------------------------------------------------------------------------------------------- */
    /*! Вспомогательная функция для разбора VT_ERROR.
        @param val Значение вектора для разбора
        @param from Позиция в векторе с которой нужно производить разбор
        @param to Позиция в векторе до которой которой нужно производить разбор
        @return int Размер в батах структуры VT_ERROR.                                                 */
    /* ----------------------------------------------------------------------------------------------- */
    void parseVT_ERROR(std::vector<unsigned int> val, int from, int to);
    /* ----------------------------------------------------------------------------------------------- */
    /*! Вспомогательная функция для разбора VT_BOOL.
        @param val Значение вектора для разбора
        @param pos Позиция в векторе с которой нужно производить разбор
        @return int Размер в батах структуры VT_BOOL.                                                  */
    /* ----------------------------------------------------------------------------------------------- */
    void parseVT_BOOL(std::vector<unsigned int> val, int pos);
    /* ----------------------------------------------------------------------------------------------- */
    /*! Вспомогательная функция для разбора UnicodeString.
        @param val Значение вектора для разбора
        @param pos Позиция в векторе с которой нужно производить разбор
        @return int Размер в батах структуры UnicodeString.                                            */
    /* ----------------------------------------------------------------------------------------------- */
    int parseUnicodeString(std::vector<unsigned int> val, int pos);
    /* ----------------------------------------------------------------------------------------------- */
    /*! Вспомогательная функция для разбора ClipboardData.
        @param val Значение вектора для разбора
        @param pos Позиция в векторе с которой нужно производить разбор
        @return int Размер в батах структуры ClipboardData.                                            */
    /* ----------------------------------------------------------------------------------------------- */
    int parseClipboardData(std::vector<unsigned int> val, int pos);
    /* ----------------------------------------------------------------------------------------------- */
    /*! Вспомогательная функция для разбора DECIMAL.
        @param val Значение вектора для разбора
        @param pos Позиция в векторе с которой нужно производить разбор
        @return int Размер в батах структуры DECIMAL.                                                  */
    /* ----------------------------------------------------------------------------------------------- */
    void parseDECIMAL(std::vector<unsigned int> val, int pos);

public:
    /* ----------------------------------------------------------------------------------------------- */
    /*! Конструктор с параметрами.
        @param readStream Поток для чтения данных из файла
        @param readFrom Позиция начала чтения из потока rs                                             */
    /* ----------------------------------------------------------------------------------------------- */
    ExtraData(ReadStream *readStream, int readFrom);

    /* ----------------------------------------------------------------------------------------------- */
    /*! Функция вывода разобранной информации, содержащейся в ExtraData, в текстовом формате.
        @return void                                                                                   */
    /* ----------------------------------------------------------------------------------------------- */
    void printExtraData();
    /* ----------------------------------------------------------------------------------------------- */
    /*! Функция вывода разобранной информации, содержащейся в ExtraData, в 16-ричном формате.
        @return void                                                                                   */
    /* ----------------------------------------------------------------------------------------------- */
    void printExtraDataInHexStyle();
    /* ----------------------------------------------------------------------------------------------- */
    /*! Функция получения конца структуры ExtraData в байтах.
        @return int Смещение структуры ExtraData в байтах относительно начала файла.                                              */
    /* ----------------------------------------------------------------------------------------------- */
    int getExtraDataOffsetEnd();
};

#endif //LNK_JUMP_LIST_PARSER_EXTRADATA_H
