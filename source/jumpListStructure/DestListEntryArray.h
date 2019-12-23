#ifndef LNK_JUMP_LIST_PARSER_DESTLISTENTRYARRAY_H
#define LNK_JUMP_LIST_PARSER_DESTLISTENTRYARRAY_H


#include <vector>
#include "../utils/Utils.h"
#include "../utils/ReadStream.h"
#include "DestListHeader.h"

/**
    @class DestListEntryArray
    Класс описывает хранение и разбор структуры DestListEntryArray для списков быстрого доступа.       */
    // 4 +
class DestListEntryArray {
private:
    /* ----------------------------------------------------------------------------------------------- */
    /*! \brief Структура DestListEntry для вектора структур destListEntryArray.                        */
    /*!  Структура DestListEntry содержит поля, характерные для Entry элемента списков быстрого доступа.
         Включает следующие поля:
            Checksum;                 // 8 bytes
            VolumeId;                 // 16 bytes
            ObjectId;                 // 16 bytes
            BirthVolumeId;            // 16 bytes
            BirthObjectId;            // 16 bytes
            NetBIOSName;              // 16 bytes
            EntryId;                  // 4 bytes
            Reserved1;                // 8 bytes
            MSFileTime;               // 8 bytes
            EntryPinStatus;           // 4 bytes
            Reserved2;                // 4 bytes
            AccessedCount;            // 4 bytes
            Reserved3;                // 8 bytes
            LengthOfUnicodeData;      // 2 bytes
            EntryStringData;          // variable                                                      */
    /* ----------------------------------------------------------------------------------------------- */
    struct DestListEntry {
        std::vector<unsigned int> Checksum;                 // 8 bytes
        std::vector<unsigned int> VolumeId;                 // 16 bytes
        std::vector<unsigned int> ObjectId;                 // 16 bytes
        std::vector<unsigned int> BirthVolumeId;            // 16 bytes
        std::vector<unsigned int> BirthObjectId;            // 16 bytes
        std::vector<unsigned int> NetBIOSName;              // 16 bytes
        std::vector<unsigned int> EntryId;                  // 4 bytes
        std::vector<unsigned int> Reserved1;                // 8 bytes
        std::vector<unsigned int> MSFileTime;               // 8 bytes
        std::vector<unsigned int> EntryPinStatus;           // 4 bytes
        std::vector<unsigned int> Reserved2;                // 4 bytes
        std::vector<unsigned int> AccessedCount;            // 4 bytes
        std::vector<unsigned int> Reserved3;                // 8 bytes
        std::vector<unsigned int> LengthOfUnicodeData;      // 2 bytes
        std::vector<unsigned int> EntryStringData;          // variable
    };
    /* ----------------------------------------------------------------------------------------------- */
    /*! \brief Вектор destListEntryArray содержит множество структур DestListEntry.                    */
    /* ----------------------------------------------------------------------------------------------- */
    std::vector<DestListEntry> destListEntryArray;

    /* ----------------------------------------------------------------------------------------------- */
    /*! Функция отображения справа налево всех полей структуры DestListEntry.
        @param tmpDestListEntry Структура DestListEntry для вектора структур destListEntryArray.
        @return void                                                                                   */
    /* ----------------------------------------------------------------------------------------------- */
    void reverseAllFields(DestListEntry* tmpDestListEntry);

public:
    /* ----------------------------------------------------------------------------------------------- */
    /*! Функиця для разбора данных в вектор destListEntryArray
        @param rs Поток для чтения из файла
        @param readFrom Позиция начала чтения из потока rs
        @param header Заголовок структуры DestList списка быстрого доступа
        @return void                                                                                   */
    /* ----------------------------------------------------------------------------------------------- */
    void fillDestListEntryArray(ReadStream *rs, int readFrom, DestListHeader header);

    /* ----------------------------------------------------------------------------------------------- */
    /*! Функция вывода разобранной информации, содержащейся в DestListEntryArray, в 16-ричном формате.
        @return void                                                                                   */
    /* ----------------------------------------------------------------------------------------------- */
    void printDestListEntryArrayInHexStyle();

    /* ----------------------------------------------------------------------------------------------- */
    /*! Функция вывода разобранной информации, содержащейся в DestListEntryArray, в текстовом формате.
        @return void                                                                                   */
    /* ----------------------------------------------------------------------------------------------- */
    void printDestListEntryArray();
};


#endif //LNK_JUMP_LIST_PARSER_DESTLISTENTRYARRAY_H
