//#include <w32api/minwinbase.h>
//#include <w32api/timezoneapi.h>
//#include <w32api/fileapi.h>
//#include "tz.h"
//#include <date/date.h>

#include "ShellLink.cpp"

int main() {
    ShellLink shellLink = ShellLink("C:\\Users\\ann19\\OneDrive\\Desktop\\Opera.lnk");


   /*FILETIME a ;
   a.dwHighDateTime = 0x01d565a5;
   a.dwLowDateTime = 0x8fc9c45d;

   //a = FileTime(); // Перевод из __int64 в FILETIME
    //FileTimeToLocalFileTime(&a, &a1); // Использование локального времени
    SYSTEMTIME b;
    FileTimeToSystemTime(&a, &b);  // Перевод из FILETIME в SYSTEMTIME
    //ShowMessage(IntToPtr(b.wYear));
    //+ "-" + IntToPtr(b.wMonth) + "-" + IntToPtr(b.wDay)
     //                + " " + IntToPtr(b.wHour) + ":" + IntToStr(b.wMinute) + ":" + IntToStr(b.wSecond) + "." + IntToStr(b.wMilliseconds));
    cout << endl;
   long long int time = 132123525833671773;
   int count = 0;
   cout << "time = " << time/8640000000000 << endl;

   while (time > 864000000000) {
       time = time - 864000000000;
       ++count;
   }
   cout << "Time: " << count << " time = "  <<time << endl;

   long long int i = 21443;
   cout << endl << i * 10000000 << " " << b.wSecond <<endl; */

  return 0;
}
