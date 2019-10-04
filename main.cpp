
#include "ShellLinkAndJumpListHandler.h"

using namespace std;

int main(int argc, char* argv[]) {
    cout << "Please enter the name of the shortcut file:" << endl;
    // TODO: сделать считывание из пользовательского воода. (пока путь указон явно)
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


    streambuf *bak;
    ofstream file;

    file.open("C:\\Users\\ann19\\OneDrive\\Desktop\\res.txt");
    bak = cout.rdbuf();  // сохраняем

    cout.rdbuf(file.rdbuf()); // перенапраляем в файл

    ShellLinkAndJumpListHandler handler =
            ShellLinkAndJumpListHandler("C:\\Users\\ann19\\OneDrive\\Desktop\\4cb9c5750d51c07f.automaticDestinations-ms");

    cout.rdbuf(bak); // восстанавливаем
    return 0;
}
