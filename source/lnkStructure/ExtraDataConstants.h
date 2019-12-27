#ifndef LNK_JUMP_LIST_PARSER_EXTRADATACONSTANTS_H
#define LNK_JUMP_LIST_PARSER_EXTRADATACONSTANTS_H

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

// TypedPropertyValue
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

// HRESULT Values (VT_ERROR)
#define STG_S_CONVERTED         0x00030200      // The underlying file was converted to compound file format.
#define STG_S_BLOCK             0x00030201      // The storage operation should block until more data is available.
#define STG_S_RETRYNOW          0x00030202      // The storage operation should retry immediately.
#define STG_S_MONITORING        0x00030203      // The notified event sink will not influence the storage operation.
#define STG_S_MULTIPLEOPENS     0x00030204      // Multiple opens prevent consolidated (commit succeeded).
#define STG_S_CONSOLIDATIONFAILED 0x00030205    // Consolidation of the storage file failed (commit succeeded).
#define STG_S_CANNOTCONSOLIDATE     0x00030206  // Consolidation of the storage file is inappropriate (commit succeeded).
#define OLE_S_USEREG                0x00040000  // Use the registry database to provide the requested information.
#define OLE_S_STATIC                0x00040001  //  Success, but static.
#define OLE_S_MAC_CLIPFORMAT        0x00040002  // Macintosh clipboard format.
#define DRAGDROP_S_DROP             0x00040100  // Successful drop took place.
#define DRAGDROP_S_CANCEL           0x00040101  // Drag-drop operation canceled.
#define DRAGDROP_S_USEDEFAULTCURSORS    0x00040102  // Use the default cursor.
#define DATA_S_SAMEFORMATETC            0x00040130  // Data has same FORMATETC.
#define VIEW_S_ALREADY_FROZEN           0x00040140  // View is already frozen.
#define CACHE_S_FORMATETC_NOTSUPPORTED  0x00040170  // FORMATETC not supported.
#define CACHE_S_SAMECACHE               0x00040171  // Same cache.
#define CACHE_S_SOMECACHES_NOTUPDATED   0x00040172  // Some caches are not updated.
#define OLEOBJ_S_INVALIDVERB            0x00040180  // Invalid verb for OLE object.
#define OLEOBJ_S_CANNOT_DOVERB_NOW      0x00040181  // Verb number is valid but verb cannot be done now.
#define OLEOBJ_S_INVALIDHWND 0x00040182 // Invalid window handle passed.
#define INPLACE_S_TRUNCATED 0x000401A0 // Message is too long; some of it had to be truncated before displaying.
#define CONVERT10_S_NO_PRESENTATION 0x000401C0 // Unable to convert OLESTREAM to IStorage.
#define MK_S_REDUCED_TO_SELF 0x000401E2 // Moniker reduced to itself.#define MK_S_ME 0x000401E4 // Common prefix is this moniker.
#define MK_S_ME 0x000401E4 // Common prefix is this moniker.
#define MK_S_HIM 0x000401E5 // Common prefix is input moniker.
#define MK_S_US 0x000401E6 // Common prefix is both monikers.
#define MK_S_MONIKERALREADYREGISTERED 0x000401E7 // Moniker is already registered in running object table.
#define EVENT_S_SOME_SUBSCRIBERS_FAILED 0x00040200 // An event was able to invoke some, but not all, of the subscribers.
#define EVENT_S_NOSUBSCRIBERS 0x00040202 // An event was delivered, but there were no subscribers.
#define SCHED_S_TASK_READY 0x00041300 // The task is ready to run at its next scheduled time.
#define SCHED_S_TASK_RUNNING 0x00041301 // The task is currently running.
#define SCHED_S_TASK_DISABLED 0x00041302 // The task will not run at the scheduled times because it has been disabled.
#define SCHED_S_TASK_HAS_NOT_RUN 0x00041303 // The task has not yet run.
#define SCHED_S_TASK_NO_MORE_RUNS 0x00041304 // There are no more runs scheduled for this task.
#define SCHED_S_TASK_NOT_SCHEDULED 0x00041305 // One or more of the properties that are needed to run this task on a schedule have not been set.
#define SCHED_S_TASK_TERMINATED 0x00041306 // The last run of the task was terminated by the user.
#define SCHED_S_TASK_NO_VALID_TRIGGERS 0x00041307 // Either the task has no triggers, or the existing triggers are disabled or not set.
#define SCHED_S_EVENT_TRIGGER 0x00041308 // Event triggers do not have set run times.
#define SCHED_S_SOME_TRIGGERS_FAILED 0x0004131B // The task is registered, but not all specified triggers will start the task.
#define SCHED_S_BATCH_LOGON_PROBLEM 0x0004131C // The task is registered, but it might fail to start. Batch logon privilege needs to be enabled for the task principal.
#define XACT_S_ASYNC 0x0004D000 // An asynchronous operation was specified. The operation has begun, but its outcome is not known yet.
#define XACT_S_READONLY 0x0004D002 // The method call succeeded because the transaction was read-only.
#define XACT_S_SOMENORETAIN 0x0004D003 // The transaction was successfully aborted. However, this is a coordinated transaction, and a number of enlisted resources were aborted outright because they could not support abort-retaining semantics.
#define XACT_S_OKINFORM 0x0004D004 // No changes were made during this call, but the sink wants another chance to look if any other sinks make further changes.
#define XACT_S_MADECHANGESCONTENT 0x0004D005 // The sink is content and wants the transaction to proceed. Changes were made to one or more resources during this call.
#define XACT_S_MADECHANGESINFORM 0x0004D006 // The sink is for the moment and wants the transaction to proceed, but if other changes are made following this return by other event sinks, this sink wants another chance to look.
#define XACT_S_ALLNORETAIN 0x0004D007 // The transaction was successfully aborted. However, the abort was nonretaining.
#define XACT_S_ABORTING 0x0004D008 // An abort operation was already in progress.
#define XACT_S_SINGLEPHASE 0x0004D009 // The resource manager has performed a single-phase commit of the transaction.
#define XACT_S_LOCALLY_OK 0x0004D00A // The local transaction has not aborted.
#define XACT_S_LASTRESOURCEMANAGER 0x0004D010 // The resource manager has requested to be the coordinator (last resource manager) for the transaction.
#define CO_S_NOTALLINTERFACES 0x00080012 // Not all the requested interfaces were available.
#define CO_S_MACHINENAMENOTFOUND 0x00080013 // The specified machine name was not found in the cache.
#define SEC_I_CONTINUE_NEEDED 0x00090312 // The function completed successfully, but it must be called again to complete the context.
#define SEC_I_COMPLETE_NEEDED 0x00090313 // The function completed successfully, but CompleteToken must be called.
#define SEC_I_COMPLETE_AND_CONTINUE 0x00090314 // The function completed successfully, but both CompleteToken and this function must be called to complete the context.
#define SEC_I_LOCAL_LOGON 0x00090315 // The logon was completed, but no network authority was available. The logon was made using locally known information.
#define SEC_I_CONTEXT_EXPIRED 0x00090317 // The context has expired and can no longer be used.
#define SEC_I_INCOMPLETE_CREDENTIALS 0x00090320 // The credentials supplied were not complete and could not be verified. Additional information can be returned from the context.
#define SEC_I_RENEGOTIATE 0x00090321 // The context data must be renegotiated with the peer.
#define SEC_I_NO_LSA_CONTEXT 0x00090323 // There is no LSA mode context associated with this context.
#define SEC_I_SIGNATURE_NEEDED 0x0009035C // A signature operation must be performed before the user can authenticate.
#define CRYPT_I_NEW_PROTECTION_REQUIRED 0x00091012 // The protected data needs to be reprotected.
#define NS_S_CALLPENDING 0x000D0000 // The requested operation is pending completion.
#define NS_S_CALLABORTED 0x000D0001 // The requested operation was aborted by the client.
#define NS_S_STREAM_TRUNCATED 0x000D0002 // The stream was purposefully stopped before completion.
#define NS_S_REBUFFERING 0x000D0BC8 // The requested operation has caused the source to rebuffer.
#define NS_S_DEGRADING_QUALITY 0x000D0BC9 // The requested operation has caused the source to degrade codec quality.
#define NS_S_TRANSCRYPTOR_EOF 0x000D0BDB // The transcryptor object has reached end of file.
#define NS_S_WMP_UI_VERSIONMISMATCH 0x000D0FE8 // An upgrade is needed for the theme manager to correctly show this skin. Skin reports version: %.1f.
#define NS_S_WMP_EXCEPTION 0x000D0FE9 // An error occurred in one of the UI components.
#define NS_S_WMP_LOADED_GIF_IMAGE 0x000D1040 // Successfully loaded a GIF file.
#define NS_S_WMP_LOADED_PNG_IMAGE 0x000D1041 // Successfully loaded a PNG file.
#define NS_S_WMP_LOADED_BMP_IMAGE 0x000D1042 // Successfully loaded a BMP file.
#define NS_S_WMP_LOADED_JPG_IMAGE 0x000D1043 // Successfully loaded a JPG file.
#define NS_S_WMG_FORCE_DROP_FRAME 0x000D104F // Drop this frame.
#define NS_S_WMR_ALREADYRENDERED 0x000D105F // The specified stream has already been rendered.
#define NS_S_WMR_PINTYPEPARTIALMATCH 0x000D1060 // The specified type partially matches this pin type.
#define NS_S_WMR_PINTYPEFULLMATCH 0x000D1061 // The specified type fully matches this pin type.
#define NS_S_WMG_ADVISE_DROP_FRAME 0x000D1066 // The timestamp is late compared to the current render position. Advise dropping this frame.
#define NS_S_WMG_ADVISE_DROP_TO_KEYFRAME 0x000D1067 // The timestamp is severely late compared to the current render position. Advise dropping everything up to the next key frame.
#define NS_S_NEED_TO_BUY_BURN_RIGHTS 0x000D10DB // No burn rights. You will be prompted to buy burn rights when you try to burn this file to an audio CD.
#define NS_S_WMPCORE_PLAYLISTCLEARABORT 0x000D10FE // Failed to clear playlist because it was aborted by user.
#define NS_S_WMPCORE_PLAYLISTREMOVEITEMABORT 0x000D10FF // Failed to remove item in the playlist since it was aborted by user.
#define NS_S_WMPCORE_PLAYLIST_CREATION_PENDING 0x000D1102 // Playlist is being generated asynchronously.
#define NS_S_WMPCORE_MEDIA_VALIDATION_PENDING 0x000D1103 // Validation of the media is pending.
#define NS_S_WMPCORE_PLAYLIST_REPEAT_SECONDARY_SEGMENTS_IGNORED 0x000D1104 // Encountered more than one Repeat block during ASX processing.
#define NS_S_WMPCORE_COMMAND_NOT_AVAILABLE 0x000D1105 // Current state of WMP disallows calling this method or property.
#define NS_S_WMPCORE_PLAYLIST_NAME_AUTO_GENERATED 0x000D1106 // Name for the playlist has been auto generated.
#define NS_S_WMPCORE_PLAYLIST_IMPORT_MISSING_ITEMS 0x000D1107 // The imported playlist does not contain all items from the original.
#define NS_S_WMPCORE_PLAYLIST_COLLAPSED_TO_SINGLE_MEDIA 0x000D1108 // The M3U playlist has been ignored because it only contains one item.
#define NS_S_WMPCORE_MEDIA_CHILD_PLAYLIST_OPEN_PENDING 0x000D1109 // The open for the child playlist associated with this media is pending.
#define NS_S_WMPCORE_MORE_NODES_AVAIABLE 0x000D110A // More nodes support the interface requested, but the array for returning them is full.
#define NS_S_WMPBR_SUCCESS 0x000D1135 // Backup or Restore successful!.
#define NS_S_WMPBR_PARTIALSUCCESS 0x000D1136 // Transfer complete with limitations.
#define NS_S_WMPEFFECT_TRANSPARENT 0x000D1144 // Request to the effects control to change transparency status to transparent.
#define NS_S_WMPEFFECT_OPAQUE 0x000D1145 // Request to the effects control to change transparency status to opaque.
#define NS_S_OPERATION_PENDING 0x000D114E // The requested application pane is performing an operation and will not be released.
#define NS_S_TRACK_BUY_REQUIRES_ALBUM_PURCHASE 0x000D1359 // The file is only available for purchase when you buy the entire album.
#define NS_S_NAVIGATION_COMPLETE_WITH_ERRORS 0x000D135E // There were problems completing the requested navigation. There are identifiers missing in the catalog.
#define NS_S_TRACK_ALREADY_DOWNLOADED 0x000D1361 // Track already downloaded.
#define NS_S_PUBLISHING_POINT_STARTED_WITH_FAILED_SINKS 0x000D1519 // The publishing point successfully started, but one or more of the requested data writer plug-ins failed.
#define NS_S_DRM_LICENSE_ACQUIRED 0x000D2726 // Status message: The license was acquired.
#define NS_S_DRM_INDIVIDUALIZED 0x000D2727 // Status message: The security upgrade has been completed.
#define NS_S_DRM_MONITOR_CANCELLED 0x000D2746 // Status message: License monitoring has been canceled.
#define NS_S_DRM_ACQUIRE_CANCELLED 0x000D2747 // Status message: License acquisition has been canceled.
#define NS_S_DRM_BURNABLE_TRACK 0x000D276E // The track is burnable and had no playlist burn limit.
#define NS_S_DRM_BURNABLE_TRACK_WITH_PLAYLIST_RESTRICTION 0x000D276F // The track is burnable but has a playlist burn limit.
#define NS_S_DRM_NEEDS_INDIVIDUALIZATION 0x000D27DE // A security upgrade is required to perform the operation on this media file.
#define NS_S_REBOOT_RECOMMENDED 0x000D2AF8 // Installation was successful; however, some file cleanup is not complete. For best results, restart your computer.
#define NS_S_REBOOT_REQUIRED 0x000D2AF9 // Installation was successful; however, some file cleanup is not complete. To continue, you must restart your computer.
#define NS_S_EOSRECEDING 0x000D2F09 // EOS hit during rewinding.
#define NS_S_CHANGENOTICE 0x000D2F0D // Internal.
#define ERROR_FLT_IO_COMPLETE 0x001F0001 // The IO was completed by a filter.
#define ERROR_GRAPHICS_MODE_NOT_PINNED 0x00262307 // No mode is pinned on the specified VidPN source or target.
#define ERROR_GRAPHICS_NO_PREFERRED_MODE 0x0026231E // Specified mode set does not specify preference for one of its modes.
#define ERROR_GRAPHICS_DATASET_IS_EMPTY 0x0026234B // Specified data set (for example, mode set, frequency range set, descriptor set, and topology) is empty.
#define ERROR_GRAPHICS_NO_MORE_ELEMENTS_IN_DATASET 0x0026234C // Specified data set (for example, mode set, frequency range set, descriptor set, and topology) does not contain any more elements.
#define ERROR_GRAPHICS_PATH_CONTENT_GEOMETRY_TRANSFORMATION_NOT_PINNED 0x00262351 // Specified content transformation is not pinned on the specified VidPN present path.
#define PLA_S_PROPERTY_IGNORED 0x00300100 // Property value will be ignored.
#define ERROR_NDIS_INDICATION_REQUIRED 0x00340001 // The request will be completed later by a Network Driver Interface Specification (NDIS) status indication.
#define TRK_S_OUT_OF_SYNC 0x0DEAD100 // The VolumeSequenceNumber of a MOVE_NOTIFICATION request is incorrect.
#define TRK_VOLUME_NOT_FOUND 0x0DEAD102 // The VolumeID in a request was not found in the server's ServerVolumeTable.
#define TRK_VOLUME_NOT_OWNED 0x0DEAD103 // A notification was sent to the LnkSvrMessage method, but the RequestMachine for the request was not the VolumeOwner for a VolumeID in the request.
#define TRK_S_NOTIFICATION_QUOTA_EXCEEDED 0x0DEAD107 // The server received a MOVE_NOTIFICATION request, but the FileTable size limit has already been reached.
#define NS_I_TIGER_START 0x400D004F // The Title Server %1 is running.
#define NS_I_CUB_START 0x400D0051 // Content Server %1 (%2) is starting.
#define NS_I_CUB_RUNNING 0x400D0052 // Content Server %1 (%2) is running.
#define NS_I_DISK_START 0x400D0054 // Disk %1 ( %2 ) on Content Server %3, is running.
#define NS_I_DISK_REBUILD_STARTED 0x400D0056 // Started rebuilding disk %1 ( %2 ) on Content Server %3.
#define NS_I_DISK_REBUILD_FINISHED 0x400D0057 // Finished rebuilding disk %1 ( %2 ) on Content Server %3.
#define NS_I_DISK_REBUILD_ABORTED 0x400D0058 // Aborted rebuilding disk %1 ( %2 ) on Content Server %3.
#define NS_I_LIMIT_FUNNELS 0x400D0059 // A NetShow administrator at network location %1 set the data stream limit to %2 streams.
#define NS_I_START_DISK 0x400D005A // A NetShow administrator at network location %1 started disk %2.
#define NS_I_STOP_DISK 0x400D005B // A NetShow administrator at network location %1 stopped disk %2.
#define NS_I_STOP_CUB 0x400D005C // A NetShow administrator at network location %1 stopped Content Server %2.
#define NS_I_KILL_USERSESSION 0x400D005D // A NetShow administrator at network location %1 aborted user session %2 from the system.
#define NS_I_KILL_CONNECTION 0x400D005E // A NetShow administrator at network location %1 aborted obsolete connection %2 from the system.
#define NS_I_REBUILD_DISK 0x400D005F // A NetShow administrator at network location %1 started rebuilding disk %2.
#define MCMADM_I_NO_EVENTS 0x400D0069 // Event initialization failed, there will be no MCM events.
#define NS_I_LOGGING_FAILED 0x400D006E // The logging operation failed.
#define NS_I_LIMIT_BANDWIDTH 0x400D0070 // A NetShow administrator at network location %1 set the maximum bandwidth limit to %2 bps.
#define NS_I_CUB_UNFAIL_LINK 0x400D0191 // Content Server %1 (%2) has established its link to Content Server %3.
#define NS_I_RESTRIPE_START 0x400D0193 // Restripe operation has started.
#define NS_I_RESTRIPE_DONE 0x400D0194 // Restripe operation has completed.
#define NS_I_RESTRIPE_DISK_OUT 0x400D0196 // Content disk %1 (%2) on Content Server %3 has been restriped out.
#define NS_I_RESTRIPE_CUB_OUT 0x400D0197 // Content server %1 (%2) has been restriped out.
#define NS_I_DISK_STOP 0x400D0198 // Disk %1 ( %2 ) on Content Server %3, has been offlined.
#define NS_I_PLAYLIST_CHANGE_RECEDING 0x400D14BE // The playlist change occurred while receding.
#define NS_I_RECONNECTED 0x400D2EFF // The client is reconnected.
#define NS_I_NOLOG_STOP 0x400D2F01 // Forcing a switch to a pending header on start.
#define NS_I_EXISTING_PACKETIZER 0x400D2F03 // There is already an existing packetizer plugin for the stream.
#define NS_I_MANUAL_PROXY 0x400D2F04 // The proxy setting is manual.
#define ERROR_GRAPHICS_DRIVER_MISMATCH 0x40262009 // The kernel driver detected a version mismatch between it and the user mode driver.
#define ERROR_GRAPHICS_UNKNOWN_CHILD_STATUS 0x4026242F // Child device presence was not reliably detected.
#define ERROR_GRAPHICS_LEADLINK_START_DEFERRED 0x40262437 // Starting the lead-link adapter has been deferred temporarily.
#define ERROR_GRAPHICS_POLLING_TOO_FREQUENTLY 0x40262439 // The display adapter is being polled for children too frequently at the same polling level.
#define ERROR_GRAPHICS_START_DEFERRED 0x4026243A // Starting the adapter has been deferred temporarily.
#define E_PENDING 0x8000000A // The data necessary to complete this operation is not yet available.
#define E_NOTIMPL 0x80004001 // Not implemented.
#define E_NOINTERFACE 0x80004002 // No such interface supported.
#define E_POINTER 0x80004003 // Invalid pointer.
#define E_ABORT 0x80004004 // Operation aborted.
#define E_FAIL 0x80004005 // Unspecified error.
#define CO_E_INIT_TLS 0x80004006 // Thread local storage failure.
#define CO_E_INIT_SHARED_ALLOCATOR 0x80004007 // Get shared memory allocator failure.
#define CO_E_INIT_MEMORY_ALLOCATOR 0x80004008 // Get memory allocator failure.
#define CO_E_INIT_CLASS_CACHE 0x80004009 // Unable to initialize class cache.
#define CO_E_INIT_RPC_CHANNEL 0x8000400A // Unable to initialize remote procedure call (RPC) services.
#define CO_E_INIT_TLS_SET_CHANNEL_CONTROL 0x8000400B // Cannot set thread local storage channel control.
#define CO_E_INIT_TLS_CHANNEL_CONTROL 0x8000400C // Could not allocate thread local storage channel control.
#define CO_E_INIT_UNACCEPTED_USER_ALLOCATOR 0x8000400D // The user-supplied memory allocator is unacceptable.
#define CO_E_INIT_SCM_MUTEX_EXISTS 0x8000400E // The OLE service mutex already exists.
#define CO_E_INIT_SCM_FILE_MAPPING_EXISTS 0x8000400F // The OLE service file mapping already exists.
#define CO_E_INIT_SCM_MAP_VIEW_OF_FILE 0x80004010 // Unable to map view of file for OLE service.
#define CO_E_INIT_SCM_EXEC_FAILURE 0x80004011 // Failure attempting to launch OLE service.
#define CO_E_INIT_ONLY_SINGLE_THREADED 0x80004012 // There was an attempt to call CoInitialize a second time while single-threaded.
#define CO_E_CANT_REMOTE 0x80004013 // A Remote activation was necessary but was not allowed.
#define CO_E_BAD_SERVER_NAME 0x80004014 // A Remote activation was necessary, but the server name provided was invalid.
#define CO_E_WRONG_SERVER_IDENTITY 0x80004015 // The class is configured to run as a security ID different from the caller.
#define CO_E_OLE1DDE_DISABLED 0x80004016 //Use of OLE1 services requiring Dynamic Data Exchange (DDE) Windows is disabled.
#define CO_E_RUNAS_SYNTAX 0x80004017 // A RunAs specification must be <domain name>\<user name> or simply <user name>.
#define CO_E_CREATEPROCESS_FAILURE 0x80004018 // The server process could not be started. The path name might be incorrect.
#define CO_E_RUNAS_CREATEPROCESS_FAILURE 0x80004019 // The server process could not be started as the configured identity. The path name might be incorrect or unavailable.
#define CO_E_RUNAS_LOGON_FAILURE 0x8000401A // The server process could not be started because the configured identity is incorrect. Check the user name and password.
#define CO_E_LAUNCH_PERMSSION_DENIED 0x8000401B // The client is not allowed to launch this server.
#define CO_E_START_SERVICE_FAILURE 0x8000401C // The service providing this server could not be started.
#define CO_E_REMOTE_COMMUNICATION_FAILURE 0x8000401D // This computer was unable to communicate with the computer providing the server.
#define CO_E_SERVER_START_TIMEOUT 0x8000401E // The server did not respond after being launched.
#define CO_E_CLSREG_INCONSISTENT 0x8000401F // The registration information for this server is inconsistent or incomplete.
#define CO_E_IIDREG_INCONSISTENT 0x80004020 // The registration information for this interface is inconsistent or incomplete.
#define CO_E_NOT_SUPPORTED 0x80004021 // The operation attempted is not supported.
#define CO_E_RELOAD_DLL 0x80004022 // A DLL must be loaded.
#define CO_E_MSI_ERROR 0x80004023 // A Microsoft Software Installer error was encountered.
#define CO_E_ATTEMPT_TO_CREATE_OUTSIDE_CLIENT_CONTEXT 0x80004024 // The specified activation could not occur in the client context as specified.
#define CO_E_SERVER_PAUSED 0x80004025 // Activations on the server are paused.
#define CO_E_SERVER_NOT_PAUSED 0x80004026 // Activations on the server are not paused.
#define CO_E_CLASS_DISABLED 0x80004027 // The component or application containing the component has been disabled.
#define CO_E_CLRNOTAVAILABLE 0x80004028 // The common language runtime is not available.
#define CO_E_ASYNC_WORK_REJECTED 0x80004029 // The thread-pool rejected the submitted asynchronous work.
#define CO_E_SERVER_INIT_TIMEOUT 0x8000402A // The server started, but it did not finish initializing in a timely fashion.
#define CO_E_NO_SECCTX_IN_ACTIVATE 0x8000402B // Unable to complete the call because there is no COM+ security context inside IObjectControl.Activate.
#define CO_E_TRACKER_CONFIG 0x80004030 // The provided tracker configuration is invalid.
#define CO_E_THREADPOOL_CONFIG 0x80004031 // The provided thread pool configuration is invalid.
#define CO_E_SXS_CONFIG 0x80004032 // The provided side-by-side configuration is invalid.
#define CO_E_MALFORMED_SPN 0x80004033 // The server principal name (SPN) obtained during security negotiation is malformed.
#define E_UNEXPECTED 0x8000FFFF // Catastrophic failure.
#define RPC_E_CALL_REJECTED 0x80010001 // Call was rejected by callee.
#define RPC_E_CALL_CANCELED 0x80010002 // Call was canceled by the message filter.
#define RPC_E_CANTPOST_INSENDCALL 0x80010003 // The caller is dispatching an intertask SendMessage call and cannot call out via PostMessage.
#define RPC_E_CANTCALLOUT_INASYNCCALL 0x80010004 // The caller is dispatching an asynchronous call and cannot make an outgoing call on behalf of this call.
#define RPC_E_CANTCALLOUT_INEXTERNALCALL 0x80010005 // It is illegal to call out while inside message filter.
#define RPC_E_CONNECTION_TERMINATED 0x80010006 // The connection terminated or is in a bogus state and can no longer be used. Other connections are still valid.
#define RPC_E_SERVER_DIED 0x80010007 // The callee (the server, not the server application) is not available and disappeared; all connections are invalid. The call might have executed.
#define RPC_E_CLIENT_DIED 0x80010008 // The caller (client) disappeared while the callee (server) was processing a call.
#define RPC_E_INVALID_DATAPACKET 0x80010009 // The data packet with the marshaled parameter data is incorrect.
#define RPC_E_CANTTRANSMIT_CALL 0x8001000A // The call was not transmitted properly; the message queue was full and was not emptied after yielding.
#define RPC_E_CLIENT_CANTMARSHAL_DATA 0x8001000B // The client RPC caller cannot marshal the parameter data due to errors (such as low memory).
#define RPC_E_CLIENT_CANTUNMARSHAL_DATA 0x8001000C // The client RPC caller cannot unmarshal the return data due to errors (such as low memory).
#define RPC_E_SERVER_CANTMARSHAL_DATA 0x8001000D // The server RPC callee cannot marshal the return data due to errors (such as low memory).
#define RPC_E_SERVER_CANTUNMARSHAL_DATA 0x8001000E // The server RPC callee cannot unmarshal the parameter data due to errors (such as low memory).
#define RPC_E_INVALID_DATA 0x8001000F // Received data is invalid. The data might be server or client data.
#define RPC_E_INVALID_PARAMETER 0x80010010 // A particular parameter is invalid and cannot be (un)marshaled.
#define RPC_E_CANTCALLOUT_AGAIN 0x80010011 // There is no second outgoing call on same channel in DDE conversation.
#define RPC_E_SERVER_DIED_DNE 0x80010012 // The callee (the server, not the server application) is not available and disappeared; all connections are invalid. The call did not execute.
#define RPC_E_SYS_CALL_FAILED 0x80010100 // System call failed.
#define RPC_E_OUT_OF_RESOURCES 0x80010101 // Could not allocate some required resource (such as memory or events)
#define RPC_E_ATTEMPTED_MULTITHREAD 0x80010102 // Attempted to make calls on more than one thread in single-threaded mode.
#define RPC_E_NOT_REGISTERED 0x80010103 // The requested interface is not registered on the server object.
#define RPC_E_FAULT 0x80010104 // RPC could not call the server or could not return the results of calling the server.
#define RPC_E_SERVERFAULT 0x80010105 // The server threw an exception.
#define RPC_E_CHANGED_MODE 0x80010106 // Cannot change thread mode after it is set.
#define RPC_E_INVALIDMETHOD 0x80010107 // The method called does not exist on the server.
#define RPC_E_DISCONNECTED 0x80010108 // The object invoked has disconnected from its clients.
#define RPC_E_RETRY 0x80010109 // The object invoked chose not to process the call now. Try again later.
#define RPC_E_SERVERCALL_RETRYLATER 0x8001010A // The message filter indicated that the application is busy.
#define RPC_E_SERVERCALL_REJECTED 0x8001010B // The message filter rejected the call.
#define RPC_E_INVALID_CALLDATA 0x8001010C // A call control interface was called with invalid data.
#define RPC_E_CANTCALLOUT_ININPUTSYNCCALL 0x8001010D // An outgoing call cannot be made because the application is dispatching an input-synchronous call.
#define RPC_E_WRONG_THREAD 0x8001010E // The application called an interface that was marshaled for a different thread.
#define RPC_E_THREAD_NOT_INIT 0x8001010F // CoInitialize has not been called on the current thread.
#define RPC_E_VERSION_MISMATCH 0x80010110 // The version of OLE on the client and server machines does not match.
#define RPC_E_INVALID_HEADER 0x80010111 // OLE received a packet with an invalid header.
#define RPC_E_INVALID_EXTENSION 0x80010112 // OLE received a packet with an invalid extension.
#define RPC_E_INVALID_IPID 0x80010113 // The requested object or interface does not exist.
#define RPC_E_INVALID_OBJECT 0x80010114 // The requested object does not exist.
#define RPC_S_CALLPENDING 0x80010115 // OLE has sent a request and is waiting for a reply.
#define RPC_S_WAITONTIMER 0x80010116 // OLE is waiting before retrying a request.
#define RPC_E_CALL_COMPLETE 0x80010117 // Call context cannot be accessed after call completed.
#define RPC_E_UNSECURE_CALL 0x80010118 // Impersonate on unsecure calls is not supported.
#define RPC_E_TOO_LATE 0x80010119 // Security must be initialized before any interfaces are marshaled or unmarshaled. It cannot be changed after initialized.
#define RPC_E_NO_GOOD_SECURITY_PACKAGES 0x8001011A // No security packages are installed on this machine, the user is not logged on, or there are no compatible security packages between the client and server.
#define RPC_E_ACCESS_DENIED 0x8001011B // Access is denied.
#define RPC_E_REMOTE_DISABLED 0x8001011C // Remote calls are not allowed for this process.
#define RPC_E_INVALID_OBJREF 0x8001011D // The marshaled interface data packet (OBJREF) has an invalid or unknown format.
#define RPC_E_NO_CONTEXT 0x8001011E // No context is associated with this call. This happens for some custom marshaled calls and on the client side of the call.
#define RPC_E_TIMEOUT 0x8001011F // This operation returned because the time-out period expired.
#define RPC_E_NO_SYNC 0x80010120 // There are no synchronize objects to wait on.
#define RPC_E_FULLSIC_REQUIRED 0x80010121 // Full subject issuer chain Secure Sockets Layer (SSL) principal name expected from the server.
#define RPC_E_INVALID_STD_NAME 0x80010122 // Principal name is not a valid Microsoft standard (msstd) name.
#define CO_E_FAILEDTOIMPERSONATE 0x80010123 // Unable to impersonate DCOM client.
#define CO_E_FAILEDTOGETSECCTX 0x80010124 // Unable to obtain server's security context.
#define CO_E_FAILEDTOOPENTHREADTOKEN 0x80010125 // Unable to open the access token of the current thread.
#define CO_E_FAILEDTOGETTOKENINFO 0x80010126 // Unable to obtain user information from an access token.
#define CO_E_TRUSTEEDOESNTMATCHCLIENT 0x80010127 // The client who called IAccessControl::IsAccessPermitted was not the trustee provided to the method.
#define CO_E_FAILEDTOQUERYCLIENTBLANKET 0x80010128 // Unable to obtain the client's security blanket.
#define CO_E_FAILEDTOSETDACL 0x80010129 // Unable to set a discretionary access control list (ACL) into a security descriptor.
#define CO_E_ACCESSCHECKFAILED 0x8001012A // The system function AccessCheck returned false.
#define CO_E_NETACCESSAPIFAILED 0x8001012B // Either NetAccessDel or NetAccessAdd returned an error code.
#define CO_E_WRONGTRUSTEENAMESYNTAX 0x8001012C // One of the trustee strings provided by the user did not conform to the <Domain>\<Name> syntax and it was not the *" string".
#define CO_E_INVALIDSID 0x8001012D // One of the security identifiers provided by the user was invalid.
#define CO_E_CONVERSIONFAILED 0x8001012E // Unable to convert a wide character trustee string to a multiple-byte trustee string.
#define CO_E_NOMATCHINGSIDFOUND 0x8001012F // Unable to find a security identifier that corresponds to a trustee string provided by the user.
#define CO_E_LOOKUPACCSIDFAILED 0x80010130 // The system function LookupAccountSID failed.
#define CO_E_NOMATCHINGNAMEFOUND 0x80010131 // Unable to find a trustee name that corresponds to a security identifier provided by the user.
#define CO_E_LOOKUPACCNAMEFAILED 0x80010132 // The system function LookupAccountName failed.
#define CO_E_SETSERLHNDLFAILED 0x80010133 // Unable to set or reset a serialization handle.
#define CO_E_FAILEDTOGETWINDIR 0x80010134 // Unable to obtain the Windows directory.
#define CO_E_PATHTOOLONG 0x80010135 // Path too long.
#define CO_E_FAILEDTOGENUUID 0x80010136 // Unable to generate a UUID.
#define CO_E_FAILEDTOCREATEFILE 0x80010137 // Unable to create file.
#define CO_E_FAILEDTOCLOSEHANDLE 0x80010138 // Unable to close a serialization handle or a file handle.
#define CO_E_EXCEEDSYSACLLIMIT 0x80010139 // The number of access control entries (ACEs) in an ACL exceeds the system limit.
#define CO_E_ACESINWRONGORDER 0x8001013A // Not all the DENY_ACCESS ACEs are arranged in front of the GRANT_ACCESS ACEs in the stream.
#define CO_E_INCOMPATIBLESTREAMVERSION 0x8001013B // The version of ACL format in the stream is not supported by this implementation of IAccessControl.
#define CO_E_FAILEDTOOPENPROCESSTOKEN 0x8001013C // Unable to open the access token of the server process.
#define CO_E_DECODEFAILED 0x8001013D // Unable to decode the ACL in the stream provided by the user.
#define CO_E_ACNOTINITIALIZED 0x8001013F // The COM IAccessControl object is not initialized.
#define CO_E_CANCEL_DISABLED 0x80010140 // Call Cancellation is disabled.
#define RPC_E_UNEXPECTED 0x8001FFFF // An internal error occurred.
#define DISP_E_UNKNOWNINTERFACE 0x80020001 // Unknown interface.
#define DISP_E_MEMBERNOTFOUND 0x80020003 // Member not found.
#define DISP_E_PARAMNOTFOUND 0x80020004 // Parameter not found.
#define DISP_E_TYPEMISMATCH 0x80020005 // Type mismatch.
#define DISP_E_UNKNOWNNAME 0x80020006 // Unknown name.
#define DISP_E_NONAMEDARGS 0x80020007 // No named arguments.
#define DISP_E_BADVARTYPE 0x80020008 // Bad variable type.
#define DISP_E_EXCEPTION 0x80020009 // Exception occurred.
#define DISP_E_OVERFLOW 0x8002000A // Out of present range.
#define DISP_E_BADINDEX 0x8002000B // Invalid index.
#define DISP_E_UNKNOWNLCID 0x8002000C // Unknown language.
#define DISP_E_ARRAYISLOCKED 0x8002000D // Memory is locked.
#define DISP_E_BADPARAMCOUNT 0x8002000E // Invalid number of parameters.
#define DISP_E_PARAMNOTOPTIONAL 0x8002000F // Parameter not optional.
#define DISP_E_BADCALLEE 0x80020010 // Invalid callee.
#define DISP_E_NOTACOLLECTION 0x80020011 // Does not support a collection.
#define DISP_E_DIVBYZERO 0x80020012 // Division by zero.
#define DISP_E_BUFFERTOOSMALL 0x80020013 // Buffer too small.
#define TYPE_E_BUFFERTOOSMALL 0x80028016 // Buffer too small.
#define TYPE_E_FIELDNOTFOUND 0x80028017 // Field name not defined in the record.
#define TYPE_E_INVDATAREAD 0x80028018 // Old format or invalid type library.
#define TYPE_E_UNSUPFORMAT 0x80028019 // Old format or invalid type library.
#define TYPE_E_REGISTRYACCESS 0x8002801C // Error accessing the OLE registry.
#define TYPE_E_LIBNOTREGISTERED 0x8002801D // Library not registered.
#define TYPE_E_UNDEFINEDTYPE 0x80028027 // Bound to unknown type.
#define TYPE_E_QUALIFIEDNAMEDISALLOWED 0x80028028 // Qualified name disallowed.
#define TYPE_E_INVALIDSTATE 0x80028029 // Invalid forward reference, or reference to uncompiled type.
#define TYPE_E_WRONGTYPEKIND 0x8002802A // Type mismatch.
#define TYPE_E_ELEMENTNOTFOUND 0x8002802B // Element not found.
#define TYPE_E_AMBIGUOUSNAME 0x8002802C // Ambiguous name.
#define TYPE_E_NAMECONFLICT 0x8002802D // Name already exists in the library.
#define TYPE_E_UNKNOWNLCID 0x8002802E // Unknown language code identifier (LCID).
#define TYPE_E_DLLFUNCTIONNOTFOUND 0x8002802F // Function not defined in specified DLL.
#define TYPE_E_BADMODULEKIND 0x800288BD // Wrong module kind for the operation.
#define TYPE_E_SIZETOOBIG 0x800288C5 // Size cannot exceed 64 KB.
#define TYPE_E_DUPLICATEID 0x800288C6 // Duplicate ID in inheritance hierarchy.
#define TYPE_E_INVALIDID 0x800288CF // Incorrect inheritance depth in standard OLE hmember.
#define TYPE_E_TYPEMISMATCH 0x80028CA0 // Type mismatch.
#define TYPE_E_OUTOFBOUNDS 0x80028CA1 // Invalid number of arguments.
#define TYPE_E_IOERROR 0x80028CA2 // I/O error.
#define TYPE_E_CANTCREATETMPFILE 0x80028CA3 // Error creating unique .tmp file.
#define TYPE_E_CANTLOADLIBRARY 0x80029C4A // Error loading type library or DLL.
#define TYPE_E_INCONSISTENTPROPFUNCS 0x80029C83 // Inconsistent property functions.
#define TYPE_E_CIRCULARTYPE 0x80029C84 // Circular dependency between types and modules.
#define STG_E_INVALIDFUNCTION 0x80030001 // Unable to perform requested operation.
#define STG_E_FILENOTFOUND 0x80030002 // %1 could not be found.
#define STG_E_PATHNOTFOUND 0x80030003 // The path %1 could not be found.
#define STG_E_TOOMANYOPENFILES 0x80030004 // There are insufficient resources to open another file.
#define STG_E_ACCESSDENIED 0x80030005 // Access denied.
#define STG_E_INVALIDHANDLE 0x80030006 // Attempted an operation on an invalid object.
#define STG_E_INSUFFICIENTMEMORY 0x80030008 // There is insufficient memory available to complete operation.
#define STG_E_INVALIDPOINTER 0x80030009 // Invalid pointer error.
#define STG_E_NOMOREFILES 0x80030012 // There are no more entries to return.
#define STG_E_DISKISWRITEPROTECTED 0x80030013 // Disk is write-protected.
#define STG_E_SEEKERROR 0x80030019 // An error occurred during a seek operation.
#define STG_E_WRITEFAULT 0x8003001D // A disk error occurred during a write operation.
#define STG_E_READFAULT 0x8003001E // A disk error occurred during a read operation.
#define STG_E_SHAREVIOLATION 0x80030020 // A share violation has occurred.
#define STG_E_LOCKVIOLATION 0x80030021 // A lock violation has occurred.
#define STG_E_FILEALREADYEXISTS 0x80030050 // %1 already exists.
#define STG_E_INVALIDPARAMETER 0x80030057 // Invalid parameter error.
#define STG_E_MEDIUMFULL 0x80030070 // There is insufficient disk space to complete operation.
#define STG_E_PROPSETMISMATCHED 0x800300F0 // Illegal write of non-simple property to simple property set.
#define STG_E_ABNORMALAPIEXIT 0x800300FA // An application programming interface (API) call exited abnormally.
#define STG_E_INVALIDHEADER 0x800300FB // The file %1 is not a valid compound file.
#define STG_E_INVALIDNAME 0x800300FC // The name %1 is not valid.
#define STG_E_UNKNOWN 0x800300FD // An unexpected error occurred.
#define STG_E_UNIMPLEMENTEDFUNCTION 0x800300FE // That function is not implemented.
#define STG_E_INVALIDFLAG 0x800300FF // Invalid flag error.
#define STG_E_INUSE 0x80030100 // Attempted to use an object that is busy.
#define STG_E_NOTCURRENT 0x80030101 // The storage has been changed since the last commit.
#define STG_E_REVERTED 0x80030102 // Attempted to use an object that has ceased to exist.
#define STG_E_CANTSAVE 0x80030103 // Cannot save.
#define STG_E_OLDFORMAT 0x80030104 // The compound file %1 was produced with an incompatible version of storage.
#define STG_E_OLDDLL 0x80030105 // The compound file %1 was produced with a newer version of storage.
#define STG_E_SHAREREQUIRED 0x80030106 // Share.exe or equivalent is required for operation.
#define STG_E_NOTFILEBASEDSTORAGE 0x80030107 // Illegal operation called on non-file based storage.
#define STG_E_EXTANTMARSHALLINGS 0x80030108 // Illegal operation called on object with extant marshalings.
#define STG_E_DOCFILECORRUPT 0x80030109 // The docfile has been corrupted.
#define STG_E_BADBASEADDRESS 0x80030110 // OLE32.DLL has been loaded at the wrong address.
#define STG_E_DOCFILETOOLARGE 0x80030111 // The compound file is too large for the current implementation.
#define STG_E_NOTSIMPLEFORMAT 0x80030112 // The compound file was not created with the STGM_SIMPLE flag.
#define STG_E_INCOMPLETE 0x80030201 // The file download was aborted abnormally. The file is incomplete.
#define STG_E_TERMINATED 0x80030202 // The file download has been terminated.
#define STG_E_STATUS_COPY_PROTECTION_FAILURE 0x80030305 // Generic Copy Protection Error.
#define STG_E_CSS_AUTHENTICATION_FAILURE 0x80030306 // Copy Protection Error—DVD CSS Authentication failed.
#define STG_E_CSS_KEY_NOT_PRESENT 0x80030307 // Copy Protection Error—The given sector does not have a valid CSS key.
#define STG_E_CSS_KEY_NOT_ESTABLISHED 0x80030308 // Copy Protection Error—DVD session key not established.
#define STG_E_CSS_SCRAMBLED_SECTOR 0x80030309 // Copy Protection Error—The read failed because the sector is encrypted.
#define STG_E_CSS_REGION_MISMATCH 0x8003030A // Copy Protection Error—The current DVD's region does not correspond to the region setting of the drive.
#define STG_E_RESETS_EXHAUSTED 0x8003030B // Copy Protection Error—The drive's region setting might be permanent or the number of user resets has been exhausted.
#define OLE_E_OLEVERB 0x80040000 // Invalid OLEVERB structure.
#define OLE_E_ADVF 0x80040001 // Invalid advise flags.
#define OLE_E_ENUM_NOMORE 0x80040002 // Cannot enumerate any more because the associated data is missing.
#define OLE_E_ADVISENOTSUPPORTED 0x80040003 // This implementation does not take advises.
#define OLE_E_NOCONNECTION 0x80040004 // There is no connection for this connection ID.
#define OLE_E_NOTRUNNING 0x80040005 // Need to run the object to perform this operation.
#define OLE_E_NOCACHE 0x80040006 // There is no cache to operate on.
#define OLE_E_BLANK 0x80040007 // Uninitialized object.
#define OLE_E_CLASSDIFF 0x80040008 // Linked object's source class has changed.
#define OLE_E_CANT_GETMONIKER 0x80040009 // Not able to get the moniker of the object.
#define OLE_E_CANT_BINDTOSOURCE 0x8004000A // Not able to bind to the source.
#define OLE_E_STATIC 0x8004000B // Object is static; operation not allowed.
#define OLE_E_PROMPTSAVECANCELLED 0x8004000C // User canceled out of the Save dialog box.
#define OLE_E_INVALIDRECT 0x8004000D // Invalid rectangle.
#define OLE_E_WRONGCOMPOBJ 0x8004000E // compobj.dll is too old for the ole2.dll initialized.
#define OLE_E_INVALIDHWND 0x8004000F // Invalid window handle.
#define OLE_E_NOT_INPLACEACTIVE 0x80040010 // Object is not in any of the inplace active states.
#define OLE_E_CANTCONVERT 0x80040011 // Not able to convert object.
#define OLE_E_NOSTORAGE 0x80040012 // Not able to perform the operation because object is not given storage yet.
#define DV_E_FORMATETC 0x80040064 // Invalid FORMATETC structure.
#define DV_E_DVTARGETDEVICE 0x80040065 // Invalid DVTARGETDEVICE structure.
#define DV_E_STGMEDIUM 0x80040066 // Invalid STDGMEDIUM structure.
#define DV_E_STATDATA 0x80040067 // Invalid STATDATA structure.
#define DV_E_LINDEX 0x80040068 // Invalid lindex.
#define DV_E_TYMED 0x80040069 // Invalid TYMED structure.
#define DV_E_CLIPFORMAT 0x8004006A // Invalid clipboard format.
#define DV_E_DVASPECT 0x8004006B // Invalid aspects.
#define DV_E_DVTARGETDEVICE_SIZE 0x8004006C // The tdSize parameter of the DVTARGETDEVICE structure is invalid.
#define DV_E_NOIVIEWOBJECT 0x8004006D // Object does not support IViewObject interface.
#define DRAGDROP_E_NOTREGISTERED 0x80040100 // Trying to revoke a drop target that has not been registered.
#define DRAGDROP_E_ALREADYREGISTERED 0x80040101 // This window has already been registered as a drop target.
#define DRAGDROP_E_INVALIDHWND 0x80040102 // Invalid window handle.
#define CLASS_E_NOAGGREGATION 0x80040110 // Class does not support aggregation (or class object is remote).
#define CLASS_E_CLASSNOTAVAILABLE 0x80040111 // ClassFactory cannot supply requested class.
#define CLASS_E_NOTLICENSED 0x80040112 // Class is not licensed for use.
#define VIEW_E_DRAW 0x80040140 // Error drawing view.
#define REGDB_E_READREGDB 0x80040150 // Could not read key from registry.
#define REGDB_E_WRITEREGDB 0x80040151 // Could not write key to registry.
#define REGDB_E_KEYMISSING 0x80040152 // Could not find the key in the registry.
#define REGDB_E_INVALIDVALUE 0x80040153 // Invalid value for registry.
#define REGDB_E_CLASSNOTREG 0x80040154 // Class not registered.
#define REGDB_E_IIDNOTREG 0x80040155 // Interface not registered.
#define REGDB_E_BADTHREADINGMODEL 0x80040156 // Threading model entry is not valid.
#define CAT_E_CATIDNOEXIST 0x80040160 // CATID does not exist.
#define CAT_E_NODESCRIPTION 0x80040161 // Description not found.
#define CS_E_PACKAGE_NOTFOUND 0x80040164 // No package in the software installation data in Active Directory meets this criteria.
#define CS_E_NOT_DELETABLE 0x80040165 // Deleting this will break the referential integrity of the software installation data in Active Directory.
#define CS_E_CLASS_NOTFOUND 0x80040166 // The CLSID was not found in the software installation data in Active Directory.
#define CS_E_INVALID_VERSION 0x80040167 // The software installation data in Active Directory is corrupt.
#define CS_E_NO_CLASSSTORE 0x80040168 // There is no software installation data in Active Directory.
#define CS_E_OBJECT_NOTFOUND 0x80040169 // There is no software installation data object in Active Directory.
#define CS_E_OBJECT_ALREADY_EXISTS 0x8004016A // The software installation data object in Active Directory already exists.
#define CS_E_INVALID_PATH 0x8004016B // The path to the software installation data in Active Directory is not correct.
#define CS_E_NETWORK_ERROR 0x8004016C // A network error interrupted the operation.
#define CS_E_ADMIN_LIMIT_EXCEEDED 0x8004016D // The size of this object exceeds the maximum size set by the administrator.
#define CS_E_SCHEMA_MISMATCH 0x8004016E // The schema for the software installation data in Active Directory does not match the required schema.
#define CS_E_INTERNAL_ERROR 0x8004016F // An error occurred in the software installation data in Active Directory.
#define CACHE_E_NOCACHE_UPDATED 0x80040170 // Cache not updated.
#define OLEOBJ_E_NOVERBS 0x80040180 // No verbs for OLE object.
#define OLEOBJ_E_INVALIDVERB 0x80040181 // Invalid verb for OLE object.
#define INPLACE_E_NOTUNDOABLE 0x800401A0 // Undo is not available.
#define INPLACE_E_NOTOOLSPACE 0x800401A1 // Space for tools is not available.
#define CONVERT10_E_OLESTREAM_GET 0x800401C0 // OLESTREAM Get method failed.
#define CONVERT10_E_OLESTREAM_PUT 0x800401C1 // OLESTREAM Put method failed.
#define CONVERT10_E_OLESTREAM_FMT 0x800401C2 // Contents of the OLESTREAM not in correct format.
#define CONVERT10_E_OLESTREAM_BITMAP_TO_DIB 0x800401C3  // There was an error in a Windows GDI call while converting the bitmap to a device-independent bitmap (DIB).
#define CONVERT10_E_STG_FMT 0x800401C4 // Contents of the IStorage not in correct format.
#define CONVERT10_E_STG_NO_STD_STREAM 0x800401C5  // Contents of IStorage is missing one of the standard streams.
#define CONVERT10_E_STG_DIB_TO_BITMAP 0x800401C6 // There was an error in a Windows Graphics Device Interface (GDI) call while converting the DIB to a bitmap.
#define CLIPBRD_E_CANT_OPEN 0x800401D0 // OpenClipboard failed.
#define CLIPBRD_E_CANT_EMPTY 0x800401D1 // EmptyClipboard failed.
#define CLIPBRD_E_CANT_SET 0x800401D2 // SetClipboard failed.
#define CLIPBRD_E_BAD_DATA 0x800401D3 // Data on clipboard is invalid.
#define CLIPBRD_E_CANT_CLOSE 0x800401D4 // CloseClipboard failed.
#define MK_E_CONNECTMANUALLY 0x800401E0 // Moniker needs to be connected manually.
#define MK_E_EXCEEDEDDEADLINE 0x800401E1 // Operation exceeded deadline.
#define MK_E_NEEDGENERIC 0x800401E2 // Moniker needs to be generic.
#define MK_E_UNAVAILABLE 0x800401E3 // Operation unavailable.
#define MK_E_SYNTAX 0x800401E4 // Invalid syntax.
#define MK_E_NOOBJECT 0x800401E5 // No object for moniker.
#define MK_E_INVALIDEXTENSION 0x800401E6 // Bad extension for file.
#define MK_E_INTERMEDIATEINTERFACENOTSUPPORTED 0x800401E7 // Intermediate operation failed.
#define MK_E_NOTBINDABLE 0x800401E8 // Moniker is not bindable.
#define MK_E_NOTBOUND 0x800401E9 // Moniker is not bound.
#define MK_E_CANTOPENFILE 0x800401EA // Moniker cannot open file.
#define MK_E_MUSTBOTHERUSER 0x800401EB // User input required for operation to succeed.
#define MK_E_NOINVERSE 0x800401EC // Moniker class has no inverse.
#define MK_E_NOSTORAGE 0x800401ED // Moniker does not refer to storage.
#define MK_E_NOPREFIX 0x800401EE // No common prefix.
#define MK_E_ENUMERATION_FAILED 0x800401EF // Moniker could not be enumerated.
#define CO_E_NOTINITIALIZED 0x800401F0 // CoInitialize has not been called.
#define CO_E_ALREADYINITIALIZED 0x800401F1 // CoInitialize has already been called.
#define CO_E_CANTDETERMINECLASS 0x800401F2 // Class of object cannot be determined.
#define CO_E_CLASSSTRING 0x800401F3 // Invalid class string.
#define CO_E_IIDSTRING 0x800401F4 // Invalid interface string.
#define CO_E_APPNOTFOUND 0x800401F5 // Application not found.
#define CO_E_APPSINGLEUSE 0x800401F6 // Application cannot be run more than once.
#define CO_E_ERRORINAPP 0x800401F7 // Some error in application.
#define CO_E_DLLNOTFOUND 0x800401F8 // DLL for class not found.
#define CO_E_ERRORINDLL 0x800401F9 // Error in the DLL.
#define CO_E_WRONGOSFORAPP 0x800401FA // Wrong operating system or operating system version for application.
#define CO_E_OBJNOTREG 0x800401FB // Object is not registered.
#define CO_E_OBJISREG 0x800401FC // Object is already registered.
#define CO_E_OBJNOTCONNECTED 0x800401FD // Object is not connected to server.
#define CO_E_APPDIDNTREG 0x800401FE // Application was launched, but it did not register a class factory.
#define CO_E_RELEASED 0x800401FF // Object has been released.
#define EVENT_E_ALL_SUBSCRIBERS_FAILED 0x80040201 // An event was unable to invoke any of the subscribers.
#define EVENT_E_QUERYSYNTAX 0x80040203 // A syntax error occurred trying to evaluate a query string.
#define EVENT_E_QUERYFIELD 0x80040204 // An invalid field name was used in a query string.
#define EVENT_E_INTERNALEXCEPTION 0x80040205 // An unexpected exception was raised.
#define EVENT_E_INTERNALERROR 0x80040206 // An unexpected internal error was detected.
#define EVENT_E_INVALID_PER_USER_SID 0x80040207 // The owner security identifier (SID) on a per-user subscription does not exist.
#define EVENT_E_USER_EXCEPTION 0x80040208 // A user-supplied component or subscriber raised an exception.
#define EVENT_E_TOO_MANY_METHODS 0x80040209 // An interface has too many methods to fire events from.
#define EVENT_E_MISSING_EVENTCLASS 0x8004020A // A subscription cannot be stored unless its event class already exists.
#define EVENT_E_NOT_ALL_REMOVED 0x8004020B // Not all the objects requested could be removed.
#define EVENT_E_COMPLUS_NOT_INSTALLED 0x8004020C // COM+ is required for this operation, but it is not installed.
#define EVENT_E_CANT_MODIFY_OR_DELETE_UNCONFIGURED_OBJECT 0x8004020D // Cannot modify or delete an object that was not added using the COM+ Administrative SDK.
#define EVENT_E_CANT_MODIFY_OR_DELETE_CONFIGURED_OBJECT 0x8004020E // Cannot modify or delete an object that was added using the COM+ Administrative SDK.
#define EVENT_E_INVALID_EVENT_CLASS_PARTITION 0x8004020F // The event class for this subscription is in an invalid partition.
#define EVENT_E_PER_USER_SID_NOT_LOGGED_ON 0x80040210 // The owner of the PerUser subscription is not logged on to the system specified.
#define SCHED_E_TRIGGER_NOT_FOUND 0x80041309 // Trigger not found.
#define SCHED_E_TASK_NOT_READY 0x8004130A // One or more of the properties that are needed to run this task have not been set.
#define SCHED_E_TASK_NOT_RUNNING 0x8004130B // There is no running instance of the task.
#define SCHED_E_SERVICE_NOT_INSTALLED 0x8004130C // The Task Scheduler service is not installed on this computer.
#define SCHED_E_CANNOT_OPEN_TASK 0x8004130D // The task object could not be opened.
#define SCHED_E_INVALID_TASK 0x8004130E // The object is either an invalid task object or is not a task object.
#define SCHED_E_ACCOUNT_INFORMATION_NOT_SET 0x8004130F // No account information could be found in the Task Scheduler security database for the task indicated.
#define SCHED_E_ACCOUNT_NAME_NOT_FOUND 0x80041310 // Unable to establish existence of the account specified.
#define SCHED_E_ACCOUNT_DBASE_CORRUPT 0x80041311 // Corruption was detected in the Task Scheduler security database; the database has been reset.
#define SCHED_E_NO_SECURITY_SERVICES 0x80041312 // Task Scheduler security services are available only on Windows NT operating system.
#define SCHED_E_UNKNOWN_OBJECT_VERSION 0x80041313 // The task object version is either unsupported or invalid.
#define SCHED_E_UNSUPPORTED_ACCOUNT_OPTION 0x80041314 // The task has been configured with an unsupported combination of account settings and run-time options.
#define SCHED_E_SERVICE_NOT_RUNNING 0x80041315 // The Task Scheduler service is not running.
#define SCHED_E_UNEXPECTEDNODE 0x80041316 // The task XML contains an unexpected node.
#define SCHED_E_NAMESPACE 0x80041317 // The task XML contains an element or attribute from an unexpected namespace.
#define SCHED_E_INVALIDVALUE 0x80041318 // The task XML contains a value that is incorrectly formatted or out of range.
#define SCHED_E_MISSINGNODE 0x80041319 // The task XML is missing a required element or attribute.
#define SCHED_E_MALFORMEDXML 0x8004131A // The task XML is malformed.
#define SCHED_E_TOO_MANY_NODES 0x8004131D // The task XML contains too many nodes of the same type.
#define SCHED_E_PAST_END_BOUNDARY 0x8004131E // The task cannot be started after the trigger's end boundary.
#define SCHED_E_ALREADY_RUNNING 0x8004131F // An instance of this task is already running.
#define SCHED_E_USER_NOT_LOGGED_ON 0x80041320 // The task will not run because the user is not logged on.
#define SCHED_E_INVALID_TASK_HASH 0x80041321 // The task image is corrupt or has been tampered with.
#define SCHED_E_SERVICE_NOT_AVAILABLE 0x80041322 // The Task Scheduler service is not available.
#define SCHED_E_SERVICE_TOO_BUSY 0x80041323 // The Task Scheduler service is too busy to handle your request. Try again later.
#define SCHED_E_TASK_ATTEMPTED 0x80041324 // The Task Scheduler service attempted to run the task, but the task did not run due to one of the constraints in the task definition.
#define XACT_E_ALREADYOTHERSINGLEPHASE 0x8004D000 // Another single phase resource manager has already been enlisted in this transaction.
#define XACT_E_CANTRETAIN 0x8004D001 // A retaining commit or abort is not supported.
#define XACT_E_COMMITFAILED 0x8004D002 // The transaction failed to commit for an unknown reason. The transaction was aborted.
#define XACT_E_COMMITPREVENTED 0x8004D003 // Cannot call commit on this transaction object because the calling application did not initiate the transaction.
#define XACT_E_HEURISTICABORT 0x8004D004 // Instead of committing, the resource heuristically aborted.
#define XACT_E_HEURISTICCOMMIT 0x8004D005 // Instead of aborting, the resource heuristically committed.
#define XACT_E_HEURISTICDAMAGE 0x8004D006 // Some of the states of the resource were committed while others were aborted, likely because of heuristic decisions.
#define XACT_E_HEURISTICDANGER 0x8004D007 // Some of the states of the resource might have been committed while others were aborted, likely because of heuristic decisions.
#define XACT_E_ISOLATIONLEVEL 0x8004D008 // The requested isolation level is not valid or supported.
#define XACT_E_NOASYNC 0x8004D009 // The transaction manager does not support an asynchronous operation for this method.
#define XACT_E_NOENLIST 0x8004D00A // Unable to enlist in the transaction.
#define XACT_E_NOISORETAIN 0x8004D00B // The requested semantics of retention of isolation across retaining commit and abort boundaries cannot be supported by this transaction implementation, or isoFlags was not equal to 0.
#define XACT_E_NORESOURCE 0x8004D00C // There is no resource presently associated with this enlistment.
#define XACT_E_NOTCURRENT 0x8004D00D // The transaction failed to commit due to the failure of optimistic concurrency control in at least one of the resource managers.
#define XACT_E_NOTRANSACTION 0x8004D00E // The transaction has already been implicitly or explicitly committed or aborted.
#define XACT_E_NOTSUPPORTED 0x8004D00F // An invalid combination of flags was specified.
#define XACT_E_UNKNOWNRMGRID 0x8004D010 // The resource manager ID is not associated with this transaction or the transaction manager.
#define XACT_E_WRONGSTATE 0x8004D011 // This method was called in the wrong state.
#define XACT_E_WRONGUOW 0x8004D012 // The indicated unit of work does not match the unit of work expected by the resource manager.
#define XACT_E_XTIONEXISTS 0x8004D013 // An enlistment in a transaction already exists.
#define XACT_E_NOIMPORTOBJECT 0x8004D014 // An import object for the transaction could not be found.
#define XACT_E_INVALIDCOOKIE 0x8004D015 // The transaction cookie is invalid.
#define XACT_E_INDOUBT 0x8004D016 // The transaction status is in doubt. A communication failure occurred, or a transaction manager or resource manager has failed.
#define XACT_E_NOTIMEOUT 0x8004D017 // A time-out was specified, but time-outs are not supported.
#define XACT_E_ALREADYINPROGRESS 0x8004D018 // The requested operation is already in progress for the transaction.
#define XACT_E_ABORTED 0x8004D019 // The transaction has already been aborted.
#define XACT_E_LOGFULL 0x8004D01A // The Transaction Manager returned a log full error.
#define XACT_E_TMNOTAVAILABLE 0x8004D01B // The transaction manager is not available.
#define XACT_E_CONNECTION_DOWN 0x8004D01C // A connection with the transaction manager was lost.
#define XACT_E_CONNECTION_DENIED 0x8004D01D // A request to establish a connection with the transaction manager was denied.
#define XACT_E_REENLISTTIMEOUT 0x8004D01E // Resource manager reenlistment to determine transaction status timed out.
#define XACT_E_TIP_CONNECT_FAILED 0x8004D01F // The transaction manager failed to establish a connection with another Transaction Internet Protocol (TIP) transaction manager.
#define XACT_E_TIP_PROTOCOL_ERROR 0x8004D020 // The transaction manager encountered a protocol error with another TIP transaction manager.
#define XACT_E_TIP_PULL_FAILED 0x8004D021 // The transaction manager could not propagate a transaction from another TIP transaction manager.
#define XACT_E_DEST_TMNOTAVAILABLE 0x8004D022 // The transaction manager on the destination machine is not available.
#define XACT_E_TIP_DISABLED 0x8004D023 // The transaction manager has disabled its support for TIP.
#define XACT_E_NETWORK_TX_DISABLED 0x8004D024 // The transaction manager has disabled its support for remote or network transactions.
#define XACT_E_PARTNER_NETWORK_TX_DISABLED 0x8004D025 // The partner transaction manager has disabled its support for remote or network transactions.
#define XACT_E_XA_TX_DISABLED 0x8004D026 // The transaction manager has disabled its support for XA transactions.
#define XACT_E_UNABLE_TO_READ_DTC_CONFIG 0x8004D027 // Microsoft Distributed Transaction Coordinator (MSDTC) was unable to read its configuration information.
#define XACT_E_UNABLE_TO_LOAD_DTC_PROXY 0x8004D028 // MSDTC was unable to load the DTC proxy DLL.
#define XACT_E_ABORTING 0x8004D029 // The local transaction has aborted.
#define XACT_E_CLERKNOTFOUND 0x8004D080 // The specified CRM clerk was not found. It might have completed before it could be held.
#define XACT_E_CLERKEXISTS 0x8004D081 // The specified CRM clerk does not exist.
#define XACT_E_RECOVERYINPROGRESS 0x8004D082 // Recovery of the CRM log file is still in progress.
#define XACT_E_TRANSACTIONCLOSED 0x8004D083 // The transaction has completed, and the log records have been discarded from the log file. They are no longer available.
#define XACT_E_INVALIDLSN 0x8004D084 // lsnToRead is outside of the current limits of the log
#define XACT_E_REPLAYREQUEST 0x8004D085 // The COM+ Compensating Resource Manager has records it wishes to replay.
#define XACT_E_CONNECTION_REQUEST_DENIED 0x8004D100 // The request to connect to the specified transaction coordinator was denied.
#define XACT_E_TOOMANY_ENLISTMENTS 0x8004D101 // The maximum number of enlistments for the specified transaction has been reached.
#define XACT_E_DUPLICATE_GUID 0x8004D102 // A resource manager with the same identifier is already registered with the specified transaction coordinator.
#define XACT_E_NOTSINGLEPHASE 0x8004D103 // The prepare request given was not eligible for single-phase optimizations.
#define XACT_E_RECOVERYALREADYDONE 0x8004D104 // RecoveryComplete has already been called for the given resource manager.
#define XACT_E_PROTOCOL 0x8004D105 // The interface call made was incorrect for the current state of the protocol.
#define XACT_E_RM_FAILURE 0x8004D106 // The xa_open call failed for the XA resource.
#define XACT_E_RECOVERY_FAILED 0x8004D107 // The xa_recover call failed for the XA resource.
#define XACT_E_LU_NOT_FOUND 0x8004D108 // The logical unit of work specified cannot be found.
#define XACT_E_DUPLICATE_LU 0x8004D109 // The specified logical unit of work already exists.
#define XACT_E_LU_NOT_CONNECTED 0x8004D10A // Subordinate creation failed. The specified logical unit of work was not connected.
#define XACT_E_DUPLICATE_TRANSID 0x8004D10B // A transaction with the given identifier already exists.
#define XACT_E_LU_BUSY 0x8004D10C // The resource is in use.
#define XACT_E_LU_NO_RECOVERY_PROCESS 0x8004D10D // The LU Recovery process is down.
#define XACT_E_LU_DOWN 0x8004D10E // The remote session was lost.
#define XACT_E_LU_RECOVERING 0x8004D10F // The resource is currently recovering.
#define XACT_E_LU_RECOVERY_MISMATCH 0x8004D110 // There was a mismatch in driving recovery.
#define XACT_E_RM_UNAVAILABLE 0x8004D111 // An error occurred with the XA resource.
#define CONTEXT_E_ABORTED 0x8004E002 // The root transaction wanted to commit, but the transaction aborted.
#define CONTEXT_E_ABORTING 0x8004E003 // The COM+ component on which the method call was made has a transaction that has already aborted or is in the process of aborting.
#define CONTEXT_E_NOCONTEXT 0x8004E004 // There is no Microsoft Transaction Server (MTS) object context.
#define CONTEXT_E_WOULD_DEADLOCK 0x8004E005 // The component is configured to use synchronization, and this method call would cause a deadlock to occur.
#define CONTEXT_E_SYNCH_TIMEOUT 0x8004E006 // The component is configured to use synchronization, and a thread has timed out waiting to enter the context.
#define CONTEXT_E_OLDREF 0x8004E007 // You made a method call on a COM+ component that has a transaction that has already committed or aborted.
#define CONTEXT_E_ROLENOTFOUND 0x8004E00C // The specified role was not configured for the application.
#define CONTEXT_E_TMNOTAVAILABLE 0x8004E00F // COM+ was unable to talk to the MSDTC.
#define CO_E_ACTIVATIONFAILED 0x8004E021 // An unexpected error occurred during COM+ activation.
#define CO_E_ACTIVATIONFAILED_EVENTLOGGED 0x8004E022 // COM+ activation failed. Check the event log for more information.
#define CO_E_ACTIVATIONFAILED_CATALOGERROR 0x8004E023 // COM+ activation failed due to a catalog or configuration error.
#define CO_E_ACTIVATIONFAILED_TIMEOUT 0x8004E024 // COM+ activation failed because the activation could not be completed in the specified amount of time.
#define CO_E_INITIALIZATIONFAILED 0x8004E025 // COM+ activation failed because an initialization function failed. Check the event log for more information.
#define CONTEXT_E_NOJIT 0x8004E026 // The requested operation requires that just-in-time (JIT) be in the current context, and it is not.
#define CONTEXT_E_NOTRANSACTION 0x8004E027 // The requested operation requires that the current context have a transaction, and it does not.
#define CO_E_THREADINGMODEL_CHANGED 0x8004E028 // The components threading model has changed after install into a COM+ application. Re-install component.
#define CO_E_NOIISINTRINSICS 0x8004E029 // Internet Information Services (IIS) intrinsics not available. Start your work with IIS.
#define CO_E_NOCOOKIES 0x8004E02A // An attempt to write a cookie failed.
#define CO_E_DBERROR 0x8004E02B // An attempt to use a database generated a database-specific error.
#define CO_E_NOTPOOLED 0x8004E02C // The COM+ component you created must use object pooling to work.
#define CO_E_NOTCONSTRUCTED 0x8004E02D // The COM+ component you created must use object construction to work correctly.
#define CO_E_NOSYNCHRONIZATION 0x8004E02E // The COM+ component requires synchronization, and it is not configured for it.
#define CO_E_ISOLEVELMISMATCH 0x8004E02F // The TxIsolation Level property for the COM+ component being created is stronger than the TxIsolationLevel for the root.
#define CO_E_CALL_OUT_OF_TX_SCOPE_NOT_ALLOWED 0x8004E030 // The component attempted to make a cross-context call between invocations of EnterTransactionScope and ExitTransactionScope. This is not allowed. Cross-context calls cannot be made while inside a transaction scope.
#define CO_E_EXIT_TRANSACTION_SCOPE_NOT_CALLED 0x8004E031 // The component made a call to EnterTransactionScope, but did not make a corresponding call to ExitTransactionScope before returning.
#define E_ACCESSDENIED 0x80070005 // General access denied error.
#define E_OUTOFMEMORY 0x8007000E // The server does not have enough memory for the new channel.
#define ERROR_NOT_SUPPORTED 0x80070032 // The server cannot support a client request for a dynamic virtual channel.
#define E_INVALIDARG 0x80070057 // One or more arguments are invalid.
#define ERROR_DISK_FULL 0x80070070 // There is not enough space on the disk.
#define CO_E_CLASS_CREATE_FAILED 0x80080001 // Attempt to create a class object failed.
#define CO_E_SCM_ERROR 0x80080002 // OLE service could not bind object.
#define CO_E_SCM_RPC_FAILURE 0x80080003 // RPC communication failed with OLE service.
#define CO_E_BAD_PATH 0x80080004 // Bad path to object.
#define CO_E_SERVER_EXEC_FAILURE 0x80080005 // Server execution failed.
#define CO_E_OBJSRV_RPC_FAILURE 0x80080006 // OLE service could not communicate with the object server.
#define MK_E_NO_NORMALIZED 0x80080007 // Moniker path could not be normalized.
#define CO_E_SERVER_STOPPING 0x80080008 // Object server is stopping when OLE service contacts it.
#define MEM_E_INVALID_ROOT 0x80080009 // An invalid root block pointer was specified.
#define MEM_E_INVALID_LINK 0x80080010 // An allocation chain contained an invalid link pointer.
#define MEM_E_INVALID_SIZE 0x80080011 // The requested allocation size was too large.
#define CO_E_MISSING_DISPLAYNAME 0x80080015 // The activation requires a display name to be present under the class identifier (CLSID) key.
#define CO_E_RUNAS_VALUE_MUST_BE_AAA 0x80080016 // The activation requires that the RunAs value for the application is Activate As Activator.
#define CO_E_ELEVATION_DISABLED 0x80080017 // The class is not configured to support elevated activation.
#define NTE_BAD_UID 0x80090001 // Bad UID.
#define NTE_BAD_HASH 0x80090002 // Bad hash.
#define NTE_BAD_KEY 0x80090003 // Bad key.
#define NTE_BAD_LEN 0x80090004 // Bad length.
#define NTE_BAD_DATA 0x80090005 // Bad data.
#define NTE_BAD_SIGNATURE 0x80090006 // Invalid signature.
#define NTE_BAD_VER 0x80090007 // Bad version of provider.
#define NTE_BAD_ALGID 0x80090008 // Invalid algorithm specified.
#define NTE_BAD_FLAGS 0x80090009 // Invalid flags specified.
#define NTE_BAD_TYPE 0x8009000A // Invalid type specified.
#define NTE_BAD_KEY_STATE 0x8009000B // Key not valid for use in specified state.
#define NTE_BAD_HASH_STATE 0x8009000C // Hash not valid for use in specified state.
#define NTE_NO_KEY 0x8009000D // Key does not exist.
#define NTE_NO_MEMORY 0x8009000E // Insufficient memory available for the operation.
#define NTE_EXISTS 0x8009000F // Object already exists.
#define NTE_PERM 0x80090010 // Access denied.
#define NTE_NOT_FOUND 0x80090011 // Object was not found.
#define NTE_DOUBLE_ENCRYPT 0x80090012 // Data already encrypted.
#define NTE_BAD_PROVIDER 0x80090013 // Invalid provider specified.
#define NTE_BAD_PROV_TYPE 0x80090014 // Invalid provider type specified.
#define NTE_BAD_PUBLIC_KEY 0x80090015 // Provider's public key is invalid.
#define NTE_BAD_KEYSET 0x80090016 // Key set does not exist.
#define NTE_PROV_TYPE_NOT_DEF 0x80090017 // Provider type not defined.
#define NTE_PROV_TYPE_ENTRY_BAD 0x80090018 // The provider type, as registered, is invalid.
#define NTE_KEYSET_NOT_DEF 0x80090019 // The key set is not defined.
#define NTE_KEYSET_ENTRY_BAD 0x8009001A // The key set, as registered, is invalid.
#define NTE_PROV_TYPE_NO_MATCH 0x8009001B // Provider type does not match registered value.
#define NTE_SIGNATURE_FILE_BAD 0x8009001C // The digital signature file is corrupt.
#define NTE_PROVIDER_DLL_FAIL 0x8009001D // Provider DLL failed to initialize correctly.
#define NTE_PROV_DLL_NOT_FOUND 0x8009001E // Provider DLL could not be found.
#define NTE_BAD_KEYSET_PARAM 0x8009001F // The keyset parameter is invalid.
#define NTE_FAIL 0x80090020 // An internal error occurred.
#define NTE_SYS_ERR 0x80090021 // A base error occurred.
#define NTE_SILENT_CONTEXT 0x80090022 // Provider could not perform the action because the context was acquired as silent.
#define NTE_TOKEN_KEYSET_STORAGE_FULL 0x80090023 // The security token does not have storage space available for an additional container.
#define NTE_TEMPORARY_PROFILE 0x80090024 // The profile for the user is a temporary profile.
#define NTE_FIXEDPARAMETER 0x80090025 // The key parameters could not be set because the configuration service provider (CSP) uses fixed parameters.
#define NTE_INVALID_HANDLE 0x80090026 // The supplied handle is invalid.
#define NTE_INVALID_PARAMETER 0x80090027 // The parameter is incorrect.
#define NTE_BUFFER_TOO_SMALL 0x80090028 // The buffer supplied to a function was too small.
#define NTE_NOT_SUPPORTED 0x80090029 // The requested operation is not supported.
#define NTE_NO_MORE_ITEMS 0x8009002A // No more data is available.
#define NTE_BUFFERS_OVERLAP 0x8009002B // The supplied buffers overlap incorrectly.
#define NTE_DECRYPTION_FAILURE 0x8009002C // The specified data could not be decrypted.
#define NTE_INTERNAL_ERROR 0x8009002D // An internal consistency check failed.
#define NTE_UI_REQUIRED 0x8009002E // This operation requires input from the user.
#define NTE_HMAC_NOT_SUPPORTED 0x8009002F // The cryptographic provider does not support Hash Message Authentication Code (HMAC).
#define SEC_E_INSUFFICIENT_MEMORY 0x80090300 // Not enough memory is available to complete this request.
#define SEC_E_INVALID_HANDLE 0x80090301 // The handle specified is invalid.
#define SEC_E_UNSUPPORTED_FUNCTION 0x80090302 // The function requested is not supported.
#define SEC_E_TARGET_UNKNOWN 0x80090303 // The specified target is unknown or unreachable.
#define SEC_E_INTERNAL_ERROR 0x80090304 // The Local Security Authority (LSA) cannot be contacted.
#define SEC_E_SECPKG_NOT_FOUND 0x80090305 // The requested security package does not exist.
#define SEC_E_NOT_OWNER 0x80090306 // The caller is not the owner of the desired credentials.
#define SEC_E_CANNOT_INSTALL 0x80090307 // The security package failed to initialize and cannot be installed.
#define SEC_E_INVALID_TOKEN 0x80090308 // The token supplied to the function is invalid.
#define SEC_E_CANNOT_PACK 0x80090309 // The security package is not able to marshal the logon buffer, so the logon attempt has failed.
#define SEC_E_QOP_NOT_SUPPORTED 0x8009030A // The per-message quality of protection is not supported by the security package.
#define SEC_E_NO_IMPERSONATION 0x8009030B // The security context does not allow impersonation of the client.
#define SEC_E_LOGON_DENIED 0x8009030C // The logon attempt failed.
#define SEC_E_UNKNOWN_CREDENTIALS 0x8009030D // The credentials supplied to the package were not recognized.
#define SEC_E_NO_CREDENTIALS 0x8009030E // No credentials are available in the security package.
#define SEC_E_MESSAGE_ALTERED 0x8009030F // The message or signature supplied for verification has been altered.
#define SEC_E_OUT_OF_SEQUENCE 0x80090310 // The message supplied for verification is out of sequence.
#define SEC_E_NO_AUTHENTICATING_AUTHORITY 0x80090311 // No authority could be contacted for authentication.
#define SEC_E_BAD_PKGID 0x80090316 // The requested security package does not exist.
#define SEC_E_CONTEXT_EXPIRED 0x80090317 // The context has expired and can no longer be used.
#define SEC_E_INCOMPLETE_MESSAGE 0x80090318 // The supplied message is incomplete. The signature was not verified.
#define SEC_E_INCOMPLETE_CREDENTIALS 0x80090320 // The credentials supplied were not complete and could not be verified. The context could not be initialized.
#define SEC_E_BUFFER_TOO_SMALL 0x80090321 // The buffers supplied to a function was too small.
#define SEC_E_WRONG_PRINCIPAL 0x80090322 // The target principal name is incorrect.
#define SEC_E_TIME_SKEW 0x80090324 // The clocks on the client and server machines are skewed.
#define SEC_E_UNTRUSTED_ROOT 0x80090325 // The certificate chain was issued by an authority that is not trusted.
#define SEC_E_ILLEGAL_MESSAGE 0x80090326 // The message received was unexpected or badly formatted.
#define SEC_E_CERT_UNKNOWN 0x80090327 // An unknown error occurred while processing the certificate.
#define SEC_E_CERT_EXPIRED 0x80090328 // The received certificate has expired.
#define SEC_E_ENCRYPT_FAILURE 0x80090329 // The specified data could not be encrypted.
#define SEC_E_DECRYPT_FAILURE 0x80090330 // The specified data could not be decrypted.
#define SEC_E_ALGORITHM_MISMATCH 0x80090331 // The client and server cannot communicate because they do not possess a common algorithm.
#define SEC_E_SECURITY_QOS_FAILED 0x80090332 // The security context could not be established due to a failure in the requested quality of service (for example, mutual authentication or delegation).
#define SEC_E_UNFINISHED_CONTEXT_DELETED 0x80090333 // A security context was deleted before the context was completed. This is considered a logon failure.
#define SEC_E_NO_TGT_REPLY 0x80090334 // The client is trying to negotiate a context and the server requires user-to-user but did not send a ticket granting ticket (TGT) reply.
#define SEC_E_NO_IP_ADDRESSES 0x80090335 // Unable to accomplish the requested task because the local machine does not have an IP addresses.
#define SEC_E_WRONG_CREDENTIAL_HANDLE 0x80090336 // The supplied credential handle does not match the credential associated with the security context.
#define SEC_E_CRYPTO_SYSTEM_INVALID 0x80090337 // The cryptographic system or checksum function is invalid because a required function is unavailable.
#define SEC_E_MAX_REFERRALS_EXCEEDED 0x80090338 // The number of maximum ticket referrals has been exceeded.
#define SEC_E_MUST_BE_KDC 0x80090339 // The local machine must be a Kerberos domain controller (KDC), and it is not.
#define SEC_E_STRONG_CRYPTO_NOT_SUPPORTED 0x8009033A // The other end of the security negotiation requires strong cryptographics, but it is not supported on the local machine.
#define SEC_E_TOO_MANY_PRINCIPALS 0x8009033B // The KDC reply contained more than one principal name.
#define SEC_E_NO_PA_DATA 0x8009033C // Expected to find PA data for a hint of what etype to use, but it was not found.
#define SEC_E_PKINIT_NAME_MISMATCH 0x8009033D // The client certificate does not contain a valid user principal name (UPN), or does not match the client name in the logon request. Contact your administrator.
#define SEC_E_SMARTCARD_LOGON_REQUIRED 0x8009033E // Smart card logon is required and was not used.
#define SEC_E_SHUTDOWN_IN_PROGRESS 0x8009033F // A system shutdown is in progress.
#define SEC_E_KDC_INVALID_REQUEST 0x80090340 // An invalid request was sent to the KDC.
#define SEC_E_KDC_UNABLE_TO_REFER 0x80090341 // The KDC was unable to generate a referral for the service requested.
#define SEC_E_KDC_UNKNOWN_ETYPE 0x80090342 // The encryption type requested is not supported by the KDC.
#define SEC_E_UNSUPPORTED_PREAUTH 0x80090343 // An unsupported pre-authentication mechanism was presented to the Kerberos package.
#define SEC_E_DELEGATION_REQUIRED 0x80090345 // The requested operation cannot be completed. The computer must be trusted for delegation, and the current user account must be configured to allow delegation.
#define SEC_E_BAD_BINDINGS 0x80090346 // Client's supplied Security Support Provider Interface (SSPI) channel bindings were incorrect.
#define SEC_E_MULTIPLE_ACCOUNTS 0x80090347 // The received certificate was mapped to multiple accounts.
#define SEC_E_NO_KERB_KEY 0x80090348 // No Kerberos key was found.
#define SEC_E_CERT_WRONG_USAGE 0x80090349 // The certificate is not valid for the requested usage.
#define SEC_E_DOWNGRADE_DETECTED 0x80090350 // The system detected a possible attempt to compromise security. Ensure that you can contact the server that authenticated you.
#define SEC_E_SMARTCARD_CERT_REVOKED 0x80090351 // The smart card certificate used for authentication has been revoked. Contact your system administrator. The event log might contain additional information.
#define SEC_E_ISSUING_CA_UNTRUSTED 0x80090352 // An untrusted certification authority (CA) was detected while processing the smart card certificate used for authentication. Contact your system administrator.
#define SEC_E_REVOCATION_OFFLINE_C 0x80090353 // The revocation status of the smart card certificate used for authentication could not be determined. Contact your system administrator.
#define SEC_E_PKINIT_CLIENT_FAILURE 0x80090354 // The smart card certificate used for authentication was not trusted. Contact your system administrator.
#define SEC_E_SMARTCARD_CERT_EXPIRED 0x80090355 // The smart card certificate used for authentication has expired. Contact your system administrator.
#define SEC_E_NO_S4U_PROT_SUPPORT 0x80090356 // The Kerberos subsystem encountered an error. A service for user protocol requests was made against a domain controller that does not support services for users.
#define SEC_E_CROSSREALM_DELEGATION_FAILURE 0x80090357 // An attempt was made by this server to make a Kerberos-constrained delegation request for a target outside the server's realm. This is not supported and indicates a misconfiguration on this server's allowed-to-delegate-to list. Contact your administrator.
#define SEC_E_REVOCATION_OFFLINE_KDC 0x80090358 // The revocation status of the domain controller certificate used for smart card authentication could not be determined. The system event log contains additional information. Contact your system administrator.
#define SEC_E_ISSUING_CA_UNTRUSTED_KDC 0x80090359 // An untrusted CA was detected while processing the domain controller certificate used for authentication. The system event log contains additional information. Contact your system administrator.
#define SEC_E_KDC_CERT_EXPIRED 0x8009035A // The domain controller certificate used for smart card logon has expired. Contact your system administrator with the contents of your system event log.
#define SEC_E_KDC_CERT_REVOKED 0x8009035B // The domain controller certificate used for smart card logon has been revoked. Contact your system administrator with the contents of your system event log.
#define SEC_E_INVALID_PARAMETER 0x8009035D // One or more of the parameters passed to the function were invalid.
#define SEC_E_DELEGATION_POLICY 0x8009035E // The client policy does not allow credential delegation to the target server.
#define SEC_E_POLICY_NLTM_ONLY 0x8009035F // The client policy does not allow credential delegation to the target server with NLTM only authentication.
#define CRYPT_E_MSG_ERROR 0x80091001 // An error occurred while performing an operation on a cryptographic message.
#define CRYPT_E_UNKNOWN_ALGO 0x80091002 // Unknown cryptographic algorithm.
#define CRYPT_E_OID_FORMAT 0x80091003 // The object identifier is poorly formatted.
#define CRYPT_E_INVALID_MSG_TYPE 0x80091004 // Invalid cryptographic message type.
#define CRYPT_E_UNEXPECTED_ENCODING 0x80091005 // Unexpected cryptographic message encoding.
#define CRYPT_E_AUTH_ATTR_MISSING 0x80091006 // The cryptographic message does not contain an expected authenticated attribute.
#define CRYPT_E_HASH_VALUE 0x80091007 // The hash value is not correct.
#define CRYPT_E_INVALID_INDEX 0x80091008 // The index value is not valid.
#define CRYPT_E_ALREADY_DECRYPTED 0x80091009 // The content of the cryptographic message has already been decrypted.
#define CRYPT_E_NOT_DECRYPTED 0x8009100A // The content of the cryptographic message has not been decrypted yet.
#define CRYPT_E_RECIPIENT_NOT_FOUND 0x8009100B // The enveloped-data message does not contain the specified recipient.
#define CRYPT_E_CONTROL_TYPE 0x8009100C // Invalid control type.
#define CRYPT_E_ISSUER_SERIALNUMBER 0x8009100D // Invalid issuer or serial number.
#define CRYPT_E_SIGNER_NOT_FOUND 0x8009100E // Cannot find the original signer.
#define CRYPT_E_ATTRIBUTES_MISSING 0x8009100F // The cryptographic message does not contain all of the requested attributes.
#define CRYPT_E_STREAM_MSG_NOT_READY 0x80091010 // The streamed cryptographic message is not ready to return data.
#define CRYPT_E_STREAM_INSUFFICIENT_DATA 0x80091011 // The streamed cryptographic message requires more data to complete the decode operation.
#define CRYPT_E_BAD_LEN 0x80092001 // The length specified for the output data was insufficient.
#define CRYPT_E_BAD_ENCODE 0x80092002 // An error occurred during the encode or decode operation.
#define CRYPT_E_FILE_ERROR 0x80092003 // An error occurred while reading or writing to a file.
#define CRYPT_E_NOT_FOUND 0x80092004 // Cannot find object or property.
#define CRYPT_E_EXISTS 0x80092005 // The object or property already exists.
#define CRYPT_E_NO_PROVIDER 0x80092006 // No provider was specified for the store or object.
#define CRYPT_E_SELF_SIGNED 0x80092007 // The specified certificate is self-signed.
#define CRYPT_E_DELETED_PREV 0x80092008 // The previous certificate or certificate revocation list (CRL) context was deleted.
#define CRYPT_E_NO_MATCH 0x80092009 // Cannot find the requested object.
#define CRYPT_E_UNEXPECTED_MSG_TYPE 0x8009200A // The certificate does not have a property that references a private key.
#define CRYPT_E_NO_KEY_PROPERTY 0x8009200B // Cannot find the certificate and private key for decryption.
#define CRYPT_E_NO_DECRYPT_CERT 0x8009200C // Cannot find the certificate and private key to use for decryption.
#define CRYPT_E_BAD_MSG 0x8009200D // Not a cryptographic message or the cryptographic message is not formatted correctly.
#define CRYPT_E_NO_SIGNER 0x8009200E // The signed cryptographic message does not have a signer for the specified signer index.
#define CRYPT_E_PENDING_CLOSE 0x8009200F // Final closure is pending until additional frees or closes.
#define CRYPT_E_REVOKED 0x80092010 // The certificate is revoked.
#define CRYPT_E_NO_REVOCATION_DLL 0x80092011 // No DLL or exported function was found to verify revocation.
#define CRYPT_E_NO_REVOCATION_CHECK 0x80092012 // The revocation function was unable to check revocation for the certificate.
#define CRYPT_E_REVOCATION_OFFLINE 0x80092013 // The revocation function was unable to check revocation because the revocation server was offline.
#define CRYPT_E_NOT_IN_REVOCATION_DATABASE 0x80092014 // The certificate is not in the revocation server's database.
#define CRYPT_E_INVALID_NUMERIC_STRING 0x80092020 // The string contains a non-numeric character.
#define CRYPT_E_INVALID_PRINTABLE_STRING 0x80092021 // The string contains a nonprintable character.
#define CRYPT_E_INVALID_IA5_STRING 0x80092022 // The string contains a character not in the 7-bit ASCII character set.
#define CRYPT_E_INVALID_X500_STRING 0x80092023 // The string contains an invalid X500 name attribute key, object identifier (OID), value, or delimiter.
#define CRYPT_E_NOT_CHAR_STRING 0x80092024 // The dwValueType for the CERT_NAME_VALUE is not one of the character strings. Most likely it is either a CERT_RDN_ENCODED_BLOB or CERT_TDN_OCTED_STRING.
#define CRYPT_E_FILERESIZED 0x80092025 // The Put operation cannot continue. The file needs to be resized. However, there is already a signature present. A complete signing operation must be done.
#define CRYPT_E_SECURITY_SETTINGS 0x80092026 // The cryptographic operation failed due to a local security option setting.
#define CRYPT_E_NO_VERIFY_USAGE_DLL 0x80092027 // No DLL or exported function was found to verify subject usage.
#define CRYPT_E_NO_VERIFY_USAGE_CHECK 0x80092028 // The called function was unable to perform a usage check on the subject.
#define CRYPT_E_VERIFY_USAGE_OFFLINE 0x80092029 // The called function was unable to complete the usage check because the server was offline.
#define CRYPT_E_NOT_IN_CTL 0x8009202A // The subject was not found in a certificate trust list (CTL).
#define CRYPT_E_NO_TRUSTED_SIGNER 0x8009202B // None of the signers of the cryptographic message or certificate trust list is trusted.
#define CRYPT_E_MISSING_PUBKEY_PARA 0x8009202C // The public key's algorithm parameters are missing.
#define CRYPT_E_OSS_ERROR 0x80093000 // OSS Certificate encode/decode error code base.
#define OSS_MORE_BUF 0x80093001 // OSS ASN.1 Error: Output Buffer is too small.
#define OSS_NEGATIVE_UINTEGER 0x80093002 // OSS ASN.1 Error: Signed integer is encoded as a unsigned integer.
#define OSS_PDU_RANGE 0x80093003 // OSS ASN.1 Error: Unknown ASN.1 data type.
#define OSS_MORE_INPUT 0x80093004 // OSS ASN.1 Error: Output buffer is too small; the decoded data has been truncated.
#define OSS_DATA_ERROR 0x80093005 // OSS ASN.1 Error: Invalid data.
#define OSS_BAD_ARG 0x80093006 // OSS ASN.1 Error: Invalid argument.
#define OSS_BAD_VERSION 0x80093007 // OSS ASN.1 Error: Encode/Decode version mismatch.
#define OSS_OUT_MEMORY 0x80093008 // OSS ASN.1 Error: Out of memory.
#define OSS_PDU_MISMATCH 0x80093009 // OSS ASN.1 Error: Encode/Decode error.
#define OSS_LIMITED 0x8009300A // OSS ASN.1 Error: Internal error.
#define OSS_BAD_PTR 0x8009300B // OSS ASN.1 Error: Invalid data.
#define OSS_BAD_TIME 0x8009300C // OSS ASN.1 Error: Invalid data.
#define OSS_INDEFINITE_NOT_SUPPORTED 0x8009300D // OSS ASN.1 Error: Unsupported BER indefinite-length encoding.
#define OSS_MEM_ERROR 0x8009300E // OSS ASN.1 Error: Access violation.
#define OSS_BAD_TABLE 0x8009300F // OSS ASN.1 Error: Invalid data.
#define OSS_TOO_LONG 0x80093010 // OSS ASN.1 Error: Invalid data.
#define OSS_CONSTRAINT_VIOLATED 0x80093011 // OSS ASN.1 Error: Invalid data.
#define OSS_FATAL_ERROR 0x80093012 // OSS ASN.1 Error: Internal error.
#define OSS_ACCESS_SERIALIZATION_ERROR 0x80093013 // OSS ASN.1 Error: Multithreading conflict.
#define OSS_NULL_TBL 0x80093014 // OSS ASN.1 Error: Invalid data.
#define OSS_NULL_FCN 0x80093015 // OSS ASN.1 Error: Invalid data.
#define OSS_BAD_ENCRULES 0x80093016 // OSS ASN.1 Error: Invalid data.
#define OSS_UNAVAIL_ENCRULES 0x80093017 // OSS ASN.1 Error: Encode/Decode function not implemented.
#define OSS_CANT_OPEN_TRACE_WINDOW 0x80093018 // OSS ASN.1 Error: Trace file error.
#define OSS_UNIMPLEMENTED 0x80093019 // OSS ASN.1 Error: Function not implemented.
#define OSS_OID_DLL_NOT_LINKED 0x8009301A // OSS ASN.1 Error: Program link error.
#define OSS_CANT_OPEN_TRACE_FILE 0x8009301B // OSS ASN.1 Error: Trace file error.
#define OSS_TRACE_FILE_ALREADY_OPEN 0x8009301C // OSS ASN.1 Error: Trace file error.
#define OSS_TABLE_MISMATCH 0x8009301D // OSS ASN.1 Error: Invalid data.
#define OSS_TYPE_NOT_SUPPORTED 0x8009301E // OSS ASN.1 Error: Invalid data.
#define OSS_REAL_DLL_NOT_LINKED 0x8009301F // OSS ASN.1 Error: Program link error.
#define OSS_REAL_CODE_NOT_LINKED 0x80093020 // OSS ASN.1 Error: Program link error.
#define OSS_OUT_OF_RANGE 0x80093021 // OSS ASN.1 Error: Program link error.
#define OSS_COPIER_DLL_NOT_LINKED 0x80093022 // OSS ASN.1 Error: Program link error.
#define OSS_CONSTRAINT_DLL_NOT_LINKED 0x80093023 // OSS ASN.1 Error: Program link error.
#define OSS_COMPARATOR_DLL_NOT_LINKED 0x80093024 // OSS ASN.1 Error: Program link error.
#define OSS_COMPARATOR_CODE_NOT_LINKED 0x80093025 // OSS ASN.1 Error: Program link error.
#define OSS_MEM_MGR_DLL_NOT_LINKED 0x80093026 // OSS ASN.1 Error: Program link error.
#define OSS_PDV_DLL_NOT_LINKED 0x80093027 // OSS ASN.1 Error: Program link error.
#define OSS_PDV_CODE_NOT_LINKED 0x80093028 // OSS ASN.1 Error: Program link error.
#define OSS_API_DLL_NOT_LINKED 0x80093029 // OSS ASN.1 Error: Program link error.
#define OSS_BERDER_DLL_NOT_LINKED 0x8009302A // OSS ASN.1 Error: Program link error.
#define OSS_PER_DLL_NOT_LINKED 0x8009302B // OSS ASN.1 Error: Program link error.
#define OSS_OPEN_TYPE_ERROR 0x8009302C // OSS ASN.1 Error: Program link error.
#define OSS_MUTEX_NOT_CREATED 0x8009302D // OSS ASN.1 Error: System resource error.
#define OSS_CANT_CLOSE_TRACE_FILE 0x8009302E // OSS ASN.1 Error: Trace file error.
#define CRYPT_E_ASN1_ERROR 0x80093100 // ASN1 Certificate encode/decode error code base.
#define CRYPT_E_ASN1_INTERNAL 0x80093101 // ASN1 internal encode or decode error.
#define CRYPT_E_ASN1_EOD 0x80093102 // ASN1 unexpected end of data.
#define CRYPT_E_ASN1_CORRUPT 0x80093103 // ASN1 corrupted data.
#define CRYPT_E_ASN1_LARGE 0x80093104 // ASN1 value too large.
#define CRYPT_E_ASN1_CONSTRAINT 0x80093105 // ASN1 constraint violated.
#define CRYPT_E_ASN1_MEMORY 0x80093106 // ASN1 out of memory.
#define CRYPT_E_ASN1_OVERFLOW 0x80093107 // ASN1 buffer overflow.
#define CRYPT_E_ASN1_BADPDU 0x80093108 // ASN1 function not supported for this protocol data unit (PDU).
#define CRYPT_E_ASN1_BADARGS 0x80093109 // ASN1 bad arguments to function call.
#define CRYPT_E_ASN1_BADREAL 0x8009310A // ASN1 bad real value.
#define CRYPT_E_ASN1_BADTAG 0x8009310B // ASN1 bad tag value met.
#define CRYPT_E_ASN1_CHOICE 0x8009310C // ASN1 bad choice value.
#define CRYPT_E_ASN1_RULE 0x8009310D // ASN1 bad encoding rule.
#define CRYPT_E_ASN1_UTF8 0x8009310E // ASN1 bad Unicode (UTF8).
#define CRYPT_E_ASN1_PDU_TYPE 0x80093133 // ASN1 bad PDU type.
#define CRYPT_E_ASN1_NYI 0x80093134 // ASN1 not yet implemented.
#define CRYPT_E_ASN1_EXTENDED 0x80093201 // ASN1 skipped unknown extensions.
#define CRYPT_E_ASN1_NOEOD 0x80093202 // ASN1 end of data expected.
#define CERTSRV_E_BAD_REQUESTSUBJECT 0x80094001 // The request subject name is invalid or too long.
#define CERTSRV_E_NO_REQUEST 0x80094002 // The request does not exist.
#define CERTSRV_E_BAD_REQUESTSTATUS 0x80094003 // The request's current status does not allow this operation.
#define CERTSRV_E_PROPERTY_EMPTY 0x80094004 // The requested property value is empty.
#define CERTSRV_E_INVALID_CA_CERTIFICATE 0x80094005 // The CA's certificate contains invalid data.
#define CERTSRV_E_SERVER_SUSPENDED 0x80094006 // Certificate service has been suspended for a database restore operation.
#define CERTSRV_E_ENCODING_LENGTH 0x80094007 // The certificate contains an encoded length that is potentially incompatible with older enrollment software.
#define CERTSRV_E_ROLECONFLICT 0x80094008 // The operation is denied. The user has multiple roles assigned, and the CA is configured to enforce role separation.
#define CERTSRV_E_RESTRICTEDOFFICER 0x80094009 // The operation is denied. It can only be performed by a certificate manager that is allowed to manage certificates for the current requester.
#define CERTSRV_E_KEY_ARCHIVAL_NOT_CONFIGURED 0x8009400A // Cannot archive private key. The CA is not configured for key archival.
#define CERTSRV_E_NO_VALID_KRA 0x8009400B // Cannot archive private key. The CA could not verify one or more key recovery certificates.
#define CERTSRV_E_BAD_REQUEST_KEY_ARCHIVAL 0x8009400C // The request is incorrectly formatted. The encrypted private key must be in an unauthenticated attribute in an outermost signature.
#define CERTSRV_E_NO_CAADMIN_DEFINED 0x8009400D // At least one security principal must have the permission to manage this CA.
#define CERTSRV_E_BAD_RENEWAL_CERT_ATTRIBUTE 0x8009400E // The request contains an invalid renewal certificate attribute.
#define CERTSRV_E_NO_DB_SESSIONS 0x8009400F // An attempt was made to open a CA database session, but there are already too many active sessions. The server needs to be configured to allow additional sessions.
#define CERTSRV_E_ALIGNMENT_FAULT 0x80094010 // A memory reference caused a data alignment fault.
#define CERTSRV_E_ENROLL_DENIED 0x80094011 // The permissions on this CA do not allow the current user to enroll for certificates.
#define CERTSRV_E_TEMPLATE_DENIED 0x80094012 // The permissions on the certificate template do not allow the current user to enroll for this type of certificate.
#define CERTSRV_E_DOWNLEVEL_DC_SSL_OR_UPGRADE 0x80094013 // The contacted domain controller cannot support signed Lightweight Directory Access Protocol (LDAP) traffic. Update the domain controller or configure Certificate Services to use SSL for Active Directory access.
#define CERTSRV_E_UNSUPPORTED_CERT_TYPE 0x80094800 // The requested certificate template is not supported by this CA.
#define CERTSRV_E_NO_CERT_TYPE 0x80094801 // The request contains no certificate template information.
#define CERTSRV_E_TEMPLATE_CONFLICT 0x80094802 // The request contains conflicting template information.
#define CERTSRV_E_SUBJECT_ALT_NAME_REQUIRED 0x80094803 // The request is missing a required Subject Alternate name extension.
#define CERTSRV_E_ARCHIVED_KEY_REQUIRED 0x80094804 // The request is missing a required private key for archival by the server.
#define CERTSRV_E_SMIME_REQUIRED 0x80094805 // The request is missing a required SMIME capabilities extension.
#define CERTSRV_E_BAD_RENEWAL_SUBJECT 0x80094806 // The request was made on behalf of a subject other than the caller. The certificate template must be configured to require at least one signature to authorize the request.
#define CERTSRV_E_BAD_TEMPLATE_VERSION 0x80094807 // The request template version is newer than the supported template version.
#define CERTSRV_E_TEMPLATE_POLICY_REQUIRED 0x80094808 // The template is missing a required signature policy attribute.
#define CERTSRV_E_SIGNATURE_POLICY_REQUIRED 0x80094809 // The request is missing required signature policy information.
#define CERTSRV_E_SIGNATURE_COUNT 0x8009480A // The request is missing one or more required signatures.
#define CERTSRV_E_SIGNATURE_REJECTED 0x8009480B // One or more signatures did not include the required application or issuance policies. The request is missing one or more required valid signatures.
#define CERTSRV_E_ISSUANCE_POLICY_REQUIRED 0x8009480C // The request is missing one or more required signature issuance policies.
#define CERTSRV_E_SUBJECT_UPN_REQUIRED 0x8009480D // The UPN is unavailable and cannot be added to the Subject Alternate name.
#define CERTSRV_E_SUBJECT_DIRECTORY_GUID_REQUIRED 0x8009480E // The Active Directory GUID is unavailable and cannot be added to the Subject Alternate name.
#define CERTSRV_E_SUBJECT_DNS_REQUIRED 0x8009480F // The Domain Name System (DNS) name is unavailable and cannot be added to the Subject Alternate name.
#define CERTSRV_E_ARCHIVED_KEY_UNEXPECTED 0x80094810 // The request includes a private key for archival by the server, but key archival is not enabled for the specified certificate template.
#define CERTSRV_E_KEY_LENGTH 0x80094811 // The public key does not meet the minimum size required by the specified certificate template.
#define CERTSRV_E_SUBJECT_EMAIL_REQUIRED 0x80094812 // The email name is unavailable and cannot be added to the Subject or Subject Alternate name.
#define CERTSRV_E_UNKNOWN_CERT_TYPE 0x80094813 // One or more certificate templates to be enabled on this CA could not be found.
#define CERTSRV_E_CERT_TYPE_OVERLAP 0x80094814 // The certificate template renewal period is longer than the certificate validity period. The template should be reconfigured or the CA certificate renewed.
#define CERTSRV_E_TOO_MANY_SIGNATURES 0x80094815 // The certificate template requires too many return authorization (RA) signatures. Only one RA signature is allowed.
#define CERTSRV_E_RENEWAL_BAD_PUBLIC_KEY 0x80094816 // The key used in a renewal request does not match one of the certificates being renewed.
#define CERTSRV_E_INVALID_EK 0x80094817 // The endorsement key certificate is not valid.
#define CERTSRV_E_KEY_ATTESTATION 0x8009481A // Key attestation did not succeed.
#define XENROLL_E_KEY_NOT_EXPORTABLE 0x80095000 // The key is not exportable.
#define XENROLL_E_CANNOT_ADD_ROOT_CERT 0x80095001 // You cannot add the root CA certificate into your local store.
#define XENROLL_E_RESPONSE_KA_HASH_NOT_FOUND 0x80095002 // The key archival hash attribute was not found in the response.
#define XENROLL_E_RESPONSE_UNEXPECTED_KA_HASH 0x80095003 // An unexpected key archival hash attribute was found in the response.
#define XENROLL_E_RESPONSE_KA_HASH_MISMATCH 0x80095004 // There is a key archival hash mismatch between the request and the response.
#define XENROLL_E_KEYSPEC_SMIME_MISMATCH 0x80095005 // Signing certificate cannot include SMIME extension.
#define TRUST_E_SYSTEM_ERROR 0x80096001 // A system-level error occurred while verifying trust.
#define TRUST_E_NO_SIGNER_CERT 0x80096002 // The certificate for the signer of the message is invalid or not found.
#define TRUST_E_COUNTER_SIGNER 0x80096003 // One of the counter signatures was invalid.
#define TRUST_E_CERT_SIGNATURE 0x80096004 // The signature of the certificate cannot be verified.
#define TRUST_E_TIME_STAMP 0x80096005 // The time-stamp signature or certificate could not be verified or is malformed.
#define TRUST_E_BAD_DIGEST 0x80096010 // The digital signature of the object did not verify.
#define TRUST_E_BASIC_CONSTRAINTS 0x80096019 // A certificate's basic constraint extension has not been observed.
#define TRUST_E_FINANCIAL_CRITERIA 0x8009601E // The certificate does not meet or contain the Authenticode financial extensions.
#define MSSIPOTF_E_OUTOFMEMRANGE 0x80097001 // Tried to reference a part of the file outside the proper range.
#define MSSIPOTF_E_CANTGETOBJECT 0x80097002 // Could not retrieve an object from the file.
#define MSSIPOTF_E_NOHEADTABLE 0x80097003 // Could not find the head table in the file.
#define MSSIPOTF_E_BAD_MAGICNUMBER 0x80097004 // The magic number in the head table is incorrect.
#define MSSIPOTF_E_BAD_OFFSET_TABLE 0x80097005 // The offset table has incorrect values.
#define MSSIPOTF_E_TABLE_TAGORDER 0x80097006 // Duplicate table tags or the tags are out of alphabetical order.
#define MSSIPOTF_E_TABLE_LONGWORD 0x80097007 // A table does not start on a long word boundary.
#define MSSIPOTF_E_BAD_FIRST_TABLE_PLACEMENT 0x80097008 // First table does not appear after header information.
#define MSSIPOTF_E_TABLES_OVERLAP 0x80097009 // Two or more tables overlap.
#define MSSIPOTF_E_TABLE_PADBYTES 0x8009700A // Too many pad bytes between tables, or pad bytes are not 0.
#define MSSIPOTF_E_FILETOOSMALL 0x8009700B // File is too small to contain the last table.
#define MSSIPOTF_E_TABLE_CHECKSUM 0x8009700C // A table checksum is incorrect.
#define MSSIPOTF_E_FILE_CHECKSUM 0x8009700D // The file checksum is incorrect.
#define MSSIPOTF_E_FAILED_POLICY 0x80097010 // The signature does not have the correct attributes for the policy.
#define MSSIPOTF_E_FAILED_HINTS_CHECK 0x80097011 // The file did not pass the hints check.
#define MSSIPOTF_E_NOT_OPENTYPE 0x80097012 // The file is not an OpenType file.
#define MSSIPOTF_E_FILE 0x80097013 // Failed on a file operation (such as open, map, read, or write).
#define MSSIPOTF_E_CRYPT 0x80097014 // A call to a CryptoAPI function failed.
#define MSSIPOTF_E_BADVERSION 0x80097015 // There is a bad version number in the file.
#define MSSIPOTF_E_DSIG_STRUCTURE 0x80097016 // The structure of the DSIG table is incorrect.
#define MSSIPOTF_E_PCONST_CHECK 0x80097017 // A check failed in a partially constant table.
#define MSSIPOTF_E_STRUCTURE 0x80097018 // Some kind of structural error.
#define ERROR_CRED_REQUIRES_CONFIRMATION 0x80097019 // The requested credential requires confirmation.
#define TRUST_E_PROVIDER_UNKNOWN 0x800B0001 // Unknown trust provider.
#define TRUST_E_ACTION_UNKNOWN 0x800B0002 // The trust verification action specified is not supported by the specified trust provider.
#define TRUST_E_SUBJECT_FORM_UNKNOWN 0x800B0003 // The form specified for the subject is not one supported or known by the specified trust provider.
#define TRUST_E_SUBJECT_NOT_TRUSTED 0x800B0004 // The subject is not trusted for the specified action.
#define DIGSIG_E_ENCODE 0x800B0005 // Error due to problem in ASN.1 encoding process.
#define DIGSIG_E_DECODE 0x800B0006 // Error due to problem in ASN.1 decoding process.
#define DIGSIG_E_EXTENSIBILITY 0x800B0007 // Reading/writing extensions where attributes are appropriate, and vice versa.
#define DIGSIG_E_CRYPTO 0x800B0008 // Unspecified cryptographic failure.
#define PERSIST_E_SIZEDEFINITE 0x800B0009 // The size of the data could not be determined.
#define PERSIST_E_SIZEINDEFINITE 0x800B000A // The size of the indefinite-sized data could not be determined.
#define PERSIST_E_NOTSELFSIZING 0x800B000B // This object does not read and write self-sizing data.
#define TRUST_E_NOSIGNATURE 0x800B0100 // No signature was present in the subject.
#define CERT_E_EXPIRED 0x800B0101 // A required certificate is not within its validity period when verifying against the current system clock or the time stamp in the signed file.
#define CERT_E_VALIDITYPERIODNESTING 0x800B0102 // The validity periods of the certification chain do not nest correctly.
#define CERT_E_ROLE 0x800B0103 // A certificate that can only be used as an end entity is being used as a CA or vice versa.
#define CERT_E_PATHLENCONST 0x800B0104 // A path length constraint in the certification chain has been violated.
#define CERT_E_CRITICAL 0x800B0105 // A certificate contains an unknown extension that is marked "critical".
#define CERT_E_PURPOSE 0x800B0106 // A certificate is being used for a purpose other than the ones specified by its CA.
#define CERT_E_ISSUERCHAINING 0x800B0107 // A parent of a given certificate did not issue that child certificate.
#define CERT_E_MALFORMED 0x800B0108 // A certificate is missing or has an empty value for an important field, such as a subject or issuer name.
#define CERT_E_UNTRUSTEDROOT 0x800B0109 // A certificate chain processed, but terminated in a root certificate that is not trusted by the trust provider.
#define CERT_E_CHAINING 0x800B010A // A certificate chain could not be built to a trusted root authority.
#define TRUST_E_FAIL 0x800B010B // Generic trust failure.
#define CERT_E_REVOKED 0x800B010C // A certificate was explicitly revoked by its issuer.
#define CERT_E_UNTRUSTEDTESTROOT 0x800B010D // The certification path terminates with the test root that is not trusted with the current policy settings.
#define CERT_E_REVOCATION_FAILURE 0x800B010E // The revocation process could not continue—the certificates could not be checked.
#define CERT_E_CN_NO_MATCH 0x800B010F // The certificate's CN name does not match the passed value.
#define CERT_E_WRONG_USAGE 0x800B0110 // The certificate is not valid for the requested usage.
#define TRUST_E_EXPLICIT_DISTRUST 0x800B0111 // The certificate was explicitly marked as untrusted by the user.
#define CERT_E_UNTRUSTEDCA 0x800B0112 // A certification chain processed correctly, but one of the CA certificates is not trusted by the policy provider.
#define CERT_E_INVALID_POLICY 0x800B0113 // The certificate has invalid policy.
#define CERT_E_INVALID_NAME 0x800B0114 // The certificate has an invalid name. The name is not included in the permitted list or is explicitly excluded.
#define NS_W_SERVER_BANDWIDTH_LIMIT 0x800D0003 // The maximum filebitrate value specified is greater than the server's configured maximum bandwidth.
#define NS_W_FILE_BANDWIDTH_LIMIT 0x800D0004 // The maximum bandwidth value specified is less than the maximum filebitrate.
#define NS_W_UNKNOWN_EVENT 0x800D0060 // Unknown %1 event encountered.
#define NS_I_CATATONIC_FAILURE 0x800D0199 // Disk %1 ( %2 ) on Content Server %3, will be failed because it is catatonic.
#define NS_I_CATATONIC_AUTO_UNFAIL 0x800D019A // Disk %1 ( %2 ) on Content Server %3, auto online from catatonic state.
#define SPAPI_E_EXPECTED_SECTION_NAME 0x800F0000 // A non-empty line was encountered in the INF before the start of a section.
#define SPAPI_E_BAD_SECTION_NAME_LINE 0x800F0001 // A section name marker in the information file (INF) is not complete or does not exist on a line by itself.
#define SPAPI_E_SECTION_NAME_TOO_LONG 0x800F0002 // An INF section was encountered whose name exceeds the maximum section name length.
#define SPAPI_E_GENERAL_SYNTAX 0x800F0003 // The syntax of the INF is invalid.
#define SPAPI_E_WRONG_INF_STYLE 0x800F0100 // The style of the INF is different than what was requested.
#define SPAPI_E_SECTION_NOT_FOUND 0x800F0101 // The required section was not found in the INF.
#define SPAPI_E_LINE_NOT_FOUND 0x800F0102 // The required line was not found in the INF.
#define SPAPI_E_NO_BACKUP 0x800F0103 // The files affected by the installation of this file queue have not been backed up for uninstall.
#define SPAPI_E_NO_ASSOCIATED_CLASS 0x800F0200 // The INF or the device information set or element does not have an associated install class.
#define SPAPI_E_CLASS_MISMATCH 0x800F0201 // The INF or the device information set or element does not match the specified install class.
#define SPAPI_E_DUPLICATE_FOUND 0x800F0202 // An existing device was found that is a duplicate of the device being manually installed.
#define SPAPI_E_NO_DRIVER_SELECTED 0x800F0203 // There is no driver selected for the device information set or element.
#define SPAPI_E_KEY_DOES_NOT_EXIST 0x800F0204 // The requested device registry key does not exist.
#define SPAPI_E_INVALID_DEVINST_NAME 0x800F0205 // The device instance name is invalid.
#define SPAPI_E_INVALID_CLASS 0x800F0206 // The install class is not present or is invalid.
#define SPAPI_E_DEVINST_ALREADY_EXISTS 0x800F0207 // The device instance cannot be created because it already exists.
#define SPAPI_E_DEVINFO_NOT_REGISTERED 0x800F0208 // The operation cannot be performed on a device information element that has not been registered.
#define SPAPI_E_INVALID_REG_PROPERTY 0x800F0209 // The device property code is invalid.
#define SPAPI_E_NO_INF 0x800F020A // The INF from which a driver list is to be built does not exist.
#define SPAPI_E_NO_SUCH_DEVINST 0x800F020B // The device instance does not exist in the hardware tree.
#define SPAPI_E_CANT_LOAD_CLASS_ICON 0x800F020C // The icon representing this install class cannot be loaded.
#define SPAPI_E_INVALID_CLASS_INSTALLER 0x800F020D // The class installer registry entry is invalid.
#define SPAPI_E_DI_DO_DEFAULT 0x800F020E // The class installer has indicated that the default action should be performed for this installation request.
#define SPAPI_E_DI_NOFILECOPY 0x800F020F // The operation does not require any files to be copied.
#define SPAPI_E_INVALID_HWPROFILE 0x800F0210 // The specified hardware profile does not exist.
#define SPAPI_E_NO_DEVICE_SELECTED 0x800F0211 // There is no device information element currently selected for this device information set.
#define SPAPI_E_DEVINFO_LIST_LOCKED 0x800F0212 // The operation cannot be performed because the device information set is locked.
#define SPAPI_E_DEVINFO_DATA_LOCKED 0x800F0213 // The operation cannot be performed because the device information element is locked.
#define SPAPI_E_DI_BAD_PATH 0x800F0214 // The specified path does not contain any applicable device INFs.
#define SPAPI_E_NO_CLASSINSTALL_PARAMS 0x800F0215 // No class installer parameters have been set for the device information set or element.
#define SPAPI_E_FILEQUEUE_LOCKED 0x800F0216 // The operation cannot be performed because the file queue is locked.
#define SPAPI_E_BAD_SERVICE_INSTALLSECT 0x800F0217 // A service installation section in this INF is invalid.
#define SPAPI_E_NO_CLASS_DRIVER_LIST 0x800F0218 // There is no class driver list for the device information element.
#define SPAPI_E_NO_ASSOCIATED_SERVICE 0x800F0219 // The installation failed because a function driver was not specified for this device instance.
#define SPAPI_E_NO_DEFAULT_DEVICE_INTERFACE 0x800F021A // There is presently no default device interface designated for this interface class.
#define SPAPI_E_DEVICE_INTERFACE_ACTIVE 0x800F021B // The operation cannot be performed because the device interface is currently active.
#define SPAPI_E_DEVICE_INTERFACE_REMOVED 0x800F021C // The operation cannot be performed because the device interface has been removed from the system.
#define SPAPI_E_BAD_INTERFACE_INSTALLSECT 0x800F021D // An interface installation section in this INF is invalid.
#define SPAPI_E_NO_SUCH_INTERFACE_CLASS 0x800F021E // This interface class does not exist in the system.
#define SPAPI_E_INVALID_REFERENCE_STRING 0x800F021F // The reference string supplied for this interface device is invalid.
#define SPAPI_E_INVALID_MACHINENAME 0x800F0220 // The specified machine name does not conform to Universal Naming Convention (UNCs).
#define SPAPI_E_REMOTE_COMM_FAILURE 0x800F0221 // A general remote communication error occurred.
#define SPAPI_E_MACHINE_UNAVAILABLE 0x800F0222 // The machine selected for remote communication is not available at this time.
#define SPAPI_E_NO_CONFIGMGR_SERVICES 0x800F0223 // The Plug and Play service is not available on the remote machine.
#define SPAPI_E_INVALID_PROPPAGE_PROVIDER 0x800F0224 // The property page provider registry entry is invalid.
#define SPAPI_E_NO_SUCH_DEVICE_INTERFACE 0x800F0225 // The requested device interface is not present in the system.
#define SPAPI_E_DI_POSTPROCESSING_REQUIRED 0x800F0226 // The device's co-installer has additional work to perform after installation is complete.
#define SPAPI_E_INVALID_COINSTALLER 0x800F0227 // The device's co-installer is invalid.
#define SPAPI_E_NO_COMPAT_DRIVERS 0x800F0228 // There are no compatible drivers for this device.
#define SPAPI_E_NO_DEVICE_ICON 0x800F0229 // There is no icon that represents this device or device type.
#define SPAPI_E_INVALID_INF_LOGCONFIG 0x800F022A // A logical configuration specified in this INF is invalid.
#define SPAPI_E_DI_DONT_INSTALL 0x800F022B // The class installer has denied the request to install or upgrade this device.
#define SPAPI_E_INVALID_FILTER_DRIVER 0x800F022C // One of the filter drivers installed for this device is invalid.
#define SPAPI_E_NON_WINDOWS_NT_DRIVER 0x800F022D // The driver selected for this device does not support Windows XP operating system.
#define SPAPI_E_NON_WINDOWS_DRIVER 0x800F022E // The driver selected for this device does not support Windows.
#define SPAPI_E_NO_CATALOG_FOR_OEM_INF 0x800F022F // The third-party INF does not contain digital signature information.
#define SPAPI_E_DEVINSTALL_QUEUE_NONNATIVE 0x800F0230 // An invalid attempt was made to use a device installation file queue for verification of digital signatures relative to other platforms.
#define SPAPI_E_NOT_DISABLEABLE 0x800F0231 // The device cannot be disabled.
#define SPAPI_E_CANT_REMOVE_DEVINST 0x800F0232 // The device could not be dynamically removed.
#define SPAPI_E_INVALID_TARGET 0x800F0233 // Cannot copy to specified target.
#define SPAPI_E_DRIVER_NONNATIVE 0x800F0234 // Driver is not intended for this platform.
#define SPAPI_E_IN_WOW64 0x800F0235 // Operation not allowed in WOW64.
#define SPAPI_E_SET_SYSTEM_RESTORE_POINT 0x800F0236 // The operation involving unsigned file copying was rolled back, so that a system restore point could be set.
#define SPAPI_E_INCORRECTLY_COPIED_INF 0x800F0237 // An INF was copied into the Windows INF directory in an improper manner.
#define SPAPI_E_SCE_DISABLED 0x800F0238 // The Security Configuration Editor (SCE) APIs have been disabled on this embedded product.
#define SPAPI_E_UNKNOWN_EXCEPTION 0x800F0239 // An unknown exception was encountered.
#define SPAPI_E_PNP_REGISTRY_ERROR 0x800F023A // A problem was encountered when accessing the Plug and Play registry database.
#define SPAPI_E_REMOTE_REQUEST_UNSUPPORTED 0x800F023B // The requested operation is not supported for a remote machine.
#define SPAPI_E_NOT_AN_INSTALLED_OEM_INF 0x800F023C // The specified file is not an installed original equipment manufacturer (OEM) INF.
#define SPAPI_E_INF_IN_USE_BY_DEVICES 0x800F023D // One or more devices are presently installed using the specified INF.
#define SPAPI_E_DI_FUNCTION_OBSOLETE 0x800F023E // The requested device install operation is obsolete.
#define SPAPI_E_NO_AUTHENTICODE_CATALOG 0x800F023F // A file could not be verified because it does not have an associated catalog signed via Authenticode.
#define SPAPI_E_AUTHENTICODE_DISALLOWED 0x800F0240 // Authenticode signature verification is not supported for the specified INF.
#define SPAPI_E_AUTHENTICODE_TRUSTED_PUBLISHER 0x800F0241 // The INF was signed with an Authenticode catalog from a trusted publisher.
#define SPAPI_E_AUTHENTICODE_TRUST_NOT_ESTABLISHED 0x800F0242 // The publisher of an Authenticode-signed catalog has not yet been established as trusted.
#define SPAPI_E_AUTHENTICODE_PUBLISHER_NOT_TRUSTED 0x800F0243 // The publisher of an Authenticode-signed catalog was not established as trusted.
#define SPAPI_E_SIGNATURE_OSATTRIBUTE_MISMATCH 0x800F0244 // The software was tested for compliance with Windows logo requirements on a different version of Windows and might not be compatible with this version.
#define SPAPI_E_ONLY_VALIDATE_VIA_AUTHENTICODE 0x800F0245 // The file can be validated only by a catalog signed via Authenticode.
#define SPAPI_E_DEVICE_INSTALLER_NOT_READY 0x800F0246 // One of the installers for this device cannot perform the installation at this time.
#define SPAPI_E_DRIVER_STORE_ADD_FAILED 0x800F0247 // A problem was encountered while attempting to add the driver to the store.
#define SPAPI_E_DEVICE_INSTALL_BLOCKED 0x800F0248 // The installation of this device is forbidden by system policy. Contact your system administrator.
#define SPAPI_E_DRIVER_INSTALL_BLOCKED 0x800F0249 // The installation of this driver is forbidden by system policy. Contact your system administrator.
#define SPAPI_E_WRONG_INF_TYPE 0x800F024A // The specified INF is the wrong type for this operation.
#define SPAPI_E_FILE_HASH_NOT_IN_CATALOG 0x800F024B // The hash for the file is not present in the specified catalog file. The file is likely corrupt or the victim of tampering.
#define SPAPI_E_DRIVER_STORE_DELETE_FAILED 0x800F024C // A problem was encountered while attempting to delete the driver from the store.
#define SPAPI_E_UNRECOVERABLE_STACK_OVERFLOW 0x800F0300 // An unrecoverable stack overflow was encountered.
#define SPAPI_E_ERROR_NOT_INSTALLED 0x800F1000 // No installed components were detected.
#define SCARD_F_INTERNAL_ERROR 0x80100001 // An internal consistency check failed.
#define SCARD_E_CANCELLED 0x80100002 // The action was canceled by an SCardCancel request.
#define SCARD_E_INVALID_HANDLE 0x80100003 // The supplied handle was invalid.
#define SCARD_E_INVALID_PARAMETER 0x80100004 // One or more of the supplied parameters could not be properly interpreted.
#define SCARD_E_INVALID_TARGET 0x80100005 // Registry startup information is missing or invalid.
#define SCARD_E_NO_MEMORY 0x80100006 // Not enough memory available to complete this command.
#define SCARD_F_WAITED_TOO_LONG 0x80100007 // An internal consistency timer has expired.
#define SCARD_E_INSUFFICIENT_BUFFER 0x80100008 // The data buffer to receive returned data is too small for the returned data.
#define SCARD_E_UNKNOWN_READER 0x80100009 // The specified reader name is not recognized.
#define SCARD_E_TIMEOUT 0x8010000A // The user-specified time-out value has expired.
#define SCARD_E_SHARING_VIOLATION 0x8010000B // The smart card cannot be accessed because of other connections outstanding.
#define SCARD_E_NO_SMARTCARD 0x8010000C // The operation requires a smart card, but no smart card is currently in the device.
#define SCARD_E_UNKNOWN_CARD 0x8010000D // The specified smart card name is not recognized.
#define SCARD_E_CANT_DISPOSE 0x8010000E // The system could not dispose of the media in the requested manner.
#define SCARD_E_PROTO_MISMATCH 0x8010000F // The requested protocols are incompatible with the protocol currently in use with the smart card.
#define SCARD_E_NOT_READY 0x80100010 // The reader or smart card is not ready to accept commands.
#define SCARD_E_INVALID_VALUE 0x80100011 // One or more of the supplied parameters values could not be properly interpreted.
#define SCARD_E_SYSTEM_CANCELLED 0x80100012 // The action was canceled by the system, presumably to log off or shut down.
#define SCARD_F_COMM_ERROR 0x80100013 // An internal communications error has been detected.
#define SCARD_F_UNKNOWN_ERROR 0x80100014 // An internal error has been detected, but the source is unknown.
#define SCARD_E_INVALID_ATR 0x80100015 // An automatic terminal recognition (ATR) obtained from the registry is not a valid ATR string.
#define SCARD_E_NOT_TRANSACTED 0x80100016 // An attempt was made to end a nonexistent transaction.
#define SCARD_E_READER_UNAVAILABLE 0x80100017 // The specified reader is not currently available for use.
#define SCARD_P_SHUTDOWN 0x80100018 // The operation has been aborted to allow the server application to exit.
#define SCARD_E_PCI_TOO_SMALL 0x80100019 // The peripheral component interconnect (PCI) Receive buffer was too small.
#define SCARD_E_READER_UNSUPPORTED 0x8010001A // The reader driver does not meet minimal requirements for support.
#define SCARD_E_DUPLICATE_READER 0x8010001B // The reader driver did not produce a unique reader name.
#define SCARD_E_CARD_UNSUPPORTED 0x8010001C // The smart card does not meet minimal requirements for support.
#define SCARD_E_NO_SERVICE 0x8010001D // The smart card resource manager is not running.
#define SCARD_E_SERVICE_STOPPED 0x8010001E // The smart card resource manager has shut down.
#define SCARD_E_UNEXPECTED 0x8010001F // An unexpected card error has occurred.
#define SCARD_E_ICC_INSTALLATION 0x80100020 // No primary provider can be found for the smart card.
#define SCARD_E_ICC_CREATEORDER 0x80100021 // The requested order of object creation is not supported.
#define SCARD_E_UNSUPPORTED_FEATURE 0x80100022 // This smart card does not support the requested feature.
#define SCARD_E_DIR_NOT_FOUND 0x80100023 // The identified directory does not exist in the smart card.
#define SCARD_E_FILE_NOT_FOUND 0x80100024 // The identified file does not exist in the smart card.
#define SCARD_E_NO_DIR 0x80100025 // The supplied path does not represent a smart card directory.
#define SCARD_E_NO_FILE 0x80100026 // The supplied path does not represent a smart card file.
#define SCARD_E_NO_ACCESS 0x80100027 // Access is denied to this file.
#define SCARD_E_WRITE_TOO_MANY 0x80100028 // The smart card does not have enough memory to store the information.
#define SCARD_E_BAD_SEEK 0x80100029 // There was an error trying to set the smart card file object pointer.
#define SCARD_E_INVALID_CHV 0x8010002A // The supplied PIN is incorrect.
#define SCARD_E_UNKNOWN_RES_MNG 0x8010002B // An unrecognized error code was returned from a layered component.
#define SCARD_E_NO_SUCH_CERTIFICATE 0x8010002C // The requested certificate does not exist.
#define SCARD_E_CERTIFICATE_UNAVAILABLE 0x8010002D // The requested certificate could not be obtained.
#define SCARD_E_NO_READERS_AVAILABLE 0x8010002E // Cannot find a smart card reader.
#define SCARD_E_COMM_DATA_LOST 0x8010002F // A communications error with the smart card has been detected. Retry the operation.
#define SCARD_E_NO_KEY_CONTAINER 0x80100030 // The requested key container does not exist on the smart card.
#define SCARD_E_SERVER_TOO_BUSY 0x80100031 // The smart card resource manager is too busy to complete this operation.
#define SCARD_W_UNSUPPORTED_CARD 0x80100065 // The reader cannot communicate with the smart card, due to ATR configuration conflicts.
#define SCARD_W_UNRESPONSIVE_CARD 0x80100066 // The smart card is not responding to a reset.
#define SCARD_W_UNPOWERED_CARD 0x80100067 // Power has been removed from the smart card, so that further communication is not possible.
#define SCARD_W_RESET_CARD 0x80100068 // The smart card has been reset, so any shared state information is invalid.
#define SCARD_W_REMOVED_CARD 0x80100069 // The smart card has been removed, so that further communication is not possible.
#define SCARD_W_SECURITY_VIOLATION 0x8010006A // Access was denied because of a security violation.
#define SCARD_W_WRONG_CHV 0x8010006B // The card cannot be accessed because the wrong PIN was presented.
#define SCARD_W_CHV_BLOCKED 0x8010006C // The card cannot be accessed because the maximum number of PIN entry attempts has been reached.
#define SCARD_W_EOF 0x8010006D // The end of the smart card file has been reached.
#define SCARD_W_CANCELLED_BY_USER 0x8010006E // The action was canceled by the user.
#define SCARD_W_CARD_NOT_AUTHENTICATED 0x8010006F // No PIN was presented to the smart card.
#define COMADMIN_E_OBJECTERRORS 0x80110401 // Errors occurred accessing one or more objects—the ErrorInfo collection contains more detail.
#define COMADMIN_E_OBJECTINVALID 0x80110402 // One or more of the object's properties are missing or invalid.
#define COMADMIN_E_KEYMISSING 0x80110403 // The object was not found in the catalog.
#define COMADMIN_E_ALREADYINSTALLED 0x80110404 // The object is already registered.
#define COMADMIN_E_APP_FILE_WRITEFAIL 0x80110407 // An error occurred writing to the application file.
#define COMADMIN_E_APP_FILE_READFAIL 0x80110408 // An error occurred reading the application file.
#define COMADMIN_E_APP_FILE_VERSION 0x80110409 // Invalid version number in application file.
#define COMADMIN_E_BADPATH 0x8011040A // The file path is invalid.
#define COMADMIN_E_APPLICATIONEXISTS 0x8011040B // The application is already installed.
#define COMADMIN_E_ROLEEXISTS 0x8011040C // The role already exists.
#define COMADMIN_E_CANTCOPYFILE 0x8011040D // An error occurred copying the file.
#define COMADMIN_E_NOUSER 0x8011040F // One or more users are not valid.
#define COMADMIN_E_INVALIDUSERIDS 0x80110410 // One or more users in the application file are not valid.
#define COMADMIN_E_NOREGISTRYCLSID 0x80110411 // The component's CLSID is missing or corrupt.
#define COMADMIN_E_BADREGISTRYPROGID 0x80110412 // The component's programmatic ID is missing or corrupt.
#define COMADMIN_E_AUTHENTICATIONLEVEL 0x80110413 // Unable to set required authentication level for update request.
#define COMADMIN_E_USERPASSWDNOTVALID 0x80110414 // The identity or password set on the application is not valid.
#define COMADMIN_E_CLSIDORIIDMISMATCH 0x80110418 // Application file CLSIDs or instance identifiers (IIDs) do not match corresponding DLLs.
#define COMADMIN_E_REMOTEINTERFACE 0x80110419 // Interface information is either missing or changed.
#define COMADMIN_E_DLLREGISTERSERVER 0x8011041A // DllRegisterServer failed on component install.
#define COMADMIN_E_NOSERVERSHARE 0x8011041B // No server file share available.
#define COMADMIN_E_DLLLOADFAILED 0x8011041D // DLL could not be loaded.
#define COMADMIN_E_BADREGISTRYLIBID 0x8011041E // The registered TypeLib ID is not valid.
#define COMADMIN_E_APPDIRNOTFOUND 0x8011041F // Application install directory not found.
#define COMADMIN_E_REGISTRARFAILED 0x80110423 // Errors occurred while in the component registrar.
#define COMADMIN_E_COMPFILE_DOESNOTEXIST 0x80110424 // The file does not exist.
#define COMADMIN_E_COMPFILE_LOADDLLFAIL 0x80110425 // The DLL could not be loaded.
#define COMADMIN_E_COMPFILE_GETCLASSOBJ 0x80110426 // GetClassObject failed in the DLL.
#define COMADMIN_E_COMPFILE_CLASSNOTAVAIL 0x80110427 // The DLL does not support the components listed in the TypeLib.
#define COMADMIN_E_COMPFILE_BADTLB 0x80110428 // The TypeLib could not be loaded.
#define COMADMIN_E_COMPFILE_NOTINSTALLABLE 0x80110429 // The file does not contain components or component information.
#define COMADMIN_E_NOTCHANGEABLE 0x8011042A // Changes to this object and its subobjects have been disabled.
#define COMADMIN_E_NOTDELETEABLE 0x8011042B // The delete function has been disabled for this object.
#define COMADMIN_E_SESSION 0x8011042C // The server catalog version is not supported.
#define COMADMIN_E_COMP_MOVE_LOCKED 0x8011042D // The component move was disallowed because the source or destination application is either a system application or currently locked against changes.
#define COMADMIN_E_COMP_MOVE_BAD_DEST 0x8011042E // The component move failed because the destination application no longer exists.
#define COMADMIN_E_REGISTERTLB 0x80110430 // The system was unable to register the TypeLib.
#define COMADMIN_E_SYSTEMAPP 0x80110433 // This operation cannot be performed on the system application.
#define COMADMIN_E_COMPFILE_NOREGISTRAR 0x80110434 // The component registrar referenced in this file is not available.
#define COMADMIN_E_COREQCOMPINSTALLED 0x80110435 // A component in the same DLL is already installed.
#define COMADMIN_E_SERVICENOTINSTALLED 0x80110436 // The service is not installed.
#define COMADMIN_E_PROPERTYSAVEFAILED 0x80110437 // One or more property settings are either invalid or in conflict with each other.
#define COMADMIN_E_OBJECTEXISTS 0x80110438 // The object you are attempting to add or rename already exists.
#define COMADMIN_E_COMPONENTEXISTS 0x80110439 // The component already exists.
#define COMADMIN_E_REGFILE_CORRUPT 0x8011043B // The registration file is corrupt.
#define COMADMIN_E_PROPERTY_OVERFLOW 0x8011043C // The property value is too large.
#define COMADMIN_E_NOTINREGISTRY 0x8011043E // Object was not found in registry.
#define COMADMIN_E_OBJECTNOTPOOLABLE 0x8011043F // This object cannot be pooled.
#define COMADMIN_E_APPLID_MATCHES_CLSID 0x80110446 // A CLSID with the same GUID as the new application ID is already installed on this machine.
#define COMADMIN_E_ROLE_DOES_NOT_EXIST 0x80110447 // A role assigned to a component, interface, or method did not exist in the application.
#define COMADMIN_E_START_APP_NEEDS_COMPONENTS 0x80110448 // You must have components in an application to start the application.
#define COMADMIN_E_REQUIRES_DIFFERENT_PLATFORM 0x80110449 // This operation is not enabled on this platform.
#define COMADMIN_E_CAN_NOT_EXPORT_APP_PROXY 0x8011044A // Application proxy is not exportable.
#define COMADMIN_E_CAN_NOT_START_APP 0x8011044B // Failed to start application because it is either a library application or an application proxy.
#define COMADMIN_E_CAN_NOT_EXPORT_SYS_APP 0x8011044C // System application is not exportable.
#define COMADMIN_E_CANT_SUBSCRIBE_TO_COMPONENT 0x8011044D // Cannot subscribe to this component (the component might have been imported).
#define COMADMIN_E_EVENTCLASS_CANT_BE_SUBSCRIBER 0x8011044E // An event class cannot also be a subscriber component.
#define COMADMIN_E_LIB_APP_PROXY_INCOMPATIBLE 0x8011044F // Library applications and application proxies are incompatible.
#define COMADMIN_E_BASE_PARTITION_ONLY 0x80110450 // This function is valid for the base partition only.
#define COMADMIN_E_START_APP_DISABLED 0x80110451 // You cannot start an application that has been disabled.
#define COMADMIN_E_CAT_DUPLICATE_PARTITION_NAME 0x80110457 // The specified partition name is already in use on this computer.
#define COMADMIN_E_CAT_INVALID_PARTITION_NAME 0x80110458 // The specified partition name is invalid. Check that the name contains at least one visible character.
#define COMADMIN_E_CAT_PARTITION_IN_USE 0x80110459 // The partition cannot be deleted because it is the default partition for one or more users.
#define COMADMIN_E_FILE_PARTITION_DUPLICATE_FILES 0x8011045A // The partition cannot be exported because one or more components in the partition have the same file name.
#define COMADMIN_E_CAT_IMPORTED_COMPONENTS_NOT_ALLOWED 0x8011045B // Applications that contain one or more imported components cannot be installed into a nonbase partition.
#define COMADMIN_E_AMBIGUOUS_APPLICATION_NAME 0x8011045C // The application name is not unique and cannot be resolved to an application ID.
#define COMADMIN_E_AMBIGUOUS_PARTITION_NAME 0x8011045D // The partition name is not unique and cannot be resolved to a partition ID.
#define COMADMIN_E_REGDB_NOTINITIALIZED 0x80110472 // The COM+ registry database has not been initialized.
#define COMADMIN_E_REGDB_NOTOPEN 0x80110473 // The COM+ registry database is not open.
#define COMADMIN_E_REGDB_SYSTEMERR 0x80110474 // The COM+ registry database detected a system error.
#define COMADMIN_E_REGDB_ALREADYRUNNING 0x80110475 // The COM+ registry database is already running.
#define COMADMIN_E_MIG_VERSIONNOTSUPPORTED 0x80110480 // This version of the COM+ registry database cannot be migrated.
#define COMADMIN_E_MIG_SCHEMANOTFOUND 0x80110481 // The schema version to be migrated could not be found in the COM+ registry database.
#define COMADMIN_E_CAT_BITNESSMISMATCH 0x80110482 // There was a type mismatch between binaries.
#define COMADMIN_E_CAT_UNACCEPTABLEBITNESS 0x80110483 // A binary of unknown or invalid type was provided.
#define COMADMIN_E_CAT_WRONGAPPBITNESS 0x80110484 // There was a type mismatch between a binary and an application.
#define COMADMIN_E_CAT_PAUSE_RESUME_NOT_SUPPORTED 0x80110485 // The application cannot be paused or resumed.
#define COMADMIN_E_CAT_SERVERFAULT 0x80110486 // The COM+ catalog server threw an exception during execution.
#define COMQC_E_APPLICATION_NOT_QUEUED 0x80110600 // Only COM+ applications marked "queued" can be invoked using the "queue" moniker.
#define COMQC_E_NO_QUEUEABLE_INTERFACES 0x80110601 // At least one interface must be marked "queued" to create a queued component instance with the "queue" moniker.
#define COMQC_E_QUEUING_SERVICE_NOT_AVAILABLE 0x80110602 // Message Queuing is required for the requested operation and is not installed.
#define COMQC_E_NO_IPERSISTSTREAM 0x80110603 // Unable to marshal an interface that does not support IPersistStream.
#define COMQC_E_BAD_MESSAGE 0x80110604 // The message is improperly formatted or was damaged in transit.
#define COMQC_E_UNAUTHENTICATED 0x80110605 // An unauthenticated message was received by an application that accepts only authenticated messages.
#define COMQC_E_UNTRUSTED_ENQUEUER 0x80110606 // The message was requeued or moved by a user not in the QC Trusted User "role".
#define MSDTC_E_DUPLICATE_RESOURCE 0x80110701 // Cannot create a duplicate resource of type Distributed Transaction Coordinator.
#define COMADMIN_E_OBJECT_PARENT_MISSING 0x80110808 // One of the objects being inserted or updated does not belong to a valid parent collection.
#define COMADMIN_E_OBJECT_DOES_NOT_EXIST 0x80110809 // One of the specified objects cannot be found.
#define COMADMIN_E_APP_NOT_RUNNING 0x8011080A // The specified application is not currently running.
#define COMADMIN_E_INVALID_PARTITION 0x8011080B // The partitions specified are not valid.
#define COMADMIN_E_SVCAPP_NOT_POOLABLE_OR_RECYCLABLE 0x8011080D // COM+ applications that run as Windows NT service cannot be pooled or recycled.
#define COMADMIN_E_USER_IN_SET 0x8011080E // One or more users are already assigned to a local partition set.
#define COMADMIN_E_CANTRECYCLELIBRARYAPPS 0x8011080F // Library applications cannot be recycled.
#define COMADMIN_E_CANTRECYCLESERVICEAPPS 0x80110811 // Applications running as Windows NT services cannot be recycled.
#define COMADMIN_E_PROCESSALREADYRECYCLED 0x80110812 // The process has already been recycled.
#define COMADMIN_E_PAUSEDPROCESSMAYNOTBERECYCLED 0x80110813 // A paused process cannot be recycled.
#define COMADMIN_E_CANTMAKEINPROCSERVICE 0x80110814 // Library applications cannot be Windows NT services.
#define COMADMIN_E_PROGIDINUSEBYCLSID 0x80110815 // The ProgID provided to the copy operation is invalid. The ProgID is in use by another registered CLSID.
#define COMADMIN_E_DEFAULT_PARTITION_NOT_IN_SET 0x80110816 // The partition specified as the default is not a member of the partition set.
#define COMADMIN_E_RECYCLEDPROCESSMAYNOTBEPAUSED 0x80110817 // A recycled process cannot be paused.
#define COMADMIN_E_PARTITION_ACCESSDENIED 0x80110818 // Access to the specified partition is denied.
#define COMADMIN_E_PARTITION_MSI_ONLY 0x80110819 // Only application files (*.msi files) can be installed into partitions.
#define COMADMIN_E_LEGACYCOMPS_NOT_ALLOWED_IN_1_0_FORMAT 0x8011081A // Applications containing one or more legacy components cannot be exported to 1.0 format.
#define COMADMIN_E_LEGACYCOMPS_NOT_ALLOWED_IN_NONBASE_PARTITIONS 0x8011081B // Legacy components cannot exist in nonbase partitions.
#define COMADMIN_E_COMP_MOVE_SOURCE 0x8011081C // A component cannot be moved (or copied) from the System Application, an application proxy, or a nonchangeable application.
#define COMADMIN_E_COMP_MOVE_DEST 0x8011081D // A component cannot be moved (or copied) to the System Application, an application proxy or a nonchangeable application.
#define COMADMIN_E_COMP_MOVE_PRIVATE 0x8011081E // A private component cannot be moved (or copied) to a library application or to the base partition.
#define COMADMIN_E_BASEPARTITION_REQUIRED_IN_SET 0x8011081F // The Base Application Partition exists in all partition sets and cannot be removed.
#define COMADMIN_E_CANNOT_ALIAS_EVENTCLASS 0x80110820 // Alas, Event Class components cannot be aliased.
#define COMADMIN_E_PRIVATE_ACCESSDENIED 0x80110821 // Access is denied because the component is private.
#define COMADMIN_E_SAFERINVALID 0x80110822 // The specified SAFER level is invalid.
#define COMADMIN_E_REGISTRY_ACCESSDENIED 0x80110823 // The specified user cannot write to the system registry.
#define COMADMIN_E_PARTITIONS_DISABLED 0x80110824 // COM+ partitions are currently disabled.
#define ERROR_FLT_NO_HANDLER_DEFINED 0x801F0001 // A handler was not defined by the filter for this operation.
#define ERROR_FLT_CONTEXT_ALREADY_DEFINED 0x801F0002 // A context is already defined for this object.
#define ERROR_FLT_INVALID_ASYNCHRONOUS_REQUEST 0x801F0003 // Asynchronous requests are not valid for this operation.
#define ERROR_FLT_DISALLOW_FAST_IO 0x801F0004 // Disallow the Fast IO path for this operation.
#define ERROR_FLT_INVALID_NAME_REQUEST 0x801F0005 // An invalid name request was made. The name requested cannot be retrieved at this time.
#define ERROR_FLT_NOT_SAFE_TO_POST_OPERATION 0x801F0006 // Posting this operation to a worker thread for further processing is not safe at this time because it could lead to a system deadlock.
#define ERROR_FLT_NOT_INITIALIZED 0x801F0007 // The Filter Manager was not initialized when a filter tried to register. Be sure that the Filter Manager is being loaded as a driver.
#define ERROR_FLT_FILTER_NOT_READY 0x801F0008 // The filter is not ready for attachment to volumes because it has not finished initializing (FltStartFiltering has not been called).
#define ERROR_FLT_POST_OPERATION_CLEANUP 0x801F0009 // The filter must clean up any operation-specific context at this time because it is being removed from the system before the operation is completed by the lower drivers.
#define ERROR_FLT_INTERNAL_ERROR 0x801F000A // The Filter Manager had an internal error from which it cannot recover; therefore, the operation has been failed. This is usually the result of a filter returning an invalid value from a preoperation callback.
#define ERROR_FLT_DELETING_OBJECT 0x801F000B // The object specified for this action is in the process of being deleted; therefore, the action requested cannot be completed at this time.
#define ERROR_FLT_MUST_BE_NONPAGED_POOL 0x801F000C // Nonpaged pool must be used for this type of context.
#define ERROR_FLT_DUPLICATE_ENTRY 0x801F000D // A duplicate handler definition has been provided for an operation.
#define ERROR_FLT_CBDQ_DISABLED 0x801F000E // The callback data queue has been disabled.
#define ERROR_FLT_DO_NOT_ATTACH 0x801F000F // Do not attach the filter to the volume at this time.
#define ERROR_FLT_DO_NOT_DETACH 0x801F0010 // Do not detach the filter from the volume at this time.
#define ERROR_FLT_INSTANCE_ALTITUDE_COLLISION 0x801F0011 // An instance already exists at this altitude on the volume specified.
#define ERROR_FLT_INSTANCE_NAME_COLLISION 0x801F0012 // An instance already exists with this name on the volume specified.
#define ERROR_FLT_FILTER_NOT_FOUND 0x801F0013 // The system could not find the filter specified.
#define ERROR_FLT_VOLUME_NOT_FOUND 0x801F0014 // The system could not find the volume specified.
#define ERROR_FLT_INSTANCE_NOT_FOUND 0x801F0015 // The system could not find the instance specified.
#define ERROR_FLT_CONTEXT_ALLOCATION_NOT_FOUND 0x801F0016 // No registered context allocation definition was found for the given request.
#define ERROR_FLT_INVALID_CONTEXT_REGISTRATION 0x801F0017 // An invalid parameter was specified during context registration.
#define ERROR_FLT_NAME_CACHE_MISS 0x801F0018 // The name requested was not found in the Filter Manager name cache and could not be retrieved from the file system.
#define ERROR_FLT_NO_DEVICE_OBJECT 0x801F0019 // The requested device object does not exist for the given volume.
#define ERROR_FLT_VOLUME_ALREADY_MOUNTED 0x801F001A // The specified volume is already mounted.
#define ERROR_FLT_ALREADY_ENLISTED 0x801F001B // The specified Transaction Context is already enlisted in a transaction.
#define ERROR_FLT_CONTEXT_ALREADY_LINKED 0x801F001C // The specified context is already attached to another object.
#define ERROR_FLT_NO_WAITER_FOR_REPLY 0x801F0020 // No waiter is present for the filter's reply to this message.
#define ERROR_HUNG_DISPLAY_DRIVER_THREAD 0x80260001 // {Display Driver Stopped Responding} The %hs display driver has stopped working normally. Save your work and reboot the system to restore full display functionality. The next time you reboot the machine a dialog will be displayed giving you a chance to report this failure to Microsoft.
#define ERROR_MONITOR_NO_DESCRIPTOR 0x80261001 // Monitor descriptor could not be obtained.
#define ERROR_MONITOR_UNKNOWN_DESCRIPTOR_FORMAT 0x80261002 // Format of the obtained monitor descriptor is not supported by this release.
#define DWM_E_COMPOSITIONDISABLED 0x80263001 // {Desktop Composition is Disabled} The operation could not be completed because desktop composition is disabled.
#define DWM_E_REMOTING_NOT_SUPPORTED 0x80263002 // {Some Desktop Composition APIs Are Not Supported While Remoting} Some desktop composition APIs are not supported while remoting. The operation is not supported while running in a remote session.
#define DWM_E_NO_REDIRECTION_SURFACE_AVAILABLE 0x80263003 // {No DWM Redirection Surface is Available} The Desktop Window Manager (DWM) was unable to provide a redirection surface to complete the DirectX present.
#define DWM_E_NOT_QUEUING_PRESENTS 0x80263004 // {DWM Is Not Queuing Presents for the Specified Window} The window specified is not currently using queued presents.
#define TPM_E_ERROR_MASK 0x80280000 // This is an error mask to convert Trusted Platform Module (TPM) hardware errors to Win32 errors.
#define TPM_E_AUTHFAIL 0x80280001 // Authentication failed.
#define TPM_E_BADINDEX 0x80280002 // The index to a Platform Configuration Register (PCR), DIR, or other register is incorrect.
#define TPM_E_BAD_PARAMETER 0x80280003 // One or more parameters are bad.
#define TPM_E_AUDITFAILURE 0x80280004 // An operation completed successfully but the auditing of that operation failed.
#define TPM_E_CLEAR_DISABLED 0x80280005 // The clear disable flag is set and all clear operations now require physical access.
#define TPM_E_DEACTIVATED 0x80280006 // The TPM is deactivated.
#define TPM_E_DISABLED 0x80280007 // The TPM is disabled.
#define TPM_E_DISABLED_CMD 0x80280008 // The target command has been disabled.
#define TPM_E_FAIL 0x80280009 // The operation failed.
#define TPM_E_BAD_ORDINAL 0x8028000A // The ordinal was unknown or inconsistent.
#define TPM_E_INSTALL_DISABLED 0x8028000B // The ability to install an owner is disabled.
#define TPM_E_INVALID_KEYHANDLE 0x8028000C // The key handle cannot be interpreted.
#define TPM_E_KEYNOTFOUND 0x8028000D // The key handle points to an invalid key.
#define TPM_E_INAPPROPRIATE_ENC 0x8028000E // Unacceptable encryption scheme.
#define TPM_E_MIGRATEFAIL 0x8028000F // Migration authorization failed.
#define TPM_E_INVALID_PCR_INFO 0x80280010 // PCR information could not be interpreted.
#define TPM_E_NOSPACE 0x80280011 // No room to load key.
#define TPM_E_NOSRK 0x80280012 // There is no storage root key (SRK) set.
#define TPM_E_NOTSEALED_BLOB 0x80280013 // An encrypted blob is invalid or was not created by this TPM.
#define TPM_E_OWNER_SET 0x80280014 // There is already an owner.
#define TPM_E_RESOURCES 0x80280015 // The TPM has insufficient internal resources to perform the requested action.
#define TPM_E_SHORTRANDOM 0x80280016 // A random string was too short.
#define TPM_E_SIZE 0x80280017 // The TPM does not have the space to perform the operation.
#define TPM_E_WRONGPCRVAL 0x80280018 // The named PCR value does not match the current PCR value.
#define TPM_E_BAD_PARAM_SIZE 0x80280019 // The paramSize argument to the command has the incorrect value.
#define TPM_E_SHA_THREAD 0x8028001A // There is no existing SHA-1 thread.
#define TPM_E_SHA_ERROR 0x8028001B // The calculation is unable to proceed because the existing SHA-1 thread has already encountered an error.
#define TPM_E_FAILEDSELFTEST 0x8028001C // Self-test has failed and the TPM has shut down.
#define TPM_E_AUTH2FAIL 0x8028001D // The authorization for the second key in a two-key function failed authorization.
#define TPM_E_BADTAG 0x8028001E // The tag value sent to for a command is invalid.
#define TPM_E_IOERROR 0x8028001F // An I/O error occurred transmitting information to the TPM.
#define TPM_E_ENCRYPT_ERROR 0x80280020 // The encryption process had a problem.
#define TPM_E_DECRYPT_ERROR 0x80280021 // The decryption process did not complete.
#define TPM_E_INVALID_AUTHHANDLE 0x80280022 // An invalid handle was used.
#define TPM_E_NO_ENDORSEMENT 0x80280023 // The TPM does not have an endorsement key (EK) installed.
#define TPM_E_INVALID_KEYUSAGE 0x80280024 // The usage of a key is not allowed.
#define TPM_E_WRONG_ENTITYTYPE 0x80280025 // The submitted entity type is not allowed.
#define TPM_E_INVALID_POSTINIT 0x80280026 // The command was received in the wrong sequence relative to TPM_Init and a subsequent TPM_Startup.
#define TPM_E_INAPPROPRIATE_SIG 0x80280027 // Signed data cannot include additional DER information.
#define TPM_E_BAD_KEY_PROPERTY 0x80280028 // The key properties in TPM_KEY_PARMs are not supported by this TPM.
#define TPM_E_BAD_MIGRATION 0x80280029 // The migration properties of this key are incorrect.
#define TPM_E_BAD_SCHEME 0x8028002A // The signature or encryption scheme for this key is incorrect or not permitted in this situation.
#define TPM_E_BAD_DATASIZE 0x8028002B // The size of the data (or blob) parameter is bad or inconsistent with the referenced key.
#define TPM_E_BAD_MODE 0x8028002C // A mode parameter is bad, such as capArea or subCapArea for TPM_GetCapability, physicalPresence parameter for TPM_PhysicalPresence, or migrationType for TPM_CreateMigrationBlob.
#define TPM_E_BAD_PRESENCE 0x8028002D // Either the physicalPresence or physicalPresenceLock bits have the wrong value.
#define TPM_E_BAD_VERSION 0x8028002E // The TPM cannot perform this version of the capability.
#define TPM_E_NO_WRAP_TRANSPORT 0x8028002F // The TPM does not allow for wrapped transport sessions.
#define TPM_E_AUDITFAIL_UNSUCCESSFUL 0x80280030 // TPM audit construction failed and the underlying command was returning a failure code also.
#define TPM_E_AUDITFAIL_SUCCESSFUL 0x80280031 // TPM audit construction failed and the underlying command was returning success.
#define TPM_E_NOTRESETABLE 0x80280032 // Attempt to reset a PCR that does not have the resettable attribute.
#define TPM_E_NOTLOCAL 0x80280033 // Attempt to reset a PCR register that requires locality and the locality modifier not part of command transport.
#define TPM_E_BAD_TYPE 0x80280034 // Make identity blob not properly typed.
#define TPM_E_INVALID_RESOURCE 0x80280035 // When saving context identified resource type does not match actual resource.
#define TPM_E_NOTFIPS 0x80280036 // The TPM is attempting to execute a command only available when in Federal Information Processing Standards (FIPS) mode.
#define TPM_E_INVALID_FAMILY 0x80280037 // The command is attempting to use an invalid family ID.
#define TPM_E_NO_NV_PERMISSION 0x80280038 // The permission to manipulate the NV storage is not available.
#define TPM_E_REQUIRES_SIGN 0x80280039 // The operation requires a signed command.
#define TPM_E_KEY_NOTSUPPORTED 0x8028003A // Wrong operation to load an NV key.
#define TPM_E_AUTH_CONFLICT 0x8028003B // NV_LoadKey blob requires both owner and blob authorization.
#define TPM_E_AREA_LOCKED 0x8028003C // The NV area is locked and not writable.
#define TPM_E_BAD_LOCALITY 0x8028003D // The locality is incorrect for the attempted operation.
#define TPM_E_READ_ONLY 0x8028003E // The NV area is read-only and cannot be written to.
#define TPM_E_PER_NOWRITE 0x8028003F // There is no protection on the write to the NV area.
#define TPM_E_FAMILYCOUNT 0x80280040 // The family count value does not match.
#define TPM_E_WRITE_LOCKED 0x80280041 // The NV area has already been written to.
#define TPM_E_BAD_ATTRIBUTES 0x80280042 // The NV area attributes conflict.
#define TPM_E_INVALID_STRUCTURE 0x80280043 // The structure tag and version are invalid or inconsistent.
#define TPM_E_KEY_OWNER_CONTROL 0x80280044 // The key is under control of the TPM owner and can only be evicted by the TPM owner.
#define TPM_E_BAD_COUNTER 0x80280045 // The counter handle is incorrect.
#define TPM_E_NOT_FULLWRITE 0x80280046 // The write is not a complete write of the area.
#define TPM_E_CONTEXT_GAP 0x80280047 // The gap between saved context counts is too large.
#define TPM_E_MAXNVWRITES 0x80280048 // The maximum number of NV writes without an owner has been exceeded.
#define TPM_E_NOOPERATOR 0x80280049 // No operator AuthData value is set.
#define TPM_E_RESOURCEMISSING 0x8028004A // The resource pointed to by context is not loaded.
#define TPM_E_DELEGATE_LOCK 0x8028004B // The delegate administration is locked.
#define TPM_E_DELEGATE_FAMILY 0x8028004C // Attempt to manage a family other then the delegated family.
#define TPM_E_DELEGATE_ADMIN 0x8028004D // Delegation table management not enabled.
#define TPM_E_TRANSPORT_NOTEXCLUSIVE 0x8028004E // There was a command executed outside an exclusive transport session.
#define TPM_E_OWNER_CONTROL 0x8028004F // Attempt to context save an owner evict controlled key.
#define TPM_E_DAA_RESOURCES 0x80280050 // The DAA command has no resources available to execute the command.
#define TPM_E_DAA_INPUT_DATA0 0x80280051 // The consistency check on DAA parameter inputData0 has failed.
#define TPM_E_DAA_INPUT_DATA1 0x80280052 // The consistency check on DAA parameter inputData1 has failed.
#define TPM_E_DAA_ISSUER_SETTINGS 0x80280053 // The consistency check on DAA_issuerSettings has failed.
#define TPM_E_DAA_TPM_SETTINGS 0x80280054 // The consistency check on DAA_tpmSpecific has failed.
#define TPM_E_DAA_STAGE 0x80280055 // The atomic process indicated by the submitted DAA command is not the expected process.
#define TPM_E_DAA_ISSUER_VALIDITY 0x80280056 // The issuer's validity check has detected an inconsistency.
#define TPM_E_DAA_WRONG_W 0x80280057 // The consistency check on w has failed.
#define TPM_E_BAD_HANDLE 0x80280058 // The handle is incorrect.
#define TPM_E_BAD_DELEGATE 0x80280059 // Delegation is not correct.
#define TPM_E_BADCONTEXT 0x8028005A // The context blob is invalid.
#define TPM_E_TOOMANYCONTEXTS 0x8028005B // Too many contexts held by the TPM.
#define TPM_E_MA_TICKET_SIGNATURE 0x8028005C // Migration authority signature validation failure.
#define TPM_E_MA_DESTINATION 0x8028005D // Migration destination not authenticated.
#define TPM_E_MA_SOURCE 0x8028005E // Migration source incorrect.
#define TPM_E_MA_AUTHORITY 0x8028005F // Incorrect migration authority.
#define TPM_E_PERMANENTEK 0x80280061 // Attempt to revoke the EK and the EK is not revocable.
#define TPM_E_BAD_SIGNATURE 0x80280062 // Bad signature of CMK ticket.
#define TPM_E_NOCONTEXTSPACE 0x80280063 // There is no room in the context list for additional contexts.
#define TPM_E_COMMAND_BLOCKED 0x80280400 // The command was blocked.
#define TPM_E_INVALID_HANDLE 0x80280401 // The specified handle was not found.
#define TPM_E_DUPLICATE_VHANDLE 0x80280402 // The TPM returned a duplicate handle and the command needs to be resubmitted.
#define TPM_E_EMBEDDED_COMMAND_BLOCKED 0x80280403 // The command within the transport was blocked.
#define TPM_E_EMBEDDED_COMMAND_UNSUPPORTED 0x80280404 // The command within the transport is not supported.
#define TPM_E_RETRY 0x80280800 // The TPM is too busy to respond to the command immediately, but the command could be resubmitted at a later time.
#define TPM_E_NEEDS_SELFTEST 0x80280801 // SelfTestFull has not been run.
#define TPM_E_DOING_SELFTEST 0x80280802 // The TPM is currently executing a full self-test.
#define TPM_E_DEFEND_LOCK_RUNNING 0x80280803 // The TPM is defending against dictionary attacks and is in a time-out period.
#define TBS_E_INTERNAL_ERROR 0x80284001 // An internal software error has been detected.
#define TBS_E_BAD_PARAMETER 0x80284002 // One or more input parameters are bad.
#define TBS_E_INVALID_OUTPUT_POINTER 0x80284003 // A specified output pointer is bad.
#define TBS_E_INVALID_CONTEXT 0x80284004 // The specified context handle does not refer to a valid context.
#define TBS_E_INSUFFICIENT_BUFFER 0x80284005 // A specified output buffer is too small.
#define TBS_E_IOERROR 0x80284006 // An error occurred while communicating with the TPM.
#define TBS_E_INVALID_CONTEXT_PARAM 0x80284007 // One or more context parameters are invalid.
#define TBS_E_SERVICE_NOT_RUNNING 0x80284008 // The TPM Base Services (TBS) is not running and could not be started.
#define TBS_E_TOO_MANY_TBS_CONTEXTS 0x80284009 // A new context could not be created because there are too many open contexts.
#define TBS_E_TOO_MANY_RESOURCES 0x8028400A // A new virtual resource could not be created because there are too many open virtual resources.
#define TBS_E_SERVICE_START_PENDING 0x8028400B // The TBS service has been started but is not yet running.
#define TBS_E_PPI_NOT_SUPPORTED 0x8028400C // The physical presence interface is not supported.
#define TBS_E_COMMAND_CANCELED 0x8028400D // The command was canceled.
#define TBS_E_BUFFER_TOO_LARGE 0x8028400E // The input or output buffer is too large.
#define TPMAPI_E_INVALID_STATE 0x80290100 // The command buffer is not in the correct state.
#define TPMAPI_E_NOT_ENOUGH_DATA 0x80290101 // The command buffer does not contain enough data to satisfy the request.
#define TPMAPI_E_TOO_MUCH_DATA 0x80290102 // The command buffer cannot contain any more data.
#define TPMAPI_E_INVALID_OUTPUT_POINTER 0x80290103 // One or more output parameters was null or invalid.
#define TPMAPI_E_INVALID_PARAMETER 0x80290104 // One or more input parameters are invalid.
#define TPMAPI_E_OUT_OF_MEMORY 0x80290105 // Not enough memory was available to satisfy the request.
#define TPMAPI_E_BUFFER_TOO_SMALL 0x80290106 // The specified buffer was too small.
#define TPMAPI_E_INTERNAL_ERROR 0x80290107 // An internal error was detected.
#define TPMAPI_E_ACCESS_DENIED 0x80290108 // The caller does not have the appropriate rights to perform the requested operation.
#define TPMAPI_E_AUTHORIZATION_FAILED 0x80290109 // The specified authorization information was invalid.
#define TPMAPI_E_INVALID_CONTEXT_HANDLE 0x8029010A // The specified context handle was not valid.
#define TPMAPI_E_TBS_COMMUNICATION_ERROR 0x8029010B // An error occurred while communicating with the TBS.
#define TPMAPI_E_TPM_COMMAND_ERROR 0x8029010C // The TPM returned an unexpected result.
#define TPMAPI_E_MESSAGE_TOO_LARGE 0x8029010D // The message was too large for the encoding scheme.
#define TPMAPI_E_INVALID_ENCODING 0x8029010E // The encoding in the binary large object (BLOB) was not recognized.
#define TPMAPI_E_INVALID_KEY_SIZE 0x8029010F // The key size is not valid.
#define TPMAPI_E_ENCRYPTION_FAILED 0x80290110 // The encryption operation failed.
#define TPMAPI_E_INVALID_KEY_PARAMS 0x80290111 // The key parameters structure was not valid.
#define TPMAPI_E_INVALID_MIGRATION_AUTHORIZATION_BLOB 0x80290112 // The requested supplied data does not appear to be a valid migration authorization BLOB.
#define TPMAPI_E_INVALID_PCR_INDEX 0x80290113 // The specified PCR index was invalid.
#define TPMAPI_E_INVALID_DELEGATE_BLOB 0x80290114 // The data given does not appear to be a valid delegate BLOB.
#define TPMAPI_E_INVALID_CONTEXT_PARAMS 0x80290115 // One or more of the specified context parameters was not valid.
#define TPMAPI_E_INVALID_KEY_BLOB 0x80290116 // The data given does not appear to be a valid key BLOB.
#define TPMAPI_E_INVALID_PCR_DATA 0x80290117 // The specified PCR data was invalid.
#define TPMAPI_E_INVALID_OWNER_AUTH 0x80290118 // The format of the owner authorization data was invalid.
#define TBSIMP_E_BUFFER_TOO_SMALL 0x80290200 // The specified buffer was too small.
#define TBSIMP_E_CLEANUP_FAILED 0x80290201 // The context could not be cleaned up.
#define TBSIMP_E_INVALID_CONTEXT_HANDLE 0x80290202 // The specified context handle is invalid.
#define TBSIMP_E_INVALID_CONTEXT_PARAM 0x80290203 // An invalid context parameter was specified.
#define TBSIMP_E_TPM_ERROR 0x80290204 // An error occurred while communicating with the TPM.
#define TBSIMP_E_HASH_BAD_KEY 0x80290205 // No entry with the specified key was found.
#define TBSIMP_E_DUPLICATE_VHANDLE 0x80290206 // The specified virtual handle matches a virtual handle already in use.
#define TBSIMP_E_INVALID_OUTPUT_POINTER 0x80290207 // The pointer to the returned handle location was null or invalid.
#define TBSIMP_E_INVALID_PARAMETER 0x80290208 // One or more parameters are invalid.
#define TBSIMP_E_RPC_INIT_FAILED 0x80290209 // The RPC subsystem could not be initialized.
#define TBSIMP_E_SCHEDULER_NOT_RUNNING 0x8029020A // The TBS scheduler is not running.
#define TBSIMP_E_COMMAND_CANCELED 0x8029020B // The command was canceled.
#define TBSIMP_E_OUT_OF_MEMORY 0x8029020C // There was not enough memory to fulfill the request.
#define TBSIMP_E_LIST_NO_MORE_ITEMS 0x8029020D // The specified list is empty, or the iteration has reached the end of the list.
#define TBSIMP_E_LIST_NOT_FOUND 0x8029020E // The specified item was not found in the list.
#define TBSIMP_E_NOT_ENOUGH_SPACE 0x8029020F // The TPM does not have enough space to load the requested resource.
#define TBSIMP_E_NOT_ENOUGH_TPM_CONTEXTS 0x80290210 // There are too many TPM contexts in use.
#define TBSIMP_E_COMMAND_FAILED 0x80290211 // The TPM command failed.
#define TBSIMP_E_UNKNOWN_ORDINAL 0x80290212 // The TBS does not recognize the specified ordinal.
#define TBSIMP_E_RESOURCE_EXPIRED 0x80290213 // The requested resource is no longer available.
#define TBSIMP_E_INVALID_RESOURCE 0x80290214 // The resource type did not match.
#define TBSIMP_E_NOTHING_TO_UNLOAD 0x80290215 // No resources can be unloaded.
#define TBSIMP_E_HASH_TABLE_FULL 0x80290216 // No new entries can be added to the hash table.
#define TBSIMP_E_TOO_MANY_TBS_CONTEXTS 0x80290217 // A new TBS context could not be created because there are too many open contexts.
#define TBSIMP_E_TOO_MANY_RESOURCES 0x80290218 // A new virtual resource could not be created because there are too many open virtual resources.
#define TBSIMP_E_PPI_NOT_SUPPORTED 0x80290219 // The physical presence interface is not supported.
#define TBSIMP_E_TPM_INCOMPATIBLE 0x8029021A // TBS is not compatible with the version of TPM found on the system.
#define TPM_E_PPI_ACPI_FAILURE 0x80290300 // A general error was detected when attempting to acquire the BIOS response to a physical presence command.
#define TPM_E_PPI_USER_ABORT 0x80290301 // The user failed to confirm the TPM operation request.
#define TPM_E_PPI_BIOS_FAILURE 0x80290302 // The BIOS failure prevented the successful execution of the requested TPM operation (for example, invalid TPM operation request, BIOS communication error with the TPM).
#define TPM_E_PPI_NOT_SUPPORTED 0x80290303 // The BIOS does not support the physical presence interface.
#define PLA_E_DCS_NOT_FOUND 0x80300002 // A Data Collector Set was not found.
#define PLA_E_TOO_MANY_FOLDERS 0x80300045 // Unable to start Data Collector Set because there are too many folders.
#define PLA_E_NO_MIN_DISK 0x80300070 // Not enough free disk space to start Data Collector Set.
#define PLA_E_DCS_IN_USE 0x803000AA // Data Collector Set is in use.
#define PLA_E_DCS_ALREADY_EXISTS 0x803000B7 // Data Collector Set already exists.
#define PLA_E_PROPERTY_CONFLICT 0x80300101 // Property value conflict.
#define PLA_E_DCS_SINGLETON_REQUIRED 0x80300102 // The current configuration for this Data Collector Set requires that it contain exactly one Data Collector.
#define PLA_E_CREDENTIALS_REQUIRED 0x80300103 // A user account is required to commit the current Data Collector Set properties.
#define PLA_E_DCS_NOT_RUNNING 0x80300104 // Data Collector Set is not running.
#define PLA_E_CONFLICT_INCL_EXCL_API 0x80300105 // A conflict was detected in the list of include and exclude APIs. Do not specify the same API in both the include list and the exclude list.
#define PLA_E_NETWORK_EXE_NOT_VALID 0x80300106 // The executable path specified refers to a network share or UNC path.
#define PLA_E_EXE_ALREADY_CONFIGURED 0x80300107 // The executable path specified is already configured for API tracing.
#define PLA_E_EXE_PATH_NOT_VALID 0x80300108 // The executable path specified does not exist. Verify that the specified path is correct.
#define PLA_E_DC_ALREADY_EXISTS 0x80300109 // Data Collector already exists.
#define PLA_E_DCS_START_WAIT_TIMEOUT 0x8030010A // The wait for the Data Collector Set start notification has timed out.
#define PLA_E_DC_START_WAIT_TIMEOUT 0x8030010B // The wait for the Data Collector to start has timed out.
#define PLA_E_REPORT_WAIT_TIMEOUT 0x8030010C // The wait for the report generation tool to finish has timed out.
#define PLA_E_NO_DUPLICATES 0x8030010D // Duplicate items are not allowed.
#define PLA_E_EXE_FULL_PATH_REQUIRED 0x8030010E // When specifying the executable to trace, you must specify a full path to the executable and not just a file name.
#define PLA_E_INVALID_SESSION_NAME 0x8030010F // The session name provided is invalid.
#define PLA_E_PLA_CHANNEL_NOT_ENABLED 0x80300110 // The Event Log channel Microsoft-Windows-Diagnosis-PLA/Operational must be enabled to perform this operation.
#define PLA_E_TASKSCHED_CHANNEL_NOT_ENABLED 0x80300111 // The Event Log channel Microsoft-Windows-TaskScheduler must be enabled to perform this operation.
#define FVE_E_LOCKED_VOLUME 0x80310000 // The volume must be unlocked before it can be used.
#define FVE_E_NOT_ENCRYPTED 0x80310001 // The volume is fully decrypted and no key is available.
#define FVE_E_NO_TPM_BIOS 0x80310002 // The firmware does not support using a TPM during boot.
#define FVE_E_NO_MBR_METRIC 0x80310003 // The firmware does not use a TPM to perform initial program load (IPL) measurement.
#define FVE_E_NO_BOOTSECTOR_METRIC 0x80310004 // The master boot record (MBR) is not TPM-aware.
#define FVE_E_NO_BOOTMGR_METRIC 0x80310005 // The BOOTMGR is not being measured by the TPM.
#define FVE_E_WRONG_BOOTMGR 0x80310006 // The BOOTMGR component does not perform expected TPM measurements.
#define FVE_E_SECURE_KEY_REQUIRED 0x80310007 // No secure key protection mechanism has been defined.
#define FVE_E_NOT_ACTIVATED 0x80310008 // This volume has not been provisioned for encryption.
#define FVE_E_ACTION_NOT_ALLOWED 0x80310009 // Requested action was denied by the full-volume encryption (FVE) control engine.
#define FVE_E_AD_SCHEMA_NOT_INSTALLED 0x8031000A // The Active Directory forest does not contain the required attributes and classes to host FVE or TPM information.
#define FVE_E_AD_INVALID_DATATYPE 0x8031000B // The type of data obtained from Active Directory was not expected.
#define FVE_E_AD_INVALID_DATASIZE 0x8031000C // The size of the data obtained from Active Directory was not expected.
#define FVE_E_AD_NO_VALUES 0x8031000D // The attribute read from Active Directory has no (zero) values.
#define FVE_E_AD_ATTR_NOT_SET 0x8031000E // The attribute was not set.
#define FVE_E_AD_GUID_NOT_FOUND 0x8031000F // The specified GUID could not be found.
#define FVE_E_BAD_INFORMATION 0x80310010 // The control block for the encrypted volume is not valid.
#define FVE_E_TOO_SMALL 0x80310011 // Not enough free space remaining on volume to allow encryption.
#define FVE_E_SYSTEM_VOLUME 0x80310012 // The volume cannot be encrypted because it is required to boot the operating system.
#define FVE_E_FAILED_WRONG_FS 0x80310013 // The volume cannot be encrypted because the file system is not supported.
#define FVE_E_FAILED_BAD_FS 0x80310014 // The file system is inconsistent. Run CHKDSK.
#define FVE_E_NOT_SUPPORTED 0x80310015 // This volume cannot be encrypted.
#define FVE_E_BAD_DATA 0x80310016 // Data supplied is malformed.
#define FVE_E_VOLUME_NOT_BOUND 0x80310017 // Volume is not bound to the system.
#define FVE_E_TPM_NOT_OWNED 0x80310018 // TPM must be owned before a volume can be bound to it.
#define FVE_E_NOT_DATA_VOLUME 0x80310019 // The volume specified is not a data volume.
#define FVE_E_AD_INSUFFICIENT_BUFFER 0x8031001A // The buffer supplied to a function was insufficient to contain the returned data.
#define FVE_E_CONV_READ 0x8031001B // A read operation failed while converting the volume.
#define FVE_E_CONV_WRITE 0x8031001C // A write operation failed while converting the volume.
#define FVE_E_KEY_REQUIRED 0x8031001D // One or more key protection mechanisms are required for this volume.
#define FVE_E_CLUSTERING_NOT_SUPPORTED 0x8031001E // Cluster configurations are not supported.
#define FVE_E_VOLUME_BOUND_ALREADY 0x8031001F // The volume is already bound to the system.
#define FVE_E_OS_NOT_PROTECTED 0x80310020 // The boot OS volume is not being protected via FVE.
#define FVE_E_PROTECTION_DISABLED 0x80310021 // All protection mechanisms are effectively disabled (clear key exists).
#define FVE_E_RECOVERY_KEY_REQUIRED 0x80310022 // A recovery key protection mechanism is required.
#define FVE_E_FOREIGN_VOLUME 0x80310023 // This volume cannot be bound to a TPM.
#define FVE_E_OVERLAPPED_UPDATE 0x80310024 // The control block for the encrypted volume was updated by another thread. Try again.
#define FVE_E_TPM_SRK_AUTH_NOT_ZERO 0x80310025 // The SRK authentication of the TPM is not zero and, therefore, is not compatible.
#define FVE_E_FAILED_SECTOR_SIZE 0x80310026 // The volume encryption algorithm cannot be used on this sector size.
#define FVE_E_FAILED_AUTHENTICATION 0x80310027 // BitLocker recovery authentication failed.
#define FVE_E_NOT_OS_VOLUME 0x80310028 // The volume specified is not the boot OS volume.
#define FVE_E_AUTOUNLOCK_ENABLED 0x80310029 // Auto-unlock information for data volumes is present on the boot OS volume.
#define FVE_E_WRONG_BOOTSECTOR 0x8031002A // The system partition boot sector does not perform TPM measurements.
#define FVE_E_WRONG_SYSTEM_FS 0x8031002B // The system partition file system must be NTFS.
#define FVE_E_POLICY_PASSWORD_REQUIRED 0x8031002C // Group policy requires a recovery password before encryption can begin.
#define FVE_E_CANNOT_SET_FVEK_ENCRYPTED 0x8031002D // The volume encryption algorithm and key cannot be set on an encrypted volume.
#define FVE_E_CANNOT_ENCRYPT_NO_KEY 0x8031002E // A key must be specified before encryption can begin.
#define FVE_E_BOOTABLE_CDDVD 0x80310030 // A bootable CD/DVD is in the system. Remove the CD/DVD and reboot the system.
#define FVE_E_PROTECTOR_EXISTS 0x80310031 // An instance of this key protector already exists on the volume.
#define FVE_E_RELATIVE_PATH 0x80310032 // The file cannot be saved to a relative path.
#define FWP_E_CALLOUT_NOT_FOUND 0x80320001 // The callout does not exist.
#define FWP_E_CONDITION_NOT_FOUND 0x80320002 // The filter condition does not exist.
#define FWP_E_FILTER_NOT_FOUND 0x80320003 // The filter does not exist.
#define FWP_E_LAYER_NOT_FOUND 0x80320004 // The layer does not exist.
#define FWP_E_PROVIDER_NOT_FOUND 0x80320005 // The provider does not exist.
#define FWP_E_PROVIDER_CONTEXT_NOT_FOUND 0x80320006 // The provider context does not exist.
#define FWP_E_SUBLAYER_NOT_FOUND 0x80320007 // The sublayer does not exist.
#define FWP_E_NOT_FOUND 0x80320008 // The object does not exist.
#define FWP_E_ALREADY_EXISTS 0x80320009 // An object with that GUID or LUID already exists.
#define FWP_E_IN_USE 0x8032000A // The object is referenced by other objects and, therefore, cannot be deleted.
#define FWP_E_DYNAMIC_SESSION_IN_PROGRESS 0x8032000B // The call is not allowed from within a dynamic session.
#define FWP_E_WRONG_SESSION 0x8032000C // The call was made from the wrong session and, therefore, cannot be completed.
#define FWP_E_NO_TXN_IN_PROGRESS 0x8032000D // The call must be made from within an explicit transaction.
#define FWP_E_TXN_IN_PROGRESS 0x8032000E // The call is not allowed from within an explicit transaction.
#define FWP_E_TXN_ABORTED 0x8032000F // The explicit transaction has been forcibly canceled.
#define FWP_E_SESSION_ABORTED 0x80320010 // The session has been canceled.
#define FWP_E_INCOMPATIBLE_TXN 0x80320011 // The call is not allowed from within a read-only transaction.
#define FWP_E_TIMEOUT 0x80320012 // The call timed out while waiting to acquire the transaction lock.
#define FWP_E_NET_EVENTS_DISABLED 0x80320013 // Collection of network diagnostic events is disabled.
#define FWP_E_INCOMPATIBLE_LAYER 0x80320014 // The operation is not supported by the specified layer.
#define FWP_E_KM_CLIENTS_ONLY 0x80320015 // The call is allowed for kernel-mode callers only.
#define FWP_E_LIFETIME_MISMATCH 0x80320016 // The call tried to associate two objects with incompatible lifetimes.
#define FWP_E_BUILTIN_OBJECT 0x80320017 // The object is built in and, therefore, cannot be deleted.
#define FWP_E_TOO_MANY_BOOTTIME_FILTERS 0x80320018 // The maximum number of boot-time filters has been reached.
#define FWP_E_NOTIFICATION_DROPPED 0x80320019 // A notification could not be delivered because a message queue is at its maximum capacity.
#define FWP_E_TRAFFIC_MISMATCH 0x8032001A // The traffic parameters do not match those for the security association context.
#define FWP_E_INCOMPATIBLE_SA_STATE 0x8032001B // The call is not allowed for the current security association state.
#define FWP_E_NULL_POINTER 0x8032001C // A required pointer is null.
#define FWP_E_INVALID_ENUMERATOR 0x8032001D // An enumerator is not valid.
#define FWP_E_INVALID_FLAGS 0x8032001E // The flags field contains an invalid value.
#define FWP_E_INVALID_NET_MASK 0x8032001F // A network mask is not valid.
#define FWP_E_INVALID_RANGE 0x80320020 // An FWP_RANGE is not valid.
#define FWP_E_INVALID_INTERVAL 0x80320021 // The time interval is not valid.
#define FWP_E_ZERO_LENGTH_ARRAY 0x80320022 // An array that must contain at least one element that is zero-length.
#define FWP_E_NULL_DISPLAY_NAME 0x80320023 // The displayData.name field cannot be null.
#define FWP_E_INVALID_ACTION_TYPE 0x80320024 // The action type is not one of the allowed action types for a filter.
#define FWP_E_INVALID_WEIGHT 0x80320025 // The filter weight is not valid.
#define FWP_E_MATCH_TYPE_MISMATCH 0x80320026 // A filter condition contains a match type that is not compatible with the operands.
#define FWP_E_TYPE_MISMATCH 0x80320027 // An FWP_VALUE or FWPM_CONDITION_VALUE is of the wrong type.
#define FWP_E_OUT_OF_BOUNDS 0x80320028 // An integer value is outside the allowed range.
#define FWP_E_RESERVED 0x80320029 // A reserved field is nonzero.
#define FWP_E_DUPLICATE_CONDITION 0x8032002A // A filter cannot contain multiple conditions operating on a single field.
#define FWP_E_DUPLICATE_KEYMOD 0x8032002B // A policy cannot contain the same keying module more than once.
#define FWP_E_ACTION_INCOMPATIBLE_WITH_LAYER 0x8032002C // The action type is not compatible with the layer.
#define FWP_E_ACTION_INCOMPATIBLE_WITH_SUBLAYER 0x8032002D // The action type is not compatible with the sublayer.
#define FWP_E_CONTEXT_INCOMPATIBLE_WITH_LAYER 0x8032002E // The raw context or the provider context is not compatible with the layer.
#define FWP_E_CONTEXT_INCOMPATIBLE_WITH_CALLOUT 0x8032002F // The raw context or the provider context is not compatible with the callout.
#define FWP_E_INCOMPATIBLE_AUTH_METHOD 0x80320030 // The authentication method is not compatible with the policy type.
#define FWP_E_INCOMPATIBLE_DH_GROUP 0x80320031 // The Diffie-Hellman group is not compatible with the policy type.
#define FWP_E_EM_NOT_SUPPORTED 0x80320032 // An Internet Key Exchange (IKE) policy cannot contain an Extended Mode policy.
#define FWP_E_NEVER_MATCH 0x80320033 // The enumeration template or subscription will never match any objects.
#define FWP_E_PROVIDER_CONTEXT_MISMATCH 0x80320034 // The provider context is of the wrong type.
#define FWP_E_INVALID_PARAMETER 0x80320035 // The parameter is incorrect.
#define FWP_E_TOO_MANY_SUBLAYERS 0x80320036 // The maximum number of sublayers has been reached.
#define FWP_E_CALLOUT_NOTIFICATION_FAILED 0x80320037 // The notification function for a callout returned an error.
#define FWP_E_INCOMPATIBLE_AUTH_CONFIG 0x80320038 // The IPsec authentication configuration is not compatible with the authentication type.
#define FWP_E_INCOMPATIBLE_CIPHER_CONFIG 0x80320039 // The IPsec cipher configuration is not compatible with the cipher type.
#define ERROR_NDIS_INTERFACE_CLOSING 0x80340002 // The binding to the network interface is being closed.
#define ERROR_NDIS_BAD_VERSION 0x80340004 // An invalid version was specified.
#define ERROR_NDIS_BAD_CHARACTERISTICS 0x80340005 // An invalid characteristics table was used.
#define ERROR_NDIS_ADAPTER_NOT_FOUND 0x80340006 // Failed to find the network interface, or the network interface is not ready.
#define ERROR_NDIS_OPEN_FAILED 0x80340007 // Failed to open the network interface.
#define ERROR_NDIS_DEVICE_FAILED 0x80340008 // The network interface has encountered an internal unrecoverable failure.
#define ERROR_NDIS_MULTICAST_FULL 0x80340009 // The multicast list on the network interface is full.
#define ERROR_NDIS_MULTICAST_EXISTS 0x8034000A // An attempt was made to add a duplicate multicast address to the list.
#define ERROR_NDIS_MULTICAST_NOT_FOUND 0x8034000B // At attempt was made to remove a multicast address that was never added.
#define ERROR_NDIS_REQUEST_ABORTED 0x8034000C // The network interface aborted the request.
#define ERROR_NDIS_RESET_IN_PROGRESS 0x8034000D // The network interface cannot process the request because it is being reset.
#define ERROR_NDIS_INVALID_PACKET 0x8034000F // An attempt was made to send an invalid packet on a network interface.
#define ERROR_NDIS_INVALID_DEVICE_REQUEST 0x80340010 // The specified request is not a valid operation for the target device.
#define ERROR_NDIS_ADAPTER_NOT_READY 0x80340011 // The network interface is not ready to complete this operation.
#define ERROR_NDIS_INVALID_LENGTH 0x80340014 // The length of the buffer submitted for this operation is not valid.
#define ERROR_NDIS_INVALID_DATA 0x80340015 // The data used for this operation is not valid.
#define ERROR_NDIS_BUFFER_TOO_SHORT 0x80340016 // The length of the buffer submitted for this operation is too small.
#define ERROR_NDIS_INVALID_OID 0x80340017 // The network interface does not support this OID.
#define ERROR_NDIS_ADAPTER_REMOVED 0x80340018 // The network interface has been removed.
#define ERROR_NDIS_UNSUPPORTED_MEDIA 0x80340019 // The network interface does not support this media type.
#define ERROR_NDIS_GROUP_ADDRESS_IN_USE 0x8034001A // An attempt was made to remove a token ring group address that is in use by other components.
#define ERROR_NDIS_FILE_NOT_FOUND 0x8034001B // An attempt was made to map a file that cannot be found.
#define ERROR_NDIS_ERROR_READING_FILE 0x8034001C // An error occurred while the NDIS tried to map the file.
#define ERROR_NDIS_ALREADY_MAPPED 0x8034001D // An attempt was made to map a file that is already mapped.
#define ERROR_NDIS_RESOURCE_CONFLICT 0x8034001E // An attempt to allocate a hardware resource failed because the resource is used by another component.
#define ERROR_NDIS_MEDIA_DISCONNECTED 0x8034001F // The I/O operation failed because network media is disconnected or the wireless access point is out of range.
#define ERROR_NDIS_INVALID_ADDRESS 0x80340022 // The network address used in the request is invalid.
#define ERROR_NDIS_PAUSED 0x8034002A // The offload operation on the network interface has been paused.
#define ERROR_NDIS_INTERFACE_NOT_FOUND 0x8034002B // The network interface was not found.
#define ERROR_NDIS_UNSUPPORTED_REVISION 0x8034002C // The revision number specified in the structure is not supported.
#define ERROR_NDIS_INVALID_PORT 0x8034002D // The specified port does not exist on this network interface.
#define ERROR_NDIS_INVALID_PORT_STATE 0x8034002E // The current state of the specified port on this network interface does not support the requested operation.
#define ERROR_NDIS_NOT_SUPPORTED 0x803400BB // The network interface does not support this request.
#define ERROR_NDIS_DOT11_AUTO_CONFIG_ENABLED 0x80342000 // The wireless local area network (LAN) interface is in auto-configuration mode and does not support the requested parameter change operation.
#define ERROR_NDIS_DOT11_MEDIA_IN_USE 0x80342001 // The wireless LAN interface is busy and cannot perform the requested operation.
#define ERROR_NDIS_DOT11_POWER_STATE_INVALID 0x80342002 // The wireless LAN interface is shutting down and does not support the requested operation.
#define TRK_E_NOT_FOUND 0x8DEAD01B // A requested object was not found.
#define TRK_E_VOLUME_QUOTA_EXCEEDED 0x8DEAD01C // The server received a CREATE_VOLUME subrequest of a SYNC_VOLUMES request, but the ServerVolumeTable size limit for the RequestMachine has already been reached.
#define TRK_SERVER_TOO_BUSY 0x8DEAD01E // The server is busy, and the client should retry the request at a later time.
#define ERROR_AUDITING_DISABLED 0xC0090001 // The specified event is currently not being audited.
#define ERROR_ALL_SIDS_FILTERED 0xC0090002 // The SID filtering operation removed all SIDs.
#define ERROR_BIZRULES_NOT_ENABLED 0xC0090003 // Business rule scripts are disabled for the calling application.
#define NS_E_NOCONNECTION 0xC00D0005 // There is no connection established with the Windows Media server. The operation failed.
#define NS_E_CANNOTCONNECT 0xC00D0006 // Unable to establish a connection to the server.
#define NS_E_CANNOTDESTROYTITLE 0xC00D0007 // Unable to destroy the title.
#define NS_E_CANNOTRENAMETITLE 0xC00D0008 // Unable to rename the title.
#define NS_E_CANNOTOFFLINEDISK 0xC00D0009 // Unable to offline disk.
#define NS_E_CANNOTONLINEDISK 0xC00D000A // Unable to online disk.
#define NS_E_NOREGISTEREDWALKER 0xC00D000B // There is no file parser registered for this type of file.
#define NS_E_NOFUNNEL 0xC00D000C // There is no data connection established.
#define NS_E_NO_LOCALPLAY 0xC00D000D // Failed to load the local play DLL.
#define NS_E_NETWORK_BUSY 0xC00D000E // The network is busy.
#define NS_E_TOO_MANY_SESS 0xC00D000F // The server session limit was exceeded.
#define NS_E_ALREADY_CONNECTED 0xC00D0010 // The network connection already exists.
#define NS_E_INVALID_INDEX 0xC00D0011 // Index %1 is invalid.
#define NS_E_PROTOCOL_MISMATCH 0xC00D0012 // There is no protocol or protocol version supported by both the client and the server.
#define NS_E_TIMEOUT 0xC00D0013 // The server, a computer set up to offer multimedia content to other computers, could not handle your request for multimedia content in a timely manner. Please try again later.
#define NS_E_NET_WRITE 0xC00D0014 // Error writing to the network.
#define NS_E_NET_READ 0xC00D0015 // Error reading from the network.
#define NS_E_DISK_WRITE 0xC00D0016 // Error writing to a disk.
#define NS_E_DISK_READ 0xC00D0017 // Error reading from a disk.
#define NS_E_FILE_WRITE 0xC00D0018 // Error writing to a file.
#define NS_E_FILE_READ 0xC00D0019 // Error reading from a file.
#define NS_E_FILE_NOT_FOUND 0xC00D001A // The system cannot find the file specified.
#define NS_E_FILE_EXISTS 0xC00D001B // The file already exists.
#define NS_E_INVALID_NAME 0xC00D001C // The file name, directory name, or volume label syntax is incorrect.
#define NS_E_FILE_OPEN_FAILED 0xC00D001D // Failed to open a file.
#define NS_E_FILE_ALLOCATION_FAILED 0xC00D001E // Unable to allocate a file.
#define NS_E_FILE_INIT_FAILED 0xC00D001F // Unable to initialize a file.
#define NS_E_FILE_PLAY_FAILED 0xC00D0020 // Unable to play a file.
#define NS_E_SET_DISK_UID_FAILED 0xC00D0021 // Could not set the disk UID.
#define NS_E_INDUCED 0xC00D0022 // An error was induced for testing purposes.
#define NS_E_CCLINK_DOWN 0xC00D0023 // Two Content Servers failed to communicate.
#define NS_E_INTERNAL 0xC00D0024 // An unknown error occurred.
#define NS_E_BUSY 0xC00D0025 // The requested resource is in use.
#define NS_E_UNRECOGNIZED_STREAM_TYPE 0xC00D0026 // The specified protocol is not recognized. Be sure that the file name and syntax, such as slashes, are correct for the protocol.
#define NS_E_NETWORK_SERVICE_FAILURE 0xC00D0027 // The network service provider failed.
#define NS_E_NETWORK_RESOURCE_FAILURE 0xC00D0028 // An attempt to acquire a network resource failed.
#define NS_E_CONNECTION_FAILURE 0xC00D0029 // The network connection has failed.
#define NS_E_SHUTDOWN 0xC00D002A // The session is being terminated locally.
#define NS_E_INVALID_REQUEST 0xC00D002B // The request is invalid in the current state.
#define NS_E_INSUFFICIENT_BANDWIDTH 0xC00D002C // There is insufficient bandwidth available to fulfill the request.
#define NS_E_NOT_REBUILDING 0xC00D002D // The disk is not rebuilding.
#define NS_E_LATE_OPERATION 0xC00D002E // An operation requested for a particular time could not be carried out on schedule.
#define NS_E_INVALID_DATA 0xC00D002F // Invalid or corrupt data was encountered.
#define NS_E_FILE_BANDWIDTH_LIMIT 0xC00D0030 // The bandwidth required to stream a file is higher than the maximum file bandwidth allowed on the server.
#define NS_E_OPEN_FILE_LIMIT 0xC00D0031 // The client cannot have any more files open simultaneously.
#define NS_E_BAD_CONTROL_DATA 0xC00D0032 // The server received invalid data from the client on the control connection.
#define NS_E_NO_STREAM 0xC00D0033 // There is no stream available.
#define NS_E_STREAM_END 0xC00D0034 // There is no more data in the stream.
#define NS_E_SERVER_NOT_FOUND 0xC00D0035 // The specified server could not be found.
#define NS_E_DUPLICATE_NAME 0xC00D0036 // The specified name is already in use.
#define NS_E_DUPLICATE_ADDRESS 0xC00D0037 // The specified address is already in use.
#define NS_E_BAD_MULTICAST_ADDRESS 0xC00D0038 // The specified address is not a valid multicast address.
#define NS_E_BAD_ADAPTER_ADDRESS 0xC00D0039 // The specified adapter address is invalid.
#define NS_E_BAD_DELIVERY_MODE 0xC00D003A // The specified delivery mode is invalid.
#define NS_E_INVALID_CHANNEL 0xC00D003B // The specified station does not exist.
#define NS_E_INVALID_STREAM 0xC00D003C // The specified stream does not exist.
#define NS_E_INVALID_ARCHIVE 0xC00D003D // The specified archive could not be opened.
#define NS_E_NOTITLES 0xC00D003E // The system cannot find any titles on the server.
#define NS_E_INVALID_CLIENT 0xC00D003F // The system cannot find the client specified.
#define NS_E_INVALID_BLACKHOLE_ADDRESS 0xC00D0040 // The Blackhole Address is not initialized.
#define NS_E_INCOMPATIBLE_FORMAT 0xC00D0041 // The station does not support the stream format.
#define NS_E_INVALID_KEY 0xC00D0042 // The specified key is not valid.
#define NS_E_INVALID_PORT 0xC00D0043 // The specified port is not valid.
#define NS_E_INVALID_TTL 0xC00D0044 // The specified TTL is not valid.
#define NS_E_STRIDE_REFUSED 0xC00D0045 // The request to fast forward or rewind could not be fulfilled.
#define NS_E_MMSAUTOSERVER_CANTFINDWALKER 0xC00D0046 // Unable to load the appropriate file parser.
#define NS_E_MAX_BITRATE 0xC00D0047 // Cannot exceed the maximum bandwidth limit.
#define NS_E_LOGFILEPERIOD 0xC00D0048 // Invalid value for LogFilePeriod.
#define NS_E_MAX_CLIENTS 0xC00D0049 // Cannot exceed the maximum client limit.
#define NS_E_LOG_FILE_SIZE 0xC00D004A // The maximum log file size has been reached.
#define NS_E_MAX_FILERATE 0xC00D004B // Cannot exceed the maximum file rate.
#define NS_E_WALKER_UNKNOWN 0xC00D004C // Unknown file type.
#define NS_E_WALKER_SERVER 0xC00D004D // The specified file, %1, cannot be loaded onto the specified server, %2.
#define NS_E_WALKER_USAGE 0xC00D004E // There was a usage error with file parser.
#define NS_E_TIGER_FAIL 0xC00D0050 // The Title Server %1 has failed.
#define NS_E_CUB_FAIL 0xC00D0053 // Content Server %1 (%2) has failed.
#define NS_E_DISK_FAIL 0xC00D0055 // Disk %1 ( %2 ) on Content Server %3, has failed.
#define NS_E_MAX_FUNNELS_ALERT 0xC00D0060 // The NetShow data stream limit of %1 streams was reached.
#define NS_E_ALLOCATE_FILE_FAIL 0xC00D0061 // The NetShow Video Server was unable to allocate a %1 block file named %2.
#define NS_E_PAGING_ERROR 0xC00D0062 // A Content Server was unable to page a block.
#define NS_E_BAD_BLOCK0_VERSION 0xC00D0063 // Disk %1 has unrecognized control block version %2.
#define NS_E_BAD_DISK_UID 0xC00D0064 // Disk %1 has incorrect uid %2.
#define NS_E_BAD_FSMAJOR_VERSION 0xC00D0065 // Disk %1 has unsupported file system major version %2.
#define NS_E_BAD_STAMPNUMBER 0xC00D0066 // Disk %1 has bad stamp number in control block.
#define NS_E_PARTIALLY_REBUILT_DISK 0xC00D0067 // Disk %1 is partially reconstructed.
#define NS_E_ENACTPLAN_GIVEUP 0xC00D0068 // EnactPlan gives up.
#define MCMADM_E_REGKEY_NOT_FOUND 0xC00D006A // The key was not found in the registry.
#define NS_E_NO_FORMATS 0xC00D006B // The publishing point cannot be started because the server does not have the appropriate stream formats. Use the Multicast Announcement Wizard to create a new announcement for this publishing point.
#define NS_E_NO_REFERENCES 0xC00D006C // No reference URLs were found in an ASX file.
#define NS_E_WAVE_OPEN 0xC00D006D // Error opening wave device, the device might be in use.
#define NS_E_CANNOTCONNECTEVENTS 0xC00D006F // Unable to establish a connection to the NetShow event monitor service.
#define NS_E_NO_DEVICE 0xC00D0071 // No device driver is present on the system.
#define NS_E_NO_SPECIFIED_DEVICE 0xC00D0072 // No specified device driver is present.
#define NS_E_MONITOR_GIVEUP 0xC00D00C8 // Netshow Events Monitor is not operational and has been disconnected.
#define NS_E_REMIRRORED_DISK 0xC00D00C9 // Disk %1 is remirrored.
#define NS_E_INSUFFICIENT_DATA 0xC00D00CA // Insufficient data found.
#define NS_E_ASSERT 0xC00D00CB // 1 failed in file %2 line %3.
#define NS_E_BAD_ADAPTER_NAME 0xC00D00CC // The specified adapter name is invalid.
#define NS_E_NOT_LICENSED 0xC00D00CD // The application is not licensed for this feature.
#define NS_E_NO_SERVER_CONTACT 0xC00D00CE // Unable to contact the server.
#define NS_E_TOO_MANY_TITLES 0xC00D00CF // Maximum number of titles exceeded.
#define NS_E_TITLE_SIZE_EXCEEDED 0xC00D00D0 // Maximum size of a title exceeded.
#define NS_E_UDP_DISABLED 0xC00D00D1 // UDP protocol not enabled. Not trying %1!ls!.
#define NS_E_TCP_DISABLED 0xC00D00D2 // TCP protocol not enabled. Not trying %1!ls!.
#define NS_E_HTTP_DISABLED 0xC00D00D3 // HTTP protocol not enabled. Not trying %1!ls!.
#define NS_E_LICENSE_EXPIRED 0xC00D00D4 // The product license has expired.
#define NS_E_TITLE_BITRATE 0xC00D00D5 // Source file exceeds the per title maximum bitrate. See NetShow Theater documentation for more information.
#define NS_E_EMPTY_PROGRAM_NAME 0xC00D00D6 // The program name cannot be empty.
#define NS_E_MISSING_CHANNEL 0xC00D00D7 // Station %1 does not exist.
#define NS_E_NO_CHANNELS 0xC00D00D8 // You need to define at least one station before this operation can complete.
#define NS_E_INVALID_INDEX2 0xC00D00D9 // The index specified is invalid.
#define NS_E_CUB_FAIL_LINK 0xC00D0190 // Content Server %1 (%2) has failed its link to Content Server %3.
#define NS_E_BAD_CUB_UID 0xC00D0192 // Content Server %1 (%2) has incorrect uid %3.
#define NS_E_GLITCH_MODE 0xC00D0195 // Server unreliable because multiple components failed.
#define NS_E_NO_MEDIA_PROTOCOL 0xC00D019B // Content Server %1 (%2) is unable to communicate with the Media System Network Protocol.
#define NS_E_NOTHING_TO_DO 0xC00D07F1 // Nothing to do.
#define NS_E_NO_MULTICAST 0xC00D07F2 // Not receiving data from the server.
#define NS_E_INVALID_INPUT_FORMAT 0xC00D0BB8 // The input media format is invalid.
#define NS_E_MSAUDIO_NOT_INSTALLED 0xC00D0BB9 // The MSAudio codec is not installed on this system.
#define NS_E_UNEXPECTED_MSAUDIO_ERROR 0xC00D0BBA // An unexpected error occurred with the MSAudio codec.
#define NS_E_INVALID_OUTPUT_FORMAT 0xC00D0BBB // The output media format is invalid.
#define NS_E_NOT_CONFIGURED 0xC00D0BBC // The object must be fully configured before audio samples can be processed.
#define NS_E_PROTECTED_CONTENT 0xC00D0BBD // You need a license to perform the requested operation on this media file.
#define NS_E_LICENSE_REQUIRED 0xC00D0BBE // You need a license to perform the requested operation on this media file.
#define NS_E_TAMPERED_CONTENT 0xC00D0BBF // This media file is corrupted or invalid. Contact the content provider for a new file.
#define NS_E_LICENSE_OUTOFDATE 0xC00D0BC0 // The license for this media file has expired. Get a new license or contact the content provider for further assistance.
#define NS_E_LICENSE_INCORRECT_RIGHTS 0xC00D0BC1 // You are not allowed to open this file. Contact the content provider for further assistance.
#define NS_E_AUDIO_CODEC_NOT_INSTALLED 0xC00D0BC2 // The requested audio codec is not installed on this system.
#define NS_E_AUDIO_CODEC_ERROR 0xC00D0BC3 // An unexpected error occurred with the audio codec.
#define NS_E_VIDEO_CODEC_NOT_INSTALLED 0xC00D0BC4 // The requested video codec is not installed on this system.
#define NS_E_VIDEO_CODEC_ERROR 0xC00D0BC5 // An unexpected error occurred with the video codec.
#define NS_E_INVALIDPROFILE 0xC00D0BC6 // The Profile is invalid.
#define NS_E_INCOMPATIBLE_VERSION 0xC00D0BC7 // A new version of the SDK is needed to play the requested content.
#define NS_E_OFFLINE_MODE 0xC00D0BCA // The requested URL is not available in offline mode.
#define NS_E_NOT_CONNECTED 0xC00D0BCB // The requested URL cannot be accessed because there is no network connection.
#define NS_E_TOO_MUCH_DATA 0xC00D0BCC // The encoding process was unable to keep up with the amount of supplied data.
#define NS_E_UNSUPPORTED_PROPERTY 0xC00D0BCD // The given property is not supported.
#define NS_E_8BIT_WAVE_UNSUPPORTED 0xC00D0BCE // Windows Media Player cannot copy the files to the CD because they are 8-bit. Convert the files to 16-bit, 44-kHz stereo files by using Sound Recorder or another audio-processing program, and then try again.
#define NS_E_NO_MORE_SAMPLES 0xC00D0BCF // There are no more samples in the current range.
#define NS_E_INVALID_SAMPLING_RATE 0xC00D0BD0 // The given sampling rate is invalid.
#define NS_E_MAX_PACKET_SIZE_TOO_SMALL 0xC00D0BD1 // The given maximum packet size is too small to accommodate this profile.)
#define NS_E_LATE_PACKET 0xC00D0BD2 // The packet arrived too late to be of use.
#define NS_E_DUPLICATE_PACKET 0xC00D0BD3 // The packet is a duplicate of one received before.
#define NS_E_SDK_BUFFERTOOSMALL 0xC00D0BD4 // Supplied buffer is too small.
#define NS_E_INVALID_NUM_PASSES 0xC00D0BD5 // The wrong number of preprocessing passes was used for the stream's output type.
#define NS_E_ATTRIBUTE_READ_ONLY 0xC00D0BD6 // An attempt was made to add, modify, or delete a read only attribute.
#define NS_E_ATTRIBUTE_NOT_ALLOWED 0xC00D0BD7 // An attempt was made to add attribute that is not allowed for the given media type.
#define NS_E_INVALID_EDL 0xC00D0BD8 // The EDL provided is invalid.
#define NS_E_DATA_UNIT_EXTENSION_TOO_LARGE 0xC00D0BD9 // The Data Unit Extension data was too large to be used.
#define NS_E_CODEC_DMO_ERROR 0xC00D0BDA // An unexpected error occurred with a DMO codec.
#define NS_E_FEATURE_DISABLED_BY_GROUP_POLICY 0xC00D0BDC // This feature has been disabled by group policy.
#define NS_E_FEATURE_DISABLED_IN_SKU 0xC00D0BDD // This feature is disabled in this SKU.
#define NS_E_NO_CD 0xC00D0FA0 // There is no CD in the CD drive. Insert a CD, and then try again.
#define NS_E_CANT_READ_DIGITAL 0xC00D0FA1 // Windows Media Player could not use digital playback to play the CD. To switch to analog playback, on the Tools menu, click Options, and then click the Devices tab. Double-click the CD drive, and then in the Playback area, click Analog. For additional assistance, click Web Help.
#define NS_E_DEVICE_DISCONNECTED 0xC00D0FA2 // Windows Media Player no longer detects a connected portable device. Reconnect your portable device, and then try synchronizing the file again.
#define NS_E_DEVICE_NOT_SUPPORT_FORMAT 0xC00D0FA3 // Windows Media Player cannot play the file. The portable device does not support the specified file type.
#define NS_E_SLOW_READ_DIGITAL 0xC00D0FA4 // Windows Media Player could not use digital playback to play the CD. The Player has automatically switched the CD drive to analog playback. To switch back to digital CD playback, use the Devices tab. For additional assistance, click Web Help.
#define NS_E_MIXER_INVALID_LINE 0xC00D0FA5 // An invalid line error occurred in the mixer.
#define NS_E_MIXER_INVALID_CONTROL 0xC00D0FA6 // An invalid control error occurred in the mixer.
#define NS_E_MIXER_INVALID_VALUE 0xC00D0FA7 // An invalid value error occurred in the mixer.
#define NS_E_MIXER_UNKNOWN_MMRESULT 0xC00D0FA8 // An unrecognized MMRESULT occurred in the mixer.
#define NS_E_USER_STOP 0xC00D0FA9 // User has stopped the operation.
#define NS_E_MP3_FORMAT_NOT_FOUND 0xC00D0FAA // Windows Media Player cannot rip the track because a compatible MP3 encoder is not installed on your computer. Install a compatible MP3 encoder or choose a different format to rip to (such as Windows Media Audio).
#define NS_E_CD_READ_ERROR_NO_CORRECTION 0xC00D0FAB // Windows Media Player cannot read the CD. The disc might be dirty or damaged. Turn on error correction, and then try again.
#define NS_E_CD_READ_ERROR 0xC00D0FAC // Windows Media Player cannot read the CD. The disc might be dirty or damaged or the CD drive might be malfunctioning.
#define NS_E_CD_SLOW_COPY 0xC00D0FAD // For best performance, do not play CD tracks while ripping them.
#define NS_E_CD_COPYTO_CD 0xC00D0FAE // It is not possible to directly burn tracks from one CD to another CD. You must first rip the tracks from the CD to your computer, and then burn the files to a blank CD.
#define NS_E_MIXER_NODRIVER 0xC00D0FAF // Could not open a sound mixer driver.
#define NS_E_REDBOOK_ENABLED_WHILE_COPYING 0xC00D0FB0 // Windows Media Player cannot rip tracks from the CD correctly because the CD drive settings in Device Manager do not match the CD drive settings in the Player.
#define NS_E_CD_REFRESH 0xC00D0FB1 // Windows Media Player is busy reading the CD.
#define NS_E_CD_DRIVER_PROBLEM 0xC00D0FB2 // Windows Media Player could not use digital playback to play the CD. The Player has automatically switched the CD drive to analog playback. To switch back to digital CD playback, use the Devices tab. For additional assistance, click Web Help.
#define NS_E_WONT_DO_DIGITAL 0xC00D0FB3 // Windows Media Player could not use digital playback to play the CD. The Player has automatically switched the CD drive to analog playback. To switch back to digital CD playback, use the Devices tab. For additional assistance, click Web Help.
#define NS_E_WMPXML_NOERROR 0xC00D0FB4 // A call was made to GetParseError on the XML parser but there was no error to retrieve.
#define NS_E_WMPXML_ENDOFDATA 0xC00D0FB5 // The XML Parser ran out of data while parsing.
#define NS_E_WMPXML_PARSEERROR 0xC00D0FB6 // A generic parse error occurred in the XML parser but no information is available.
#define NS_E_WMPXML_ATTRIBUTENOTFOUND 0xC00D0FB7 // A call get GetNamedAttribute or GetNamedAttributeIndex on the XML parser resulted in the index not being found.
#define NS_E_WMPXML_PINOTFOUND 0xC00D0FB8 // A call was made go GetNamedPI on the XML parser, but the requested Processing Instruction was not found.
#define NS_E_WMPXML_EMPTYDOC 0xC00D0FB9 // Persist was called on the XML parser, but the parser has no data to persist.
#define NS_E_WMP_PATH_ALREADY_IN_LIBRARY 0xC00D0FBA // This file path is already in the library.
#define NS_E_WMP_FILESCANALREADYSTARTED 0xC00D0FBE // Windows Media Player is already searching for files to add to your library. Wait for the current process to finish before attempting to search again.
#define NS_E_WMP_HME_INVALIDOBJECTID 0xC00D0FBF // Windows Media Player is unable to find the media you are looking for.
#define NS_E_WMP_MF_CODE_EXPIRED 0xC00D0FC0 // A component of Windows Media Player is out-of-date. If you are running a pre-release version of Windows, try upgrading to a more recent version.
#define NS_E_WMP_HME_NOTSEARCHABLEFORITEMS 0xC00D0FC1 // This container does not support search on items.
#define NS_E_WMP_ADDTOLIBRARY_FAILED 0xC00D0FC7 // Windows Media Player encountered a problem while adding one or more files to the library. For additional assistance, click Web Help.
#define NS_E_WMP_WINDOWSAPIFAILURE 0xC00D0FC8 // A Windows API call failed but no error information was available.
#define NS_E_WMP_RECORDING_NOT_ALLOWED 0xC00D0FC9 // This file does not have burn rights. If you obtained this file from an online store, go to the online store to get burn rights.
#define NS_E_DEVICE_NOT_READY 0xC00D0FCA // Windows Media Player no longer detects a connected portable device. Reconnect your portable device, and then try to sync the file again.
#define NS_E_DAMAGED_FILE 0xC00D0FCB // Windows Media Player cannot play the file because it is corrupted.
#define NS_E_MPDB_GENERIC 0xC00D0FCC // Windows Media Player encountered an error while attempting to access information in the library. Try restarting the Player.
#define NS_E_FILE_FAILED_CHECKS 0xC00D0FCD // The file cannot be added to the library because it is smaller than the "Skip files smaller than" setting. To add the file, change the setting on the Library tab. For additional assistance, click Web Help.
#define NS_E_MEDIA_LIBRARY_FAILED 0xC00D0FCE // Windows Media Player cannot create the library. You must be logged on as an administrator or a member of the Administrators group to install the Player. For more information, contact your system administrator.
#define NS_E_SHARING_VIOLATION 0xC00D0FCF // The file is already in use. Close other programs that might be using the file, or stop playing the file, and then try again.
#define NS_E_NO_ERROR_STRING_FOUND 0xC00D0FD0 // Windows Media Player has encountered an unknown error.
#define NS_E_WMPOCX_NO_REMOTE_CORE 0xC00D0FD1 // The Windows Media Player ActiveX control cannot connect to remote media services, but will continue with local media services.
#define NS_E_WMPOCX_NO_ACTIVE_CORE 0xC00D0FD2 // The requested method or property is not available because the Windows Media Player ActiveX control has not been properly activated.
#define NS_E_WMPOCX_NOT_RUNNING_REMOTELY 0xC00D0FD3 // The Windows Media Player ActiveX control is not running in remote mode.
#define NS_E_WMPOCX_NO_REMOTE_WINDOW 0xC00D0FD4 // An error occurred while trying to get the remote Windows Media Player window.
#define NS_E_WMPOCX_ERRORMANAGERNOTAVAILABLE 0xC00D0FD5 // Windows Media Player has encountered an unknown error.
#define NS_E_PLUGIN_NOTSHUTDOWN 0xC00D0FD6 // Windows Media Player was not closed properly. A damaged or incompatible plug-in might have caused the problem to occur. As a precaution, all optional plug-ins have been disabled.
#define NS_E_WMP_CANNOT_FIND_FOLDER 0xC00D0FD7 // Windows Media Player cannot find the specified path. Verify that the path is typed correctly. If it is, the path does not exist in the specified location, or the computer where the path is located is not available.
#define NS_E_WMP_STREAMING_RECORDING_NOT_ALLOWED 0xC00D0FD8 // Windows Media Player cannot save a file that is being streamed.
#define NS_E_WMP_PLUGINDLL_NOTFOUND 0xC00D0FD9 // Windows Media Player cannot find the selected plug-in. The Player will try to remove it from the menu. To use this plug-in, install it again.
#define NS_E_NEED_TO_ASK_USER 0xC00D0FDA // Action requires input from the user.
#define NS_E_WMPOCX_PLAYER_NOT_DOCKED 0xC00D0FDB // The Windows Media Player ActiveX control must be in a docked state for this action to be performed.
#define NS_E_WMP_EXTERNAL_NOTREADY 0xC00D0FDC // The Windows Media Player external object is not ready.
#define NS_E_WMP_MLS_STALE_DATA 0xC00D0FDD // Windows Media Player cannot perform the requested action. Your computer's time and date might not be set correctly.
#define NS_E_WMP_UI_SUBCONTROLSNOTSUPPORTED 0xC00D0FDE // The control (%s) does not support creation of sub-controls, yet (%d) sub-controls have been specified.
#define NS_E_WMP_UI_VERSIONMISMATCH 0xC00D0FDF // Version mismatch: (%.1f required, %.1f found).
#define NS_E_WMP_UI_NOTATHEMEFILE 0xC00D0FE0 // The layout manager was given valid XML that wasn't a theme file.
#define NS_E_WMP_UI_SUBELEMENTNOTFOUND 0xC00D0FE1 // The %s subelement could not be found on the %s object.
#define NS_E_WMP_UI_VERSIONPARSE 0xC00D0FE2 // An error occurred parsing the version tag. Valid version tags are of the form: <?wmp version='1.0'?>.
#define NS_E_WMP_UI_VIEWIDNOTFOUND 0xC00D0FE3 // The view specified in for the 'currentViewID' property (%s) was not found in this theme file.
#define NS_E_WMP_UI_PASSTHROUGH 0xC00D0FE4 // This error used internally for hit testing.
#define NS_E_WMP_UI_OBJECTNOTFOUND 0xC00D0FE5 // Attributes were specified for the %s object, but the object was not available to send them to.
#define NS_E_WMP_UI_SECONDHANDLER 0xC00D0FE6 // The %s event already has a handler, the second handler was ignored.
#define NS_E_WMP_UI_NOSKININZIP 0xC00D0FE7 // No .wms file found in skin archive.
#define NS_E_WMP_URLDOWNLOADFAILED 0xC00D0FEA // Windows Media Player encountered a problem while downloading the file. For additional assistance, click Web Help.
#define NS_E_WMPOCX_UNABLE_TO_LOAD_SKIN 0xC00D0FEB // The Windows Media Player ActiveX control cannot load the requested uiMode and cannot roll back to the existing uiMode.
#define NS_E_WMP_INVALID_SKIN 0xC00D0FEC // Windows Media Player encountered a problem with the skin file. The skin file might not be valid.
#define NS_E_WMP_SENDMAILFAILED 0xC00D0FED // Windows Media Player cannot send the link because your email program is not responding. Verify that your email program is configured properly, and then try again. For more information about email, see Windows Help.
#define NS_E_WMP_LOCKEDINSKINMODE 0xC00D0FEE // Windows Media Player cannot switch to full mode because your computer administrator has locked this skin.
#define NS_E_WMP_FAILED_TO_SAVE_FILE 0xC00D0FEF // Windows Media Player encountered a problem while saving the file. For additional assistance, click Web Help.
#define NS_E_WMP_SAVEAS_READONLY 0xC00D0FF0 // Windows Media Player cannot overwrite a read-only file. Try using a different file name.
#define NS_E_WMP_FAILED_TO_SAVE_PLAYLIST 0xC00D0FF1 // Windows Media Player encountered a problem while creating or saving the playlist. For additional assistance, click Web Help.
#define NS_E_WMP_FAILED_TO_OPEN_WMD 0xC00D0FF2 // Windows Media Player cannot open the Windows Media Download file. The file might be damaged.
#define NS_E_WMP_CANT_PLAY_PROTECTED 0xC00D0FF3 // The file cannot be added to the library because it is a protected DVR-MS file. This content cannot be played back by Windows Media Player.
#define NS_E_SHARING_STATE_OUT_OF_SYNC 0xC00D0FF4 // Media sharing has been turned off because a required Windows setting or component has changed. For additional assistance, click Web Help.
#define NS_E_WMPOCX_REMOTE_PLAYER_ALREADY_RUNNING 0xC00D0FFA // Exclusive Services launch failed because the Windows Media Player is already running.
#define NS_E_WMP_RBC_JPGMAPPINGIMAGE 0xC00D1004 // JPG Images are not recommended for use as a mappingImage.
#define NS_E_WMP_JPGTRANSPARENCY 0xC00D1005 // JPG Images are not recommended when using a transparencyColor.
#define NS_E_WMP_INVALID_MAX_VAL 0xC00D1009 // The Max property cannot be less than Min property.
#define NS_E_WMP_INVALID_MIN_VAL 0xC00D100A // The Min property cannot be greater than Max property.
#define NS_E_WMP_CS_JPGPOSITIONIMAGE 0xC00D100E // JPG Images are not recommended for use as a positionImage.
#define NS_E_WMP_CS_NOTEVENLYDIVISIBLE 0xC00D100F // The (%s) image's size is not evenly divisible by the positionImage's size.
#define NS_E_WMPZIP_NOTAZIPFILE 0xC00D1018 // The ZIP reader opened a file and its signature did not match that of the ZIP files.
#define NS_E_WMPZIP_CORRUPT 0xC00D1019 // The ZIP reader has detected that the file is corrupted.
#define NS_E_WMPZIP_FILENOTFOUND 0xC00D101A // GetFileStream, SaveToFile, or SaveTemp file was called on the ZIP reader with a file name that was not found in the ZIP file.
#define NS_E_WMP_IMAGE_FILETYPE_UNSUPPORTED 0xC00D1022 // Image type not supported.
#define NS_E_WMP_IMAGE_INVALID_FORMAT 0xC00D1023 // Image file might be corrupt.
#define NS_E_WMP_GIF_UNEXPECTED_ENDOFFILE 0xC00D1024 // Unexpected end of file. GIF file might be corrupt.
#define NS_E_WMP_GIF_INVALID_FORMAT 0xC00D1025 // Invalid GIF file.
#define NS_E_WMP_GIF_BAD_VERSION_NUMBER 0xC00D1026 // Invalid GIF version. Only 87a or 89a supported.
#define NS_E_WMP_GIF_NO_IMAGE_IN_FILE 0xC00D1027 // No images found in GIF file.
#define NS_E_WMP_PNG_INVALIDFORMAT 0xC00D1028 // Invalid PNG image file format.
#define NS_E_WMP_PNG_UNSUPPORTED_BITDEPTH 0xC00D1029 // PNG bitdepth not supported.
#define NS_E_WMP_PNG_UNSUPPORTED_COMPRESSION 0xC00D102A // Compression format defined in PNG file not supported,
#define NS_E_WMP_PNG_UNSUPPORTED_FILTER 0xC00D102B // Filter method defined in PNG file not supported.
#define NS_E_WMP_PNG_UNSUPPORTED_INTERLACE 0xC00D102C // Interlace method defined in PNG file not supported.
#define NS_E_WMP_PNG_UNSUPPORTED_BAD_CRC 0xC00D102D // Bad CRC in PNG file.
#define NS_E_WMP_BMP_INVALID_BITMASK 0xC00D102E // Invalid bitmask in BMP file.
#define NS_E_WMP_BMP_TOPDOWN_DIB_UNSUPPORTED 0xC00D102F // Topdown DIB not supported.
#define NS_E_WMP_BMP_BITMAP_NOT_CREATED 0xC00D1030 // Bitmap could not be created.
#define NS_E_WMP_BMP_COMPRESSION_UNSUPPORTED 0xC00D1031 // Compression format defined in BMP not supported.
#define NS_E_WMP_BMP_INVALID_FORMAT 0xC00D1032 // Invalid Bitmap format.
#define NS_E_WMP_JPG_JERR_ARITHCODING_NOTIMPL 0xC00D1033 // JPEG Arithmetic coding not supported.
#define NS_E_WMP_JPG_INVALID_FORMAT 0xC00D1034 // Invalid JPEG format.
#define NS_E_WMP_JPG_BAD_DCTSIZE 0xC00D1035 // Invalid JPEG format.
#define NS_E_WMP_JPG_BAD_VERSION_NUMBER 0xC00D1036 // Internal version error. Unexpected JPEG library version.
#define NS_E_WMP_JPG_BAD_PRECISION 0xC00D1037 // Internal JPEG Library error. Unsupported JPEG data precision.
#define NS_E_WMP_JPG_CCIR601_NOTIMPL 0xC00D1038 // JPEG CCIR601 not supported.
#define NS_E_WMP_JPG_NO_IMAGE_IN_FILE 0xC00D1039 // No image found in JPEG file.
#define NS_E_WMP_JPG_READ_ERROR 0xC00D103A // Could not read JPEG file.
#define NS_E_WMP_JPG_FRACT_SAMPLE_NOTIMPL 0xC00D103B // JPEG Fractional sampling not supported.
#define NS_E_WMP_JPG_IMAGE_TOO_BIG 0xC00D103C // JPEG image too large. Maximum image size supported is 65500 X 65500.
#define NS_E_WMP_JPG_UNEXPECTED_ENDOFFILE 0xC00D103D // Unexpected end of file reached in JPEG file.
#define NS_E_WMP_JPG_SOF_UNSUPPORTED 0xC00D103E // Unsupported JPEG SOF marker found.
#define NS_E_WMP_JPG_UNKNOWN_MARKER 0xC00D103F // Unknown JPEG marker found.
#define NS_E_WMP_FAILED_TO_OPEN_IMAGE 0xC00D1044 // Windows Media Player cannot display the picture file. The player either does not support the picture type or the picture is corrupted.
#define NS_E_WMP_DAI_SONGTOOSHORT 0xC00D1049 // Windows Media Player cannot compute a Digital Audio Id for the song. It is too short.
#define NS_E_WMG_RATEUNAVAILABLE 0xC00D104A // Windows Media Player cannot play the file at the requested speed.
#define NS_E_WMG_PLUGINUNAVAILABLE 0xC00D104B // The rendering or digital signal processing plug-in cannot be instantiated.
#define NS_E_WMG_CANNOTQUEUE 0xC00D104C // The file cannot be queued for seamless playback.
#define NS_E_WMG_PREROLLLICENSEACQUISITIONNOTALLOWED 0xC00D104D // Windows Media Player cannot download media usage rights for a file in the playlist.
#define NS_E_WMG_UNEXPECTEDPREROLLSTATUS 0xC00D104E // Windows Media Player encountered an error while trying to queue a file.
#define NS_E_WMG_INVALID_COPP_CERTIFICATE 0xC00D1051 // Windows Media Player cannot play the protected file. The Player cannot verify that the connection to your video card is secure. Try installing an updated device driver for your video card.
#define NS_E_WMG_COPP_SECURITY_INVALID 0xC00D1052 // Windows Media Player cannot play the protected file. The Player detected that the connection to your hardware might not be secure.
#define NS_E_WMG_COPP_UNSUPPORTED 0xC00D1053 // Windows Media Player output link protection is unsupported on this system.
#define NS_E_WMG_INVALIDSTATE 0xC00D1054 // Operation attempted in an invalid graph state.
#define NS_E_WMG_SINKALREADYEXISTS 0xC00D1055 // A renderer cannot be inserted in a stream while one already exists.
#define NS_E_WMG_NOSDKINTERFACE 0xC00D1056 // The Windows Media SDK interface needed to complete the operation does not exist at this time.
#define NS_E_WMG_NOTALLOUTPUTSRENDERED 0xC00D1057 // Windows Media Player cannot play a portion of the file because it requires a codec that either could not be downloaded or that is not supported by the Player.
#define NS_E_WMG_FILETRANSFERNOTALLOWED 0xC00D1058 // File transfer streams are not allowed in the standalone Player.
#define NS_E_WMR_UNSUPPORTEDSTREAM 0xC00D1059 // Windows Media Player cannot play the file. The Player does not support the format you are trying to play.
#define NS_E_WMR_PINNOTFOUND 0xC00D105A // An operation was attempted on a pin that does not exist in the DirectShow filter graph.
#define NS_E_WMR_WAITINGONFORMATSWITCH 0xC00D105B // Specified operation cannot be completed while waiting for a media format change from the SDK.
#define NS_E_WMR_NOSOURCEFILTER 0xC00D105C // Specified operation cannot be completed because the source filter does not exist.
#define NS_E_WMR_PINTYPENOMATCH 0xC00D105D // The specified type does not match this pin.
#define NS_E_WMR_NOCALLBACKAVAILABLE 0xC00D105E // The WMR Source Filter does not have a callback available.
#define NS_E_WMR_SAMPLEPROPERTYNOTSET 0xC00D1062 // The specified property has not been set on this sample.
#define NS_E_WMR_CANNOT_RENDER_BINARY_STREAM 0xC00D1063 // A plug-in is required to correctly play the file. To determine if the plug-in is available to download, click Web Help.
#define NS_E_WMG_LICENSE_TAMPERED 0xC00D1064 // Windows Media Player cannot play the file because your media usage rights are corrupted. If you previously backed up your media usage rights, try restoring them.
#define NS_E_WMR_WILLNOT_RENDER_BINARY_STREAM 0xC00D1065 // Windows Media Player cannot play protected files that contain binary streams.
#define NS_E_WMX_UNRECOGNIZED_PLAYLIST_FORMAT 0xC00D1068 // Windows Media Player cannot play the playlist because it is not valid.
#define NS_E_ASX_INVALIDFORMAT 0xC00D1069 // Windows Media Player cannot play the playlist because it is not valid.
#define NS_E_ASX_INVALIDVERSION 0xC00D106A // A later version of Windows Media Player might be required to play this playlist.
#define NS_E_ASX_INVALID_REPEAT_BLOCK 0xC00D106B // The format of a REPEAT loop within the current playlist file is not valid.
#define NS_E_ASX_NOTHING_TO_WRITE 0xC00D106C // Windows Media Player cannot save the playlist because it does not contain any items.
#define NS_E_URLLIST_INVALIDFORMAT 0xC00D106D // Windows Media Player cannot play the playlist because it is not valid.
#define NS_E_WMX_ATTRIBUTE_DOES_NOT_EXIST 0xC00D106E // The specified attribute does not exist.
#define NS_E_WMX_ATTRIBUTE_ALREADY_EXISTS 0xC00D106F // The specified attribute already exists.
#define NS_E_WMX_ATTRIBUTE_UNRETRIEVABLE 0xC00D1070 // Cannot retrieve the specified attribute.
#define NS_E_WMX_ITEM_DOES_NOT_EXIST 0xC00D1071 // The specified item does not exist in the current playlist.
#define NS_E_WMX_ITEM_TYPE_ILLEGAL 0xC00D1072 // Items of the specified type cannot be created within the current playlist.
#define NS_E_WMX_ITEM_UNSETTABLE 0xC00D1073 // The specified item cannot be set in the current playlist.
#define NS_E_WMX_PLAYLIST_EMPTY 0xC00D1074 // Windows Media Player cannot perform the requested action because the playlist does not contain any items.
#define NS_E_MLS_SMARTPLAYLIST_FILTER_NOT_REGISTERED 0xC00D1075 // The specified auto playlist contains a filter type that is either not valid or is not installed on this computer.
#define NS_E_WMX_INVALID_FORMAT_OVER_NESTING 0xC00D1076 // Windows Media Player cannot play the file because the associated playlist contains too many nested playlists.
#define NS_E_WMPCORE_NOSOURCEURLSTRING 0xC00D107C // Windows Media Player cannot find the file. Verify that the path is typed correctly. If it is, the file might not exist in the specified location, or the computer where the file is stored might not be available.
#define NS_E_WMPCORE_COCREATEFAILEDFORGITOBJECT 0xC00D107D // Failed to create the Global Interface Table.
#define NS_E_WMPCORE_FAILEDTOGETMARSHALLEDEVENTHANDLERINTERFACE 0xC00D107E // Failed to get the marshaled graph event handler interface.
#define NS_E_WMPCORE_BUFFERTOOSMALL 0xC00D107F // Buffer is too small for copying media type.
#define NS_E_WMPCORE_UNAVAILABLE 0xC00D1080 // The current state of the Player does not allow this operation.
#define NS_E_WMPCORE_INVALIDPLAYLISTMODE 0xC00D1081 // The playlist manager does not understand the current play mode (for example, shuffle or normal).
#define NS_E_WMPCORE_ITEMNOTINPLAYLIST 0xC00D1086 // Windows Media Player cannot play the file because it is not in the current playlist.
#define NS_E_WMPCORE_PLAYLISTEMPTY 0xC00D1087 // There are no items in the playlist. Add items to the playlist, and then try again.
#define NS_E_WMPCORE_NOBROWSER 0xC00D1088 // The web page cannot be displayed because no web browser is installed on your computer.
#define NS_E_WMPCORE_UNRECOGNIZED_MEDIA_URL 0xC00D1089 // Windows Media Player cannot find the specified file. Verify the path is typed correctly. If it is, the file does not exist in the specified location, or the computer where the file is stored is not available.
#define NS_E_WMPCORE_GRAPH_NOT_IN_LIST 0xC00D108A // Graph with the specified URL was not found in the prerolled graph list.
#define NS_E_WMPCORE_PLAYLIST_EMPTY_OR_SINGLE_MEDIA 0xC00D108B // Windows Media Player cannot perform the requested operation because there is only one item in the playlist.
#define NS_E_WMPCORE_ERRORSINKNOTREGISTERED 0xC00D108C // An error sink was never registered for the calling object.
#define NS_E_WMPCORE_ERRORMANAGERNOTAVAILABLE 0xC00D108D // The error manager is not available to respond to errors.
#define NS_E_WMPCORE_WEBHELPFAILED 0xC00D108E // The Web Help URL cannot be opened.
#define NS_E_WMPCORE_MEDIA_ERROR_RESUME_FAILED 0xC00D108F // Could not resume playing next item in playlist.
#define NS_E_WMPCORE_NO_REF_IN_ENTRY 0xC00D1090 // Windows Media Player cannot play the file because the associated playlist does not contain any items or the playlist is not valid.
#define NS_E_WMPCORE_WMX_LIST_ATTRIBUTE_NAME_EMPTY 0xC00D1091 // An empty string for playlist attribute name was found.
#define NS_E_WMPCORE_WMX_LIST_ATTRIBUTE_NAME_ILLEGAL 0xC00D1092 // A playlist attribute name that is not valid was found.
#define NS_E_WMPCORE_WMX_LIST_ATTRIBUTE_VALUE_EMPTY 0xC00D1093 // An empty string for a playlist attribute value was found.
#define NS_E_WMPCORE_WMX_LIST_ATTRIBUTE_VALUE_ILLEGAL 0xC00D1094 // An illegal value for a playlist attribute was found.
#define NS_E_WMPCORE_WMX_LIST_ITEM_ATTRIBUTE_NAME_EMPTY 0xC00D1095 // An empty string for a playlist item attribute name was found.
#define NS_E_WMPCORE_WMX_LIST_ITEM_ATTRIBUTE_NAME_ILLEGAL 0xC00D1096 // An illegal value for a playlist item attribute name was found.
#define NS_E_WMPCORE_WMX_LIST_ITEM_ATTRIBUTE_VALUE_EMPTY 0xC00D1097 // An illegal value for a playlist item attribute was found.
#define NS_E_WMPCORE_LIST_ENTRY_NO_REF 0xC00D1098 // The playlist does not contain any items.
#define NS_E_WMPCORE_MISNAMED_FILE 0xC00D1099 // Windows Media Player cannot play the file. The file is either corrupted or the Player does not support the format you are trying to play.
#define NS_E_WMPCORE_CODEC_NOT_TRUSTED 0xC00D109A // The codec downloaded for this file does not appear to be properly signed, so it cannot be installed.
#define NS_E_WMPCORE_CODEC_NOT_FOUND 0xC00D109B // Windows Media Player cannot play the file. One or more codecs required to play the file could not be found.
#define NS_E_WMPCORE_CODEC_DOWNLOAD_NOT_ALLOWED 0xC00D109C // Windows Media Player cannot play the file because a required codec is not installed on your computer. To try downloading the codec, turn on the "Download codecs automatically" option.
#define NS_E_WMPCORE_ERROR_DOWNLOADING_PLAYLIST 0xC00D109D // Windows Media Player encountered a problem while downloading the playlist. For additional assistance, click Web Help.
#define NS_E_WMPCORE_FAILED_TO_BUILD_PLAYLIST 0xC00D109E // Failed to build the playlist.
#define NS_E_WMPCORE_PLAYLIST_ITEM_ALTERNATE_NONE 0xC00D109F // Playlist has no alternates to switch into.
#define NS_E_WMPCORE_PLAYLIST_ITEM_ALTERNATE_EXHAUSTED 0xC00D10A0 // No more playlist alternates available to switch to.
#define NS_E_WMPCORE_PLAYLIST_ITEM_ALTERNATE_NAME_NOT_FOUND 0xC00D10A1 // Could not find the name of the alternate playlist to switch into.
#define NS_E_WMPCORE_PLAYLIST_ITEM_ALTERNATE_MORPH_FAILED 0xC00D10A2 // Failed to switch to an alternate for this media.
#define NS_E_WMPCORE_PLAYLIST_ITEM_ALTERNATE_INIT_FAILED 0xC00D10A3 // Failed to initialize an alternate for the media.
#define NS_E_WMPCORE_MEDIA_ALTERNATE_REF_EMPTY 0xC00D10A4 // No URL specified for the roll over Refs in the playlist file.
#define NS_E_WMPCORE_PLAYLIST_NO_EVENT_NAME 0xC00D10A5 // Encountered a playlist with no name.
#define NS_E_WMPCORE_PLAYLIST_EVENT_ATTRIBUTE_ABSENT 0xC00D10A6 // A required attribute in the event block of the playlist was not found.
#define NS_E_WMPCORE_PLAYLIST_EVENT_EMPTY 0xC00D10A7 // No items were found in the event block of the playlist.
#define NS_E_WMPCORE_PLAYLIST_STACK_EMPTY 0xC00D10A8 // No playlist was found while returning from a nested playlist.
#define NS_E_WMPCORE_CURRENT_MEDIA_NOT_ACTIVE 0xC00D10A9 // The media item is not active currently.
#define NS_E_WMPCORE_USER_CANCEL 0xC00D10AB // Windows Media Player cannot perform the requested action because you chose to cancel it.
#define NS_E_WMPCORE_PLAYLIST_REPEAT_EMPTY 0xC00D10AC // Windows Media Player encountered a problem with the playlist. The format of the playlist is not valid.
#define NS_E_WMPCORE_PLAYLIST_REPEAT_START_MEDIA_NONE 0xC00D10AD // Media object corresponding to start of a playlist repeat block was not found.
#define NS_E_WMPCORE_PLAYLIST_REPEAT_END_MEDIA_NONE 0xC00D10AE // Media object corresponding to the end of a playlist repeat block was not found.
#define NS_E_WMPCORE_INVALID_PLAYLIST_URL 0xC00D10AF // The playlist URL supplied to the playlist manager is not valid.
#define NS_E_WMPCORE_MISMATCHED_RUNTIME 0xC00D10B0 // Windows Media Player cannot play the file because it is corrupted.
#define NS_E_WMPCORE_PLAYLIST_IMPORT_FAILED_NO_ITEMS 0xC00D10B1 // Windows Media Player cannot add the playlist to the library because the playlist does not contain any items.
#define NS_E_WMPCORE_VIDEO_TRANSFORM_FILTER_INSERTION 0xC00D10B2 // An error has occurred that could prevent the changing of the video contrast on this media.
#define NS_E_WMPCORE_MEDIA_UNAVAILABLE 0xC00D10B3 // Windows Media Player cannot play the file. If the file is located on the Internet, connect to the Internet. If the file is located on a removable storage card, insert the storage card.
#define NS_E_WMPCORE_WMX_ENTRYREF_NO_REF 0xC00D10B4 // The playlist contains an ENTRYREF for which no href was parsed. Check the syntax of playlist file.
#define NS_E_WMPCORE_NO_PLAYABLE_MEDIA_IN_PLAYLIST 0xC00D10B5 // Windows Media Player cannot play any items in the playlist. To find information about the problem, click the Now Playing tab, and then click the icon next to each file in the List pane.
#define NS_E_WMPCORE_PLAYLIST_EMPTY_NESTED_PLAYLIST_SKIPPED_ITEMS 0xC00D10B6 // Windows Media Player cannot play some or all of the items in the playlist because the playlist is nested.
#define NS_E_WMPCORE_BUSY 0xC00D10B7 // Windows Media Player cannot play the file at this time. Try again later.
#define NS_E_WMPCORE_MEDIA_CHILD_PLAYLIST_UNAVAILABLE 0xC00D10B8 // There is no child playlist available for this media item at this time.
#define NS_E_WMPCORE_MEDIA_NO_CHILD_PLAYLIST 0xC00D10B9 // There is no child playlist for this media item.
#define NS_E_WMPCORE_FILE_NOT_FOUND 0xC00D10BA // Windows Media Player cannot find the file. The link from the item in the library to its associated digital media file might be broken. To fix the problem, try repairing the link or removing the item from the library.
#define NS_E_WMPCORE_TEMP_FILE_NOT_FOUND 0xC00D10BB // The temporary file was not found.
#define NS_E_WMDM_REVOKED 0xC00D10BC // Windows Media Player cannot sync the file because the device needs to be updated.
#define NS_E_DDRAW_GENERIC 0xC00D10BD // Windows Media Player cannot play the video because there is a problem with your video card.
#define NS_E_DISPLAY_MODE_CHANGE_FAILED 0xC00D10BE // Windows Media Player failed to change the screen mode for full-screen video playback.
#define NS_E_PLAYLIST_CONTAINS_ERRORS 0xC00D10BF // Windows Media Player cannot play one or more files. For additional information, right-click an item that cannot be played, and then click Error Details.
#define NS_E_CHANGING_PROXY_NAME 0xC00D10C0 // Cannot change the proxy name if the proxy setting is not set to custom.
#define NS_E_CHANGING_PROXY_PORT 0xC00D10C1 // Cannot change the proxy port if the proxy setting is not set to custom.
#define NS_E_CHANGING_PROXY_EXCEPTIONLIST 0xC00D10C2 // Cannot change the proxy exception list if the proxy setting is not set to custom.
#define NS_E_CHANGING_PROXYBYPASS 0xC00D10C3 // Cannot change the proxy bypass flag if the proxy setting is not set to custom.
#define NS_E_CHANGING_PROXY_PROTOCOL_NOT_FOUND 0xC00D10C4 // Cannot find the specified protocol.
#define NS_E_GRAPH_NOAUDIOLANGUAGE 0xC00D10C5 // Cannot change the language settings. Either the graph has no audio or the audio only supports one language.
#define NS_E_GRAPH_NOAUDIOLANGUAGESELECTED 0xC00D10C6 // The graph has no audio language selected.
#define NS_E_CORECD_NOTAMEDIACD 0xC00D10C7 // This is not a media CD.
#define NS_E_WMPCORE_MEDIA_URL_TOO_LONG 0xC00D10C8 // Windows Media Player cannot play the file because the URL is too long.
#define NS_E_WMPFLASH_CANT_FIND_COM_SERVER 0xC00D10C9 // To play the selected item, you must install the Macromedia Flash Player. To download the Macromedia Flash Player, go to the Adobe website.
#define NS_E_WMPFLASH_INCOMPATIBLEVERSION 0xC00D10CA // To play the selected item, you must install a later version of the Macromedia Flash Player. To download the Macromedia Flash Player, go to the Adobe website.
#define NS_E_WMPOCXGRAPH_IE_DISALLOWS_ACTIVEX_CONTROLS 0xC00D10CB // Windows Media Player cannot play the file because your Internet security settings prohibit the use of ActiveX controls.
#define NS_E_NEED_CORE_REFERENCE 0xC00D10CC // The use of this method requires an existing reference to the Player object.
#define NS_E_MEDIACD_READ_ERROR 0xC00D10CD // Windows Media Player cannot play the CD. The disc might be dirty or damaged.
#define NS_E_IE_DISALLOWS_ACTIVEX_CONTROLS 0xC00D10CE // Windows Media Player cannot play the file because your Internet security settings prohibit the use of ActiveX controls.
#define NS_E_FLASH_PLAYBACK_NOT_ALLOWED 0xC00D10CF // Flash playback has been turned off in Windows Media Player.
#define NS_E_UNABLE_TO_CREATE_RIP_LOCATION 0xC00D10D0 // Windows Media Player cannot rip the CD because a valid rip location cannot be created.
#define NS_E_WMPCORE_SOME_CODECS_MISSING 0xC00D10D1 // Windows Media Player cannot play the file because a required codec is not installed on your computer.
#define NS_E_WMP_RIP_FAILED 0xC00D10D2 // Windows Media Player cannot rip one or more tracks from the CD.
#define NS_E_WMP_FAILED_TO_RIP_TRACK 0xC00D10D3 // Windows Media Player encountered a problem while ripping the track from the CD. For additional assistance, click Web Help.
#define NS_E_WMP_ERASE_FAILED 0xC00D10D4 // Windows Media Player encountered a problem while erasing the disc. For additional assistance, click Web Help.
#define NS_E_WMP_FORMAT_FAILED 0xC00D10D5 // Windows Media Player encountered a problem while formatting the device. For additional assistance, click Web Help.
#define NS_E_WMP_CANNOT_BURN_NON_LOCAL_FILE 0xC00D10D6 // This file cannot be burned to a CD because it is not located on your computer.
#define NS_E_WMP_FILE_TYPE_CANNOT_BURN_TO_AUDIO_CD 0xC00D10D7 // It is not possible to burn this file type to an audio CD. Windows Media Player can burn the following file types to an audio CD: WMA, MP3, or WAV.
#define NS_E_WMP_FILE_DOES_NOT_FIT_ON_CD 0xC00D10D8 // This file is too large to fit on a disc.
#define NS_E_WMP_FILE_NO_DURATION 0xC00D10D9 // It is not possible to determine if this file can fit on a disc because Windows Media Player cannot detect the length of the file. Playing the file before burning might enable the Player to detect the file length.
#define NS_E_PDA_FAILED_TO_BURN 0xC00D10DA // Windows Media Player encountered a problem while burning the file to the disc. For additional assistance, click Web Help.
#define NS_E_FAILED_DOWNLOAD_ABORT_BURN 0xC00D10DC // Windows Media Player cannot burn the audio CD because some items in the list that you chose to buy could not be downloaded from the online store.
#define NS_E_WMPCORE_DEVICE_DRIVERS_MISSING 0xC00D10DD // Windows Media Player cannot play the file. Try using Windows Update or Device Manager to update the device drivers for your audio and video cards. For information about using Windows Update or Device Manager, see Windows Help.
#define NS_E_WMPIM_USEROFFLINE 0xC00D1126 // Windows Media Player has detected that you are not connected to the Internet. Connect to the Internet, and then try again.
#define NS_E_WMPIM_USERCANCELED 0xC00D1127 // The attempt to connect to the Internet was canceled.
#define NS_E_WMPIM_DIALUPFAILED 0xC00D1128 // The attempt to connect to the Internet failed.
#define NS_E_WINSOCK_ERROR_STRING 0xC00D1129 // Windows Media Player has encountered an unknown network error.
#define NS_E_WMPBR_NOLISTENER 0xC00D1130 // No window is currently listening to Backup and Restore events.
#define NS_E_WMPBR_BACKUPCANCEL 0xC00D1131 // Your media usage rights were not backed up because the backup was canceled.
#define NS_E_WMPBR_RESTORECANCEL 0xC00D1132 // Your media usage rights were not restored because the restoration was canceled.
#define NS_E_WMPBR_ERRORWITHURL 0xC00D1133 // An error occurred while backing up or restoring your media usage rights. A required web page cannot be displayed.
#define NS_E_WMPBR_NAMECOLLISION 0xC00D1134 // Your media usage rights were not backed up because the backup was canceled.
#define NS_E_WMPBR_DRIVE_INVALID 0xC00D1137 // Windows Media Player cannot restore your media usage rights from the specified location. Choose another location, and then try again.
#define NS_E_WMPBR_BACKUPRESTOREFAILED 0xC00D1138 // Windows Media Player cannot backup or restore your media usage rights.
#define NS_E_WMP_CONVERT_FILE_FAILED 0xC00D1158 // Windows Media Player cannot add the file to the library.
#define NS_E_WMP_CONVERT_NO_RIGHTS_ERRORURL 0xC00D1159 // Windows Media Player cannot add the file to the library because the content provider prohibits it. For assistance, contact the company that provided the file.
#define NS_E_WMP_CONVERT_NO_RIGHTS_NOERRORURL 0xC00D115A // Windows Media Player cannot add the file to the library because the content provider prohibits it. For assistance, contact the company that provided the file.
#define NS_E_WMP_CONVERT_FILE_CORRUPT 0xC00D115B // Windows Media Player cannot add the file to the library. The file might not be valid.
#define NS_E_WMP_CONVERT_PLUGIN_UNAVAILABLE_ERRORURL 0xC00D115C // Windows Media Player cannot add the file to the library. The plug-in required to add the file is not installed properly. For assistance, click Web Help to display the website of the company that provided the file.
#define NS_E_WMP_CONVERT_PLUGIN_UNAVAILABLE_NOERRORURL 0xC00D115D // Windows Media Player cannot add the file to the library. The plug-in required to add the file is not installed properly. For assistance, contact the company that provided the file.
#define NS_E_WMP_CONVERT_PLUGIN_UNKNOWN_FILE_OWNER 0xC00D115E // Windows Media Player cannot add the file to the library. The plug-in required to add the file is not installed properly. For assistance, contact the company that provided the file.
#define NS_E_DVD_DISC_COPY_PROTECT_OUTPUT_NS 0xC00D1160 // Windows Media Player cannot play this DVD. Try installing an updated driver for your video card or obtaining a newer video card.
#define NS_E_DVD_DISC_COPY_PROTECT_OUTPUT_FAILED 0xC00D1161 // This DVD's resolution exceeds the maximum allowed by your component video outputs. Try reducing your screen resolution to 640 x 480, or turn off analog component outputs and use a VGA connection to your monitor.
#define NS_E_DVD_NO_SUBPICTURE_STREAM 0xC00D1162 // Windows Media Player cannot display subtitles or highlights in DVD menus. Reinstall the DVD decoder or contact the DVD drive manufacturer to obtain an updated decoder.
#define NS_E_DVD_COPY_PROTECT 0xC00D1163 // Windows Media Player cannot play this DVD because there is a problem with digital copy protection between your DVD drive, decoder, and video card. Try installing an updated driver for your video card.
#define NS_E_DVD_AUTHORING_PROBLEM 0xC00D1164 // Windows Media Player cannot play the DVD. The disc was created in a manner that the Player does not support.
#define NS_E_DVD_INVALID_DISC_REGION 0xC00D1165 // Windows Media Player cannot play the DVD because the disc prohibits playback in your region of the world. You must obtain a disc that is intended for your geographic region.
#define NS_E_DVD_COMPATIBLE_VIDEO_CARD 0xC00D1166 // Windows Media Player cannot play the DVD because your video card does not support DVD playback.
#define NS_E_DVD_MACROVISION 0xC00D1167 // Windows Media Player cannot play this DVD because it is not possible to turn on analog copy protection on the output display. Try installing an updated driver for your video card.
#define NS_E_DVD_SYSTEM_DECODER_REGION 0xC00D1168 // Windows Media Player cannot play the DVD because the region assigned to your DVD drive does not match the region assigned to your DVD decoder.
#define NS_E_DVD_DISC_DECODER_REGION 0xC00D1169 // Windows Media Player cannot play the DVD because the disc prohibits playback in your region of the world. You must obtain a disc that is intended for your geographic region.
#define NS_E_DVD_NO_VIDEO_STREAM 0xC00D116A // Windows Media Player cannot play DVD video. You might need to adjust your Windows display settings. Open display settings in Control Panel, and then try lowering your screen resolution and color quality settings.
#define NS_E_DVD_NO_AUDIO_STREAM 0xC00D116B // Windows Media Player cannot play DVD audio. Verify that your sound card is set up correctly, and then try again.
#define NS_E_DVD_GRAPH_BUILDING 0xC00D116C // Windows Media Player cannot play DVD video. Close any open files and quit any other programs, and then try again. If the problem persists, restart your computer.
#define NS_E_DVD_NO_DECODER 0xC00D116D // Windows Media Player cannot play the DVD because a compatible DVD decoder is not installed on your computer.
#define NS_E_DVD_PARENTAL 0xC00D116E // Windows Media Player cannot play the scene because it has a parental rating higher than the rating that you are authorized to view.
#define NS_E_DVD_CANNOT_JUMP 0xC00D116F // Windows Media Player cannot skip to the requested location on the DVD.
#define NS_E_DVD_DEVICE_CONTENTION 0xC00D1170 // Windows Media Player cannot play the DVD because it is currently in use by another program. Quit the other program that is using the DVD, and then try again.
#define NS_E_DVD_NO_VIDEO_MEMORY 0xC00D1171 // Windows Media Player cannot play DVD video. You might need to adjust your Windows display settings. Open display settings in Control Panel, and then try lowering your screen resolution and color quality settings.
#define NS_E_DVD_CANNOT_COPY_PROTECTED 0xC00D1172 // Windows Media Player cannot rip the DVD because it is copy protected.
#define NS_E_DVD_REQUIRED_PROPERTY_NOT_SET 0xC00D1173 // One of more of the required properties has not been set.
#define NS_E_DVD_INVALID_TITLE_CHAPTER 0xC00D1174 // The specified title and/or chapter number does not exist on this DVD.
#define NS_E_NO_CD_BURNER 0xC00D1176 // Windows Media Player cannot burn the files because the Player cannot find a burner. If the burner is connected properly, try using Windows Update to install the latest device driver.
#define NS_E_DEVICE_IS_NOT_READY 0xC00D1177 // Windows Media Player does not detect storage media in the selected device. Insert storage media into the device, and then try again.
#define NS_E_PDA_UNSUPPORTED_FORMAT 0xC00D1178 // Windows Media Player cannot sync this file. The Player might not support the file type.
#define NS_E_NO_PDA 0xC00D1179 // Windows Media Player does not detect a portable device. Connect your portable device, and then try again.
#define NS_E_PDA_UNSPECIFIED_ERROR 0xC00D117A // Windows Media Player encountered an error while communicating with the device. The storage card on the device might be full, the device might be turned off, or the device might not allow playlists or folders to be created on it.
#define NS_E_MEMSTORAGE_BAD_DATA 0xC00D117B // Windows Media Player encountered an error while burning a CD.
#define NS_E_PDA_FAIL_SELECT_DEVICE 0xC00D117C // Windows Media Player encountered an error while communicating with a portable device or CD drive.
#define NS_E_PDA_FAIL_READ_WAVE_FILE 0xC00D117D // Windows Media Player cannot open the WAV file.
#define NS_E_IMAPI_LOSSOFSTREAMING 0xC00D117E // Windows Media Player failed to burn all the files to the CD. Select a slower recording speed, and then try again.
#define NS_E_PDA_DEVICE_FULL 0xC00D117F // There is not enough storage space on the portable device to complete this operation. Delete some unneeded files on the portable device, and then try again.
#define NS_E_FAIL_LAUNCH_ROXIO_PLUGIN 0xC00D1180 // Windows Media Player cannot burn the files. Verify that your burner is connected properly, and then try again. If the problem persists, reinstall the Player.
#define NS_E_PDA_DEVICE_FULL_IN_SESSION 0xC00D1181 // Windows Media Player did not sync some files to the device because there is not enough storage space on the device.
#define NS_E_IMAPI_MEDIUM_INVALIDTYPE 0xC00D1182 // The disc in the burner is not valid. Insert a blank disc into the burner, and then try again.
#define NS_E_PDA_MANUALDEVICE 0xC00D1183 // Windows Media Player cannot perform the requested action because the device does not support sync.
#define NS_E_PDA_PARTNERSHIPNOTEXIST 0xC00D1184 // To perform the requested action, you must first set up sync with the device.
#define NS_E_PDA_CANNOT_CREATE_ADDITIONAL_SYNC_RELATIONSHIP 0xC00D1185 // You have already created sync partnerships with 16 devices. To create a new sync partnership, you must first end an existing partnership.
#define NS_E_PDA_NO_TRANSCODE_OF_DRM 0xC00D1186 // Windows Media Player cannot sync the file because protected files cannot be converted to the required quality level or file format.
#define NS_E_PDA_TRANSCODECACHEFULL 0xC00D1187 // The folder that stores converted files is full. Either empty the folder or increase its size, and then try again.
#define NS_E_PDA_TOO_MANY_FILE_COLLISIONS 0xC00D1188 // There are too many files with the same name in the folder on the device. Change the file name or sync to a different folder.
#define NS_E_PDA_CANNOT_TRANSCODE 0xC00D1189 // Windows Media Player cannot convert the file to the format required by the device.
#define NS_E_PDA_TOO_MANY_FILES_IN_DIRECTORY 0xC00D118A // You have reached the maximum number of files your device allows in a folder. If your device supports playback from subfolders, try creating subfolders on the device and storing some files in them.
#define NS_E_PROCESSINGSHOWSYNCWIZARD 0xC00D118B // Windows Media Player is already trying to start the Device Setup Wizard.
#define NS_E_PDA_TRANSCODE_NOT_PERMITTED 0xC00D118C // Windows Media Player cannot convert this file format. If an updated version of the codec used to compress this file is available, install it and then try to sync the file again.
#define NS_E_PDA_INITIALIZINGDEVICES 0xC00D118D // Windows Media Player is busy setting up devices. Try again later.
#define NS_E_PDA_OBSOLETE_SP 0xC00D118E // Your device is using an outdated driver that is no longer supported by Windows Media Player. For additional assistance, click Web Help.
#define NS_E_PDA_TITLE_COLLISION 0xC00D118F // Windows Media Player cannot sync the file because a file with the same name already exists on the device. Change the file name or try to sync the file to a different folder.
#define NS_E_PDA_DEVICESUPPORTDISABLED 0xC00D1190 // Automatic and manual sync have been turned off temporarily. To sync to a device, restart Windows Media Player.
#define NS_E_PDA_NO_LONGER_AVAILABLE 0xC00D1191 // This device is not available. Connect the device to the computer, and then try again.
#define NS_E_PDA_ENCODER_NOT_RESPONDING 0xC00D1192 // Windows Media Player cannot sync the file because an error occurred while converting the file to another quality level or format. If the problem persists, remove the file from the list of files to sync.
#define NS_E_PDA_CANNOT_SYNC_FROM_LOCATION 0xC00D1193 // Windows Media Player cannot sync the file to your device. The file might be stored in a location that is not supported. Copy the file from its current location to your hard disk, add it to your library, and then try to sync the file again.
#define NS_E_WMP_PROTOCOL_PROBLEM 0xC00D1194 // Windows Media Player cannot open the specified URL. Verify that the Player is configured to use all available protocols, and then try again.
#define NS_E_WMP_NO_DISK_SPACE 0xC00D1195 // Windows Media Player cannot perform the requested action because there is not enough storage space on your computer. Delete some unneeded files on your hard disk, and then try again.
#define NS_E_WMP_LOGON_FAILURE 0xC00D1196 // The server denied access to the file. Verify that you are using the correct user name and password.
#define NS_E_WMP_CANNOT_FIND_FILE 0xC00D1197 // Windows Media Player cannot find the file. If you are trying to play, burn, or sync an item that is in your library, the item might point to a file that has been moved, renamed, or deleted.
#define NS_E_WMP_SERVER_INACCESSIBLE 0xC00D1198 // Windows Media Player cannot connect to the server. The server name might not be correct, the server might not be available, or your proxy settings might not be correct.
#define NS_E_WMP_UNSUPPORTED_FORMAT 0xC00D1199 // Windows Media Player cannot play the file. The Player might not support the file type or might not support the codec that was used to compress the file.
#define NS_E_WMP_DSHOW_UNSUPPORTED_FORMAT 0xC00D119A // Windows Media Player cannot play the file. The Player might not support the file type or a required codec might not be installed on your computer.
#define NS_E_WMP_PLAYLIST_EXISTS 0xC00D119B // Windows Media Player cannot create the playlist because the name already exists. Type a different playlist name.
#define NS_E_WMP_NONMEDIA_FILES 0xC00D119C // Windows Media Player cannot delete the playlist because it contains items that are not digital media files. Any digital media files in the playlist were deleted.
#define NS_E_WMP_INVALID_ASX 0xC00D119D // The playlist cannot be opened because it is stored in a shared folder on another computer. If possible, move the playlist to the playlists folder on your computer.
#define NS_E_WMP_ALREADY_IN_USE 0xC00D119E // Windows Media Player is already in use. Stop playing any items, close all Player dialog boxes, and then try again.
#define NS_E_WMP_IMAPI_FAILURE 0xC00D119F // Windows Media Player encountered an error while burning. Verify that the burner is connected properly and that the disc is clean and not damaged.
#define NS_E_WMP_WMDM_FAILURE 0xC00D11A0 // Windows Media Player has encountered an unknown error with your portable device. Reconnect your portable device, and then try again.
#define NS_E_WMP_CODEC_NEEDED_WITH_4CC 0xC00D11A1 // A codec is required to play this file. To determine if this codec is available to download from the web, click Web Help.
#define NS_E_WMP_CODEC_NEEDED_WITH_FORMATTAG 0xC00D11A2 // An audio codec is needed to play this file. To determine if this codec is available to download from the web, click Web Help.
#define NS_E_WMP_MSSAP_NOT_AVAILABLE 0xC00D11A3 // To play the file, you must install the latest Windows service pack. To install the service pack from the Windows Update website, click Web Help.
#define NS_E_WMP_WMDM_INTERFACEDEAD 0xC00D11A4 // Windows Media Player no longer detects a portable device. Reconnect your portable device, and then try again.
#define NS_E_WMP_WMDM_NOTCERTIFIED 0xC00D11A5 // Windows Media Player cannot sync the file because the portable device does not support protected files.
#define NS_E_WMP_WMDM_LICENSE_NOTEXIST 0xC00D11A6 // This file does not have sync rights. If you obtained this file from an online store, go to the online store to get sync rights.
#define NS_E_WMP_WMDM_LICENSE_EXPIRED 0xC00D11A7 // Windows Media Player cannot sync the file because the sync rights have expired. Go to the content provider's online store to get new sync rights.
#define NS_E_WMP_WMDM_BUSY 0xC00D11A8 // The portable device is already in use. Wait until the current task finishes or quit other programs that might be using the portable device, and then try again.
#define NS_E_WMP_WMDM_NORIGHTS 0xC00D11A9 // Windows Media Player cannot sync the file because the content provider or device prohibits it. You might be able to resolve this problem by going to the content provider's online store to get sync rights.
#define NS_E_WMP_WMDM_INCORRECT_RIGHTS 0xC00D11AA // The content provider has not granted you the right to sync this file. Go to the content provider's online store to get sync rights.
#define NS_E_WMP_IMAPI_GENERIC 0xC00D11AB // Windows Media Player cannot burn the files to the CD. Verify that the disc is clean and not damaged. If necessary, select a slower recording speed or try a different brand of blank discs.
#define NS_E_WMP_IMAPI_DEVICE_NOTPRESENT 0xC00D11AD // Windows Media Player cannot burn the files. Verify that the burner is connected properly, and then try again.
#define NS_E_WMP_IMAPI_DEVICE_BUSY 0xC00D11AE // Windows Media Player cannot burn the files. Verify that the burner is connected properly and that the disc is clean and not damaged. If the burner is already in use, wait until the current task finishes or quit other programs that might be using the burner.
#define NS_E_WMP_IMAPI_LOSS_OF_STREAMING 0xC00D11AF // Windows Media Player cannot burn the files to the CD.
#define NS_E_WMP_SERVER_UNAVAILABLE 0xC00D11B0 // Windows Media Player cannot play the file. The server might not be available or there might be a problem with your network or firewall settings.
#define NS_E_WMP_FILE_OPEN_FAILED 0xC00D11B1 // Windows Media Player encountered a problem while playing the file. For additional assistance, click Web Help.
#define NS_E_WMP_VERIFY_ONLINE 0xC00D11B2 // Windows Media Player must connect to the Internet to verify the file's media usage rights. Connect to the Internet, and then try again.
#define NS_E_WMP_SERVER_NOT_RESPONDING 0xC00D11B3 // Windows Media Player cannot play the file because a network error occurred. The server might not be available. Verify that you are connected to the network and that your proxy settings are correct.
#define NS_E_WMP_DRM_CORRUPT_BACKUP 0xC00D11B4 // Windows Media Player cannot restore your media usage rights because it could not find any backed up rights on your computer.
#define NS_E_WMP_DRM_LICENSE_SERVER_UNAVAILABLE 0xC00D11B5 // Windows Media Player cannot download media usage rights because the server is not available (for example, the server might be busy or not online).
#define NS_E_WMP_NETWORK_FIREWALL 0xC00D11B6 // Windows Media Player cannot play the file. A network firewall might be preventing the Player from opening the file by using the UDP transport protocol. If you typed a URL in the Open URL dialog box, try using a different transport protocol (for example, "http:").
#define NS_E_WMP_NO_REMOVABLE_MEDIA 0xC00D11B7 // Insert the removable media, and then try again.
#define NS_E_WMP_PROXY_CONNECT_TIMEOUT 0xC00D11B8 // Windows Media Player cannot play the file because the proxy server is not responding. The proxy server might be temporarily unavailable or your Player proxy settings might not be valid.
#define NS_E_WMP_NEED_UPGRADE 0xC00D11B9 // To play the file, you might need to install a later version of Windows Media Player. On the Help menu, click Check for Updates, and then follow the instructions. For additional assistance, click Web Help.
#define NS_E_WMP_AUDIO_HW_PROBLEM 0xC00D11BA // Windows Media Player cannot play the file because there is a problem with your sound device. There might not be a sound device installed on your computer, it might be in use by another program, or it might not be functioning properly.
#define NS_E_WMP_INVALID_PROTOCOL 0xC00D11BB // Windows Media Player cannot play the file because the specified protocol is not supported. If you typed a URL in the Open URL dialog box, try using a different transport protocol (for example, "http:" or "rtsp:").
#define NS_E_WMP_INVALID_LIBRARY_ADD 0xC00D11BC // Windows Media Player cannot add the file to the library because the file format is not supported.
#define NS_E_WMP_MMS_NOT_SUPPORTED 0xC00D11BD // Windows Media Player cannot play the file because the specified protocol is not supported. If you typed a URL in the Open URL dialog box, try using a different transport protocol (for example, "mms:").
#define NS_E_WMP_NO_PROTOCOLS_SELECTED 0xC00D11BE // Windows Media Player cannot play the file because there are no streaming protocols selected. Select one or more protocols, and then try again.
#define NS_E_WMP_GOFULLSCREEN_FAILED 0xC00D11BF // Windows Media Player cannot switch to Full Screen. You might need to adjust your Windows display settings. Open display settings in Control Panel, and then try setting Hardware acceleration to Full.
#define NS_E_WMP_NETWORK_ERROR 0xC00D11C0 // Windows Media Player cannot play the file because a network error occurred. The server might not be available (for example, the server is busy or not online) or you might not be connected to the network.
#define NS_E_WMP_CONNECT_TIMEOUT 0xC00D11C1 // Windows Media Player cannot play the file because the server is not responding. Verify that you are connected to the network, and then try again later.
#define NS_E_WMP_MULTICAST_DISABLED 0xC00D11C2 // Windows Media Player cannot play the file because the multicast protocol is not enabled. On the Tools menu, click Options, click the Network tab, and then select the Multicast check box. For additional assistance, click Web Help.
#define NS_E_WMP_SERVER_DNS_TIMEOUT 0xC00D11C3 // Windows Media Player cannot play the file because a network problem occurred. Verify that you are connected to the network, and then try again later.
#define NS_E_WMP_PROXY_NOT_FOUND 0xC00D11C4 // Windows Media Player cannot play the file because the network proxy server cannot be found. Verify that your proxy settings are correct, and then try again.
#define NS_E_WMP_TAMPERED_CONTENT 0xC00D11C5 // Windows Media Player cannot play the file because it is corrupted.
#define NS_E_WMP_OUTOFMEMORY 0xC00D11C6 // Your computer is running low on memory. Quit other programs, and then try again.
#define NS_E_WMP_AUDIO_CODEC_NOT_INSTALLED 0xC00D11C7 // Windows Media Player cannot play, burn, rip, or sync the file because a required audio codec is not installed on your computer.
#define NS_E_WMP_VIDEO_CODEC_NOT_INSTALLED 0xC00D11C8 // Windows Media Player cannot play the file because the required video codec is not installed on your computer.
#define NS_E_WMP_IMAPI_DEVICE_INVALIDTYPE 0xC00D11C9 // Windows Media Player cannot burn the files. If the burner is busy, wait for the current task to finish. If necessary, verify that the burner is connected properly and that you have installed the latest device driver.
#define NS_E_WMP_DRM_DRIVER_AUTH_FAILURE 0xC00D11CA // Windows Media Player cannot play the protected file because there is a problem with your sound device. Try installing a new device driver or use a different sound device.
#define NS_E_WMP_NETWORK_RESOURCE_FAILURE 0xC00D11CB // Windows Media Player encountered a network error. Restart the Player.
#define NS_E_WMP_UPGRADE_APPLICATION 0xC00D11CC // Windows Media Player is not installed properly. Reinstall the Player.
#define NS_E_WMP_UNKNOWN_ERROR 0xC00D11CD // Windows Media Player encountered an unknown error. For additional assistance, click Web Help.
#define NS_E_WMP_INVALID_KEY 0xC00D11CE // Windows Media Player cannot play the file because the required codec is not valid.
#define NS_E_WMP_CD_ANOTHER_USER 0xC00D11CF // The CD drive is in use by another user. Wait for the task to complete, and then try again.
#define NS_E_WMP_DRM_NEEDS_AUTHORIZATION 0xC00D11D0 // Windows Media Player cannot play, sync, or burn the protected file because a problem occurred with the Windows Media Digital Rights Management (DRM) system. You might need to connect to the Internet to update your DRM components. For additional assistance, click Web Help.
#define NS_E_WMP_BAD_DRIVER 0xC00D11D1 // Windows Media Player cannot play the file because there might be a problem with your sound or video device. Try installing an updated device driver.
#define NS_E_WMP_ACCESS_DENIED 0xC00D11D2 // Windows Media Player cannot access the file. The file might be in use, you might not have access to the computer where the file is stored, or your proxy settings might not be correct.
#define NS_E_WMP_LICENSE_RESTRICTS 0xC00D11D3 // The content provider prohibits this action. Go to the content provider's online store to get new media usage rights.
#define NS_E_WMP_INVALID_REQUEST 0xC00D11D4 // Windows Media Player cannot perform the requested action at this time.
#define NS_E_WMP_CD_STASH_NO_SPACE 0xC00D11D5 // Windows Media Player cannot burn the files because there is not enough free disk space to store the temporary files. Delete some unneeded files on your hard disk, and then try again.
#define NS_E_WMP_DRM_NEW_HARDWARE 0xC00D11D6 // Your media usage rights have become corrupted or are no longer valid. This might happen if you have replaced hardware components in your computer.
#define NS_E_WMP_DRM_INVALID_SIG 0xC00D11D7 // The required Windows Media Digital Rights Management (DRM) component cannot be validated. You might be able resolve the problem by reinstalling the Player.
#define NS_E_WMP_DRM_CANNOT_RESTORE 0xC00D11D8 // You have exceeded your restore limit for the day. Try restoring your media usage rights tomorrow.
#define NS_E_WMP_BURN_DISC_OVERFLOW 0xC00D11D9 // Some files might not fit on the CD. The required space cannot be calculated accurately because some files might be missing duration information. To ensure the calculation is accurate, play the files that are missing duration information.
#define NS_E_WMP_DRM_GENERIC_LICENSE_FAILURE 0xC00D11DA // Windows Media Player cannot verify the file's media usage rights. If you obtained this file from an online store, go to the online store to get the necessary rights.
#define NS_E_WMP_DRM_NO_SECURE_CLOCK 0xC00D11DB // It is not possible to sync because this device's internal clock is not set correctly. To set the clock, select the option to set the device clock on the Privacy tab of the Options dialog box, connect to the Internet, and then sync the device again. For additional assistance, click Web Help.
#define NS_E_WMP_DRM_NO_RIGHTS 0xC00D11DC // Windows Media Player cannot play, burn, rip, or sync the protected file because you do not have the appropriate rights.
#define NS_E_WMP_DRM_INDIV_FAILED 0xC00D11DD // Windows Media Player encountered an error during upgrade.
#define NS_E_WMP_SERVER_NONEWCONNECTIONS 0xC00D11DE // Windows Media Player cannot connect to the server because it is not accepting any new connections. This could be because it has reached its maximum connection limit. Please try again later.
#define NS_E_WMP_MULTIPLE_ERROR_IN_PLAYLIST 0xC00D11DF // A number of queued files cannot be played. To find information about the problem, click the Now Playing tab, and then click the icon next to each file in the List pane.
#define NS_E_WMP_IMAPI2_ERASE_FAIL 0xC00D11E0 // Windows Media Player encountered an error while erasing the rewritable CD or DVD. Verify that the CD or DVD burner is connected properly and that the disc is clean and not damaged.
#define NS_E_WMP_IMAPI2_ERASE_DEVICE_BUSY 0xC00D11E1 // Windows Media Player cannot erase the rewritable CD or DVD. Verify that the CD or DVD burner is connected properly and that the disc is clean and not damaged. If the burner is already in use, wait until the current task finishes or quit other programs that might be using the burner.
#define NS_E_WMP_DRM_COMPONENT_FAILURE 0xC00D11E2 // A Windows Media Digital Rights Management (DRM) component encountered a problem. If you are trying to use a file that you obtained from an online store, try going to the online store and getting the appropriate usage rights.
#define NS_E_WMP_DRM_NO_DEVICE_CERT 0xC00D11E3 // It is not possible to obtain device's certificate. Please contact the device manufacturer for a firmware update or for other steps to resolve this problem.
#define NS_E_WMP_SERVER_SECURITY_ERROR 0xC00D11E4 // Windows Media Player encountered an error when connecting to the server. The security information from the server could not be validated.
#define NS_E_WMP_AUDIO_DEVICE_LOST 0xC00D11E5 // An audio device was disconnected or reconfigured. Verify that the audio device is connected, and then try to play the item again.
#define NS_E_WMP_IMAPI_MEDIA_INCOMPATIBLE 0xC00D11E6 // Windows Media Player could not complete burning because the disc is not compatible with your drive. Try inserting a different kind of recordable media or use a disc that supports a write speed that is compatible with your drive.
#define NS_E_SYNCWIZ_DEVICE_FULL 0xC00D11EE // Windows Media Player cannot save the sync settings because your device is full. Delete some unneeded files on your device and then try again.
#define NS_E_SYNCWIZ_CANNOT_CHANGE_SETTINGS 0xC00D11EF // It is not possible to change sync settings at this time. Try again later.
#define NS_E_TRANSCODE_DELETECACHEERROR 0xC00D11F0 // Windows Media Player cannot delete these files currently. If the Player is synchronizing, wait until it is complete and then try again.
#define NS_E_CD_NO_BUFFERS_READ 0xC00D11F8 // Windows Media Player could not use digital mode to read the CD. The Player has automatically switched the CD drive to analog mode. To switch back to digital mode, use the Devices tab. For additional assistance, click Web Help.
#define NS_E_CD_EMPTY_TRACK_QUEUE 0xC00D11F9 // No CD track was specified for playback.
#define NS_E_CD_NO_READER 0xC00D11FA // The CD filter was not able to create the CD reader.
#define NS_E_CD_ISRC_INVALID 0xC00D11FB // Invalid ISRC code.
#define NS_E_CD_MEDIA_CATALOG_NUMBER_INVALID 0xC00D11FC // Invalid Media Catalog Number.
#define NS_E_SLOW_READ_DIGITAL_WITH_ERRORCORRECTION 0xC00D11FD // Windows Media Player cannot play audio CDs correctly because the CD drive is slow and error correction is turned on. To increase performance, turn off playback error correction for this drive.
#define NS_E_CD_SPEEDDETECT_NOT_ENOUGH_READS 0xC00D11FE // Windows Media Player cannot estimate the CD drive's playback speed because the CD track is too short.
#define NS_E_CD_QUEUEING_DISABLED 0xC00D11FF // Cannot queue the CD track because queuing is not enabled.
#define NS_E_WMP_DRM_ACQUIRING_LICENSE 0xC00D1202 // Windows Media Player cannot download additional media usage rights until the current download is complete.
#define NS_E_WMP_DRM_LICENSE_EXPIRED 0xC00D1203 // The media usage rights for this file have expired or are no longer valid. If you obtained the file from an online store, sign in to the store, and then try again.
#define NS_E_WMP_DRM_LICENSE_NOTACQUIRED 0xC00D1204 // Windows Media Player cannot download the media usage rights for the file. If you obtained the file from an online store, sign in to the store, and then try again.
#define NS_E_WMP_DRM_LICENSE_NOTENABLED 0xC00D1205 // The media usage rights for this file are not yet valid. To see when they will become valid, right-click the file in the library, click Properties, and then click the Media Usage Rights tab.
#define NS_E_WMP_DRM_LICENSE_UNUSABLE 0xC00D1206 // The media usage rights for this file are not valid. If you obtained this file from an online store, contact the store for assistance.
#define NS_E_WMP_DRM_LICENSE_CONTENT_REVOKED 0xC00D1207 // The content provider has revoked the media usage rights for this file. If you obtained this file from an online store, ask the store if a new version of the file is available.
#define NS_E_WMP_DRM_LICENSE_NOSAP 0xC00D1208 // The media usage rights for this file require a feature that is not supported in your current version of Windows Media Player or your current version of Windows. Try installing the latest version of the Player. If you obtained this file from an online store, contact the store for further assistance.
#define NS_E_WMP_DRM_UNABLE_TO_ACQUIRE_LICENSE 0xC00D1209 // Windows Media Player cannot download media usage rights at this time. Try again later.
#define NS_E_WMP_LICENSE_REQUIRED 0xC00D120A // Windows Media Player cannot play, burn, or sync the file because the media usage rights are missing. If you obtained the file from an online store, sign in to the store, and then try again.
#define NS_E_WMP_PROTECTED_CONTENT 0xC00D120B // Windows Media Player cannot play, burn, or sync the file because the media usage rights are missing. If you obtained the file from an online store, sign in to the store, and then try again.
#define NS_E_WMP_POLICY_VALUE_NOT_CONFIGURED 0xC00D122A // Windows Media Player cannot read a policy. This can occur when the policy does not exist in the registry or when the registry cannot be read.
#define NS_E_PDA_CANNOT_SYNC_FROM_INTERNET 0xC00D1234 // Windows Media Player cannot sync content streamed directly from the Internet. If possible, download the file to your computer, and then try to sync the file.
#define NS_E_PDA_CANNOT_SYNC_INVALID_PLAYLIST 0xC00D1235 // This playlist is not valid or is corrupted. Create a new playlist using Windows Media Player, then sync the new playlist instead.
#define NS_E_PDA_FAILED_TO_SYNCHRONIZE_FILE 0xC00D1236 // Windows Media Player encountered a problem while synchronizing the file to the device. For additional assistance, click Web Help.
#define NS_E_PDA_SYNC_FAILED 0xC00D1237 // Windows Media Player encountered an error while synchronizing to the device.
#define NS_E_PDA_DELETE_FAILED 0xC00D1238 // Windows Media Player cannot delete a file from the device.
#define NS_E_PDA_FAILED_TO_RETRIEVE_FILE 0xC00D1239 // Windows Media Player cannot copy a file from the device to your library.
#define NS_E_PDA_DEVICE_NOT_RESPONDING 0xC00D123A // Windows Media Player cannot communicate with the device because the device is not responding. Try reconnecting the device, resetting the device, or contacting the device manufacturer for updated firmware.
#define NS_E_PDA_FAILED_TO_TRANSCODE_PHOTO 0xC00D123B // Windows Media Player cannot sync the picture to the device because a problem occurred while converting the file to another quality level or format. The original file might be damaged or corrupted.
#define NS_E_PDA_FAILED_TO_ENCRYPT_TRANSCODED_FILE 0xC00D123C // Windows Media Player cannot convert the file. The file might have been encrypted by the Encrypted File System (EFS). Try decrypting the file first and then synchronizing it. For information about how to decrypt a file, see Windows Help and Support.
#define NS_E_PDA_CANNOT_TRANSCODE_TO_AUDIO 0xC00D123D // Your device requires that this file be converted in order to play on the device. However, the device either does not support playing audio, or Windows Media Player cannot convert the file to an audio format that is supported by the device.
#define NS_E_PDA_CANNOT_TRANSCODE_TO_VIDEO 0xC00D123E // Your device requires that this file be converted in order to play on the device. However, the device either does not support playing video, or Windows Media Player cannot convert the file to a video format that is supported by the device.
#define NS_E_PDA_CANNOT_TRANSCODE_TO_IMAGE 0xC00D123F // Your device requires that this file be converted in order to play on the device. However, the device either does not support displaying pictures, or Windows Media Player cannot convert the file to a picture format that is supported by the device.
#define NS_E_PDA_RETRIEVED_FILE_FILENAME_TOO_LONG 0xC00D1240 // Windows Media Player cannot sync the file to your computer because the file name is too long. Try renaming the file on the device.
#define NS_E_PDA_CEWMDM_DRM_ERROR 0xC00D1241 // Windows Media Player cannot sync the file because the device is not responding. This typically occurs when there is a problem with the device firmware. For additional assistance, click Web Help.
#define NS_E_INCOMPLETE_PLAYLIST 0xC00D1242 // Incomplete playlist.
#define NS_E_PDA_SYNC_RUNNING 0xC00D1243 // It is not possible to perform the requested action because sync is in progress. You can either stop sync or wait for it to complete, and then try again.
#define NS_E_PDA_SYNC_LOGIN_ERROR 0xC00D1244 // Windows Media Player cannot sync the subscription content because you are not signed in to the online store that provided it. Sign in to the online store, and then try again.
#define NS_E_PDA_TRANSCODE_CODEC_NOT_FOUND 0xC00D1245 // Windows Media Player cannot convert the file to the format required by the device. One or more codecs required to convert the file could not be found.
#define NS_E_CANNOT_SYNC_DRM_TO_NON_JANUS_DEVICE 0xC00D1246 // It is not possible to sync subscription files to this device.
#define NS_E_CANNOT_SYNC_PREVIOUS_SYNC_RUNNING 0xC00D1247 // Your device is operating slowly or is not responding. Until the device responds, it is not possible to sync again. To return the device to normal operation, try disconnecting it from the computer or resetting it.
#define NS_E_WMP_HWND_NOTFOUND 0xC00D125C // The Windows Media Player download manager cannot function properly because the Player main window cannot be found. Try restarting the Player.
#define NS_E_BKGDOWNLOAD_WRONG_NO_FILES 0xC00D125D // Windows Media Player encountered a download that has the wrong number of files. This might occur if another program is trying to create jobs with the same signature as the Player.
#define NS_E_BKGDOWNLOAD_COMPLETECANCELLEDJOB 0xC00D125E // Windows Media Player tried to complete a download that was already canceled. The file will not be available.
#define NS_E_BKGDOWNLOAD_CANCELCOMPLETEDJOB 0xC00D125F // Windows Media Player tried to cancel a download that was already completed. The file will not be removed.
#define NS_E_BKGDOWNLOAD_NOJOBPOINTER 0xC00D1260 // Windows Media Player is trying to access a download that is not valid.
#define NS_E_BKGDOWNLOAD_INVALIDJOBSIGNATURE 0xC00D1261 // This download was not created by Windows Media Player.
#define NS_E_BKGDOWNLOAD_FAILED_TO_CREATE_TEMPFILE 0xC00D1262 // The Windows Media Player download manager cannot create a temporary file name. This might occur if the path is not valid or if the disk is full.
#define NS_E_BKGDOWNLOAD_PLUGIN_FAILEDINITIALIZE 0xC00D1263 // The Windows Media Player download manager plug-in cannot start. This might occur if the system is out of resources.
#define NS_E_BKGDOWNLOAD_PLUGIN_FAILEDTOMOVEFILE 0xC00D1264 // The Windows Media Player download manager cannot move the file.
#define NS_E_BKGDOWNLOAD_CALLFUNCFAILED 0xC00D1265 // The Windows Media Player download manager cannot perform a task because the system has no resources to allocate.
#define NS_E_BKGDOWNLOAD_CALLFUNCTIMEOUT 0xC00D1266 // The Windows Media Player download manager cannot perform a task because the task took too long to run.
#define NS_E_BKGDOWNLOAD_CALLFUNCENDED 0xC00D1267 // The Windows Media Player download manager cannot perform a task because the Player is terminating the service. The task will be recovered when the Player restarts.
#define NS_E_BKGDOWNLOAD_WMDUNPACKFAILED 0xC00D1268 // The Windows Media Player download manager cannot expand a WMD file. The file will be deleted and the operation will not be completed successfully.
#define NS_E_BKGDOWNLOAD_FAILEDINITIALIZE 0xC00D1269 // The Windows Media Player download manager cannot start. This might occur if the system is out of resources.
#define NS_E_INTERFACE_NOT_REGISTERED_IN_GIT 0xC00D126A // Windows Media Player cannot access a required functionality. This might occur if the wrong system files or Player DLLs are loaded.
#define NS_E_BKGDOWNLOAD_INVALID_FILE_NAME 0xC00D126B // Windows Media Player cannot get the file name of the requested download. The requested download will be canceled.
#define NS_E_IMAGE_DOWNLOAD_FAILED 0xC00D128E // Windows Media Player encountered an error while downloading an image.
#define NS_E_WMP_UDRM_NOUSERLIST 0xC00D12C0 // Windows Media Player cannot update your media usage rights because the Player cannot verify the list of activated users of this computer.
#define NS_E_WMP_DRM_NOT_ACQUIRING 0xC00D12C1 // Windows Media Player is trying to acquire media usage rights for a file that is no longer being used. Rights acquisition will stop.
#define NS_E_WMP_BSTR_TOO_LONG 0xC00D12F2 // The parameter is not valid.
#define NS_E_WMP_AUTOPLAY_INVALID_STATE 0xC00D12FC // The state is not valid for this request.
#define NS_E_WMP_COMPONENT_REVOKED 0xC00D1306 // Windows Media Player cannot play this file until you complete the software component upgrade. After the component has been upgraded, try to play the file again.
#define NS_E_CURL_NOTSAFE 0xC00D1324 // The URL is not safe for the operation specified.
#define NS_E_CURL_INVALIDCHAR 0xC00D1325 // The URL contains one or more characters that are not valid.
#define NS_E_CURL_INVALIDHOSTNAME 0xC00D1326 // The URL contains a host name that is not valid.
#define NS_E_CURL_INVALIDPATH 0xC00D1327 // The URL contains a path that is not valid.
#define NS_E_CURL_INVALIDSCHEME 0xC00D1328 // The URL contains a scheme that is not valid.
#define NS_E_CURL_INVALIDURL 0xC00D1329 // The URL is not valid.
#define NS_E_CURL_CANTWALK 0xC00D132B // Windows Media Player cannot play the file. If you clicked a link on a web page, the link might not be valid.
#define NS_E_CURL_INVALIDPORT 0xC00D132C // The URL port is not valid.
#define NS_E_CURLHELPER_NOTADIRECTORY 0xC00D132D // The URL is not a directory.
#define NS_E_CURLHELPER_NOTAFILE 0xC00D132E // The URL is not a file.
#define NS_E_CURL_CANTDECODE 0xC00D132F // The URL contains characters that cannot be decoded. The URL might be truncated or incomplete.
#define NS_E_CURLHELPER_NOTRELATIVE 0xC00D1330 // The specified URL is not a relative URL.
#define NS_E_CURL_INVALIDBUFFERSIZE 0xC00D1331 // The buffer is smaller than the size specified.
#define NS_E_SUBSCRIPTIONSERVICE_PLAYBACK_DISALLOWED 0xC00D1356 // The content provider has not granted you the right to play this file. Go to the content provider's online store to get play rights.
#define NS_E_CANNOT_BUY_OR_DOWNLOAD_FROM_MULTIPLE_SERVICES 0xC00D1357 // Windows Media Player cannot purchase or download content from multiple online stores.
#define NS_E_CANNOT_BUY_OR_DOWNLOAD_CONTENT 0xC00D1358 // The file cannot be purchased or downloaded. The file might not be available from the online store.
#define NS_E_NOT_CONTENT_PARTNER_TRACK 0xC00D135A // The provider of this file cannot be identified.
#define NS_E_TRACK_DOWNLOAD_REQUIRES_ALBUM_PURCHASE 0xC00D135B // The file is only available for download when you buy the entire album.
#define NS_E_TRACK_DOWNLOAD_REQUIRES_PURCHASE 0xC00D135C // You must buy the file before you can download it.
#define NS_E_TRACK_PURCHASE_MAXIMUM_EXCEEDED 0xC00D135D // You have exceeded the maximum number of files that can be purchased in a single transaction.
#define NS_E_SUBSCRIPTIONSERVICE_LOGIN_FAILED 0xC00D135F // Windows Media Player cannot sign in to the online store. Verify that you are using the correct user name and password. If the problem persists, the store might be temporarily unavailable.
#define NS_E_SUBSCRIPTIONSERVICE_DOWNLOAD_TIMEOUT 0xC00D1360 // Windows Media Player cannot download this item because the server is not responding. The server might be temporarily unavailable or the Internet connection might be lost.
#define NS_E_CONTENT_PARTNER_STILL_INITIALIZING 0xC00D1362 // Content Partner still initializing.
#define NS_E_OPEN_CONTAINING_FOLDER_FAILED 0xC00D1363 // The folder could not be opened. The folder might have been moved or deleted.
#define NS_E_ADVANCEDEDIT_TOO_MANY_PICTURES 0xC00D136A // Windows Media Player could not add all of the images to the file because the images exceeded the 7 megabyte (MB) limit.
#define NS_E_REDIRECT 0xC00D1388 // The client redirected to another server.
#define NS_E_STALE_PRESENTATION 0xC00D1389 // The streaming media description is no longer current.
#define NS_E_NAMESPACE_WRONG_PERSIST 0xC00D138A // It is not possible to create a persistent namespace node under a transient parent node.
#define NS_E_NAMESPACE_WRONG_TYPE 0xC00D138B // It is not possible to store a value in a namespace node that has a different value type.
#define NS_E_NAMESPACE_NODE_CONFLICT 0xC00D138C // It is not possible to remove the root namespace node.
#define NS_E_NAMESPACE_NODE_NOT_FOUND 0xC00D138D // The specified namespace node could not be found.
#define NS_E_NAMESPACE_BUFFER_TOO_SMALL 0xC00D138E // The buffer supplied to hold namespace node string is too small.
#define NS_E_NAMESPACE_TOO_MANY_CALLBACKS 0xC00D138F // The callback list on a namespace node is at the maximum size.
#define NS_E_NAMESPACE_DUPLICATE_CALLBACK 0xC00D1390 // It is not possible to register an already-registered callback on a namespace node.
#define NS_E_NAMESPACE_CALLBACK_NOT_FOUND 0xC00D1391 // Cannot find the callback in the namespace when attempting to remove the callback.
#define NS_E_NAMESPACE_NAME_TOO_LONG 0xC00D1392 // The namespace node name exceeds the allowed maximum length.
#define NS_E_NAMESPACE_DUPLICATE_NAME 0xC00D1393 // Cannot create a namespace node that already exists.
#define NS_E_NAMESPACE_EMPTY_NAME 0xC00D1394 // The namespace node name cannot be a null string.
#define NS_E_NAMESPACE_INDEX_TOO_LARGE 0xC00D1395 // Finding a child namespace node by index failed because the index exceeded the number of children.
#define NS_E_NAMESPACE_BAD_NAME 0xC00D1396 // The namespace node name is invalid.
#define NS_E_NAMESPACE_WRONG_SECURITY 0xC00D1397 // It is not possible to store a value in a namespace node that has a different security type.
#define NS_E_CACHE_ARCHIVE_CONFLICT 0xC00D13EC // The archive request conflicts with other requests in progress.
#define NS_E_CACHE_ORIGIN_SERVER_NOT_FOUND 0xC00D13ED // The specified origin server cannot be found.
#define NS_E_CACHE_ORIGIN_SERVER_TIMEOUT 0xC00D13EE // The specified origin server is not responding.
#define NS_E_CACHE_NOT_BROADCAST 0xC00D13EF // The internal code for HTTP status code 412 Precondition Failed due to not broadcast type.
#define NS_E_CACHE_CANNOT_BE_CACHED 0xC00D13F0 // The internal code for HTTP status code 403 Forbidden due to not cacheable.
#define NS_E_CACHE_NOT_MODIFIED 0xC00D13F1 // The internal code for HTTP status code 304 Not Modified.
#define NS_E_CANNOT_REMOVE_PUBLISHING_POINT 0xC00D1450 // It is not possible to remove a cache or proxy publishing point.
#define NS_E_CANNOT_REMOVE_PLUGIN 0xC00D1451 // It is not possible to remove the last instance of a type of plug-in.
#define NS_E_WRONG_PUBLISHING_POINT_TYPE 0xC00D1452 // Cache and proxy publishing points do not support this property or method.
#define NS_E_UNSUPPORTED_LOAD_TYPE 0xC00D1453 // The plug-in does not support the specified load type.
#define NS_E_INVALID_PLUGIN_LOAD_TYPE_CONFIGURATION 0xC00D1454 // The plug-in does not support any load types. The plug-in must support at least one load type.
#define NS_E_INVALID_PUBLISHING_POINT_NAME 0xC00D1455 // The publishing point name is invalid.
#define NS_E_TOO_MANY_MULTICAST_SINKS 0xC00D1456 // Only one multicast data writer plug-in can be enabled for a publishing point.
#define NS_E_PUBLISHING_POINT_INVALID_REQUEST_WHILE_STARTED 0xC00D1457 // The requested operation cannot be completed while the publishing point is started.
#define NS_E_MULTICAST_PLUGIN_NOT_ENABLED 0xC00D1458 // A multicast data writer plug-in must be enabled in order for this operation to be completed.
#define NS_E_INVALID_OPERATING_SYSTEM_VERSION 0xC00D1459 // This feature requires Windows Server 2003, Enterprise Edition.
#define NS_E_PUBLISHING_POINT_REMOVED 0xC00D145A // The requested operation cannot be completed because the specified publishing point has been removed.
#define NS_E_INVALID_PUSH_PUBLISHING_POINT_START_REQUEST 0xC00D145B // Push publishing points are started when the encoder starts pushing the stream. This publishing point cannot be started by the server administrator.
#define NS_E_UNSUPPORTED_LANGUAGE 0xC00D145C // The specified language is not supported.
#define NS_E_WRONG_OS_VERSION 0xC00D145D // Windows Media Services will only run on Windows Server 2003, Standard Edition and Windows Server 2003, Enterprise Edition.
#define NS_E_PUBLISHING_POINT_STOPPED 0xC00D145E // The operation cannot be completed because the publishing point has been stopped.
#define NS_E_PLAYLIST_ENTRY_ALREADY_PLAYING 0xC00D14B4 // The playlist entry is already playing.
#define NS_E_EMPTY_PLAYLIST 0xC00D14B5 // The playlist or directory you are requesting does not contain content.
#define NS_E_PLAYLIST_PARSE_FAILURE 0xC00D14B6 // The server was unable to parse the requested playlist file.
#define NS_E_PLAYLIST_UNSUPPORTED_ENTRY 0xC00D14B7 // The requested operation is not supported for this type of playlist entry.
#define NS_E_PLAYLIST_ENTRY_NOT_IN_PLAYLIST 0xC00D14B8 // Cannot jump to a playlist entry that is not inserted in the playlist.
#define NS_E_PLAYLIST_ENTRY_SEEK 0xC00D14B9 // Cannot seek to the desired playlist entry.
#define NS_E_PLAYLIST_RECURSIVE_PLAYLISTS 0xC00D14BA // Cannot play recursive playlist.
#define NS_E_PLAYLIST_TOO_MANY_NESTED_PLAYLISTS 0xC00D14BB // The number of nested playlists exceeded the limit the server can handle.
#define NS_E_PLAYLIST_SHUTDOWN 0xC00D14BC // Cannot execute the requested operation because the playlist has been shut down by the Media Server.
#define NS_E_PLAYLIST_END_RECEDING 0xC00D14BD // The playlist has ended while receding.
#define NS_E_DATAPATH_NO_SINK 0xC00D1518 // The data path does not have an associated data writer plug-in.
#define NS_E_INVALID_PUSH_TEMPLATE 0xC00D151A // The specified push template is invalid.
#define NS_E_INVALID_PUSH_PUBLISHING_POINT 0xC00D151B // The specified push publishing point is invalid.
#define NS_E_CRITICAL_ERROR 0xC00D151C // The requested operation cannot be performed because the server or publishing point is in a critical error state.
#define NS_E_NO_NEW_CONNECTIONS 0xC00D151D // The content cannot be played because the server is not currently accepting connections. Try connecting at a later time.
#define NS_E_WSX_INVALID_VERSION 0xC00D151E // The version of this playlist is not supported by the server.
#define NS_E_HEADER_MISMATCH 0xC00D151F // The command does not apply to the current media header user by a server component.
#define NS_E_PUSH_DUPLICATE_PUBLISHING_POINT_NAME 0xC00D1520 // The specified publishing point name is already in use.
#define NS_E_NO_SCRIPT_ENGINE 0xC00D157C // There is no script engine available for this file.
#define NS_E_PLUGIN_ERROR_REPORTED 0xC00D157D // The plug-in has reported an error. See the Troubleshooting tab or the NT Application Event Log for details.
#define NS_E_SOURCE_PLUGIN_NOT_FOUND 0xC00D157E // No enabled data source plug-in is available to access the requested content.
#define NS_E_PLAYLIST_PLUGIN_NOT_FOUND 0xC00D157F // No enabled playlist parser plug-in is available to access the requested content.
#define NS_E_DATA_SOURCE_ENUMERATION_NOT_SUPPORTED 0xC00D1580 // The data source plug-in does not support enumeration.
#define NS_E_MEDIA_PARSER_INVALID_FORMAT 0xC00D1581 // The server cannot stream the selected file because it is either damaged or corrupt. Select a different file.
#define NS_E_SCRIPT_DEBUGGER_NOT_INSTALLED 0xC00D1582 // The plug-in cannot be enabled because a compatible script debugger is not installed on this system. Install a script debugger, or disable the script debugger option on the general tab of the plug-in's properties page and try again.
#define NS_E_FEATURE_REQUIRES_ENTERPRISE_SERVER 0xC00D1583 // The plug-in cannot be loaded because it requires Windows Server 2003, Enterprise Edition.
#define NS_E_WIZARD_RUNNING 0xC00D1584 // Another wizard is currently running. Please close the other wizard or wait until it finishes before attempting to run this wizard again.
#define NS_E_INVALID_LOG_URL 0xC00D1585 // Invalid log URL. Multicast logging URL must look like "http://servername/isapibackend.dll".
#define NS_E_INVALID_MTU_RANGE 0xC00D1586 // Invalid MTU specified. The valid range for maximum packet size is between 36 and 65507 bytes.
#define NS_E_INVALID_PLAY_STATISTICS 0xC00D1587 // Invalid play statistics for logging.
#define NS_E_LOG_NEED_TO_BE_SKIPPED 0xC00D1588 // The log needs to be skipped.
#define NS_E_HTTP_TEXT_DATACONTAINER_SIZE_LIMIT_EXCEEDED 0xC00D1589 // The size of the data exceeded the limit the WMS HTTP Download Data Source plugin can handle.
#define NS_E_PORT_IN_USE 0xC00D158A // One usage of each socket address (protocol/network address/port) is permitted. Verify that other services or applications are not attempting to use the same port and then try to enable the plug-in again.
#define NS_E_PORT_IN_USE_HTTP 0xC00D158B // One usage of each socket address (protocol/network address/port) is permitted. Verify that other services (such as IIS) or applications are not attempting to use the same port and then try to enable the plug-in again.
#define NS_E_HTTP_TEXT_DATACONTAINER_INVALID_SERVER_RESPONSE 0xC00D158C // The WMS HTTP Download Data Source plugin was unable to receive the remote server's response.
#define NS_E_ARCHIVE_REACH_QUOTA 0xC00D158D // The archive plug-in has reached its quota.
#define NS_E_ARCHIVE_ABORT_DUE_TO_BCAST 0xC00D158E // The archive plug-in aborted because the source was from broadcast.
#define NS_E_ARCHIVE_GAP_DETECTED 0xC00D158F // The archive plug-in detected an interrupt in the source.
#define NS_E_AUTHORIZATION_FILE_NOT_FOUND 0xC00D1590 // The system cannot find the file specified.
#define NS_E_BAD_MARKIN 0xC00D1B58 // The mark-in time should be greater than 0 and less than the mark-out time.
#define NS_E_BAD_MARKOUT 0xC00D1B59 // The mark-out time should be greater than the mark-in time and less than the file duration.
#define NS_E_NOMATCHING_MEDIASOURCE 0xC00D1B5A // No matching media type is found in the source %1.
#define NS_E_UNSUPPORTED_SOURCETYPE 0xC00D1B5B // The specified source type is not supported.
#define NS_E_TOO_MANY_AUDIO 0xC00D1B5C // It is not possible to specify more than one audio input.
#define NS_E_TOO_MANY_VIDEO 0xC00D1B5D // It is not possible to specify more than two video inputs.
#define NS_E_NOMATCHING_ELEMENT 0xC00D1B5E // No matching element is found in the list.
#define NS_E_MISMATCHED_MEDIACONTENT 0xC00D1B5F // The profile's media types must match the media types defined for the session.
#define NS_E_CANNOT_DELETE_ACTIVE_SOURCEGROUP 0xC00D1B60 // It is not possible to remove an active source while encoding.
#define NS_E_AUDIODEVICE_BUSY 0xC00D1B61 // It is not possible to open the specified audio capture device because it is currently in use.
#define NS_E_AUDIODEVICE_UNEXPECTED 0xC00D1B62 // It is not possible to open the specified audio capture device because an unexpected error has occurred.
#define NS_E_AUDIODEVICE_BADFORMAT 0xC00D1B63 // The audio capture device does not support the specified audio format.
#define NS_E_VIDEODEVICE_BUSY 0xC00D1B64 // It is not possible to open the specified video capture device because it is currently in use.
#define NS_E_VIDEODEVICE_UNEXPECTED 0xC00D1B65 // It is not possible to open the specified video capture device because an unexpected error has occurred.
#define NS_E_INVALIDCALL_WHILE_ENCODER_RUNNING 0xC00D1B66 // This operation is not allowed while encoding.
#define NS_E_NO_PROFILE_IN_SOURCEGROUP 0xC00D1B67 // No profile is set for the source.
#define NS_E_VIDEODRIVER_UNSTABLE 0xC00D1B68 // The video capture driver returned an unrecoverable error. It is now in an unstable state.
#define NS_E_VIDCAPSTARTFAILED 0xC00D1B69 // It was not possible to start the video device.
#define NS_E_VIDSOURCECOMPRESSION 0xC00D1B6A // The video source does not support the requested output format or color depth.
#define NS_E_VIDSOURCESIZE 0xC00D1B6B // The video source does not support the requested capture size.
#define NS_E_ICMQUERYFORMAT 0xC00D1B6C // It was not possible to obtain output information from the video compressor.
#define NS_E_VIDCAPCREATEWINDOW 0xC00D1B6D // It was not possible to create a video capture window.
#define NS_E_VIDCAPDRVINUSE 0xC00D1B6E // There is already a stream active on this video device.
#define NS_E_NO_MEDIAFORMAT_IN_SOURCE 0xC00D1B6F // No media format is set in source.
#define NS_E_NO_VALID_OUTPUT_STREAM 0xC00D1B70 // Cannot find a valid output stream from the source.
#define NS_E_NO_VALID_SOURCE_PLUGIN 0xC00D1B71 // It was not possible to find a valid source plug-in for the specified source.
#define NS_E_NO_ACTIVE_SOURCEGROUP 0xC00D1B72 // No source is currently active.
#define NS_E_NO_SCRIPT_STREAM 0xC00D1B73 // No script stream is set in the current source.
#define NS_E_INVALIDCALL_WHILE_ARCHIVAL_RUNNING 0xC00D1B74 // This operation is not allowed while archiving.
#define NS_E_INVALIDPACKETSIZE 0xC00D1B75 // The setting for the maximum packet size is not valid.
#define NS_E_PLUGIN_CLSID_INVALID 0xC00D1B76 // The plug-in CLSID specified is not valid.
#define NS_E_UNSUPPORTED_ARCHIVETYPE 0xC00D1B77 // This archive type is not supported.
#define NS_E_UNSUPPORTED_ARCHIVEOPERATION 0xC00D1B78 // This archive operation is not supported.
#define NS_E_ARCHIVE_FILENAME_NOTSET 0xC00D1B79 // The local archive file name was not set.
#define NS_E_SOURCEGROUP_NOTPREPARED 0xC00D1B7A // The source is not yet prepared.
#define NS_E_PROFILE_MISMATCH 0xC00D1B7B // Profiles on the sources do not match.
#define NS_E_INCORRECTCLIPSETTINGS 0xC00D1B7C // The specified crop values are not valid.
#define NS_E_NOSTATSAVAILABLE 0xC00D1B7D // No statistics are available at this time.
#define NS_E_NOTARCHIVING 0xC00D1B7E // The encoder is not archiving.
#define NS_E_INVALIDCALL_WHILE_ENCODER_STOPPED 0xC00D1B7F // This operation is only allowed during encoding.
#define NS_E_NOSOURCEGROUPS 0xC00D1B80 // This SourceGroupCollection doesn't contain any SourceGroups.
#define NS_E_INVALIDINPUTFPS 0xC00D1B81 // This source does not have a frame rate of 30 fps. Therefore, it is not possible to apply the inverse telecine filter to the source.
#define NS_E_NO_DATAVIEW_SUPPORT 0xC00D1B82 // It is not possible to display your source or output video in the Video panel.
#define NS_E_CODEC_UNAVAILABLE 0xC00D1B83 // One or more codecs required to open this content could not be found.
#define NS_E_ARCHIVE_SAME_AS_INPUT 0xC00D1B84 // The archive file has the same name as an input file. Change one of the names before continuing.
#define NS_E_SOURCE_NOTSPECIFIED 0xC00D1B85 // The source has not been set up completely.
#define NS_E_NO_REALTIME_TIMECOMPRESSION 0xC00D1B86 // It is not possible to apply time compression to a broadcast session.
#define NS_E_UNSUPPORTED_ENCODER_DEVICE 0xC00D1B87 // It is not possible to open this device.
#define NS_E_UNEXPECTED_DISPLAY_SETTINGS 0xC00D1B88 // It is not possible to start encoding because the display size or color has changed since the current session was defined. Restore the previous settings or create a new session.
#define NS_E_NO_AUDIODATA 0xC00D1B89 // No audio data has been received for several seconds. Check the audio source and restart the encoder.
#define NS_E_INPUTSOURCE_PROBLEM 0xC00D1B8A // One or all of the specified sources are not working properly. Check that the sources are configured correctly.
#define NS_E_WME_VERSION_MISMATCH 0xC00D1B8B // The supplied configuration file is not supported by this version of the encoder.
#define NS_E_NO_REALTIME_PREPROCESS 0xC00D1B8C // It is not possible to use image preprocessing with live encoding.
#define NS_E_NO_REPEAT_PREPROCESS 0xC00D1B8D // It is not possible to use two-pass encoding when the source is set to loop.
#define NS_E_CANNOT_PAUSE_LIVEBROADCAST 0xC00D1B8E // It is not possible to pause encoding during a broadcast.
#define NS_E_DRM_PROFILE_NOT_SET 0xC00D1B8F // A DRM profile has not been set for the current session.
#define NS_E_DUPLICATE_DRMPROFILE 0xC00D1B90 // The profile ID is already used by a DRM profile. Specify a different profile ID.
#define NS_E_INVALID_DEVICE 0xC00D1B91 // The setting of the selected device does not support control for playing back tapes.
#define NS_E_SPEECHEDL_ON_NON_MIXEDMODE 0xC00D1B92 // You must specify a mixed voice and audio mode in order to use an optimization definition file.
#define NS_E_DRM_PASSWORD_TOO_LONG 0xC00D1B93 // The specified password is too long. Type a password with fewer than 8 characters.
#define NS_E_DEVCONTROL_FAILED_SEEK 0xC00D1B94 // It is not possible to seek to the specified mark-in point.
#define NS_E_INTERLACE_REQUIRE_SAMESIZE 0xC00D1B95 // When you choose to maintain the interlacing in your video, the output video size must match the input video size.
#define NS_E_TOO_MANY_DEVICECONTROL 0xC00D1B96 // Only one device control plug-in can control a device.
#define NS_E_NO_MULTIPASS_FOR_LIVEDEVICE 0xC00D1B97 // You must also enable storing content to hard disk temporarily in order to use two-pass encoding with the input device.
#define NS_E_MISSING_AUDIENCE 0xC00D1B98 // An audience is missing from the output stream configuration.
#define NS_E_AUDIENCE_CONTENTTYPE_MISMATCH 0xC00D1B99 // All audiences in the output tree must have the same content type.
#define NS_E_MISSING_SOURCE_INDEX 0xC00D1B9A // A source index is missing from the output stream configuration.
#define NS_E_NUM_LANGUAGE_MISMATCH 0xC00D1B9B // The same source index in different audiences should have the same number of languages.
#define NS_E_LANGUAGE_MISMATCH 0xC00D1B9C // The same source index in different audiences should have the same languages.
#define NS_E_VBRMODE_MISMATCH 0xC00D1B9D // The same source index in different audiences should use the same VBR encoding mode.
#define NS_E_INVALID_INPUT_AUDIENCE_INDEX 0xC00D1B9E // The bit rate index specified is not valid.
#define NS_E_INVALID_INPUT_LANGUAGE 0xC00D1B9F // The specified language is not valid.
#define NS_E_INVALID_INPUT_STREAM 0xC00D1BA0 // The specified source type is not valid.
#define NS_E_EXPECT_MONO_WAV_INPUT 0xC00D1BA1 // The source must be a mono channel .wav file.
#define NS_E_INPUT_WAVFORMAT_MISMATCH 0xC00D1BA2 // All the source .wav files must have the same format.
#define NS_E_RECORDQ_DISK_FULL 0xC00D1BA3 // The hard disk being used for temporary storage of content has reached the minimum allowed disk space. Create more space on the hard disk and restart encoding.
#define NS_E_NO_PAL_INVERSE_TELECINE 0xC00D1BA4 // It is not possible to apply the inverse telecine feature to PAL content.
#define NS_E_ACTIVE_SG_DEVICE_DISCONNECTED 0xC00D1BA5 // A capture device in the current active source is no longer available.
#define NS_E_ACTIVE_SG_DEVICE_CONTROL_DISCONNECTED 0xC00D1BA6 // A device used in the current active source for device control is no longer available.
#define NS_E_NO_FRAMES_SUBMITTED_TO_ANALYZER 0xC00D1BA7 // No frames have been submitted to the analyzer for analysis.
#define NS_E_INPUT_DOESNOT_SUPPORT_SMPTE 0xC00D1BA8 // The source video does not support time codes.
#define NS_E_NO_SMPTE_WITH_MULTIPLE_SOURCEGROUPS 0xC00D1BA9 // It is not possible to generate a time code when there are multiple sources in a session.
#define NS_E_BAD_CONTENTEDL 0xC00D1BAA // The voice codec optimization definition file cannot be found or is corrupted.
#define NS_E_INTERLACEMODE_MISMATCH 0xC00D1BAB // The same source index in different audiences should have the same interlace mode.
#define NS_E_NONSQUAREPIXELMODE_MISMATCH 0xC00D1BAC // The same source index in different audiences should have the same nonsquare pixel mode.
#define NS_E_SMPTEMODE_MISMATCH 0xC00D1BAD // The same source index in different audiences should have the same time code mode.
#define NS_E_END_OF_TAPE 0xC00D1BAE // Either the end of the tape has been reached or there is no tape. Check the device and tape.
#define NS_E_NO_MEDIA_IN_AUDIENCE 0xC00D1BAF // No audio or video input has been specified.
#define NS_E_NO_AUDIENCES 0xC00D1BB0 // The profile must contain a bit rate.
#define NS_E_NO_AUDIO_COMPAT 0xC00D1BB1 // You must specify at least one audio stream to be compatible with Windows Media Player 7.1.
#define NS_E_INVALID_VBR_COMPAT 0xC00D1BB2 // Using a VBR encoding mode is not compatible with Windows Media Player 7.1.
#define NS_E_NO_PROFILE_NAME 0xC00D1BB3 // You must specify a profile name.
#define NS_E_INVALID_VBR_WITH_UNCOMP 0xC00D1BB4 // It is not possible to use a VBR encoding mode with uncompressed audio or video.
#define NS_E_MULTIPLE_VBR_AUDIENCES 0xC00D1BB5 // It is not possible to use MBR encoding with VBR encoding.
#define NS_E_UNCOMP_COMP_COMBINATION 0xC00D1BB6 // It is not possible to mix uncompressed and compressed content in a session.
#define NS_E_MULTIPLE_AUDIO_CODECS 0xC00D1BB7 // All audiences must use the same audio codec.
#define NS_E_MULTIPLE_AUDIO_FORMATS 0xC00D1BB8 // All audiences should use the same audio format to be compatible with Windows Media Player 7.1.
#define NS_E_AUDIO_BITRATE_STEPDOWN 0xC00D1BB9 // The audio bit rate for an audience with a higher total bit rate must be greater than one with a lower total bit rate.
#define NS_E_INVALID_AUDIO_PEAKRATE 0xC00D1BBA // The audio peak bit rate setting is not valid.
#define NS_E_INVALID_AUDIO_PEAKRATE_2 0xC00D1BBB // The audio peak bit rate setting must be greater than the audio bit rate setting.
#define NS_E_INVALID_AUDIO_BUFFERMAX 0xC00D1BBC // The setting for the maximum buffer size for audio is not valid.
#define NS_E_MULTIPLE_VIDEO_CODECS 0xC00D1BBD // All audiences must use the same video codec.
#define NS_E_MULTIPLE_VIDEO_SIZES 0xC00D1BBE // All audiences should use the same video size to be compatible with Windows Media Player 7.1.
#define NS_E_INVALID_VIDEO_BITRATE 0xC00D1BBF // The video bit rate setting is not valid.
#define NS_E_VIDEO_BITRATE_STEPDOWN 0xC00D1BC0 // The video bit rate for an audience with a higher total bit rate must be greater than one with a lower total bit rate.
#define NS_E_INVALID_VIDEO_PEAKRATE 0xC00D1BC1 // The video peak bit rate setting is not valid.
#define NS_E_INVALID_VIDEO_PEAKRATE_2 0xC00D1BC2 // The video peak bit rate setting must be greater than the video bit rate setting.
#define NS_E_INVALID_VIDEO_WIDTH 0xC00D1BC3 // The video width setting is not valid.
#define NS_E_INVALID_VIDEO_HEIGHT 0xC00D1BC4 // The video height setting is not valid.
#define NS_E_INVALID_VIDEO_FPS 0xC00D1BC5 // The video frame rate setting is not valid.
#define NS_E_INVALID_VIDEO_KEYFRAME 0xC00D1BC6 // The video key frame setting is not valid.
#define NS_E_INVALID_VIDEO_IQUALITY 0xC00D1BC7 // The video image quality setting is not valid.
#define NS_E_INVALID_VIDEO_CQUALITY 0xC00D1BC8 // The video codec quality setting is not valid.
#define NS_E_INVALID_VIDEO_BUFFER 0xC00D1BC9 // The video buffer setting is not valid.
#define NS_E_INVALID_VIDEO_BUFFERMAX 0xC00D1BCA // The setting for the maximum buffer size for video is not valid.
#define NS_E_INVALID_VIDEO_BUFFERMAX_2 0xC00D1BCB // The value of the video maximum buffer size setting must be greater than the video buffer size setting.
#define NS_E_INVALID_VIDEO_WIDTH_ALIGN 0xC00D1BCC // The alignment of the video width is not valid.
#define NS_E_INVALID_VIDEO_HEIGHT_ALIGN 0xC00D1BCD // The alignment of the video height is not valid.
#define NS_E_MULTIPLE_SCRIPT_BITRATES 0xC00D1BCE // All bit rates must have the same script bit rate.
#define NS_E_INVALID_SCRIPT_BITRATE 0xC00D1BCF // The script bit rate specified is not valid.
#define NS_E_MULTIPLE_FILE_BITRATES 0xC00D1BD0 // All bit rates must have the same file transfer bit rate.
#define NS_E_INVALID_FILE_BITRATE 0xC00D1BD1 // The file transfer bit rate is not valid.
#define NS_E_SAME_AS_INPUT_COMBINATION 0xC00D1BD2 // All audiences in a profile should either be same as input or have video width and height specified.
#define NS_E_SOURCE_CANNOT_LOOP 0xC00D1BD3 // This source type does not support looping.
#define NS_E_INVALID_FOLDDOWN_COEFFICIENTS 0xC00D1BD4 // The fold-down value needs to be between -144 and 0.
#define NS_E_DRMPROFILE_NOTFOUND 0xC00D1BD5 // The specified DRM profile does not exist in the system.
#define NS_E_INVALID_TIMECODE 0xC00D1BD6 // The specified time code is not valid.
#define NS_E_NO_AUDIO_TIMECOMPRESSION 0xC00D1BD7 // It is not possible to apply time compression to a video-only session.
#define NS_E_NO_TWOPASS_TIMECOMPRESSION 0xC00D1BD8 // It is not possible to apply time compression to a session that is using two-pass encoding.
#define NS_E_TIMECODE_REQUIRES_VIDEOSTREAM 0xC00D1BD9 // It is not possible to generate a time code for an audio-only session.
#define NS_E_NO_MBR_WITH_TIMECODE 0xC00D1BDA // It is not possible to generate a time code when you are encoding content at multiple bit rates.
#define NS_E_INVALID_INTERLACEMODE 0xC00D1BDB // The video codec selected does not support maintaining interlacing in video.
#define NS_E_INVALID_INTERLACE_COMPAT 0xC00D1BDC // Maintaining interlacing in video is not compatible with Windows Media Player 7.1.
#define NS_E_INVALID_NONSQUAREPIXEL_COMPAT 0xC00D1BDD // Allowing nonsquare pixel output is not compatible with Windows Media Player 7.1.
#define NS_E_INVALID_SOURCE_WITH_DEVICE_CONTROL 0xC00D1BDE // Only capture devices can be used with device control.
#define NS_E_CANNOT_GENERATE_BROADCAST_INFO_FOR_QUALITYVBR 0xC00D1BDF // It is not possible to generate the stream format file if you are using quality-based VBR encoding for the audio or video stream. Instead use the Windows Media file generated after encoding to create the announcement file.
#define NS_E_EXCEED_MAX_DRM_PROFILE_LIMIT 0xC00D1BE0 // It is not possible to create a DRM profile because the maximum number of profiles has been reached. You must delete some DRM profiles before creating new ones.
#define NS_E_DEVICECONTROL_UNSTABLE 0xC00D1BE1 // The device is in an unstable state. Check that the device is functioning properly and a tape is in place.
#define NS_E_INVALID_PIXEL_ASPECT_RATIO 0xC00D1BE2 // The pixel aspect ratio value must be between 1 and 255.
#define NS_E_AUDIENCE__LANGUAGE_CONTENTTYPE_MISMATCH 0xC00D1BE3 // All streams with different languages in the same audience must have same properties.
#define NS_E_INVALID_PROFILE_CONTENTTYPE 0xC00D1BE4 // The profile must contain at least one audio or video stream.
#define NS_E_TRANSFORM_PLUGIN_NOT_FOUND 0xC00D1BE5 // The transform plug-in could not be found.
#define NS_E_TRANSFORM_PLUGIN_INVALID 0xC00D1BE6 // The transform plug-in is not valid. It might be damaged or you might not have the required permissions to access the plug-in.
#define NS_E_EDL_REQUIRED_FOR_DEVICE_MULTIPASS 0xC00D1BE7 // To use two-pass encoding, you must enable device control and setup an edit decision list (EDL) that has at least one entry.
#define NS_E_INVALID_VIDEO_WIDTH_FOR_INTERLACED_ENCODING 0xC00D1BE8 // When you choose to maintain the interlacing in your video, the output video size must be a multiple of 4.
#define NS_E_MARKIN_UNSUPPORTED 0xC00D1BE9 // Markin/Markout is unsupported with this source type.
#define NS_E_DRM_INVALID_APPLICATION 0xC00D2711 // A problem has occurred in the Digital Rights Management component. Contact product support for this application.
#define NS_E_DRM_LICENSE_STORE_ERROR 0xC00D2712 // License storage is not working. Contact Microsoft product support.
#define NS_E_DRM_SECURE_STORE_ERROR 0xC00D2713 // Secure storage is not working. Contact Microsoft product support.
#define NS_E_DRM_LICENSE_STORE_SAVE_ERROR 0xC00D2714 // License acquisition did not work. Acquire a new license or contact the content provider for further assistance.
#define NS_E_DRM_SECURE_STORE_UNLOCK_ERROR 0xC00D2715 // A problem has occurred in the Digital Rights Management component. Contact Microsoft product support.
#define NS_E_DRM_INVALID_CONTENT 0xC00D2716 // The media file is corrupted. Contact the content provider to get a new file.
#define NS_E_DRM_UNABLE_TO_OPEN_LICENSE 0xC00D2717 // The license is corrupted. Acquire a new license.
#define NS_E_DRM_INVALID_LICENSE 0xC00D2718 // The license is corrupted or invalid. Acquire a new license
#define NS_E_DRM_INVALID_MACHINE 0xC00D2719 // Licenses cannot be copied from one computer to another. Use License Management to transfer licenses, or get a new license for the media file.
#define NS_E_DRM_ENUM_LICENSE_FAILED 0xC00D271B // License storage is not working. Contact Microsoft product support.
#define NS_E_DRM_INVALID_LICENSE_REQUEST 0xC00D271C // The media file is corrupted. Contact the content provider to get a new file.
#define NS_E_DRM_UNABLE_TO_INITIALIZE 0xC00D271D // A problem has occurred in the Digital Rights Management component. Contact Microsoft product support.
#define NS_E_DRM_UNABLE_TO_ACQUIRE_LICENSE 0xC00D271E // The license could not be acquired. Try again later.
#define NS_E_DRM_INVALID_LICENSE_ACQUIRED 0xC00D271F // License acquisition did not work. Acquire a new license or contact the content provider for further assistance.
#define NS_E_DRM_NO_RIGHTS 0xC00D2720 // The requested operation cannot be performed on this file.
#define NS_E_DRM_KEY_ERROR 0xC00D2721 // The requested action cannot be performed because a problem occurred with the Windows Media Digital Rights Management (DRM) components on your computer.
#define NS_E_DRM_ENCRYPT_ERROR 0xC00D2722 // A problem has occurred in the Digital Rights Management component. Contact Microsoft product support.
#define NS_E_DRM_DECRYPT_ERROR 0xC00D2723 // The media file is corrupted. Contact the content provider to get a new file.
#define NS_E_DRM_LICENSE_INVALID_XML 0xC00D2725 // The license is corrupted. Acquire a new license.
#define NS_E_DRM_NEEDS_INDIVIDUALIZATION 0xC00D2728 // A security upgrade is required to perform the operation on this media file.
#define NS_E_DRM_ALREADY_INDIVIDUALIZED 0xC00D2729 // You already have the latest security components. No upgrade is necessary at this time.
#define NS_E_DRM_ACTION_NOT_QUERIED 0xC00D272A // The application cannot perform this action. Contact product support for this application.
#define NS_E_DRM_ACQUIRING_LICENSE 0xC00D272B // You cannot begin a new license acquisition process until the current one has been completed.
#define NS_E_DRM_INDIVIDUALIZING 0xC00D272C // You cannot begin a new security upgrade until the current one has been completed.
#define NS_E_BACKUP_RESTORE_FAILURE 0xC00D272D // Failure in Backup-Restore.
#define NS_E_BACKUP_RESTORE_BAD_REQUEST_ID 0xC00D272E // Bad Request ID in Backup-Restore.
#define NS_E_DRM_PARAMETERS_MISMATCHED 0xC00D272F // A problem has occurred in the Digital Rights Management component. Contact Microsoft product support.
#define NS_E_DRM_UNABLE_TO_CREATE_LICENSE_OBJECT 0xC00D2730 // A license cannot be created for this media file. Reinstall the application.
#define NS_E_DRM_UNABLE_TO_CREATE_INDI_OBJECT 0xC00D2731 // A problem has occurred in the Digital Rights Management component. Contact Microsoft product support.
#define NS_E_DRM_UNABLE_TO_CREATE_ENCRYPT_OBJECT 0xC00D2732 // A problem has occurred in the Digital Rights Management component. Contact Microsoft product support.
#define NS_E_DRM_UNABLE_TO_CREATE_DECRYPT_OBJECT 0xC00D2733 // A problem has occurred in the Digital Rights Management component. Contact Microsoft product support.
#define NS_E_DRM_UNABLE_TO_CREATE_PROPERTIES_OBJECT 0xC00D2734 // A problem has occurred in the Digital Rights Management component. Contact Microsoft product support.
#define NS_E_DRM_UNABLE_TO_CREATE_BACKUP_OBJECT 0xC00D2735 // A problem has occurred in the Digital Rights Management component. Contact Microsoft product support.
#define NS_E_DRM_INDIVIDUALIZE_ERROR 0xC00D2736 // The security upgrade failed. Try again later.
#define NS_E_DRM_LICENSE_OPEN_ERROR 0xC00D2737 // License storage is not working. Contact Microsoft product support.
#define NS_E_DRM_LICENSE_CLOSE_ERROR 0xC00D2738 // License storage is not working. Contact Microsoft product support.
#define NS_E_DRM_GET_LICENSE_ERROR 0xC00D2739 // License storage is not working. Contact Microsoft product support.
#define NS_E_DRM_QUERY_ERROR 0xC00D273A // A problem has occurred in the Digital Rights Management component. Contact Microsoft product support.
#define NS_E_DRM_REPORT_ERROR 0xC00D273B // A problem has occurred in the Digital Rights Management component. Contact product support for this application.
#define NS_E_DRM_GET_LICENSESTRING_ERROR 0xC00D273C // License storage is not working. Contact Microsoft product support.
#define NS_E_DRM_GET_CONTENTSTRING_ERROR 0xC00D273D // The media file is corrupted. Contact the content provider to get a new file.
#define NS_E_DRM_MONITOR_ERROR 0xC00D273E // A problem has occurred in the Digital Rights Management component. Try again later.
#define NS_E_DRM_UNABLE_TO_SET_PARAMETER 0xC00D273F // The application has made an invalid call to the Digital Rights Management component. Contact product support for this application.
#define NS_E_DRM_INVALID_APPDATA 0xC00D2740 // A problem has occurred in the Digital Rights Management component. Contact Microsoft product support.
#define NS_E_DRM_INVALID_APPDATA_VERSION 0xC00D2741 // A problem has occurred in the Digital Rights Management component. Contact product support for this application.
#define NS_E_DRM_BACKUP_EXISTS 0xC00D2742 // Licenses are already backed up in this location.
#define NS_E_DRM_BACKUP_CORRUPT 0xC00D2743 // One or more backed-up licenses are missing or corrupt.
#define NS_E_DRM_BACKUPRESTORE_BUSY 0xC00D2744 // You cannot begin a new backup process until the current process has been completed.
#define NS_E_BACKUP_RESTORE_BAD_DATA 0xC00D2745 // Bad Data sent to Backup-Restore.
#define NS_E_DRM_LICENSE_UNUSABLE 0xC00D2748 // The license is invalid. Contact the content provider for further assistance.
#define NS_E_DRM_INVALID_PROPERTY 0xC00D2749 // A required property was not set by the application. Contact product support for this application.
#define NS_E_DRM_SECURE_STORE_NOT_FOUND 0xC00D274A // A problem has occurred in the Digital Rights Management component of this application. Try to acquire a license again.
#define NS_E_DRM_CACHED_CONTENT_ERROR 0xC00D274B // A license cannot be found for this media file. Use License Management to transfer a license for this file from the original computer, or acquire a new license.
#define NS_E_DRM_INDIVIDUALIZATION_INCOMPLETE 0xC00D274C // A problem occurred during the security upgrade. Try again later.
#define NS_E_DRM_DRIVER_AUTH_FAILURE 0xC00D274D // Certified driver components are required to play this media file. Contact Windows Update to see whether updated drivers are available for your hardware.
#define NS_E_DRM_NEED_UPGRADE_MSSAP 0xC00D274E // One or more of the Secure Audio Path components were not found or an entry point in those components was not found.
#define NS_E_DRM_REOPEN_CONTENT 0xC00D274F // Status message: Reopen the file.
#define NS_E_DRM_DRIVER_DIGIOUT_FAILURE 0xC00D2750 // Certain driver functionality is required to play this media file. Contact Windows Update to see whether updated drivers are available for your hardware.
#define NS_E_DRM_INVALID_SECURESTORE_PASSWORD 0xC00D2751 // A problem has occurred in the Digital Rights Management component. Contact Microsoft product support.
#define NS_E_DRM_APPCERT_REVOKED 0xC00D2752 // A problem has occurred in the Digital Rights Management component. Contact Microsoft product support.
#define NS_E_DRM_RESTORE_FRAUD 0xC00D2753 // You cannot restore your license(s).
#define NS_E_DRM_HARDWARE_INCONSISTENT 0xC00D2754 // The licenses for your media files are corrupted. Contact Microsoft product support.
#define NS_E_DRM_SDMI_TRIGGER 0xC00D2755 // To transfer this media file, you must upgrade the application.
#define NS_E_DRM_SDMI_NOMORECOPIES 0xC00D2756 // You cannot make any more copies of this media file.
#define NS_E_DRM_UNABLE_TO_CREATE_HEADER_OBJECT 0xC00D2757 // A problem has occurred in the Digital Rights Management component. Contact Microsoft product support.
#define NS_E_DRM_UNABLE_TO_CREATE_KEYS_OBJECT 0xC00D2758 // A problem has occurred in the Digital Rights Management component. Contact Microsoft product support.
#define NS_E_DRM_LICENSE_NOTACQUIRED 0xC00D2759 // Unable to obtain license.
#define NS_E_DRM_UNABLE_TO_CREATE_CODING_OBJECT 0xC00D275A // A problem has occurred in the Digital Rights Management component. Contact Microsoft product support.
#define NS_E_DRM_UNABLE_TO_CREATE_STATE_DATA_OBJECT 0xC00D275B // A problem has occurred in the Digital Rights Management component. Contact Microsoft product support.
#define NS_E_DRM_BUFFER_TOO_SMALL 0xC00D275C // The buffer supplied is not sufficient.
#define NS_E_DRM_UNSUPPORTED_PROPERTY 0xC00D275D // The property requested is not supported.
#define NS_E_DRM_ERROR_BAD_NET_RESP 0xC00D275E // The specified server cannot perform the requested operation.
#define NS_E_DRM_STORE_NOTALLSTORED 0xC00D275F // Some of the licenses could not be stored.
#define NS_E_DRM_SECURITY_COMPONENT_SIGNATURE_INVALID 0xC00D2760 // The Digital Rights Management security upgrade component could not be validated. Contact Microsoft product support.
#define NS_E_DRM_INVALID_DATA 0xC00D2761 // Invalid or corrupt data was encountered.
#define NS_E_DRM_POLICY_DISABLE_ONLINE 0xC00D2762 // The Windows Media Digital Rights Management system cannot perform the requested action because your computer or network administrator has enabled the group policy Prevent Windows Media DRM Internet Access. For assistance, contact your administrator.
#define NS_E_DRM_UNABLE_TO_CREATE_AUTHENTICATION_OBJECT 0xC00D2763 // A problem has occurred in the Digital Rights Management component. Contact Microsoft product support.
#define NS_E_DRM_NOT_CONFIGURED 0xC00D2764 // Not all of the necessary properties for DRM have been set.
#define NS_E_DRM_DEVICE_ACTIVATION_CANCELED 0xC00D2765 // The portable device does not have the security required to copy protected files to it. To obtain the additional security, try to copy the file to your portable device again. When a message appears, click OK.
#define NS_E_BACKUP_RESTORE_TOO_MANY_RESETS 0xC00D2766 // Too many resets in Backup-Restore.
#define NS_E_DRM_DEBUGGING_NOT_ALLOWED 0xC00D2767 // Running this process under a debugger while using DRM content is not allowed.
#define NS_E_DRM_OPERATION_CANCELED 0xC00D2768 // The user canceled the DRM operation.
#define NS_E_DRM_RESTRICTIONS_NOT_RETRIEVED 0xC00D2769 // The license you are using has assocaited output restrictions. This license is unusable until these restrictions are queried.
#define NS_E_DRM_UNABLE_TO_CREATE_PLAYLIST_OBJECT 0xC00D276A // A problem has occurred in the Digital Rights Management component. Contact Microsoft product support.
#define NS_E_DRM_UNABLE_TO_CREATE_PLAYLIST_BURN_OBJECT 0xC00D276B // A problem has occurred in the Digital Rights Management component. Contact Microsoft product support.
#define NS_E_DRM_UNABLE_TO_CREATE_DEVICE_REGISTRATION_OBJECT 0xC00D276C // A problem has occurred in the Digital Rights Management component. Contact Microsoft product support.
#define NS_E_DRM_UNABLE_TO_CREATE_METERING_OBJECT 0xC00D276D // A problem has occurred in the Digital Rights Management component. Contact Microsoft product support.
#define NS_E_DRM_TRACK_EXCEEDED_PLAYLIST_RESTICTION 0xC00D2770 // The specified track has exceeded it's specified playlist burn limit in this playlist.
#define NS_E_DRM_TRACK_EXCEEDED_TRACKBURN_RESTRICTION 0xC00D2771 // The specified track has exceeded it's track burn limit.
#define NS_E_DRM_UNABLE_TO_GET_DEVICE_CERT 0xC00D2772 // A problem has occurred in obtaining the device's certificate. Contact Microsoft product support.
#define NS_E_DRM_UNABLE_TO_GET_SECURE_CLOCK 0xC00D2773 // A problem has occurred in obtaining the device's secure clock. Contact Microsoft product support.
#define NS_E_DRM_UNABLE_TO_SET_SECURE_CLOCK 0xC00D2774 // A problem has occurred in setting the device's secure clock. Contact Microsoft product support.
#define NS_E_DRM_UNABLE_TO_GET_SECURE_CLOCK_FROM_SERVER 0xC00D2775 // A problem has occurred in obtaining the secure clock from server. Contact Microsoft product support.
#define NS_E_DRM_POLICY_METERING_DISABLED 0xC00D2776 // This content requires the metering policy to be enabled.
#define NS_E_DRM_TRANSFER_CHAINED_LICENSES_UNSUPPORTED 0xC00D2777 // Transfer of chained licenses unsupported.
#define NS_E_DRM_SDK_VERSIONMISMATCH 0xC00D2778 // The Digital Rights Management component is not installed properly. Reinstall the Player.
#define NS_E_DRM_LIC_NEEDS_DEVICE_CLOCK_SET 0xC00D2779 // The file could not be transferred because the device clock is not set.
#define NS_E_LICENSE_HEADER_MISSING_URL 0xC00D277A // The content header is missing an acquisition URL.
#define NS_E_DEVICE_NOT_WMDRM_DEVICE 0xC00D277B // The current attached device does not support WMDRM.
#define NS_E_DRM_INVALID_APPCERT 0xC00D277C // A problem has occurred in the Digital Rights Management component. Contact Microsoft product support.
#define NS_E_DRM_PROTOCOL_FORCEFUL_TERMINATION_ON_PETITION 0xC00D277D // The client application has been forcefully terminated during a DRM petition.
#define NS_E_DRM_PROTOCOL_FORCEFUL_TERMINATION_ON_CHALLENGE 0xC00D277E // The client application has been forcefully terminated during a DRM challenge.
#define NS_E_DRM_CHECKPOINT_FAILED 0xC00D277F // Secure storage protection error. Restore your licenses from a previous backup and try again.
#define NS_E_DRM_BB_UNABLE_TO_INITIALIZE 0xC00D2780 // A problem has occurred in the Digital Rights Management root of trust. Contact Microsoft product support.
#define NS_E_DRM_UNABLE_TO_LOAD_HARDWARE_ID 0xC00D2781 // A problem has occurred in retrieving the Digital Rights Management machine identification. Contact Microsoft product support.
#define NS_E_DRM_UNABLE_TO_OPEN_DATA_STORE 0xC00D2782 // A problem has occurred in opening the Digital Rights Management data storage file. Contact Microsoft product.
#define NS_E_DRM_DATASTORE_CORRUPT 0xC00D2783 // The Digital Rights Management data storage is not functioning properly. Contact Microsoft product support.
#define NS_E_DRM_UNABLE_TO_CREATE_INMEMORYSTORE_OBJECT 0xC00D2784 // A problem has occurred in the Digital Rights Management component. Contact Microsoft product support.
#define NS_E_DRM_STUBLIB_REQUIRED 0xC00D2785 // A secured library is required to access the requested functionality.
#define NS_E_DRM_UNABLE_TO_CREATE_CERTIFICATE_OBJECT 0xC00D2786 // A problem has occurred in the Digital Rights Management component. Contact Microsoft product support.
#define NS_E_DRM_MIGRATION_TARGET_NOT_ONLINE 0xC00D2787 // A problem has occurred in the Digital Rights Management component during license migration. Contact Microsoft product support.
#define NS_E_DRM_INVALID_MIGRATION_IMAGE 0xC00D2788 // A problem has occurred in the Digital Rights Management component during license migration. Contact Microsoft product support.
#define NS_E_DRM_MIGRATION_TARGET_STATES_CORRUPTED 0xC00D2789 // A problem has occurred in the Digital Rights Management component during license migration. Contact Microsoft product support.
#define NS_E_DRM_MIGRATION_IMPORTER_NOT_AVAILABLE 0xC00D278A // A problem has occurred in the Digital Rights Management component during license migration. Contact Microsoft product support.
#define NS_DRM_E_MIGRATION_UPGRADE_WITH_DIFF_SID 0xC00D278B // A problem has occurred in the Digital Rights Management component during license migration. Contact Microsoft product support.
#define NS_DRM_E_MIGRATION_SOURCE_MACHINE_IN_USE 0xC00D278C // The Digital Rights Management component is in use during license migration. Contact Microsoft product support.
#define NS_DRM_E_MIGRATION_TARGET_MACHINE_LESS_THAN_LH 0xC00D278D // Licenses are being migrated to a machine running XP or downlevel OS. This operation can only be performed on Windows Vista or a later OS. Contact Microsoft product support.
#define NS_DRM_E_MIGRATION_IMAGE_ALREADY_EXISTS 0xC00D278E // Migration Image already exists. Contact Microsoft product support.
#define NS_E_DRM_HARDWAREID_MISMATCH 0xC00D278F // The requested action cannot be performed because a hardware configuration change has been detected by the Windows Media Digital Rights Management (DRM) components on your computer.
#define NS_E_INVALID_DRMV2CLT_STUBLIB 0xC00D2790 // The wrong stublib has been linked to an application or DLL using drmv2clt.dll.
#define NS_E_DRM_MIGRATION_INVALID_LEGACYV2_DATA 0xC00D2791 // The legacy V2 data being imported is invalid.
#define NS_E_DRM_MIGRATION_LICENSE_ALREADY_EXISTS 0xC00D2792 // The license being imported already exists.
#define NS_E_DRM_MIGRATION_INVALID_LEGACYV2_SST_PASSWORD 0xC00D2793 // The password of the Legacy V2 SST entry being imported is incorrect.
#define NS_E_DRM_MIGRATION_NOT_SUPPORTED 0xC00D2794 // Migration is not supported by the plugin.
#define NS_E_DRM_UNABLE_TO_CREATE_MIGRATION_IMPORTER_OBJECT 0xC00D2795 // A migration importer cannot be created for this media file. Reinstall the application.
#define NS_E_DRM_CHECKPOINT_MISMATCH 0xC00D2796 // The requested action cannot be performed because a problem occurred with the Windows Media Digital Rights Management (DRM) components on your computer.
#define NS_E_DRM_CHECKPOINT_CORRUPT 0xC00D2797 // The requested action cannot be performed because a problem occurred with the Windows Media Digital Rights Management (DRM) components on your computer.
#define NS_E_REG_FLUSH_FAILURE 0xC00D2798 // The requested action cannot be performed because a problem occurred with the Windows Media Digital Rights Management (DRM) components on your computer.
#define NS_E_HDS_KEY_MISMATCH 0xC00D2799 // The requested action cannot be performed because a problem occurred with the Windows Media Digital Rights Management (DRM) components on your computer.
#define NS_E_DRM_MIGRATION_OPERATION_CANCELLED 0xC00D279A // Migration was canceled by the user.
#define NS_E_DRM_MIGRATION_OBJECT_IN_USE 0xC00D279B // Migration object is already in use and cannot be called until the current operation completes.
#define NS_E_DRM_MALFORMED_CONTENT_HEADER 0xC00D279C // The content header does not comply with DRM requirements and cannot be used.
#define NS_E_DRM_LICENSE_EXPIRED 0xC00D27D8 // The license for this file has expired and is no longer valid. Contact your content provider for further assistance.
#define NS_E_DRM_LICENSE_NOTENABLED 0xC00D27D9 // The license for this file is not valid yet, but will be at a future date.
#define NS_E_DRM_LICENSE_APPSECLOW 0xC00D27DA // The license for this file requires a higher level of security than the player you are currently using has. Try using a different player or download a newer version of your current player.
#define NS_E_DRM_STORE_NEEDINDI 0xC00D27DB // The license cannot be stored as it requires security upgrade of Digital Rights Management component.
#define NS_E_DRM_STORE_NOTALLOWED 0xC00D27DC // Your machine does not meet the requirements for storing the license.
#define NS_E_DRM_LICENSE_APP_NOTALLOWED 0xC00D27DD // The license for this file requires an upgraded version of your player or a different player.
#define NS_E_DRM_LICENSE_CERT_EXPIRED 0xC00D27DF // The license server's certificate expired. Make sure your system clock is set correctly. Contact your content provider for further assistance.
#define NS_E_DRM_LICENSE_SECLOW 0xC00D27E0 // The license for this file requires a higher level of security than the player you are currently using has. Try using a different player or download a newer version of your current player.
#define NS_E_DRM_LICENSE_CONTENT_REVOKED 0xC00D27E1 // The content owner for the license you just acquired is no longer supporting their content. Contact the content owner for a newer version of the content.
#define NS_E_DRM_DEVICE_NOT_REGISTERED 0xC00D27E2 // The content owner for the license you just acquired requires your device to register to the current machine.
#define NS_E_DRM_LICENSE_NOSAP 0xC00D280A // The license for this file requires a feature that is not supported in your current player or operating system. You can try with newer version of your current player or contact your content provider for further assistance.
#define NS_E_DRM_LICENSE_NOSVP 0xC00D280B // The license for this file requires a feature that is not supported in your current player or operating system. You can try with newer version of your current player or contact your content provider for further assistance.
#define NS_E_DRM_LICENSE_NOWDM 0xC00D280C // The license for this file requires Windows Driver Model (WDM) audio drivers. Contact your sound card manufacturer for further assistance.
#define NS_E_DRM_LICENSE_NOTRUSTEDCODEC 0xC00D280D // The license for this file requires a higher level of security than the player you are currently using has. Try using a different player or download a newer version of your current player.
#define NS_E_DRM_SOURCEID_NOT_SUPPORTED 0xC00D280E // The license for this file is not supported by your current player. You can try with newer version of your current player or contact your content provider for further assistance.
#define NS_E_DRM_NEEDS_UPGRADE_TEMPFILE 0xC00D283D // An updated version of your media player is required to play the selected content.
#define NS_E_DRM_NEED_UPGRADE_PD 0xC00D283E // A new version of the Digital Rights Management component is required. Contact product support for this application to get the latest version.
#define NS_E_DRM_SIGNATURE_FAILURE 0xC00D283F // Failed to either create or verify the content header.
#define NS_E_DRM_LICENSE_SERVER_INFO_MISSING 0xC00D2840 // Could not read the necessary information from the system registry.
#define NS_E_DRM_BUSY 0xC00D2841 // The DRM subsystem is currently locked by another application or user. Try again later.
#define NS_E_DRM_PD_TOO_MANY_DEVICES 0xC00D2842 // There are too many target devices registered on the portable media.
#define NS_E_DRM_INDIV_FRAUD 0xC00D2843 // The security upgrade cannot be completed because the allowed number of daily upgrades has been exceeded. Try again tomorrow.
#define NS_E_DRM_INDIV_NO_CABS 0xC00D2844 // The security upgrade cannot be completed because the server is unable to perform the operation. Try again later.
#define NS_E_DRM_INDIV_SERVICE_UNAVAILABLE 0xC00D2845 // The security upgrade cannot be performed because the server is not available. Try again later.
#define NS_E_DRM_RESTORE_SERVICE_UNAVAILABLE 0xC00D2846 // Windows Media Player cannot restore your licenses because the server is not available. Try again later.
#define NS_E_DRM_CLIENT_CODE_EXPIRED 0xC00D2847 // Windows Media Player cannot play the protected file. Verify that your computer's date is set correctly. If it is correct, on the Help menu, click Check for Player Updates to install the latest version of the Player.
#define NS_E_DRM_NO_UPLINK_LICENSE 0xC00D2848 // The chained license cannot be created because the referenced uplink license does not exist.
#define NS_E_DRM_INVALID_KID 0xC00D2849 // The specified KID is invalid.
#define NS_E_DRM_LICENSE_INITIALIZATION_ERROR 0xC00D284A // License initialization did not work. Contact Microsoft product support.
#define NS_E_DRM_CHAIN_TOO_LONG 0xC00D284C // The uplink license of a chained license cannot itself be a chained license.
#define NS_E_DRM_UNSUPPORTED_ALGORITHM 0xC00D284D // The specified encryption algorithm is unsupported.
#define NS_E_DRM_LICENSE_DELETION_ERROR 0xC00D284E // License deletion did not work. Contact Microsoft product support.
#define NS_E_DRM_INVALID_CERTIFICATE 0xC00D28A0 // The client's certificate is corrupted or the signature cannot be verified.
#define NS_E_DRM_CERTIFICATE_REVOKED 0xC00D28A1 // The client's certificate has been revoked.
#define NS_E_DRM_LICENSE_UNAVAILABLE 0xC00D28A2 // There is no license available for the requested action.
#define NS_E_DRM_DEVICE_LIMIT_REACHED 0xC00D28A3 // The maximum number of devices in use has been reached. Unable to open additional devices.
#define NS_E_DRM_UNABLE_TO_VERIFY_PROXIMITY 0xC00D28A4 // The proximity detection procedure could not confirm that the receiver is near the transmitter in the network.
#define NS_E_DRM_MUST_REGISTER 0xC00D28A5 // The client must be registered before executing the intended operation.
#define NS_E_DRM_MUST_APPROVE 0xC00D28A6 // The client must be approved before executing the intended operation.
#define NS_E_DRM_MUST_REVALIDATE 0xC00D28A7 // The client must be revalidated before executing the intended operation.
#define NS_E_DRM_INVALID_PROXIMITY_RESPONSE 0xC00D28A8 // The response to the proximity detection challenge is invalid.
#define NS_E_DRM_INVALID_SESSION 0xC00D28A9 // The requested session is invalid.
#define NS_E_DRM_DEVICE_NOT_OPEN 0xC00D28AA // The device must be opened before it can be used to receive content.
#define NS_E_DRM_DEVICE_ALREADY_REGISTERED 0xC00D28AB // Device registration failed because the device is already registered.
#define NS_E_DRM_UNSUPPORTED_PROTOCOL_VERSION 0xC00D28AC // Unsupported WMDRM-ND protocol version.
#define NS_E_DRM_UNSUPPORTED_ACTION 0xC00D28AD // The requested action is not supported.
#define NS_E_DRM_CERTIFICATE_SECURITY_LEVEL_INADEQUATE 0xC00D28AE // The certificate does not have an adequate security level for the requested action.
#define NS_E_DRM_UNABLE_TO_OPEN_PORT 0xC00D28AF // Unable to open the specified port for receiving Proximity messages.
#define NS_E_DRM_BAD_REQUEST 0xC00D28B0 // The message format is invalid.
#define NS_E_DRM_INVALID_CRL 0xC00D28B1 // The Certificate Revocation List is invalid or corrupted.
#define NS_E_DRM_ATTRIBUTE_TOO_LONG 0xC00D28B2 // The length of the attribute name or value is too long.
#define NS_E_DRM_EXPIRED_LICENSEBLOB 0xC00D28B3 // The license blob passed in the cardea request is expired.
#define NS_E_DRM_INVALID_LICENSEBLOB 0xC00D28B4 // The license blob passed in the cardea request is invalid. Contact Microsoft product support.
#define NS_E_DRM_INCLUSION_LIST_REQUIRED 0xC00D28B5 // The requested operation cannot be performed because the license does not contain an inclusion list.
#define NS_E_DRM_DRMV2CLT_REVOKED 0xC00D28B6 // A problem has occurred in the Digital Rights Management component. Contact Microsoft product support.
#define NS_E_DRM_RIV_TOO_SMALL 0xC00D28B7 // A problem has occurred in the Digital Rights Management component. Contact Microsoft product support.
#define NS_E_OUTPUT_PROTECTION_LEVEL_UNSUPPORTED 0xC00D2904 // Windows Media Player does not support the level of output protection required by the content.
#define NS_E_COMPRESSED_DIGITAL_VIDEO_PROTECTION_LEVEL_UNSUPPORTED 0xC00D2905 // Windows Media Player does not support the level of protection required for compressed digital video.
#define NS_E_UNCOMPRESSED_DIGITAL_VIDEO_PROTECTION_LEVEL_UNSUPPORTED 0xC00D2906 // Windows Media Player does not support the level of protection required for uncompressed digital video.
#define NS_E_ANALOG_VIDEO_PROTECTION_LEVEL_UNSUPPORTED 0xC00D2907 // Windows Media Player does not support the level of protection required for analog video.
#define NS_E_COMPRESSED_DIGITAL_AUDIO_PROTECTION_LEVEL_UNSUPPORTED 0xC00D2908 // Windows Media Player does not support the level of protection required for compressed digital audio.
#define NS_E_UNCOMPRESSED_DIGITAL_AUDIO_PROTECTION_LEVEL_UNSUPPORTED 0xC00D2909 // Windows Media Player does not support the level of protection required for uncompressed digital audio.
#define NS_E_OUTPUT_PROTECTION_SCHEME_UNSUPPORTED 0xC00D290A // Windows Media Player does not support the scheme of output protection required by the content.
#define NS_E_REBOOT_RECOMMENDED 0xC00D2AFA // Installation was not successful and some file cleanup is not complete. For best results, restart your computer.
#define NS_E_REBOOT_REQUIRED 0xC00D2AFB // Installation was not successful. To continue, you must restart your computer.
#define NS_E_SETUP_INCOMPLETE 0xC00D2AFC // Installation was not successful.
#define NS_E_SETUP_DRM_MIGRATION_FAILED 0xC00D2AFD // Setup cannot migrate the Windows Media Digital Rights Management (DRM) components.
#define NS_E_SETUP_IGNORABLE_FAILURE 0xC00D2AFE // Some skin or playlist components cannot be installed.
#define NS_E_SETUP_DRM_MIGRATION_FAILED_AND_IGNORABLE_FAILURE 0xC00D2AFF // Setup cannot migrate the Windows Media Digital Rights Management (DRM) components. In addition, some skin or playlist components cannot be installed.
#define NS_E_SETUP_BLOCKED 0xC00D2B00 // Installation is blocked because your computer does not meet one or more of the setup requirements.
#define NS_E_UNKNOWN_PROTOCOL 0xC00D2EE0 // The specified protocol is not supported.
#define NS_E_REDIRECT_TO_PROXY 0xC00D2EE1 // The client is redirected to a proxy server.
#define NS_E_INTERNAL_SERVER_ERROR 0xC00D2EE2 // The server encountered an unexpected condition which prevented it from fulfilling the request.
#define NS_E_BAD_REQUEST 0xC00D2EE3 // The request could not be understood by the server.
#define NS_E_ERROR_FROM_PROXY 0xC00D2EE4 // The proxy experienced an error while attempting to contact the media server.
#define NS_E_PROXY_TIMEOUT 0xC00D2EE5 // The proxy did not receive a timely response while attempting to contact the media server.
#define NS_E_SERVER_UNAVAILABLE 0xC00D2EE6 // The server is currently unable to handle the request due to a temporary overloading or maintenance of the server.
#define NS_E_REFUSED_BY_SERVER 0xC00D2EE7 // The server is refusing to fulfill the requested operation.
#define NS_E_INCOMPATIBLE_SERVER 0xC00D2EE8 // The server is not a compatible streaming media server.
#define NS_E_MULTICAST_DISABLED 0xC00D2EE9 // The content cannot be streamed because the Multicast protocol has been disabled.
#define NS_E_INVALID_REDIRECT 0xC00D2EEA // The server redirected the player to an invalid location.
#define NS_E_ALL_PROTOCOLS_DISABLED 0xC00D2EEB // The content cannot be streamed because all protocols have been disabled.
#define NS_E_MSBD_NO_LONGER_SUPPORTED 0xC00D2EEC // The MSBD protocol is no longer supported. Please use HTTP to connect to the Windows Media stream.
#define NS_E_PROXY_NOT_FOUND 0xC00D2EED // The proxy server could not be located. Please check your proxy server configuration.
#define NS_E_CANNOT_CONNECT_TO_PROXY 0xC00D2EEE // Unable to establish a connection to the proxy server. Please check your proxy server configuration.
#define NS_E_SERVER_DNS_TIMEOUT 0xC00D2EEF // Unable to locate the media server. The operation timed out.
#define NS_E_PROXY_DNS_TIMEOUT 0xC00D2EF0 // Unable to locate the proxy server. The operation timed out.
#define NS_E_CLOSED_ON_SUSPEND 0xC00D2EF1 // Media closed because Windows was shut down.
#define NS_E_CANNOT_READ_PLAYLIST_FROM_MEDIASERVER 0xC00D2EF2 // Unable to read the contents of a playlist file from a media server.
#define NS_E_SESSION_NOT_FOUND 0xC00D2EF3 // Session not found.
#define NS_E_REQUIRE_STREAMING_CLIENT 0xC00D2EF4 // Content requires a streaming media client.
#define NS_E_PLAYLIST_ENTRY_HAS_CHANGED 0xC00D2EF5 // A command applies to a previous playlist entry.
#define NS_E_PROXY_ACCESSDENIED 0xC00D2EF6 // The proxy server is denying access. The username and/or password might be incorrect.
#define NS_E_PROXY_SOURCE_ACCESSDENIED 0xC00D2EF7 // The proxy could not provide valid authentication credentials to the media server.
#define NS_E_NETWORK_SINK_WRITE 0xC00D2EF8 // The network sink failed to write data to the network.
#define NS_E_FIREWALL 0xC00D2EF9 // Packets are not being received from the server. The packets might be blocked by a filtering device, such as a network firewall.
#define NS_E_MMS_NOT_SUPPORTED 0xC00D2EFA // The MMS protocol is not supported. Please use HTTP or RTSP to connect to the Windows Media stream.
#define NS_E_SERVER_ACCESSDENIED 0xC00D2EFB // The Windows Media server is denying access. The username and/or password might be incorrect.
#define NS_E_RESOURCE_GONE 0xC00D2EFC // The Publishing Point or file on the Windows Media Server is no longer available.
#define NS_E_NO_EXISTING_PACKETIZER 0xC00D2EFD // There is no existing packetizer plugin for a stream.
#define NS_E_BAD_SYNTAX_IN_SERVER_RESPONSE 0xC00D2EFE // The response from the media server could not be understood. This might be caused by an incompatible proxy server or media server.
#define NS_E_RESET_SOCKET_CONNECTION 0xC00D2F00 // The Windows Media Server reset the network connection.
#define NS_E_TOO_MANY_HOPS 0xC00D2F02 // The request could not reach the media server (too many hops).
#define NS_E_TOO_MUCH_DATA_FROM_SERVER 0xC00D2F05 // The server is sending too much data. The connection has been terminated.
#define NS_E_CONNECT_TIMEOUT 0xC00D2F06 // It was not possible to establish a connection to the media server in a timely manner. The media server might be down for maintenance, or it might be necessary to use a proxy server to access this media server.
#define NS_E_PROXY_CONNECT_TIMEOUT 0xC00D2F07 // It was not possible to establish a connection to the proxy server in a timely manner. Please check your proxy server configuration.
#define NS_E_SESSION_INVALID 0xC00D2F08 // Session not found.
#define NS_E_PACKETSINK_UNKNOWN_FEC_STREAM 0xC00D2F0A // Unknown packet sink stream.
#define NS_E_PUSH_CANNOTCONNECT 0xC00D2F0B // Unable to establish a connection to the server. Ensure Windows Media Services is started and the HTTP Server control protocol is properly enabled.
#define NS_E_INCOMPATIBLE_PUSH_SERVER 0xC00D2F0C // The Server service that received the HTTP push request is not a compatible version of Windows Media Services (WMS). This error might indicate the push request was received by IIS instead of WMS. Ensure WMS is started and has the HTTP Server control protocol properly enabled and try again.
#define NS_E_END_OF_PLAYLIST 0xC00D32C8 // The playlist has reached its end.
#define NS_E_USE_FILE_SOURCE 0xC00D32C9 // Use file source.
#define NS_E_PROPERTY_NOT_FOUND 0xC00D32CA // The property was not found.
#define NS_E_PROPERTY_READ_ONLY 0xC00D32CC // The property is read only.
#define NS_E_TABLE_KEY_NOT_FOUND 0xC00D32CD // The table key was not found.
#define NS_E_INVALID_QUERY_OPERATOR 0xC00D32CF // Invalid query operator.
#define NS_E_INVALID_QUERY_PROPERTY 0xC00D32D0 // Invalid query property.
#define NS_E_PROPERTY_NOT_SUPPORTED 0xC00D32D2 // The property is not supported.
#define NS_E_SCHEMA_CLASSIFY_FAILURE 0xC00D32D4 // Schema classification failure.
#define NS_E_METADATA_FORMAT_NOT_SUPPORTED 0xC00D32D5 // The metadata format is not supported.
#define NS_E_METADATA_NO_EDITING_CAPABILITY 0xC00D32D6 // Cannot edit the metadata.
#define NS_E_METADATA_CANNOT_SET_LOCALE 0xC00D32D7 // Cannot set the locale id.
#define NS_E_METADATA_LANGUAGE_NOT_SUPORTED 0xC00D32D8 // The language is not supported in the format.
#define NS_E_METADATA_NO_RFC1766_NAME_FOR_LOCALE 0xC00D32D9 // There is no RFC1766 name translation for the supplied locale id.
#define NS_E_METADATA_NOT_AVAILABLE 0xC00D32DA // The metadata (or metadata item) is not available.
#define NS_E_METADATA_CACHE_DATA_NOT_AVAILABLE 0xC00D32DB // The cached metadata (or metadata item) is not available.
#define NS_E_METADATA_INVALID_DOCUMENT_TYPE 0xC00D32DC // The metadata document is invalid.
#define NS_E_METADATA_IDENTIFIER_NOT_AVAILABLE 0xC00D32DD // The metadata content identifier is not available.
#define NS_E_METADATA_CANNOT_RETRIEVE_FROM_OFFLINE_CACHE 0xC00D32DE // Cannot retrieve metadata from the offline metadata cache.
#define ERROR_MONITOR_INVALID_DESCRIPTOR_CHECKSUM 0xC0261003 // Checksum of the obtained monitor descriptor is invalid.
#define ERROR_MONITOR_INVALID_STANDARD_TIMING_BLOCK 0xC0261004 // Monitor descriptor contains an invalid standard timing block.
#define ERROR_MONITOR_WMI_DATABLOCK_REGISTRATION_FAILED 0xC0261005 // Windows Management Instrumentation (WMI) data block registration failed for one of the MSMonitorClass WMI subclasses.
#define ERROR_MONITOR_INVALID_SERIAL_NUMBER_MONDSC_BLOCK 0xC0261006 // Provided monitor descriptor block is either corrupted or does not contain the monitor's detailed serial number.
#define ERROR_MONITOR_INVALID_USER_FRIENDLY_MONDSC_BLOCK 0xC0261007 // Provided monitor descriptor block is either corrupted or does not contain the monitor's user-friendly name.
#define ERROR_MONITOR_NO_MORE_DESCRIPTOR_DATA 0xC0261008 // There is no monitor descriptor data at the specified (offset, size) region.
#define ERROR_MONITOR_INVALID_DETAILED_TIMING_BLOCK 0xC0261009 // Monitor descriptor contains an invalid detailed timing block.
#define ERROR_GRAPHICS_NOT_EXCLUSIVE_MODE_OWNER 0xC0262000 // Exclusive mode ownership is needed to create unmanaged primary allocation.
#define ERROR_GRAPHICS_INSUFFICIENT_DMA_BUFFER 0xC0262001 // The driver needs more direct memory access (DMA) buffer space to complete the requested operation.
#define ERROR_GRAPHICS_INVALID_DISPLAY_ADAPTER 0xC0262002 // Specified display adapter handle is invalid.
#define ERROR_GRAPHICS_ADAPTER_WAS_RESET 0xC0262003 // Specified display adapter and all of its state has been reset.
#define ERROR_GRAPHICS_INVALID_DRIVER_MODEL 0xC0262004 // The driver stack does not match the expected driver model.
#define ERROR_GRAPHICS_PRESENT_MODE_CHANGED 0xC0262005 // Present happened but ended up into the changed desktop mode.
#define ERROR_GRAPHICS_PRESENT_OCCLUDED 0xC0262006 // Nothing to present due to desktop occlusion.
#define ERROR_GRAPHICS_PRESENT_DENIED 0xC0262007 // Not able to present due to denial of desktop access.
#define ERROR_GRAPHICS_CANNOTCOLORCONVERT 0xC0262008 // Not able to present with color conversion.
#define ERROR_GRAPHICS_NO_VIDEO_MEMORY 0xC0262100 // Not enough video memory available to complete the operation.
#define ERROR_GRAPHICS_CANT_LOCK_MEMORY 0xC0262101 // Could not probe and lock the underlying memory of an allocation.
#define ERROR_GRAPHICS_ALLOCATION_BUSY 0xC0262102 // The allocation is currently busy.
#define ERROR_GRAPHICS_TOO_MANY_REFERENCES 0xC0262103 // An object being referenced has reach the maximum reference count already and cannot be referenced further.
#define ERROR_GRAPHICS_TRY_AGAIN_LATER 0xC0262104 // A problem could not be solved due to some currently existing condition. The problem should be tried again later.
#define ERROR_GRAPHICS_TRY_AGAIN_NOW 0xC0262105 // A problem could not be solved due to some currently existing condition. The problem should be tried again immediately.
#define ERROR_GRAPHICS_ALLOCATION_INVALID 0xC0262106 // The allocation is invalid.
#define ERROR_GRAPHICS_UNSWIZZLING_APERTURE_UNAVAILABLE 0xC0262107 // No more unswizzling apertures are currently available.
#define ERROR_GRAPHICS_UNSWIZZLING_APERTURE_UNSUPPORTED 0xC0262108 // The current allocation cannot be unswizzled by an aperture.
#define ERROR_GRAPHICS_CANT_EVICT_PINNED_ALLOCATION 0xC0262109 // The request failed because a pinned allocation cannot be evicted.
#define ERROR_GRAPHICS_INVALID_ALLOCATION_USAGE 0xC0262110 // The allocation cannot be used from its current segment location for the specified operation.
#define ERROR_GRAPHICS_CANT_RENDER_LOCKED_ALLOCATION 0xC0262111 // A locked allocation cannot be used in the current command buffer.
#define ERROR_GRAPHICS_ALLOCATION_CLOSED 0xC0262112 // The allocation being referenced has been closed permanently.
#define ERROR_GRAPHICS_INVALID_ALLOCATION_INSTANCE 0xC0262113 // An invalid allocation instance is being referenced.
#define ERROR_GRAPHICS_INVALID_ALLOCATION_HANDLE 0xC0262114 // An invalid allocation handle is being referenced.
#define ERROR_GRAPHICS_WRONG_ALLOCATION_DEVICE 0xC0262115 // The allocation being referenced does not belong to the current device.
#define ERROR_GRAPHICS_ALLOCATION_CONTENT_LOST 0xC0262116 // The specified allocation lost its content.
#define ERROR_GRAPHICS_GPU_EXCEPTION_ON_DEVICE 0xC0262200 // Graphics processing unit (GPU) exception is detected on the given device. The device is not able to be scheduled.
#define ERROR_GRAPHICS_INVALID_VIDPN_TOPOLOGY 0xC0262300 // Specified video present network (VidPN) topology is invalid.
#define ERROR_GRAPHICS_VIDPN_TOPOLOGY_NOT_SUPPORTED 0xC0262301 // Specified VidPN topology is valid but is not supported by this model of the display adapter.
#define ERROR_GRAPHICS_VIDPN_TOPOLOGY_CURRENTLY_NOT_SUPPORTED 0xC0262302 // Specified VidPN topology is valid but is not supported by the display adapter at this time, due to current allocation of its resources.
#define ERROR_GRAPHICS_INVALID_VIDPN 0xC0262303 // Specified VidPN handle is invalid.
#define ERROR_GRAPHICS_INVALID_VIDEO_PRESENT_SOURCE 0xC0262304 // Specified video present source is invalid.
#define ERROR_GRAPHICS_INVALID_VIDEO_PRESENT_TARGET 0xC0262305 // Specified video present target is invalid.
#define ERROR_GRAPHICS_VIDPN_MODALITY_NOT_SUPPORTED 0xC0262306 // Specified VidPN modality is not supported (for example, at least two of the pinned modes are not cofunctional).
#define ERROR_GRAPHICS_INVALID_VIDPN_SOURCEMODESET 0xC0262308 // Specified VidPN source mode set is invalid.
#define ERROR_GRAPHICS_INVALID_VIDPN_TARGETMODESET 0xC0262309 // Specified VidPN target mode set is invalid.
#define ERROR_GRAPHICS_INVALID_FREQUENCY 0xC026230A // Specified video signal frequency is invalid.
#define ERROR_GRAPHICS_INVALID_ACTIVE_REGION 0xC026230B // Specified video signal active region is invalid.
#define ERROR_GRAPHICS_INVALID_TOTAL_REGION 0xC026230C // Specified video signal total region is invalid.
#define ERROR_GRAPHICS_INVALID_VIDEO_PRESENT_SOURCE_MODE 0xC0262310 // Specified video present source mode is invalid.
#define ERROR_GRAPHICS_INVALID_VIDEO_PRESENT_TARGET_MODE 0xC0262311 // Specified video present target mode is invalid.
#define ERROR_GRAPHICS_PINNED_MODE_MUST_REMAIN_IN_SET 0xC0262312 // Pinned mode must remain in the set on VidPN's cofunctional modality enumeration.
#define ERROR_GRAPHICS_PATH_ALREADY_IN_TOPOLOGY 0xC0262313 // Specified video present path is already in the VidPN topology.
#define ERROR_GRAPHICS_MODE_ALREADY_IN_MODESET 0xC0262314 // Specified mode is already in the mode set.
#define ERROR_GRAPHICS_INVALID_VIDEOPRESENTSOURCESET 0xC0262315 // Specified video present source set is invalid.
#define ERROR_GRAPHICS_INVALID_VIDEOPRESENTTARGETSET 0xC0262316 // Specified video present target set is invalid.
#define ERROR_GRAPHICS_SOURCE_ALREADY_IN_SET 0xC0262317 // Specified video present source is already in the video present source set.
#define ERROR_GRAPHICS_TARGET_ALREADY_IN_SET 0xC0262318 // Specified video present target is already in the video present target set.
#define ERROR_GRAPHICS_INVALID_VIDPN_PRESENT_PATH 0xC0262319 // Specified VidPN present path is invalid.
#define ERROR_GRAPHICS_NO_RECOMMENDED_VIDPN_TOPOLOGY 0xC026231A // Miniport has no recommendation for augmentation of the specified VidPN topology.
#define ERROR_GRAPHICS_INVALID_MONITOR_FREQUENCYRANGESET 0xC026231B // Specified monitor frequency range set is invalid.
#define ERROR_GRAPHICS_INVALID_MONITOR_FREQUENCYRANGE 0xC026231C // Specified monitor frequency range is invalid.
#define ERROR_GRAPHICS_FREQUENCYRANGE_NOT_IN_SET 0xC026231D // Specified frequency range is not in the specified monitor frequency range set.
#define ERROR_GRAPHICS_FREQUENCYRANGE_ALREADY_IN_SET 0xC026231F // Specified frequency range is already in the specified monitor frequency range set.
#define ERROR_GRAPHICS_STALE_MODESET 0xC0262320 // Specified mode set is stale. Reacquire the new mode set.
#define ERROR_GRAPHICS_INVALID_MONITOR_SOURCEMODESET 0xC0262321 // Specified monitor source mode set is invalid.
#define ERROR_GRAPHICS_INVALID_MONITOR_SOURCE_MODE 0xC0262322 // Specified monitor source mode is invalid.
#define ERROR_GRAPHICS_NO_RECOMMENDED_FUNCTIONAL_VIDPN 0xC0262323 // Miniport does not have any recommendation regarding the request to provide a functional VidPN given the current display adapter configuration.
#define ERROR_GRAPHICS_MODE_ID_MUST_BE_UNIQUE 0xC0262324 // ID of the specified mode is already used by another mode in the set.
#define ERROR_GRAPHICS_EMPTY_ADAPTER_MONITOR_MODE_SUPPORT_INTERSECTION 0xC0262325 // System failed to determine a mode that is supported by both the display adapter and the monitor connected to it.
#define ERROR_GRAPHICS_VIDEO_PRESENT_TARGETS_LESS_THAN_SOURCES 0xC0262326 // Number of video present targets must be greater than or equal to the number of video present sources.
#define ERROR_GRAPHICS_PATH_NOT_IN_TOPOLOGY 0xC0262327 // Specified present path is not in the VidPN topology.
#define ERROR_GRAPHICS_ADAPTER_MUST_HAVE_AT_LEAST_ONE_SOURCE 0xC0262328 // Display adapter must have at least one video present source.
#define ERROR_GRAPHICS_ADAPTER_MUST_HAVE_AT_LEAST_ONE_TARGET 0xC0262329 // Display adapter must have at least one video present target.
#define ERROR_GRAPHICS_INVALID_MONITORDESCRIPTORSET 0xC026232A // Specified monitor descriptor set is invalid.
#define ERROR_GRAPHICS_INVALID_MONITORDESCRIPTOR 0xC026232B // Specified monitor descriptor is invalid.
#define ERROR_GRAPHICS_MONITORDESCRIPTOR_NOT_IN_SET 0xC026232C // Specified descriptor is not in the specified monitor descriptor set.
#define ERROR_GRAPHICS_MONITORDESCRIPTOR_ALREADY_IN_SET 0xC026232D // Specified descriptor is already in the specified monitor descriptor set.
#define ERROR_GRAPHICS_MONITORDESCRIPTOR_ID_MUST_BE_UNIQUE 0xC026232E // ID of the specified monitor descriptor is already used by another descriptor in the set.
#define ERROR_GRAPHICS_INVALID_VIDPN_TARGET_SUBSET_TYPE 0xC026232F // Specified video present target subset type is invalid.
#define ERROR_GRAPHICS_RESOURCES_NOT_RELATED 0xC0262330 // Two or more of the specified resources are not related to each other, as defined by the interface semantics.
#define ERROR_GRAPHICS_SOURCE_ID_MUST_BE_UNIQUE 0xC0262331 // ID of the specified video present source is already used by another source in the set.
#define ERROR_GRAPHICS_TARGET_ID_MUST_BE_UNIQUE 0xC0262332 // ID of the specified video present target is already used by another target in the set.
#define ERROR_GRAPHICS_NO_AVAILABLE_VIDPN_TARGET 0xC0262333 // Specified VidPN source cannot be used because there is no available VidPN target to connect it to.
#define ERROR_GRAPHICS_MONITOR_COULD_NOT_BE_ASSOCIATED_WITH_ADAPTER 0xC0262334 // Newly arrived monitor could not be associated with a display adapter.
#define ERROR_GRAPHICS_NO_VIDPNMGR 0xC0262335 // Display adapter in question does not have an associated VidPN manager.
#define ERROR_GRAPHICS_NO_ACTIVE_VIDPN 0xC0262336 // VidPN manager of the display adapter in question does not have an active VidPN.
#define ERROR_GRAPHICS_STALE_VIDPN_TOPOLOGY 0xC0262337 // Specified VidPN topology is stale. Re-acquire the new topology.
#define ERROR_GRAPHICS_MONITOR_NOT_CONNECTED 0xC0262338 // There is no monitor connected on the specified video present target.
#define ERROR_GRAPHICS_SOURCE_NOT_IN_TOPOLOGY 0xC0262339 // Specified source is not part of the specified VidPN topology.
#define ERROR_GRAPHICS_INVALID_PRIMARYSURFACE_SIZE 0xC026233A // Specified primary surface size is invalid.
#define ERROR_GRAPHICS_INVALID_VISIBLEREGION_SIZE 0xC026233B // Specified visible region size is invalid.
#define ERROR_GRAPHICS_INVALID_STRIDE 0xC026233C // Specified stride is invalid.
#define ERROR_GRAPHICS_INVALID_PIXELFORMAT 0xC026233D // Specified pixel format is invalid.
#define ERROR_GRAPHICS_INVALID_COLORBASIS 0xC026233E // Specified color basis is invalid.
#define ERROR_GRAPHICS_INVALID_PIXELVALUEACCESSMODE 0xC026233F // Specified pixel value access mode is invalid.
#define ERROR_GRAPHICS_TARGET_NOT_IN_TOPOLOGY 0xC0262340 // Specified target is not part of the specified VidPN topology.
#define ERROR_GRAPHICS_NO_DISPLAY_MODE_MANAGEMENT_SUPPORT 0xC0262341 // Failed to acquire display mode management interface.
#define ERROR_GRAPHICS_VIDPN_SOURCE_IN_USE 0xC0262342 // Specified VidPN source is already owned by a display mode manager (DMM) client and cannot be used until that client releases it.
#define ERROR_GRAPHICS_CANT_ACCESS_ACTIVE_VIDPN 0xC0262343 // Specified VidPN is active and cannot be accessed.
#define ERROR_GRAPHICS_INVALID_PATH_IMPORTANCE_ORDINAL 0xC0262344 // Specified VidPN present path importance ordinal is invalid.
#define ERROR_GRAPHICS_INVALID_PATH_CONTENT_GEOMETRY_TRANSFORMATION 0xC0262345 // Specified VidPN present path content geometry transformation is invalid.
#define ERROR_GRAPHICS_PATH_CONTENT_GEOMETRY_TRANSFORMATION_NOT_SUPPORTED 0xC0262346 // Specified content geometry transformation is not supported on the respective VidPN present path.
#define ERROR_GRAPHICS_INVALID_GAMMA_RAMP 0xC0262347 // Specified gamma ramp is invalid.
#define ERROR_GRAPHICS_GAMMA_RAMP_NOT_SUPPORTED 0xC0262348 // Specified gamma ramp is not supported on the respective VidPN present path.
#define ERROR_GRAPHICS_MULTISAMPLING_NOT_SUPPORTED 0xC0262349 // Multisampling is not supported on the respective VidPN present path.
#define ERROR_GRAPHICS_MODE_NOT_IN_MODESET 0xC026234A // Specified mode is not in the specified mode set.
#define ERROR_GRAPHICS_INVALID_VIDPN_TOPOLOGY_RECOMMENDATION_REASON 0xC026234D // Specified VidPN topology recommendation reason is invalid.
#define ERROR_GRAPHICS_INVALID_PATH_CONTENT_TYPE 0xC026234E // Specified VidPN present path content type is invalid.
#define ERROR_GRAPHICS_INVALID_COPYPROTECTION_TYPE 0xC026234F // Specified VidPN present path copy protection type is invalid.
#define ERROR_GRAPHICS_UNASSIGNED_MODESET_ALREADY_EXISTS 0xC0262350 // No more than one unassigned mode set can exist at any given time for a given VidPN source or target.
#define ERROR_GRAPHICS_INVALID_SCANLINE_ORDERING 0xC0262352 // The specified scan line ordering type is invalid.
#define ERROR_GRAPHICS_TOPOLOGY_CHANGES_NOT_ALLOWED 0xC0262353 // Topology changes are not allowed for the specified VidPN.
#define ERROR_GRAPHICS_NO_AVAILABLE_IMPORTANCE_ORDINALS 0xC0262354 // All available importance ordinals are already used in the specified topology.
#define ERROR_GRAPHICS_INCOMPATIBLE_PRIVATE_FORMAT 0xC0262355 // Specified primary surface has a different private format attribute than the current primary surface.
#define ERROR_GRAPHICS_INVALID_MODE_PRUNING_ALGORITHM 0xC0262356 // Specified mode pruning algorithm is invalid.
#define ERROR_GRAPHICS_SPECIFIED_CHILD_ALREADY_CONNECTED 0xC0262400 // Specified display adapter child device already has an external device connected to it.
#define ERROR_GRAPHICS_CHILD_DESCRIPTOR_NOT_SUPPORTED 0xC0262401 // The display adapter child device does not support reporting a descriptor.
#define ERROR_GRAPHICS_NOT_A_LINKED_ADAPTER 0xC0262430 // The display adapter is not linked to any other adapters.
#define ERROR_GRAPHICS_LEADLINK_NOT_ENUMERATED 0xC0262431 // Lead adapter in a linked configuration was not enumerated yet.
#define ERROR_GRAPHICS_CHAINLINKS_NOT_ENUMERATED 0xC0262432 // Some chain adapters in a linked configuration were not enumerated yet.
#define ERROR_GRAPHICS_ADAPTER_CHAIN_NOT_READY 0xC0262433 // The chain of linked adapters is not ready to start because of an unknown failure.
#define ERROR_GRAPHICS_CHAINLINKS_NOT_STARTED 0xC0262434 // An attempt was made to start a lead link display adapter when the chain links were not started yet.
#define ERROR_GRAPHICS_CHAINLINKS_NOT_POWERED_ON 0xC0262435 // An attempt was made to turn on a lead link display adapter when the chain links were turned off.
#define ERROR_GRAPHICS_INCONSISTENT_DEVICE_LINK_STATE 0xC0262436 // The adapter link was found to be in an inconsistent state. Not all adapters are in an expected PNP or power state.
#define ERROR_GRAPHICS_NOT_POST_DEVICE_DRIVER 0xC0262438 // The driver trying to start is not the same as the driver for the posted display adapter.
#define ERROR_GRAPHICS_OPM_NOT_SUPPORTED 0xC0262500 // The driver does not support Output Protection Manager (OPM).
#define ERROR_GRAPHICS_COPP_NOT_SUPPORTED 0xC0262501 // The driver does not support Certified Output Protection Protocol (COPP).
#define ERROR_GRAPHICS_UAB_NOT_SUPPORTED 0xC0262502 // The driver does not support a user-accessible bus (UAB).
#define ERROR_GRAPHICS_OPM_INVALID_ENCRYPTED_PARAMETERS 0xC0262503 // The specified encrypted parameters are invalid.
#define ERROR_GRAPHICS_OPM_PARAMETER_ARRAY_TOO_SMALL 0xC0262504 // An array passed to a function cannot hold all of the data that the function wants to put in it.
#define ERROR_GRAPHICS_OPM_NO_VIDEO_OUTPUTS_EXIST 0xC0262505 // The GDI display device passed to this function does not have any active video outputs.
#define ERROR_GRAPHICS_PVP_NO_DISPLAY_DEVICE_CORRESPONDS_TO_NAME 0xC0262506 // The protected video path (PVP) cannot find an actual GDI display device that corresponds to the passed-in GDI display device name.
#define ERROR_GRAPHICS_PVP_DISPLAY_DEVICE_NOT_ATTACHED_TO_DESKTOP 0xC0262507 // This function failed because the GDI display device passed to it was not attached to the Windows desktop.
#define ERROR_GRAPHICS_PVP_MIRRORING_DEVICES_NOT_SUPPORTED 0xC0262508 // The PVP does not support mirroring display devices because they do not have video outputs.
#define ERROR_GRAPHICS_OPM_INVALID_POINTER 0xC026250A // The function failed because an invalid pointer parameter was passed to it. A pointer parameter is invalid if it is null, it points to an invalid address, it points to a kernel mode address, or it is not correctly aligned.
#define ERROR_GRAPHICS_OPM_INTERNAL_ERROR 0xC026250B // An internal error caused this operation to fail.
#define ERROR_GRAPHICS_OPM_INVALID_HANDLE 0xC026250C // The function failed because the caller passed in an invalid OPM user mode handle.
#define ERROR_GRAPHICS_PVP_NO_MONITORS_CORRESPOND_TO_DISPLAY_DEVICE 0xC026250D // This function failed because the GDI device passed to it did not have any monitors associated with it.
#define ERROR_GRAPHICS_PVP_INVALID_CERTIFICATE_LENGTH 0xC026250E // A certificate could not be returned because the certificate buffer passed to the function was too small.
#define ERROR_GRAPHICS_OPM_SPANNING_MODE_ENABLED 0xC026250F // A video output could not be created because the frame buffer is in spanning mode.
#define ERROR_GRAPHICS_OPM_THEATER_MODE_ENABLED 0xC0262510 // A video output could not be created because the frame buffer is in theater mode.
#define ERROR_GRAPHICS_PVP_HFS_FAILED 0xC0262511 // The function call failed because the display adapter's hardware functionality scan failed to validate the graphics hardware.
#define ERROR_GRAPHICS_OPM_INVALID_SRM 0xC0262512 // The High-Bandwidth Digital Content Protection (HDCP) System Renewability Message (SRM) passed to this function did not comply with section 5 of the HDCP 1.1 specification.
#define ERROR_GRAPHICS_OPM_OUTPUT_DOES_NOT_SUPPORT_HDCP 0xC0262513 // The video output cannot enable the HDCP system because it does not support it.
#define ERROR_GRAPHICS_OPM_OUTPUT_DOES_NOT_SUPPORT_ACP 0xC0262514 // The video output cannot enable analog copy protection because it does not support it.
#define ERROR_GRAPHICS_OPM_OUTPUT_DOES_NOT_SUPPORT_CGMSA 0xC0262515 // The video output cannot enable the Content Generation Management System Analog (CGMS-A) protection technology because it does not support it.
#define ERROR_GRAPHICS_OPM_HDCP_SRM_NEVER_SET 0xC0262516 // IOPMVideoOutput's GetInformation() method cannot return the version of the SRM being used because the application never successfully passed an SRM to the video output.
#define ERROR_GRAPHICS_OPM_RESOLUTION_TOO_HIGH 0xC0262517 // IOPMVideoOutput's Configure() method cannot enable the specified output protection technology because the output's screen resolution is too high.
#define ERROR_GRAPHICS_OPM_ALL_HDCP_HARDWARE_ALREADY_IN_USE 0xC0262518 // IOPMVideoOutput's Configure() method cannot enable HDCP because the display adapter's HDCP hardware is already being used by other physical outputs.
#define ERROR_GRAPHICS_OPM_VIDEO_OUTPUT_NO_LONGER_EXISTS 0xC0262519 // The operating system asynchronously destroyed this OPM video output because the operating system's state changed. This error typically occurs because the monitor physical device object (PDO) associated with this video output was removed, the monitor PDO associated with this video output was stopped, the video output's session became a nonconsole session or the video output's desktop became an inactive desktop.
#define ERROR_GRAPHICS_OPM_SESSION_TYPE_CHANGE_IN_PROGRESS 0xC026251A // IOPMVideoOutput's methods cannot be called when a session is changing its type. There are currently three types of sessions: console, disconnected and remote (remote desktop protocol [RDP] or Independent Computing Architecture [ICA]).
#define ERROR_GRAPHICS_I2C_NOT_SUPPORTED 0xC0262580 // The monitor connected to the specified video output does not have an I2C bus.
#define ERROR_GRAPHICS_I2C_DEVICE_DOES_NOT_EXIST 0xC0262581 // No device on the I2C bus has the specified address.
#define ERROR_GRAPHICS_I2C_ERROR_TRANSMITTING_DATA 0xC0262582 // An error occurred while transmitting data to the device on the I2C bus.
#define ERROR_GRAPHICS_I2C_ERROR_RECEIVING_DATA 0xC0262583 // An error occurred while receiving data from the device on the I2C bus.
#define ERROR_GRAPHICS_DDCCI_VCP_NOT_SUPPORTED 0xC0262584 // The monitor does not support the specified Virtual Control Panel (VCP) code.
#define ERROR_GRAPHICS_DDCCI_INVALID_DATA 0xC0262585 // The data received from the monitor is invalid.
#define ERROR_GRAPHICS_DDCCI_MONITOR_RETURNED_INVALID_TIMING_STATUS_BYTE 0xC0262586 // A function call failed because a monitor returned an invalid Timing Status byte when the operating system used the Display Data Channel Command Interface (DDC/CI) Get Timing Report and Timing Message command to get a timing report from a monitor.
#define ERROR_GRAPHICS_MCA_INVALID_CAPABILITIES_STRING 0xC0262587 // The monitor returned a DDC/CI capabilities string that did not comply with the ACCESS.bus 3.0, DDC/CI 1.1 or MCCS 2 Revision 1 specification.
#define ERROR_GRAPHICS_MCA_INTERNAL_ERROR 0xC0262588 // An internal Monitor Configuration API error occurred.
#define ERROR_GRAPHICS_DDCCI_INVALID_MESSAGE_COMMAND 0xC0262589 // An operation failed because a DDC/CI message had an invalid value in its command field.
#define ERROR_GRAPHICS_DDCCI_INVALID_MESSAGE_LENGTH 0xC026258A // This error occurred because a DDC/CI message length field contained an invalid value.
#define ERROR_GRAPHICS_DDCCI_INVALID_MESSAGE_CHECKSUM 0xC026258B // This error occurred because the value in a DDC/CI message checksum field did not match the message's computed checksum value. This error implies that the data was corrupted while it was being transmitted from a monitor to a computer.
#define ERROR_GRAPHICS_PMEA_INVALID_MONITOR 0xC02625D6 // The HMONITOR no longer exists, is not attached to the desktop, or corresponds to a mirroring device.
#define ERROR_GRAPHICS_PMEA_INVALID_D3D_DEVICE 0xC02625D7 // The Direct3D (D3D) device's GDI display device no longer exists, is not attached to the desktop, or is a mirroring display device.
#define ERROR_GRAPHICS_DDCCI_CURRENT_CURRENT_VALUE_GREATER_THAN_MAXIMUM_VALUE 0xC02625D8 // A continuous VCP code's current value is greater than its maximum value. This error code indicates that a monitor returned an invalid value.
#define ERROR_GRAPHICS_MCA_INVALID_VCP_VERSION 0xC02625D9 // The monitor's VCP Version (0xDF) VCP code returned an invalid version value.
#define ERROR_GRAPHICS_MCA_MONITOR_VIOLATES_MCCS_SPECIFICATION 0xC02625DA // The monitor does not comply with the Monitor Control Command Set (MCCS) specification it claims to support.
#define ERROR_GRAPHICS_MCA_MCCS_VERSION_MISMATCH 0xC02625DB // The MCCS version in a monitor's mccs_ver capability does not match the MCCS version the monitor reports when the VCP Version (0xDF) VCP code is used.
#define ERROR_GRAPHICS_MCA_UNSUPPORTED_MCCS_VERSION 0xC02625DC // The Monitor Configuration API only works with monitors that support the MCCS 1.0 specification, the MCCS 2.0 specification, or the MCCS 2.0 Revision 1 specification.
#define ERROR_GRAPHICS_MCA_INVALID_TECHNOLOGY_TYPE_RETURNED 0xC02625DE // The monitor returned an invalid monitor technology type. CRT, plasma, and LCD (TFT) are examples of monitor technology types. This error implies that the monitor violated the MCCS 2.0 or MCCS 2.0 Revision 1 specification.
#define ERROR_GRAPHICS_MCA_UNSUPPORTED_COLOR_TEMPERATURE 0xC02625DF // The SetMonitorColorTemperature() caller passed a color temperature to it that the current monitor did not support. CRT, plasma, and LCD (TFT) are examples of monitor technology types. This error implies that the monitor violated the MCCS 2.0 or MCCS 2.0 Revision 1 specification.
#define ERROR_GRAPHICS_ONLY_CONSOLE_SESSION_SUPPORTED 0xC02625E0 // This function can be used only if a program is running in the local console session. It cannot be used if the program is running on a remote desktop session or on a terminal server session.

#endif
