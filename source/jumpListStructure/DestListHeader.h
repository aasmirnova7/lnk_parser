#ifndef LNK_JUMP_LIST_PARSER_DESTLISTHEADER_H
#define LNK_JUMP_LIST_PARSER_DESTLISTHEADER_H

#include <vector>
#include "../utils/Utils.h"

/**
    @class DestListHeader
    Класс описывает хранение и разбор заголовка для списков быстрого доступа.                         */
class DestListHeader {
private:
    /// Поле хранит в себе информацию о версии jump-list-а. Занимает 4 байта.
    std::vector<unsigned int> Version;                         // 4 bytes
    /// Поле хранит в себе информацию о текущем количестве Entries в  jump-list-е.
    /// Занимает 4 байта.
    std::vector<unsigned int> TotalNumberOfCurrentEntries;     // 4 bytes
    /// Поле хранит в себе информацию о текущем количестве закреплённых Entries в  jump-list-е.
    /// Занимает 4 байта.
    std::vector<unsigned int> TotalNumberOfPinnedEntries;      // 4 bytes
    /// Поле хранит в себе информацию о недокументированном значении в  jump-list-е.
    /// Занимает 4 байта.
    std::vector<unsigned int> Unknown;                         // 4 bytes
    /// Поле хранит в себе информацию о поледнем записанном Entry в  jump-list-е.
    /// Занимает 8 байт.
    std::vector<unsigned int> LastIssuedEntryId;               // 8 bytes
    /// Поле хранит в себе информацию о количестве добавлений/удалений/переоткрытий Entry в  jump-list-е.
    /// Занимает 8 байт.
    std::vector<unsigned int> NumberOfAddedDeletedReopened;    // 8 bytes

    /* ----------------------------------------------------------------------------------------------- */
    /*! Функция отображения справа налево всех полей структуры DestListHeader.
        @return void                                                                                   */
    /* ----------------------------------------------------------------------------------------------- */
    void reverseAllFields();

public:
    /* ----------------------------------------------------------------------------------------------- */
    /*! Функиця для разбора данных в поля структуры DestListHeader
        @param destListHeader Вектор символов, содержащий всю информацию заголовка списка быстрого доступа.
        @return void                                                                                   */
    /* ----------------------------------------------------------------------------------------------- */
    void fillDestListHeader(std::vector<unsigned char> destListHeader);
    /* ----------------------------------------------------------------------------------------------- */
    /*! Функция вывода разобранной информации, содержащейся в DestListHeader, в 16-ричном формате.
        @return void                                                                                   */
    /* ----------------------------------------------------------------------------------------------- */
    void printDestListHeaderInHexStyle();
    /* ----------------------------------------------------------------------------------------------- */
    /*! Функция вывода разобранной информации, содержащейся в DestListHeader, в текстовом формате.
        @return void                                                                                   */
    /* ----------------------------------------------------------------------------------------------- */
    void printDestListHeader();
    /* ----------------------------------------------------------------------------------------------- */
    /*! Функция получения количества Entries, содержащихся в текущем списке быстрого доступа.
        @return int Количество Entries, содержащихся в текущем списке быстрого доступа.                */
    /* ----------------------------------------------------------------------------------------------- */
    unsigned int getTotalNumberOfCurrentEntries();
};

#endif
