#ifndef LNK_JUMP_LIST_PARSER_LINKINFO_H
#define LNK_JUMP_LIST_PARSER_LINKINFO_H

#include <vector>
#include "LinkInfoConstants.h"

/**
    @class LinkInfo
    Класс производит разбор структуры LinkInfo для Shell Link (.LNK) Binary File Format.
    Докуметация структуры: 2.3 LinkInfo
    https://docs.microsoft.com/en-us/openspecs/windows_protocols/ms-shllink/6813269d-0cc8-4be2-933f-e96e8e3412dc */\
    // 10 +
class LinkInfo {
private:
    /* ----------------------------------------------------------------------------------------------- */
    /*! \brief Структура VolumeIDStruct описывает структуру VolumeID для (.LNK) файла.                 */
    /*!  Включает следующие поля:
            VolumeIDSize;
            DriveType;
            DriveSerialNumber;
            VolumeLabelOffset;
            VolumeLabelOffsetUnicode;
            Data;                                                                                      */
    /* ----------------------------------------------------------------------------------------------- */
    struct VolumeIDStruct {
        std::vector<unsigned int> VolumeIDSize;             // 4 bytes  MUST be greater than 0x00000010
        std::vector<unsigned int> DriveType;                // 4 bytes
        std::vector<unsigned int> DriveSerialNumber;        // 4 bytes
        std::vector<unsigned int> VolumeLabelOffset;        // 4 bytes If the value of this field is 0x00000014,
                                                            // it MUST be ignored, and the value of the VolumeLabelOffsetUnicode field MUST be used
        std::vector<unsigned int> VolumeLabelOffsetUnicode; // 4 bytes  (OPTIONAL) - MUST NOT be present
        std::vector<unsigned int> Data;
    };

    /* ----------------------------------------------------------------------------------------------- */
    /*! \brief Структура CommonNetworkRelativeLinkStruct описывает
               структуру CommonNetworkRelativeLink для (.LNK) файла.                                   */
    /*!  Включает следующие поля:
            CommonNetworkRelativeLinkSize;
            CommonNetworkRelativeLinkFlags;
            NetNameOffset;
            DeviceNameOffset;
            NetworkProviderType;
            NetNameOffsetUnicode;
            DeviceNameOffsetUnicode;
            NetName;
            DeviceName;
            NetNameUnicode;
            DeviceNameUnicode;                                                                         */
    /* ----------------------------------------------------------------------------------------------- */
    struct CommonNetworkRelativeLinkStruct {
        std::vector<unsigned int> CommonNetworkRelativeLinkSize;        // 4 bytes
        std::vector<unsigned int> CommonNetworkRelativeLinkFlags;       // 4 bytes
        std::vector<unsigned int> NetNameOffset;                        // 4 bytes
        std::vector<unsigned int> DeviceNameOffset;                     // 4 bytes
        std::vector<unsigned int> NetworkProviderType;                  // 4 bytes
        std::vector<unsigned int> NetNameOffsetUnicode;                 // 4 bytes (OPTIONAL) - MUST NOT be present
        std::vector<unsigned int> DeviceNameOffsetUnicode;              // 4 bytes (OPTIONAL) - MUST NOT be present
        std::vector<unsigned int> NetName;
        std::vector<unsigned int> DeviceName;
        std::vector<unsigned int> NetNameUnicode;                       // (OPTIONAL) - MUST NOT be present
        std::vector<unsigned int> DeviceNameUnicode;                    // (OPTIONAL) - MUST NOT be present
    };

    /// Поле содержит размер структуры LinkInfo. Занимает 4 байта.
    std::vector<unsigned int> LinkInfoSize;                     // 4 bytes
    /// Поле содержит размер заголовка LinkInfo. Занимает 4 байта.
    std::vector<unsigned int> LinkInfoHeaderSize;               // 4 bytes
    /// Поле содержит флаги структуры LinkInfo. Занимает 4 байта.
    std::vector<unsigned int> LinkInfoFlags;                    // 4 bytes
    /// Поле содержит смещение от начала структуры LinkInfo до поля VolumeID. Занимает 4 байта.
    std::vector<unsigned int> VolumeIDOffset;                   // 4 bytes
    /// Поле содержит смещение от начала структуры LinkInfo до поля LocalBasePath. Занимает 4 байта.
    std::vector<unsigned int> LocalBasePathOffset;              // 4 bytes
    /// Поле содержит смещение от начала структуры LinkInfo до поля CommonNetworkRelativeLink. Занимает 4 байта.
    std::vector<unsigned int> CommonNetworkRelativeLinkOffset;  // 4 bytes
    /// Поле содержит смещение от начала структуры LinkInfo до поля CommonPathSuffix. Занимает 4 байта.
    std::vector<unsigned int> CommonPathSuffixOffset;           // 4 bytes
    /// Поле содержит смещение от начала структуры LinkInfo до поля LocalBasePathUnicode. Занимает 4 байта.
    std::vector<unsigned int> LocalBasePathOffsetUnicode;       // 4 bytes (OPTIONAL) - MUST NOT be present
    /// Поле содержит смещение от начала структуры LinkInfo до поля CommonPathSuffixUnicode. Занимает 4 байта.
    std::vector<unsigned int> CommonPathSuffixOffsetUnicode;    // 4 bytes (OPTIONAL) - MUST NOT be present
    /// Поле содержит структуру VolumeIDStruct.
    VolumeIDStruct            VolumeID;                         // (OPTIONAL) - MUST NOT be present
    /// Поле содержит информацию о полном пути до целевого файла.
    std::vector<unsigned int> LocalBasePath;                    // (OPTIONAL) - MUST NOT be present
    /// Поле содержит структуру CommonNetworkRelativeLinkStruct.
    CommonNetworkRelativeLinkStruct CommonNetworkRelativeLink;  // (OPTIONAL) - MUST NOT be present
    /// Поле содержит часть информации о полном пути до целевого файла.
    std::vector<unsigned int> CommonPathSuffix;
    /// Поле содержит информацию о полном пути до целевого файла в Unicode представлении.
    std::vector<unsigned int> LocalBasePathUnicode;             // (OPTIONAL) - MUST NOT be present
    /// Поле содержит часть информации о полном пути до целевого файла в Unicode представлении.
    std::vector<unsigned int> CommonPathSuffixUnicode;          // (OPTIONAL) - MUST NOT be present

    /* ----------------------------------------------------------------------------------------------- */
    /*! Функция отображения справа налево всех полей структуры LinkInfo.
        @return void                                                                                   */
    /* ----------------------------------------------------------------------------------------------- */
    void reverseAllFields();
    /* ----------------------------------------------------------------------------------------------- */
    /*! Функиця поиска позиции первого байта нультерминатора от начала файла
        по заданному итератору вектора символов для LocalBasePath.
        @param it Итератор, указывающий откуда читать данные
        @return int Позиця первого байта нультерминатора от начала файла по заданной позиции в вкторе. */
    /* ----------------------------------------------------------------------------------------------- */
    int getCountOfBytesBeforeNullTerminatorForLBP(std::vector<unsigned char>::const_iterator it);
    /* ----------------------------------------------------------------------------------------------- */
    /*! Функиця вывода дополнительной информации поля LinkInfoHeaderSize структуры LinkInfo.
        @return void                                                                                   */
    /* ----------------------------------------------------------------------------------------------- */
    void parseLinkInfoHeaderSize();

public:
    /* ----------------------------------------------------------------------------------------------- */
    /*! Функиця для разбора данных в поля структуры LinkInfo.
        @param linkInfo Вектор символов, содержащий всю информацию о linkInfo.
        @return void                                                                                   */
    /* ----------------------------------------------------------------------------------------------- */
    void fillLinkInfo(std::vector<unsigned char> linkInfo);

    /* ----------------------------------------------------------------------------------------------- */
    /*! Функция вывода разобранной информации, содержащейся в LinkInfo, в текстовом формате.
        @return void                                                                                   */
    /* ----------------------------------------------------------------------------------------------- */
    void printLinkInfo();
    /* ----------------------------------------------------------------------------------------------- */
    /*! Функция вывода разобранной информации, содержащейся в LinkInfo, в 16-ричном формате.
        @return void                                                                                   */
    /* ----------------------------------------------------------------------------------------------- */
    void printLinkInfoInHexStyle();
    /* ----------------------------------------------------------------------------------------------- */
    /*! Функция вывода информации по занным флагам поля LinkInfoFlags.
        @return void                                                                                   */
    /* ----------------------------------------------------------------------------------------------- */
    void parseLinkInfoFlags();
    /* ----------------------------------------------------------------------------------------------- */
    /*! Функция вывода типа по значению поля DriveType.
        @return void                                                                                   */
    /* ----------------------------------------------------------------------------------------------- */
    void parseDriveType();
    /* ----------------------------------------------------------------------------------------------- */
    /*! Функция вывода типа по значению поля CommonNetworkRelativeLinkFlags.
        @return void                                                                                   */
    /* ----------------------------------------------------------------------------------------------- */
    void parseCommonNetworkRelativeLinkFlags();
    /* ----------------------------------------------------------------------------------------------- */
    /*! Функция вывода типа по значению поля NetworkProviderType.
        @return void                                                                                   */
    /* ----------------------------------------------------------------------------------------------- */
    void parseNetworkProviderType();
};

#endif //LNK_JUMP_LIST_PARSER_LINKINFO_H
