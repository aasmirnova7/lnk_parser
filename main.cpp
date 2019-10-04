
#include "ShellLinkAndJumpListHandler.h"

using namespace std;

bool programCanParseFile(string filePath) {
    int len = filePath.size();
    int lnkPosExtension = len < 4 ? len : len - 4;
    int destPosExtension = len < 25 ? len : len - 25;
    int customDesPosExtension = len < 22 ? : len - 22;

    if(filePath.substr(lnkPosExtension, 4) == ".lnk" ||
       filePath.substr(destPosExtension, 25) == ".automaticDestinations-ms" ||
       filePath.substr(customDesPosExtension, 22) == ".customDestinations-ms") {
        return true;
    }
    cout << "This program can parse just Shortcut or Jump List files with extensions:" << endl <<
         "   .lnk" << endl <<
         "   .automaticDestinations-ms" << endl <<
         "   .customDestinations-ms" << endl <<
         "Please check that you input correct path to Shortcut or Jump List file (with extension)." << endl;
    return false;
}

void startParsing() {
    string filePath, storageType;
    cout << "Please enter the path of the shortcut file you wish to parse:" << endl;
    std::getline (std::cin,filePath);
    if(!programCanParseFile(filePath))
        return;

    cout << "Select a report to output:" << endl << "Press" << endl;
    cout << "  1      To console;" << endl;
    cout << "  2      To new file;" << endl;
    cout << "  3      Not generate result;" << endl;
    std::getline (std::cin,storageType);
    int storageTarget = std::atoi(storageType.c_str());

    switch(storageTarget) {
        case 1: {
            ShellLinkAndJumpListHandler handler = ShellLinkAndJumpListHandler(filePath);
            if(handler.isFileOpen())
                handler.parseFile();
            break;
        }
        case 2: {
            streambuf *bak;
            ofstream file;
            string output;

            ShellLinkAndJumpListHandler handler = ShellLinkAndJumpListHandler(filePath);
            if(handler.isFileOpen()) {
                cout << "Please enter the path for output file:" << endl;
                std::getline (std::cin,output);
                file.open(output);
                bak = cout.rdbuf();             // сохраняем

                cout.rdbuf(file.rdbuf());       // перенапраляем в файл
                handler.parseFile();
                cout.rdbuf(bak);                // восстанавливаем
            }
            cout << "File is parsed. See result in " << output << endl;
            break;
        }
        case 3:
            break;
        default:
            cout << "You pressed a key other than 1, 2, or 3. The file was not parsed." << endl;
    }
}

int main(int argc, char* argv[]) {
    // пока путь указон явно для удобства тестирования
    //ShellLink shellLink = ShellLink("C:\\\\Users\\\\ann19\\\\OneDrive\\\\Desktop\\\\Opera.lnk", 0);
    //ShellLink s = ShellLink("C:\\Users\\ann19\\OneDrive\\Desktop\\vk.lnk", 0);
    //ShellLink s1 = ShellLink("C:\\Users\\ann19\\OneDrive\\Desktop\\Telegram.lnk", 0);
    //ShellLink s2 = ShellLink("C:\\Users\\Public\\Desktop\\Cygwin64 Terminal.lnk", 0);
    //ShellLink s3 = ShellLink("C:\\Users\\ann19\\OneDrive\\Desktop\\mk.lnk", 0);

//    ShellLinkAndJumpListHandler handler =
//            ShellLinkAndJumpListHandler("C:\\Users\\ann19\\OneDrive\\Desktop\\Opera.lnk");

//    ShellLinkAndJumpListHandler handler =
//            ShellLinkAndJumpListHandler("C:\\Users\\ann19\\OneDrive\\Desktop\\4cb9c5750d51c07f.automaticDestinations-ms");
//    ShellLinkAndJumpListHandler handler =
//            ShellLinkAndJumpListHandler("C:\\Users\\ann19\\AppData\\Roaming\\Microsoft\\Windows\\Recent\\AutomaticDestinations\\d00655d2aa12ff6d.automaticDestinations-ms");

    // Раскомментировать при полной готовности программы
    //startParsing();
    return 0;
}