#include <w32api/objidl.h>
#include "ShellLink.cpp"

using namespace std;

int main(int argc, char* argv[]) {
    cout << "Please enter the name of the shortcut file:" << endl;
    // TODO: сделать считывание из пользовательского воода. (пока путь указон явно)
    //ShellLink shellLink = ShellLink("C:\\\\Users\\\\ann19\\\\OneDrive\\\\Desktop\\\\Opera.lnk");
    //ShellLink s = ShellLink("C:\\Users\\ann19\\OneDrive\\Desktop\\vk.lnk");
    ShellLink s1 = ShellLink("C:\\Users\\ann19\\OneDrive\\Desktop\\Telegram.lnk");
    return 0;
}
