#ifndef LNK_JUMP_LIST_PARSER_LINKTARGETIDLIST_H
#define LNK_JUMP_LIST_PARSER_LINKTARGETIDLIST_H


#include <vector>

#define  TYPE_FILE_OLD          0x36
#define  TYPE_DIRECTORY_OLD     0x35
#define  TYPE_FILE              0x32
#define  TYPE_DIRECTORY         0x31
#define  TYPE_DRIVE_OLD         0x23
#define  TYPE_DRIVE             0x2f
#define  TYPE_CLSID             0x1f

/**
    @class LinkTargetIDList
    Класс производит разбор структуры LinkTargetIDList для Shell Link (.LNK) Binary File Format.
    Докуметация структуры: 2.2 LinkTargetIDList
    https://docs.microsoft.com/en-us/openspecs/windows_protocols/ms-shllink/881d7a83-07a5-4702-93e3-f9fc34c3e1e4 */
    // 4
class LinkTargetIDList {
private:
    /// Поле содержит размер структуры IDList. Занимает 2 байта.
    std::vector<unsigned int> IDListSize;       // 2 bytes
    /// Поле показывающее окончание структуры IDList. Занимает 2 байта.
    std::vector<unsigned int> TerminalID;       // 2 bytes

    /// Поле показывающее были ли ошибки во время разбора структуры IDList.
    bool hasErrors = false;
public:
    /* ----------------------------------------------------------------------------------------------- */
    /*! \brief Структура ItemIDList для вектора структур IDList.                                       */
    /*!  Структура ItemIDList содержит поля, характерные для одного элемента структуры IDList.
         Включает следующие поля:
            ItemIDSize;   // 2 bytes
            Data;          // variable                                                                 */
    /* ----------------------------------------------------------------------------------------------- */
    struct ItemIDList {
        std::vector<unsigned int> ItemIDSize;   // 2 bytes
        std::vector<unsigned int> Data;         // variable
    };
    /* ----------------------------------------------------------------------------------------------- */
    /*! \brief Вектор IDList содержит множество структур ItemIDList.                                   */
    /* ----------------------------------------------------------------------------------------------- */
    std::vector<ItemIDList> IDList;

    /* ----------------------------------------------------------------------------------------------- */
    /*! Функиця для разбора данных в структуре LinkTargetIDList.
        @param linkTargetIdList Вектор символов, содержащий всю информацию для LinkTargetIDList.
        @return void                                                                                   */
    /* ----------------------------------------------------------------------------------------------- */
    void fillLinkTargetIDList(std::vector<unsigned char> linkTargetIdList);

    /* ----------------------------------------------------------------------------------------------- */
    /*! Функция вывода разобранной информации, содержащейся в LinkTargetIDList, в 16-ричном формате.
        @return void                                                                                   */
    /* ----------------------------------------------------------------------------------------------- */
    void printLinkTargetIdListInHexStyle();
    /* ----------------------------------------------------------------------------------------------- */
    /*! Функция вывода разобранной информации, содержащейся в LinkTargetIdList, в текстовом формате.
        @return void                                                                                   */
    /* ----------------------------------------------------------------------------------------------- */
    void printLinkTargetIdList();
    /* ----------------------------------------------------------------------------------------------- */
    /*! Функция проверки успешности обработки текущей структуры LinkTargetIDList.
        @return bool Возвращает true в случае успешного разбора данных, false - в случае неудачи.      */
    /* ----------------------------------------------------------------------------------------------- */
    bool LinkTargetIdHasErrors();
};

#endif //LNK_JUMP_LIST_PARSER_LINKTARGETIDLIST_H
