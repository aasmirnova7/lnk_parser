//
// Created by ann19 on 27.09.2019.
//

#ifndef MY_DIPLOM_EXTRADATACONSTANTS_H
#define MY_DIPLOM_EXTRADATACONSTANTS_H

// FillAttributes for ConsolePropsStruct
#define FOREGROUND_BLUE         0x0001      // The foreground text color contains blue.
#define FOREGROUND_GREEN        0x0002      // The foreground text color contains green.
#define FOREGROUND_RED          0x0004      // The foreground text color contains red.
#define FOREGROUND_INTENSITY    0x0008      // The foreground text color is intensified.
#define BACKGROUND_BLUE         0x0010      // The background text color contains blue.
#define BACKGROUND_GREEN        0x0020      // The background text color contains green.
#define BACKGROUND_RED          0x0040      // The background text color contains red.
#define BACKGROUND_INTENSITY    0x0080      // The background text color is intensified.

// FontFamily  for ConsolePropsStruct
#define FF_DONTCARE      0x0000      // The font family is unknown.
#define FF_ROMAN         0x0010      // The font is variable-width with serifs; for example, "Times New Roman".
#define FF_SWISS         0x0020      // The font is variable-width without serifs; for example, "Arial".
#define FF_MODERN        0x0030      // The font is fixed-width, with or without serifs; for example, "Courier New".
#define FF_SCRIPT        0x0040      // The font is designed to look like handwriting; for example, "Cursive".
#define FF_DECORATIVE    0x0050      // The font is a novelty font; for example, "Old English".
// font-pitch
#define TMPF_NONE          0x0000      // A font pitch does not apply.
#define TMPF_FIXED_PITCH   0x0001      // The font is a fixed-pitch font.
#define TMPF_VECTOR        0x0002      // The font is a vector font.
#define TMPF_TRUETYPE      0x0004      // The font is a true-type font.
#define TMPF_DEVICE        0x0008      // The font is specific to the device.

// Special Folder types
#define SF_Desktop					0x0000	// Desktop
#define SF_Internet					0x0001	// Internet Explorer (icon on desktop)
#define SF_Programs					0x0002	// Start Menu\Programs
#define SF_Controls					0x0003	// My Computer\Control Panel
#define SF_Printers					0x0004	// My Computer\Printers
#define SF_Personal					0x0005	// My Documents
#define SF_Favorites				0x0006	// user name\Favorites
#define SF_Startup					0x0007	// Start Menu\Programs\Startup
#define SF_Recent					0x0008	// user name\Recent
#define SF_SendTo					0x0009	// user name\SendTo
#define SF_BitBucket				0x000a	// desktop\Recycle Bin
#define SF_StartMenu				0x000b	// user name\Start Menu
#define SF_MyDocuments				0x000c	// logical "My Documents" desktop icon
#define SF_MyMusic					0x000d	// "My Music" folder
#define SF_MyVideo					0x000e	// "My Videos" folder
#define SF_DesktopDirectory			0x0010	// user name\Desktop
#define SF_Drives					0x0011	// My Computer
#define SF_Network					0x0012	// Network Neighborhood (My Network Places)
#define SF_Nethood					0x0013	// user name\nethood
#define SF_Fonts					0x0014	// windows\fonts
#define SF_Templates				0x0015
#define SF_CommonStartMenu			0x0016	// All Users\Start Menu
#define SF_CommonPrograms			0x0017	// All Users\Start Menu\Programs
#define SF_CommonStartup			0x0018	// All Users\Startup
#define SF_CommonDesktopDirectory	0x0019	// All Users\Desktop
#define SF_AppData					0x001a	// user name\Application Data
#define SF_PrintHood				0x001b	// user name\PrintHood
#define SF_LocalAppData				0x001c	// user name\Local Settings\Applicaiton Data (non roaming)
#define SF_AltStartup				0x001d	// non localized startup
#define SF_CommonAltStartup			0x001e	// non localized common startup
#define SF_CommonFavorites			0x001f
#define SF_InternetCache			0x0020
#define SF_Cookies					0x0021
#define SF_History					0x0022
#define SF_CommonAppData			0x0023	// All Users\Application Data
#define SF_Windows					0x0024	// GetWindowsDirectory()
#define SF_System					0x0025	// GetSystemDirectory()
#define SF_ProgramFiles				0x0026	// C:\Program Files
#define SF_MyPictures				0x0027	// C:\Program Files\My Pictures
#define SF_Profile					0x0028	// USERPROFILE
#define SF_SystemX86				0x0029	// x86 system directory on RISC
#define SF_ProgramFilesX86			0x002a	// x86 C:\Program Files on RISC
#define SF_ProgramFilesCommon		0x002b	// C:\Program Files\Common
#define SF_ProgramFilesCommonX86	0x002c	// x86 Program Files\Common on RISC
#define SF_CommonTemplates			0x002d	// All Users\Templates
#define SF_CommonDocuments			0x002e	// All Users\Documents
#define SF_CommonAdminTools			0x002f	// All Users\Start Menu\Programs\Administrative Tools
#define SF_AdminTools				0x0030	// user name\Start Menu\Programs\Administrative Tools
#define SF_Connections				0x0031	// Network and Dial-up Connections
#define SF_CommonMusic				0x0035	// All Users\My Music
#define SF_CommonPictures			0x0036	// All Users\My Pictures
#define SF_CommonVideo				0x0037	// All Users\My Video
#define SF_Resources				0x0038	// Resource Direcotry
#define SF_ResourcesLocalized		0x0039	// Localized Resource Direcotry
#define SF_CommonOEMLinks			0x003a	// Links to All Users OEM specific apps
#define SF_CDBurnArea				0x003b	// USERPROFILE\Local Settings\Application Data\Microsoft\CD Burning
#define SF_ComputersNearMe			0x003d	// Computers Near Me (computered from Workgroup membership)
#define SF_FlagCreate				0x8000	// combine with CSIDL_ value to force folder creation in SHGetFolderPath()
#define SF_FlagDontVerify			0x4000	// combine with CSIDL_ value to return an unverified folder path
#define SF_FlagNoAlias				0x1000	// combine with CSIDL_ value to insure non-alias versions of the pidl
#define SF_FlagPerUserInit			0x0800	// combine with CSIDL_ value to indicate per-user init (eg. upgrade)
#define SF_FlagMask					0xFF00	// mask for all possible flag values

//TypedPropertyValue
#define VT_EMPTY              0x0000
#define VT_NULL               0x0001
#define VT_I2                 0x0002
#define VT_I4                 0x0003
#define VT_R4                 0x0004
#define VT_R8                 0x0005
#define VT_CY                 0x0006
#define VT_DATE               0x0007
#define VT_BSTR               0x0008
#define VT_ERROR              0x000A
#define VT_BOOL               0x000B
#define VT_DECIMAL            0x000E
#define VT_I1                 0x0010
#define VT_UI1                0x0011
#define VT_UI2                0x0012
#define VT_UI4                0x0013
#define VT_I8                 0x0014
#define VT_UI8                0x0015
#define VT_INT                0x0016
#define VT_UINT               0x0017
#define VT_LPSTR              0x001E
#define VT_LPWSTR             0x001F
#define VT_FILETIME           0x0040
#define VT_BLOB               0x0041
#define VT_STREAM             0x0042
#define VT_STORAGE            0x0043
#define VT_STREAMED_OBJECT    0x0044
#define VT_STORED_OBJECT      0x0045
#define VT_BLOB_OBJECT        0x0046
#define VT_CF                 0x0047
#define VT_CLSID              0x0048
#define VT_VERSIONED_STREAM   0x0049
#define VT_VECTOR_VT_I2       0x1002
#define VT_VECTOR_VT_I4       0x1003
#define VT_VECTOR_VT_R4       0x1004
#define VT_VECTOR_VT_R8       0x1005
#define VT_VECTOR_VT_CY       0x1006
#define VT_VECTOR_VT_DATE     0x1007
#define VT_VECTOR_VT_BSTR     0x1008
#define VT_VECTOR_VT_ERROR    0x100A
#define VT_VECTOR_VT_BOOL     0x100B
#define VT_VECTOR_VT_VARIANT  0x100C
#define VT_VECTOR_VT_I1       0x1010
#define VT_VECTOR_VT_UI1      0x1011
#define VT_VECTOR_VT_UI2      0x1012
#define VT_VECTOR_VT_UI4      0x1013
#define VT_VECTOR_VT_I8       0x1014
#define VT_VECTOR_VT_UI8      0x1015
#define VT_VECTOR_VT_LPSTR    0x101E
#define VT_VECTOR_VT_LPWSTR   0x101F
#define VT_VECTOR_VT_FILETIME 0x1040
#define VT_VECTOR_VT_CF       0x1047
#define VT_VECTOR_VT_CLSID    0x1048
#define VT_ARRAY_VT_I2        0x2002
#define VT_ARRAY_VT_I4        0x2003
#define VT_ARRAY_VT_R4        0x2004
#define VT_ARRAY_VT_R8        0x2005
#define VT_ARRAY_VT_CY        0x2006
#define VT_ARRAY_VT_DATE     0x2007
#define VT_ARRAY_VT_BSTR     0x2008
#define VT_ARRAY_VT_ERROR    0x200A
#define VT_ARRAY_VT_BOOL     0x200B
#define VT_ARRAY_VT_VARIANT  0x200C
#define VT_ARRAY_VT_DECIMAL  0x200E
#define VT_ARRAY_VT_I1       0x2010
#define VT_ARRAY_VT_UI1      0x2011
#define VT_ARRAY_VT_UI2      0x2012
#define VT_ARRAY_VT_UI4      0x2013
#define VT_ARRAY_VT_INT      0x2016
#define VT_ARRAY_VT_UINT     0x2017

#endif //MY_DIPLOM_EXTRADATACONSTANTS_H
