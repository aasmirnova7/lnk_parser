#include <iostream>
#include <vector>
#include <cstdint>
#include <string>
#include <chrono>
//#include "tz.h"
//#include <date/date.h>

#include "ShellLink.cpp"

int main() {
    ShellLink shellLink = ShellLink("C:\\Users\\ann19\\OneDrive\\Desktop\\Opera.lnk");

   /* vector<unsigned char> time = {1 , 0xd4 , 0xfe, 0x80, 0x30,  0xca, 0x73, 0xc};

    //FILETIME a, a1;
   // a = FileTime(c); // Перевод из __int64 в FILETIME
   // FileTimeToLocalFileTime(&a, &a1); // Использование локального времени
    SYSTEMTIME b;
    FileTimeToSystemTime(&a1, &b);  // Перевод из FILETIME в SYSTEMTIME
    ShowMessage(IntToStr(b.wYear) + "-" + IntToStr(b.wMonth) + "-" + IntToStr(b.wDay) + " " + IntToStr(b.wHour) + ":" + IntToStr(b.wMinute) + ":" + IntToStr(b.wSecond) + "." + IntToStr(b.wMilliseconds));
    cout << endl; */
  return 0;
}
