#include "ParserUtils.h"

using namespace std;

/*
 * Таким образом, нерешённые проблемы:
 * 1) Не понятно, как искать DestList стрим
 * 2) Для ExtraData не всягда корректен парсинг PROPERTY_STORE_PROPS (но основная информация получена)
 * 3) Для ExtraData в parseTypedPropertyValueTypeAndValue нужно допарсить, протестировать, поправить то, что уже найдено
 * 4) Для CONSOLE_FE_PROPS.CodePage не распаршен тип, так как там очень много значений
 * 5) По возможности нужно попытаться извлекать ещё доп информацию из LinkTargetIdList
 *    Исправить UUID timestamp и UUID Sequence number
 * 6) По возможности отказаться от WINApi
 * 7) убрать закомментированные строки в самом конце перед сдачей программы
 */

int main(int argc, char* argv[]) {
    // пока путь указон явно для удобства тестирования
    string destPath = "C:\\Users\\ann19\\AppData\\Roaming\\Microsoft\\Windows\\Recent\\AutomaticDestinations\\";
    string customPath  = "C:\\Users\\ann19\\AppData\\Roaming\\Microsoft\\Windows\\Recent\\CustomDestinations\\";

//    ShellLinkAndJumpListHandler handler =
//            ShellLinkAndJumpListHandler("C:\\Users\\ann19\\OneDrive\\Desktop\\4cb9c5750d51c07f.automaticDestinations-ms");
//    handler.parseFile();

     /*
      * 1) Ошибка в SerializedPropertyValue 1:  Reserved:               31   MUST be 0x00.
      * 2) СНова Type:                 VT_LPWSTR: 0
      * */
//    ShellLinkAndJumpListHandler handler1 =
//            ShellLinkAndJumpListHandler(customPath + "b8ab77100df80ab2.customDestinations-ms");
//    handler1.parseFile();
// В ExtraData там, где больше одной Serialized Property Storage не совсем верный парсинг
//    ShellLinkAndJumpListHandler handler =
//            ShellLinkAndJumpListHandler("C:\\Users\\ann19\\AppData\\Roaming\\Microsoft\\Windows\\Recent\\AutomaticDestinations\\d00655d2aa12ff6d.automaticDestinations-ms");

    /*
     * 3) неверно вычисляются UUID Sequence number: и UUID timestamp:
     * 4) для id = 26 не хватает 0x001f (VT_LPWSTR)      OperaSoftware.OperaWebBrowser.1567878982
     * 5) не хватает Serialized Property Storage id = 104
     * */
//    ShellLinkAndJumpListHandler handler = ShellLinkAndJumpListHandler("C:\\Users\\ann19\\OneDrive\\Desktop\\\Opera.lnk");
//    handler.parseFile();
    /*
     * 1) можно больше доп информации LinkTargetIdList
     * 2) неверно вычисляются UUID Sequence number: и UUID timestamp:
     */
//    ShellLinkAndJumpListHandler handler1 = ShellLinkAndJumpListHandler("C:\\Users\\ann19\\OneDrive\\Desktop\\Telegram.lnk");
//    handler1.parseFile();

    /*
     * 1) не хватает одной Serialized Property Storage с id = 104
     * 2) для PROPERTY_STORE_PROPS - в программе есть значение для VT_LPWSTR, а у меня нет
     * 3) неверно вычисляются UUID Sequence number: и UUID timestamp:
     * */
//    ShellLinkAndJumpListHandler handler1 = ShellLinkAndJumpListHandler("C:\\Users\\ann19\\OneDrive\\Desktop\\vk.lnk");
//    handler1.parseFile();

    /*
     * 1) Файлы с пробелами в пути не открываются, как и в той программе
     * */
//    ShellLinkAndJumpListHandler handler1 = ShellLinkAndJumpListHandler("C:\\Users\\ann19\\OneDrive\\Desktop\\Cygwin64 Terminal.lnk");
//    handler1.parseFile();

    // Раскомментировать при полной готовности программы
    ParserUtils::startParsing();
    return 0;
}