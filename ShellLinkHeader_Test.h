//
// Created by user on 24.08.2019.
//

#ifndef MY_DIPLOM_SHELLLINKHEADER_TEST_H
#define MY_DIPLOM_SHELLLINKHEADER_TEST_H

// (ShellLinkHeader) LinkFlags
#define HasLinkTargetIDList			0x00000001	// The shell link is saved with an item ID list (IDList).
#define HasLinkInfo					0x00000002	// The shell link is saved with link information.
#define HasName						0x00000004	// The shell link is saved with a name string.
#define HasRelativePath				0x00000008	// The shell link is saved with a relative path string.
#define HasWorkingDir				0x00000010	// The shell link is saved with a working directory string.
#define HasArguments				0x00000020	// The shell link is saved with command line arguments.
#define HasIconLocation				0x00000040	// The shell link is saved with an icon location string.
#define IsUnicode					0x00000080	// The shell link contains Unicode encoded strings. This bit SHOULD be set.
#define ForceNoLinkInfo				0x00000100	// The LinkInfo structure is ignored.
#define HasExpString				0x00000200	// The shell link is saved with an EnvironmentVariableDataBlock.
#define RunInSeparateProcess		0x00000400	// The target is run in a separate virtual machine when launching a link target that is a 16-bit application.
#define Unused1						0x00000800
#define HasDarwinID					0x00001000	// The shell link is saved with a DarwinDataBlock.
#define RunAsUser					0x00002000	// The application is run as a different user when the target of the shell link is activated.
#define HasExpIcon					0x00004000	// The shell link is saved with an IconEnvironmentDataBlock.
#define NoPidlAlias					0x00008000	// The file system location is represented in the shell namespace when the path to an item is parsed into an IDList.
#define Unused2						0x00010000
#define RunWithShimLayer			0x00020000	// The shell link is saved with a ShimDataBlock.
#define ForceNoLinkTrack			0x00040000	// The TrackerDataBlock is ignored.
#define EnableTargetMetadata		0x00080000	// The shell link attempts to collect target properties and store them in the PropertyStoreDataBlock when the link target is set.
#define DisableLinkPathTracking		0x00100000	// The EnvironmentVariableDataBlock is ignored.
#define DisableKnownFolderTracking	0x00200000	// The SpecialFolderDataBlock and the KnownFolderDataBlock are ignored when loading the shell link.
#define DisableKnownFolderAlias		0x00400000	// If the link has a KnownFolderDataBlock (section 2.5.6), the unaliased form of the known folder IDList SHOULD be used when translating the target IDList at the time that the link is loaded.
#define AllowLinkToLink				0x00800000	// Creating a link that references another link is enabled. Otherwise, specifying a link as the target IDList SHOULD NOT be allowed.
#define UnaliasOnSave				0x01000000	// When saving a link for which the target IDList is under a known folder, either the unaliased form of that known folder or the target IDList SHOULD be used.
#define PreferEnvironmentPath		0x02000000	// The target IDList SHOULD NOT be stored; instead, the path specified in the EnvironmentVariableDataBlock SHOULD be used to refer to the target.
#define KeepLocalIDListForUNCTarget	0x04000000	// When the target is a UNC name that refers to a location on a local machine, the local path IDList in the PropertyStoreDataBlock SHOULD be stored, so it can be used when the link is loaded on the local machine.

// (LinkInfo) LinkInfoFlags
#define VolumeIDAndLocalBasePath				0x00000001	// If set, the VolumeID and LocalBasePath fields are present, and their locations are specified by the values of the VolumeIDOffset and LocalBasePathOffset fields, respectively.
                                                            // If the value of the LinkInfoHeaderSize field is greater than or equal to 0x00000024, the LocalBasePathUnicode field is present, and its location is specified by the value of the LocalBasePathOffsetUnicode field.
                                                            // If not set, the VolumeID, LocalBasePath, and LocalBasePathUnicode fields are not present, and the values of the VolumeIDOffset and LocalBasePathOffset fields are zero.
                                                            // If the value of the LinkInfoHeaderSize field is greater than or equal to 0x00000024, the value of the LocalBasePathOffsetUnicode field is zero.
#define CommonNetworkRelativeLinkAndPathSuffix	0x00000002	// If set, the CommonNetworkRelativeLink field is present, and its location is specified by the value of the CommonNetworkRelativeLinkOffset field.
                                                            // If not set, the CommonNetworkRelativeLink field is not present, and the value of the CommonNetworkRelativeLinkOffset field is zero.

// (CommonNetworkRelativeLink) CommonNetworkRelativeLinkFlags
#define ValidDevice		0x00000001	// If set, the DeviceNameOffset field contains an offset to the device name.
#define ValidNetType	0x00000002	// If set, the NetProviderType field contains the network provider type.

// Hot key modifier flags.
#define HOTKEYF_SHIFT	0x01
#define HOTKEYF_CONTROL	0x02
#define HOTKEYF_ALT		0x04
#define HOTKEYF_EXT		0x08

// EXTRA_DATA signatures
/*#define ENVIRONMENT_PROPS				0xA0000001
#define CONSOLE_PROPS					0xA0000002
#define TRACKER_PROPS					0xA0000003
#define CONSOLE_FE_PROPS				0xA0000004
#define SPECIAL_FOLDER_PROPS			0xA0000005
#define DARWIN_PROPS					0xA0000006
#define ICON_ENVIRONMENT_PROPS			0xA0000007
#define SHIM_PROPS						0xA0000008
#define PROPERTY_STORE_PROPS			0xA0000009
#define KNOWN_FOLDER_PROPS				0xA000000B
#define VISTA_AND_ABOVE_IDLIST_PROPS	0xA000000C

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
#define SF_FlagMask					0xFF00	// mask for all possible flag values */




#endif //MY_DIPLOM_SHELLLINKHEADER_TEST_H
