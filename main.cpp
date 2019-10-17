#include "ParserUtils.h"

using namespace std;

/*
 * Таким образом, нерешённые проблемы:
 * 3) Для ExtraData в parseTypedPropertyValueTypeAndValue нужно допарсить, протестировать, поправить то, что уже найдено
 * 4) Для CONSOLE_FE_PROPS.CodePage не распаршен тип, так как там очень много значений
 * 5) По возможности нужно попытаться извлекать ещё доп информацию из LinkTargetIdList
 *    Исправить UUID timestamp
 * 7) убрать закомментированные строки в самом конце перед сдачей программы
 */

void testTime() {
    // ok : 1 d5 6b 3c 13 e1 6 cf

//    std::vector<unsigned int> vec1;
//    // 24 65 e5 27 17 d7 e9 11
//    vec1.push_back(0x11);
//    vec1.push_back(0xe9);
////    vec1.push_back(0x11);
//    vec1.push_back(0xd7);
//    vec1.push_back(0x17);
////    vec1.push_back(0xd7);
////    vec1.push_back(0xe9);
////    vec1.push_back(0x11);
//
//    vec1.push_back(0x24);
//    vec1.push_back(0x65);
//    vec1.push_back(0xe5);
//    vec1.push_back(0x27);
////    vec1.push_back(0x17);
////    vec1.push_back(0xd7);
////    vec1.push_back(0xe9);
////    vec1.push_back(0x11);
//
////    vec1.push_back(0x01);
////    vec1.push_back(0xd5);
////    vec1.push_back(0xd1);
////    vec1.push_back(0x71);
////
////    vec1.push_back(0x89);
////    vec1.push_back(0x4e);
////    vec1.push_back(0xd9);
////    vec1.push_back(0x83);
////
//////1 d5 65 a5 8f c9 c4 5d
//////83 d9 4e 89 - d1 71 - 11 e9
//    std::vector<unsigned int> vec = vec1;// Utils::getSidForComparing(vec1,0);
//    unsigned int result = (vec[0] << 8) | vec[1];
//    unsigned int result2 = (vec[2] << 8) | vec[3];
//    long long int result3 = (result << 16) | result2;
//    cout << " result3  = " << dec << result3  << " hex = " << hex << result3 << endl;
//
//    unsigned int result4 = (vec[4] << 8) | vec[5];
//    unsigned int result5 = (vec[6] << 8) | vec[7];
//    long long int result6 = (result4 << 16) | result5;
//    cout << " result6  = " << dec << result6  << " hex = " << hex << result6 << endl;
//
//    long long int result7 = (result3 << 32) | result6;
//    cout << " result7 = " << dec << result7  << " hex = " << hex << result7 ;
//
//    long long int time_l = result7;
//    time_t rawtime = Utils::convertWindowsTimeToUnixTime(time_l);
//    struct tm * timeinfo;
//
//    //time(&rawtime);
//    timeinfo = localtime(&rawtime);
//    cout << " time = " << asctime(timeinfo) << endl;
////    //printf ("Current local time and date: %s", asctime(timeinfo));
}

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