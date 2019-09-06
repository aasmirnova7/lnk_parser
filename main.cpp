#include <iostream>
#include <vector>
#include <cstdint>
#include <string>
#include <chrono>
//#include "tz.h"
//#include <date/date.h>

#include "ShellLink.cpp"

std::string read(int position, int byte_count) {
    std::ifstream input("C:\\Users\\user\\Desktop\\IDA Freeware.lnk", std::ios::binary);
    input >> std::noskipws;
    ostringstream out;

    input.seekg(position);
    if(input.eof())
        return 0;

    unsigned char x;
    while (input >> x  && byte_count > 0) {
        out << std::hex << std::setw(2) << std::setfill('0') << (int)x;
        --byte_count;
    }
    return out.str();
}

/*std::string FILETIME_to_string(std::uint64_t i) {
    using namespace std;
    using namespace chrono;
    using namespace date;
    using FileTime = duration<int64_t, ratio<1, 10000000>>;
    auto const offset = sys_days{jan/1/1970} - sys_days{jan/1/1601};
    auto tp = sys_days{jan/1/1970} + (FileTime{static_cast<int64_t>(i)} - offset);
    return format("%d/%m/%Y %I:%M:%S %p", make_zoned("Etc/GMT-2", tp));
} */

int main() {
  /*  vector<unsigned char> header =  ReadStream("C:\\Users\\user\\Desktop\\IDA Freeware.lnk").read(0,76);

    for(int i = 0; i < 76 ; ++i)
        cout <<  hex << (int)header[i] << ' '; */

    ShellLink shellLink = ShellLink("C:\\Users\\user\\Desktop\\IDA Freeware.lnk");

   /* vector<unsigned char> time = {1 , 0xd4 , 0xfe, 0x80, 0x30,  0xca, 0x73, 0xc};


    //FILETIME a, a1;
   // a = FileTime(c); // Перевод из __int64 в FILETIME
   // FileTimeToLocalFileTime(&a, &a1); // Использование локального времени
    SYSTEMTIME b;
    FileTimeToSystemTime(&a1, &b);  // Перевод из FILETIME в SYSTEMTIME
    ShowMessage(IntToStr(b.wYear) + "-" + IntToStr(b.wMonth) + "-" + IntToStr(b.wDay) + " " + IntToStr(b.wHour) + ":" + IntToStr(b.wMinute) + ":" + IntToStr(b.wSecond) + "." + IntToStr(b.wMilliseconds));



    cout << endl;

/*   ShellLinkHeader *shellLinkHeader = new ShellLinkHeader(header);
   shellLinkHeader->printHeaderInHexStyle();
    bool valid = shellLinkHeader->isHeaderValid();
    shellLinkHeader->parseLinkFlags();

  cout << "Read from main(): " << endl;
    string text = read(0, 4);
    cout << "Readed: " << text << endl << endl;
    string s1 = text.substr(0,8); //c 0-ля 8-мь символов = 4 byte
    std::reverse(s1.begin(), s1.end());
    cout  << s1 << endl; */

    /* reverse for one byte (change figures in byte) */
  /* char tmp_begin, tmp_last;
    for(int i = 0; i < s1.size(); i = i +2){
        cout  << "WAS = " << s1 << "  ";
        tmp_begin = s1[i]; tmp_last = s1[i+1] ;
        cout << "beg: " << tmp_begin << " ind: " << i << " tmp_last: " << tmp_last << " ind: " <<  (i+1 ) << "  ";

        s1[i] = tmp_last; s1[i+1] = tmp_begin;
        cout   <<  "NEW = "<< s1 << endl;
    } */

 // unsigned int ui = 0x9b;
 // std::bitset<8> b(ui);
  //cout << "bitset: " << b; //01001100

   // if( b & HasLinkTargetIDList) //HasLinkTargetIDList	- yes  Побитовое и
   //     cout << "In if" << endl;



  //  unsigned int s1_new = static_cast<unsigned int>(std::stoul(s1, 0, 16));
   // cout << "s1 = " << s1_new << endl;

    /*
    unsigned int s1_test = static_cast<unsigned int>(std::stoul(s1, 0, 16)); // КАК не терять незначачие нули?
    cout << "s1_test = " << s1_test << endl << endl;

    cout << " Test for reverse: " << endl;

    string s_test = "9B000800"; // 0008009
    std::reverse(s_test.begin(), s_test.end());
    for(int i = 0; i < s1.size(); i = i +2){
        cout  << "WAS = " << s_test << "  ";
        tmp_begin = s_test[i]; tmp_last = s_test[i+1] ;
        cout << "beg: " << tmp_begin << " ind: " << i << " tmp_last: " << tmp_last << " ind: " <<  (i+1 ) << "  ";

        s_test[i] = tmp_last; s_test[i+1] = tmp_begin;
        cout   <<  "NEW = "<< s_test  << endl;
    }
    cout << "s_test = " << s_test << endl;
    unsigned int iStart_test = static_cast<unsigned int>(std::stoul(s_test, 0, 16));

    cout << "RES = " << (iStart_test & HasName) << endl;
    if( iStart_test & HasLinkTargetIDList) //HasLinkTargetIDList	- yes  Побитовое и
        cout << "In if" << endl;

   // cout << "MY TEST!!!!!!!!!!!!" << endl;

 */
  return 0;
}
