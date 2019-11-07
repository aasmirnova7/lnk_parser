#include "ParserUtils.h"

using namespace std;

const ParserUtils::appId_type appId_list[] = {
        // Internet Browsers
        { "5d696d521de238c3", "Chrome 9.0.597.84 / 12.0.742.100 / 13.0.785.215" },
        { "cfb56c56fa0f0a54", "Mozilla 0.9.9" }, { "5c450709f7ae4396", "Firefox 1.0 / 2.0 / 3.0" },
        { "5df4765359170e26", "Firefox 4.0.1" }, { "1eb796d87c32eff9", "Firefox 5.0" },
        { "1461132e553e2e6c", "Firefox 6.0" }, { "28c8b86deab549a1", "Internet Explorer 8 / 9" },
        { "16ec093b8f51508f", "Opera 8.54 build 7730 / 9.64 build 10487 / 11.50 build 1074" },
        { "8a1c1c7c389a5320", "Safari 3.2.3 (525.29)" }, { "1da3c90a72bf5527", "Safari 4.0.5 (531.22.7) / 5.1 (7534.50)" },
        { "1b4dd67f29cb1962", "Windows Explorer" }, { "969252ce11249fdd", "Mozilla Firefox" },
        { "f01b4d95cf55d32a", "Windows Explorer" }, { "969252ce11249dd", "Firefox Mozilla" },
        // Utilities
        { "3dc02b55e44d6697", "7-Zip 3.13 / 4.20" }, { "4975d6798a8bdf66", "7-Zip 4.65 / 9.20" },
        { "4b6925efc53a3c08", "BCWipe 5.02.2 Task Manager 3.02.3" }, { "337ed59af273c758", "Sticky Notes" },
        { "337ed59af273c758", "Sticky Notes" }, { "290532160612e071", "WinRAR 2.90 / 3.60 / 4.01" },
        { "c9950c443027c765", "WinZip 9.0 SR-1 (6224) / 10.0 (6667)" },
        { "b74736c2bd8cc8a5", "WinZip 15.5 (9468)" }, { "bc0c37e84e063727", "Windows Command Processor - cmd.exe (32-bit)" },
        { "5afe4de1b92fc382", "GettingStarted.exe" }, { "d7528034b5bd6f28", "Windows Live Mail Pinned and Recent" },
        { "c7a4093872176c74", "Paint Shop Pro Pinned and Recent" }, { "b91050d8b077a4e8", "Media Center" },
        { "aff2ffdd0862ff5c", "Visual Studio 2012" },
        // Image/Document Viewers
        { "f0468ce1ae57883d", "Adobe Reader 7.1.0" }, { "c2d349a0e756411b", "Adobe Reader 8.1.2" },
        { "23646679aaccfae0", "Adobe Acrobat 9.4.0" }, { "ee462c3b81abb6f6", "Adobe Reader X 10.1.0" },
        { "386a2f6aa7967f36", "EyeBrowse 2.7" }, {"e31a6a8a7506f733", "Image AXS Pro 4.1" },
        { "b39c5f226977725d", "ACDSee Pro 8.1.99" }, { "59f56184c796cfd4", "ACDSee Photo Manager 10 (Build 219)" },
        { "8bd5c6433ca967e9", "ACDSee Photo Manager 2009 (v11.0 Build 113)" }, { "d838aac097abece7", "ACDSee Photo Manager 12 (Build 344)" },
        { "3594aab44bca414b", "Windows Photo Viewer" }, { "7cb0735d45243070", "CDisplay 1.8.1.0" },
        { "3edf100b207e2199", "digiKam 1.7.0 (KDE 4.4.4)" }, { "169b3be0bc43d592", "FastPictureViewer Professional 1.6 (Build 211)" },
        { "e9a39dfba105ea23", "FastStone Image Viewer 4.6" }, { "edc786643819316c", "HoneyView3 #5834" },
        { "76689ff502a1fd9e", "Imagine Image and Animation Viewer 1.0.7" }, { "2519133d6d830f7e", "IMatch 3.6.0.113" },
        { "1110d9896dceddb3", "imgSeek 0.8.5" }, { "c634153e7f5fce9c", "IrfanView 3.10 / 4.30" },
        { "ea83017cdd24374d", "IrfanView Thumbnails" }, { "3917dd550d7df9a8", "Konvertor 4.06 (Build 10)" },
        { "2fa14c7753239e4c", "Paint.NET 2.72 / 3.5.8.4081.24580" }, { "d33ecf70f0b74a77", "Picasa 2.2.0 (Build 28.08, 0)" },
        { "c5c24a503b1727df", "XnView 1.98.2 Small / 1.98.2 Standard" }, { "497b42680f564128", "Zoner PhotoStudio 13 (Build 7)" },
        { "9b9cdc69c124e3b", "Notepad" }, { "d38a3ea7ec79fbed", "Libre Office Writer" },
        { "fb3b0dbfee58fac8", "Word 2013 (and Office 365) Pinned and Recent" },
        { "9839aec31243a928", "Excel 2013 (and Office 365) Pinned and Recent" },
        { "d00655d2aa12ff6d", "Powerpoint 2013 (Office 365) Pinned and Recent" },
        { "9c7cc110ff56d1bd", "Powerpoint 2010 Pinned and Recent" },
        { "a7bd71699cd38d1c", "Word 2010 Pinned and Recent" },{ "adecfb853d77462a", "Word 2007 Pinned and Recent" },
        { "a8c43ef36da523b1", "Word 2003 Pinned and Recent" },{ "918e0ecb43d17e23", " Notepad Pinned and Recent" },
        { "f5ac5390b9115fdb", "PowerPoint 2007" },
        // Media Players
        { "d22ad6d9d20e6857", "ALLPlayer 4.7" }, { "7494a606a9eef18e", "Crystal Player 1.98" },
        { "1cffbe973a437c74", "DSPlayer 0.889 Lite" }, { "817bb211c92fd254", "GOM Player 2.0.12.3375 / 2.1.28.5039" },
        { "6bc3383cb68a3e37", "iTunes 7.6.0.29 / 8.0.0.35" },
        { "83b03b46dcd30a0e", "iTunes 9.0.0.70 / 9.2.1.5 / 10.4.1.10 (begin custom 'Tasks' JL capability)" },
        { "fe5e840511621941", "JetAudio 5.1.9.3018 Basic / 6.2.5.8220 Basic / 7.0.0 Basic / 8.0.16.2000 Basic" },
        { "a777ad264b54abab", "JetVideo 8.0.2.200 Basic" }, { "3c93a049a30e25e6", "J. River Media Center 16.0.149" },
        { "4a49906d074a3ad3", "Media Go 1.8 (Build 121)" }, { "1cf97c38a5881255", "MediaPortal 1.1.3" },
        { "62bff50b969c2575", "Quintessential Media Player 5.0 (Build 121) - also usage stats (times used, tracks played, total time used)" },
        { "b50ee40805bd280f", "QuickTime Alternative 1.9.5 (Media Player Classic 6.4.9.1)" },
        { "ae3f2acd395b622e", "QuickTime Player 6.5.1 / 7.0.3 / 7.5.5 (Build 249.13)" },
        { "7593af37134fd767", "RealPlayer 6.0.6.99 / 7 / 8 / 10.5" },
        { "37392221756de927", "RealPlayer SP 12" }, { "f92e607f9de02413", "RealPlayer 14.0.6.666" },
        { "6e9d40a4c63bb562", "Real Player Alternative 1.25 (Media Player Classic 6.4.8.2 / 6.4.9.0)" },
        { "c91d08dcfc39a506", "SM Player 0.6.9 r3447" }, { "e40cb5a291ad1a5b", "Songbird 1.9.3 (Build 1959)" },
        { "4d8bdacf5265a04f", "The KMPlayer 2.9.4.1434" }, { "4acae695c73a28c7", "VLC 0.3.0 / 0.4.6" },
        { "9fda41b86ddcf1db", "VLC 0.5.3 / 0.8.6i / 0.9.7 / 1.1.11" }, { "e6ee34ac9913c0a9", "VLC 0.6.2" },
        { "cbeb786f0132005d", "VLC 0.7.2" }, { "f674c3a77cfe39d0", "Winamp 2.95 / 5.1 / 5.621" },
        { "90e5e8b21d7e7924", "Winamp 3.0d (Build 488)" }, { "74d7f43c1561fc1e", "Windows Media Player 12.0.7601.17514" },
        { "4cb9c5750d51c07f", "Windows Media Player" }, { "74d743c1561c1e", "Windows Media Player" },
        { "ae6df75df512bd06", "Windows Media Player" }, { "c9533998e1308d73", "Windows Photo Viewer" },
        { "Unknown", "Unknown AppId" } /* ,
        * You can specify new AppId in this list: */};

std::string ParserUtils::getAppIdType(std::string appId) {
    for (int i = 0; appId_list[i].appId != "Unknown"; i++) {
        if (appId == appId_list[i].appId) {
            return appId_list[i].name;
        }
    }
    return "Unknown AppId";
}

bool ParserUtils::programCanParseFile(std::string filePath) {
    int len = filePath.size();
    int lnkPosExtension = len < 4 ? len : len - 4;
    int destPosExtension = len < 25 ? len : len - 25;
    int customDesPosExtension = len < 22 ? : len - 22;
    bool isAutomDest = (filePath.substr(destPosExtension, 25) == ".automaticDestinations-ms");
    bool isCustomDest = (filePath.substr(customDesPosExtension, 22) == ".customDestinations-ms");

    if(filePath.substr(lnkPosExtension, 4) == ".lnk" ||
       isAutomDest || isCustomDest) {
        if(isAutomDest)
            cout << "AppId:     " << getAppIdType(filePath.substr(destPosExtension - 16 , 16)) << endl;
        if(isCustomDest)
            cout << "AppId:     " << getAppIdType(filePath.substr(customDesPosExtension - 16 , 16)) << endl;
        return true;
    }
    cout << "This program can parse just Shortcut or Jump List files with extensions:" << endl <<
         "   .lnk" << endl <<
         "   .automaticDestinations-ms" << endl <<
         "   .customDestinations-ms" << endl <<
         "Please check that you input correct path to Shortcut or Jump List file (with extension)." << endl;
    return false;
}

void  ParserUtils::startParsing() {
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
