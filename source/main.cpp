#include "utils/ParserUtils.h"

using namespace std;

/*
 * Таким образом, нерешённые проблемы:
 * 3) Для ExtraData в parseTypedPropertyValueTypeAndValue нужно допарсить, протестировать, поправить то, что уже найдено
 * 4) Для CONSOLE_FE_PROPS.CodePage не распаршен тип, так как там очень много значений
 * 5) По возможности нужно попытаться извлекать ещё доп информацию из LinkTargetIdList
 *    Исправить UUID timestamp
 * 7) убрать закомментированные строки в самом конце перед сдачей программы
 */

/**
 * @brief Точка входа в программу.
 *  Выполнение программы начинается с данного метода.
 *
 * @param argc Количество аргементов программы
 * @param argv Список аргументов программы
 * @return int Статус завершения программы
 */
int main(int argc, char* argv[]) {
    // пока путь указон явно для удобства тестирования
    string destPath = "C:\\Users\\ann19\\AppData\\Roaming\\Microsoft\\Windows\\Recent\\AutomaticDestinations\\";
    string customPath  = "C:\\Users\\ann19\\AppData\\Roaming\\Microsoft\\Windows\\Recent\\CustomDestinations\\";

//    ShellLinkAndJumpListHandler handler =
//            ShellLinkAndJumpListHandler("C:\\Users\\ann19\\OneDrive\\Desktop\\4cb9c5750d51c07f.automaticDestinations-ms");
//    handler.parseFile();
//    ShellLinkAndJumpListHandler handler1 =
//            ShellLinkAndJumpListHandler(customPath + "b8ab77100df80ab2.customDestinations-ms");
//    handler1.parseFile();
//    ShellLinkAndJumpListHandler handler =
//            ShellLinkAndJumpListHandler("C:\\Users\\ann19\\AppData\\Roaming\\Microsoft\\Windows\\Recent\\AutomaticDestinations\\d00655d2aa12ff6d.automaticDestinations-ms");
//    handler.parseFile();

    /*
     * 3) неверно вычисляются и UUID timestamp:
     * */
//    ShellLinkAndJumpListHandler handler = ShellLinkAndJumpListHandler("C:\\Users\\ann19\\OneDrive\\Desktop\\\Opera.lnk");
//    handler.parseFile();
    /*
     * 1) можно больше доп информации LinkTargetIdList
     * 2) неверно вычисляются и UUID timestamp:
     */
//    ShellLinkAndJumpListHandler handler1 = ShellLinkAndJumpListHandler("C:\\Users\\ann19\\OneDrive\\Desktop\\Telegram.lnk");
//    handler1.parseFile();

    /*
     * 3) неверно вычисляются UUID timestamp:
     * */
//    ShellLinkAndJumpListHandler handler1 = ShellLinkAndJumpListHandler("C:\\Users\\ann19\\OneDrive\\Desktop\\vk.lnk");
//    handler1.parseFile();

    // Раскомментировать при полной готовности программы
    ParserUtils::startParsing();

    char c;
    cout << "Press any key to continue . . . " << endl;
    cin >> c;
    return 0;
}