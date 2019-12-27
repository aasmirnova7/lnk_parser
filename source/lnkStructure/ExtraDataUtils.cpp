#include "ExtraDataUtils.h"

using namespace std;

void ExtraDataUtils::parseError(long long int errorType) {
    switch(errorType) {
        case STG_S_CONVERTED:
        cout << Utils::defaultOffset << "STG_S_CONVERTED" << endl;
        cout <<  Utils::defaultOffsetDocInfo << "The underlying file was converted to compound file format." << endl;
        break;
        case STG_S_BLOCK:
        cout << Utils::defaultOffset << "STG_S_BLOCK" << endl;
        cout << Utils::defaultOffsetDocInfo << "The storage operation should block until more data is available." << endl;
        break;
        case STG_S_RETRYNOW:
        cout << Utils::defaultOffset << "STG_S_RETRYNOW" << endl;
        cout << Utils::defaultOffsetDocInfo << "The storage operation should retry immediately." << endl;
        break;
        case STG_S_MONITORING:
        cout << Utils::defaultOffset << "STG_S_MONITORING" << endl;
        cout << Utils::defaultOffsetDocInfo << "The notified event sink will not influence the storage operation." << endl;
        break;
        case STG_S_MULTIPLEOPENS:
        cout << Utils::defaultOffset << "STG_S_MULTIPLEOPENS" << endl;
        cout << Utils::defaultOffsetDocInfo << "Multiple opens prevent consolidated (commit succeeded)." << endl;
        break;
        case STG_S_CONSOLIDATIONFAILED:
        cout << Utils::defaultOffset << "STG_S_CONSOLIDATIONFAILED" << endl;
        cout << Utils::defaultOffsetDocInfo << "Consolidation of the storage file failed (commit succeeded)." << endl;
        break;
        case STG_S_CANNOTCONSOLIDATE:
        cout << Utils::defaultOffset << "STG_S_CANNOTCONSOLIDATE" << endl;
        cout << Utils::defaultOffsetDocInfo << "Consolidation of the storage file is inappropriate (commit succeeded)." << endl;
        break;
        case OLE_S_USEREG:
        cout << Utils::defaultOffset << "OLE_S_USEREG" << endl;
        cout << Utils::defaultOffsetDocInfo << "Use the registry database to provide the requested information." << endl;
        break;
        case OLE_S_STATIC:
        cout << Utils::defaultOffset << "OLE_S_STATIC" << endl;
        cout << Utils::defaultOffsetDocInfo << "Success, but static." << endl;
        break;
        case OLE_S_MAC_CLIPFORMAT:
        cout << Utils::defaultOffset << "OLE_S_MAC_CLIPFORMAT" << endl;
        cout << Utils::defaultOffsetDocInfo << "Macintosh clipboard format." << endl;
        break;
        case DRAGDROP_S_DROP:
        cout << Utils::defaultOffset << "DRAGDROP_S_DROP" << endl;
        cout << Utils::defaultOffsetDocInfo << "Successful drop took place." << endl;
        break;
        case DRAGDROP_S_CANCEL:
        cout << Utils::defaultOffset << "DRAGDROP_S_CANCEL" << endl;
        cout << Utils::defaultOffsetDocInfo << "Drag-drop operation canceled." << endl;
        break;
        case DRAGDROP_S_USEDEFAULTCURSORS:
        cout << Utils::defaultOffset << "DRAGDROP_S_USEDEFAULTCURSORS" << endl;
        cout << Utils::defaultOffsetDocInfo << "Use the default cursor." << endl;
        break;
        case DATA_S_SAMEFORMATETC:
        cout << Utils::defaultOffset << "DATA_S_SAMEFORMATETC" << endl;
        cout << Utils::defaultOffsetDocInfo << "Data has same FORMATETC." << endl;
        break;
        case VIEW_S_ALREADY_FROZEN:
        cout << Utils::defaultOffset << "VIEW_S_ALREADY_FROZEN" << endl;
        cout << Utils::defaultOffsetDocInfo << "View is already frozen." << endl;
        break;
        case CACHE_S_FORMATETC_NOTSUPPORTED:
        cout << Utils::defaultOffset << "CACHE_S_FORMATETC_NOTSUPPORTED" << endl;
        cout << Utils::defaultOffsetDocInfo << "FORMATETC not supported." << endl;
        break;
        case CACHE_S_SAMECACHE:
        cout << Utils::defaultOffset << "CACHE_S_SAMECACHE" << endl;
        cout << Utils::defaultOffsetDocInfo << "Same cache." << endl;
        break;
        case CACHE_S_SOMECACHES_NOTUPDATED:
        cout << Utils::defaultOffset << "CACHE_S_SOMECACHES_NOTUPDATED" << endl;
        cout << Utils::defaultOffsetDocInfo << "Some caches are not updated." << endl;
        break;
        case OLEOBJ_S_INVALIDVERB:
        cout << Utils::defaultOffset << "OLEOBJ_S_INVALIDVERB" << endl;
        cout << Utils::defaultOffsetDocInfo << "Invalid verb for OLE object." << endl;
        break;
        case OLEOBJ_S_CANNOT_DOVERB_NOW:
        cout << Utils::defaultOffset << "OLEOBJ_S_CANNOT_DOVERB_NOW" << endl;
        cout << Utils::defaultOffsetDocInfo << "Verb number is valid but verb cannot be done now." << endl;
        break;
        case OLEOBJ_S_INVALIDHWND:
        cout << Utils::defaultOffset << "OLEOBJ_S_INVALIDHWND" << endl;
        cout << Utils::defaultOffsetDocInfo << "Invalid window handle passed." << endl;
        break;
        case INPLACE_S_TRUNCATED:
        cout << Utils::defaultOffset << "INPLACE_S_TRUNCATED" << endl;
        cout << Utils::defaultOffsetDocInfo << "Message is too long; some of it had to be truncated before displaying." << endl;
        break;
        case CONVERT10_S_NO_PRESENTATION:
        cout << Utils::defaultOffset << "CONVERT10_S_NO_PRESENTATION" << endl;
        cout << Utils::defaultOffsetDocInfo << "Unable to convert OLESTREAM to IStorage." << endl;
        break;
        case MK_S_REDUCED_TO_SELF:
        cout << Utils::defaultOffset << "MK_S_REDUCED_TO_SELF" << endl;
        cout << Utils::defaultOffsetDocInfo << "Moniker reduced to itself." << endl;
        break;
        case MK_S_ME:
        cout << Utils::defaultOffset << "MK_S_ME" << endl;
        cout << Utils::defaultOffsetDocInfo << "Common prefix is this moniker." << endl;
        break;
        case MK_S_HIM:
        cout << Utils::defaultOffset << "MK_S_HIM" << endl;
        cout << Utils::defaultOffsetDocInfo << "Common prefix is input moniker." << endl;
        break;
        case MK_S_US:
        cout << Utils::defaultOffset << "MK_S_US" << endl;
        cout << Utils::defaultOffsetDocInfo << "Common prefix is both monikers." << endl;
        break;
        case MK_S_MONIKERALREADYREGISTERED:
        cout << Utils::defaultOffset << "MK_S_MONIKERALREADYREGISTERED" << endl;
        cout << Utils::defaultOffsetDocInfo << "Moniker is already registered in running object table." << endl;
        break;
        case EVENT_S_SOME_SUBSCRIBERS_FAILED:
        cout << Utils::defaultOffset << "EVENT_S_SOME_SUBSCRIBERS_FAILED" << endl;
        cout << Utils::defaultOffsetDocInfo << "An event was able to invoke some, but not all, of the subscribers." << endl;
        break;
        case EVENT_S_NOSUBSCRIBERS:
        cout << Utils::defaultOffset << "EVENT_S_NOSUBSCRIBERS" << endl;
        cout << Utils::defaultOffsetDocInfo << "An event was delivered, but there were no subscribers." << endl;
        break;
        case SCHED_S_TASK_READY:
        cout << Utils::defaultOffset << "SCHED_S_TASK_READY" << endl;
        cout << Utils::defaultOffsetDocInfo << "The task is ready to run at its next scheduled time." << endl;
        break;
        case SCHED_S_TASK_RUNNING:
        cout << Utils::defaultOffset << "SCHED_S_TASK_RUNNING" << endl;
        cout << Utils::defaultOffsetDocInfo << "The task is currently running." << endl;
        break;
        case SCHED_S_TASK_DISABLED:
        cout << Utils::defaultOffset << "SCHED_S_TASK_DISABLED" << endl;
        cout << Utils::defaultOffsetDocInfo << "The task will not run at the scheduled times because it has been disabled." << endl;
        break;
        case SCHED_S_TASK_HAS_NOT_RUN:
        cout << Utils::defaultOffset << "SCHED_S_TASK_HAS_NOT_RUN" << endl;
        cout << Utils::defaultOffsetDocInfo << "The task has not yet run." << endl;
        break;
        case SCHED_S_TASK_NO_MORE_RUNS:
        cout << Utils::defaultOffset << "SCHED_S_TASK_NO_MORE_RUNS" << endl;
        cout << Utils::defaultOffsetDocInfo << "There are no more runs scheduled for this task." << endl;
        break;
        case SCHED_S_TASK_NOT_SCHEDULED:
        cout << Utils::defaultOffset << "SCHED_S_TASK_NOT_SCHEDULED" << endl;
        cout << Utils::defaultOffsetDocInfo << "One or more of the properties that are needed to run this task on a schedule have not been set." << endl;
        break;
        case SCHED_S_TASK_TERMINATED:
        cout << Utils::defaultOffset << "SCHED_S_TASK_TERMINATED" << endl;
        cout << Utils::defaultOffsetDocInfo << "The last run of the task was terminated by the user." << endl;
        break;
        case SCHED_S_TASK_NO_VALID_TRIGGERS:
        cout << Utils::defaultOffset << "SCHED_S_TASK_NO_VALID_TRIGGERS" << endl;
        cout << Utils::defaultOffsetDocInfo << "Either the task has no triggers, or the existing triggers are disabled or not set." << endl;
        break;
        case SCHED_S_EVENT_TRIGGER:
        cout << Utils::defaultOffset << "SCHED_S_EVENT_TRIGGER" << endl;
        cout << Utils::defaultOffsetDocInfo << "Event triggers do not have set run times." << endl;
        break;
        case SCHED_S_SOME_TRIGGERS_FAILED:
        cout << Utils::defaultOffset << "SCHED_S_SOME_TRIGGERS_FAILED" << endl;
        cout << Utils::defaultOffsetDocInfo << "The task is registered, but not all specified triggers will start the task." << endl;
        break;
        case SCHED_S_BATCH_LOGON_PROBLEM:
        cout << Utils::defaultOffset << "SCHED_S_BATCH_LOGON_PROBLEM" << endl;
        cout << Utils::defaultOffsetDocInfo << "The task is registered, but it might fail to start. Batch logon privilege needs to be enabled for the task principal." << endl;
        break;
        case XACT_S_ASYNC:
        cout << Utils::defaultOffset << "XACT_S_ASYNC" << endl;
        cout << Utils::defaultOffsetDocInfo << "An asynchronous operation was specified. The operation has begun, but its outcome is not known yet." << endl;
        break;
        case XACT_S_READONLY:
        cout << Utils::defaultOffset << "XACT_S_READONLY" << endl;
        cout << Utils::defaultOffsetDocInfo << "The method call succeeded because the transaction was read-only." << endl;
        break;
        case XACT_S_SOMENORETAIN:
        cout << Utils::defaultOffset << "XACT_S_SOMENORETAIN" << endl;
        cout << Utils::defaultOffsetDocInfo << "The transaction was successfully aborted. However, this is a coordinated transaction, and a number of enlisted resources were aborted outright because they could not support abort-retaining semantics." << endl;
        break;
        case XACT_S_OKINFORM:
        cout << Utils::defaultOffset << "XACT_S_OKINFORM" << endl;
        cout << Utils::defaultOffsetDocInfo << "No changes were made during this call, but the sink wants another chance to look if any other sinks make further changes." << endl;
        break;
        case XACT_S_MADECHANGESCONTENT:
        cout << Utils::defaultOffset << "XACT_S_MADECHANGESCONTENT" << endl;
        cout << Utils::defaultOffsetDocInfo << "The sink is content and wants the transaction to proceed. Changes were made to one or more resources during this call." << endl;
        break;
        case XACT_S_MADECHANGESINFORM:
        cout << Utils::defaultOffset << "XACT_S_MADECHANGESINFORM" << endl;
        cout << Utils::defaultOffsetDocInfo << "The sink is for the moment and wants the transaction to proceed, but if other changes are made following this return by other event sinks, this sink wants another chance to look." << endl;
        break;
        case XACT_S_ALLNORETAIN:
        cout << Utils::defaultOffset << "XACT_S_ALLNORETAIN" << endl;
        cout << Utils::defaultOffsetDocInfo << "The transaction was successfully aborted. However, the abort was nonretaining." << endl;
        break;
        case XACT_S_ABORTING:
        cout << Utils::defaultOffset << "XACT_S_ABORTING" << endl;
        cout << Utils::defaultOffsetDocInfo << "An abort operation was already in progress." << endl;
        break;
        case XACT_S_SINGLEPHASE:
        cout << Utils::defaultOffset << "XACT_S_SINGLEPHASE" << endl;
        cout << Utils::defaultOffsetDocInfo << "The resource manager has performed a single-phase commit of the transaction." << endl;
        break;
        case XACT_S_LOCALLY_OK:
        cout << Utils::defaultOffset << "XACT_S_LOCALLY_OK" << endl;
        cout << Utils::defaultOffsetDocInfo << "The local transaction has not aborted." << endl;
        break;
        case XACT_S_LASTRESOURCEMANAGER:
        cout << Utils::defaultOffset << "XACT_S_LASTRESOURCEMANAGER" << endl;
        cout << Utils::defaultOffsetDocInfo << "The resource manager has requested to be the coordinator (last resource manager) for the transaction." << endl;
        break;
        case CO_S_NOTALLINTERFACES:
        cout << Utils::defaultOffset << "CO_S_NOTALLINTERFACES" << endl;
        cout << Utils::defaultOffsetDocInfo << "Not all the requested interfaces were available." << endl;
        break;
        case CO_S_MACHINENAMENOTFOUND:
        cout << Utils::defaultOffset << "CO_S_MACHINENAMENOTFOUND" << endl;
        cout << Utils::defaultOffsetDocInfo << "The specified machine name was not found in the cache." << endl;
        break;
        case SEC_I_CONTINUE_NEEDED:
        cout << Utils::defaultOffset << "SEC_I_CONTINUE_NEEDED" << endl;
        cout << Utils::defaultOffsetDocInfo << "The function completed successfully, but it must be called again to complete the context." << endl;
        break;
        case SEC_I_COMPLETE_NEEDED:
        cout << Utils::defaultOffset << "SEC_I_COMPLETE_NEEDED" << endl;
        cout << Utils::defaultOffsetDocInfo << "The function completed successfully, but CompleteToken must be called." << endl;
        break;
        case SEC_I_COMPLETE_AND_CONTINUE:
        cout << Utils::defaultOffset << "SEC_I_COMPLETE_AND_CONTINUE" << endl;
        cout << Utils::defaultOffsetDocInfo << "The function completed successfully, but both CompleteToken and this function must be called to complete the context." << endl;
        break;
        case SEC_I_LOCAL_LOGON:
        cout << Utils::defaultOffset << "SEC_I_LOCAL_LOGON" << endl;
        cout << Utils::defaultOffsetDocInfo << "The logon was completed, but no network authority was available. The logon was made using locally known information." << endl;
        break;
        case SEC_I_CONTEXT_EXPIRED:
        cout << Utils::defaultOffset << "SEC_I_CONTEXT_EXPIRED" << endl;
        cout << Utils::defaultOffsetDocInfo << "The context has expired and can no longer be used." << endl;
        break;
        case SEC_I_INCOMPLETE_CREDENTIALS:
        cout << Utils::defaultOffset << "SEC_I_INCOMPLETE_CREDENTIALS" << endl;
        cout << Utils::defaultOffsetDocInfo << "The credentials supplied were not complete and could not be verified. Additional information can be returned from the context." << endl;
        break;
        case SEC_I_RENEGOTIATE:
        cout << Utils::defaultOffset << "SEC_I_RENEGOTIATE" << endl;
        cout << Utils::defaultOffsetDocInfo << "The context data must be renegotiated with the peer." << endl;
        break;
        case SEC_I_NO_LSA_CONTEXT:
        cout << Utils::defaultOffset << "SEC_I_NO_LSA_CONTEXT" << endl;
        cout << Utils::defaultOffsetDocInfo << "There is no LSA mode context associated with this context." << endl;
        break;
        case SEC_I_SIGNATURE_NEEDED:
        cout << Utils::defaultOffset << "SEC_I_SIGNATURE_NEEDED" << endl;
        cout << Utils::defaultOffsetDocInfo << "A signature operation must be performed before the user can authenticate." << endl;
        break;
        case CRYPT_I_NEW_PROTECTION_REQUIRED:
        cout << Utils::defaultOffset << "CRYPT_I_NEW_PROTECTION_REQUIRED" << endl;
        cout << Utils::defaultOffsetDocInfo << "The protected data needs to be reprotected." << endl;
        break;
        case NS_S_CALLPENDING:
        cout << Utils::defaultOffset << "NS_S_CALLPENDING" << endl;
        cout << Utils::defaultOffsetDocInfo << "The requested operation is pending completion." << endl;
        break;
        case NS_S_CALLABORTED:
        cout << Utils::defaultOffset << "NS_S_CALLABORTED" << endl;
        cout << Utils::defaultOffsetDocInfo << "The requested operation was aborted by the client." << endl;
        break;
        case NS_S_STREAM_TRUNCATED:
        cout << Utils::defaultOffset << "NS_S_STREAM_TRUNCATED" << endl;
        cout << Utils::defaultOffsetDocInfo << "The stream was purposefully stopped before completion." << endl;
        break;
        case NS_S_REBUFFERING:
        cout << Utils::defaultOffset << "NS_S_REBUFFERING" << endl;
        cout << Utils::defaultOffsetDocInfo << "The requested operation has caused the source to rebuffer." << endl;
        break;
        case NS_S_DEGRADING_QUALITY:
        cout << Utils::defaultOffset << "NS_S_DEGRADING_QUALITY" << endl;
        cout << Utils::defaultOffsetDocInfo << "The requested operation has caused the source to degrade codec quality." << endl;
        break;
        case NS_S_TRANSCRYPTOR_EOF:
        cout << Utils::defaultOffset << "NS_S_TRANSCRYPTOR_EOF" << endl;
        cout << Utils::defaultOffsetDocInfo << "The transcryptor object has reached end of file." << endl;
        break;
        case NS_S_WMP_UI_VERSIONMISMATCH:
        cout << Utils::defaultOffset << "NS_S_WMP_UI_VERSIONMISMATCH" << endl;
        cout << Utils::defaultOffsetDocInfo << "An upgrade is needed for the theme manager to correctly show this skin. Skin reports version: %.1f." << endl;
        break;
        case NS_S_WMP_EXCEPTION:
        cout << Utils::defaultOffset << "NS_S_WMP_EXCEPTION" << endl;
        cout << Utils::defaultOffsetDocInfo << "An error occurred in one of the UI components." << endl;
        break;
        case NS_S_WMP_LOADED_GIF_IMAGE:
        cout << Utils::defaultOffset << "NS_S_WMP_LOADED_GIF_IMAGE" << endl;
        cout << Utils::defaultOffsetDocInfo << "Successfully loaded a GIF file." << endl;
        break;
        case NS_S_WMP_LOADED_PNG_IMAGE:
        cout << Utils::defaultOffset << "NS_S_WMP_LOADED_PNG_IMAGE" << endl;
        cout << Utils::defaultOffsetDocInfo << "Successfully loaded a PNG file." << endl;
        break;
        case NS_S_WMP_LOADED_BMP_IMAGE:
        cout << Utils::defaultOffset << "NS_S_WMP_LOADED_BMP_IMAGE" << endl;
        cout << Utils::defaultOffsetDocInfo << "Successfully loaded a BMP file." << endl;
        break;
        case NS_S_WMP_LOADED_JPG_IMAGE:
        cout << Utils::defaultOffset << "NS_S_WMP_LOADED_JPG_IMAGE" << endl;
        cout << Utils::defaultOffsetDocInfo << "Successfully loaded a JPG file." << endl;
        break;
        case NS_S_WMG_FORCE_DROP_FRAME:
        cout << Utils::defaultOffset << "NS_S_WMG_FORCE_DROP_FRAME" << endl;
        cout << Utils::defaultOffsetDocInfo << "Drop this frame." << endl;
        break;
        case NS_S_WMR_ALREADYRENDERED:
        cout << Utils::defaultOffset << "NS_S_WMR_ALREADYRENDERED" << endl;
        cout << Utils::defaultOffsetDocInfo << "The specified stream has already been rendered." << endl;
        break;
        case NS_S_WMR_PINTYPEPARTIALMATCH:
        cout << Utils::defaultOffset << "NS_S_WMR_PINTYPEPARTIALMATCH" << endl;
        cout << Utils::defaultOffsetDocInfo << "The specified type partially matches this pin type." << endl;
        break;
        case NS_S_WMR_PINTYPEFULLMATCH:
        cout << Utils::defaultOffset << "NS_S_WMR_PINTYPEFULLMATCH" << endl;
        cout << Utils::defaultOffsetDocInfo << "The specified type fully matches this pin type." << endl;
        break;
        case NS_S_WMG_ADVISE_DROP_FRAME:
        cout << Utils::defaultOffset << "NS_S_WMG_ADVISE_DROP_FRAME" << endl;
        cout << Utils::defaultOffsetDocInfo << "The timestamp is late compared to the current render position. Advise dropping this frame." << endl;
        break;
        case NS_S_WMG_ADVISE_DROP_TO_KEYFRAME:
        cout << Utils::defaultOffset << "NS_S_WMG_ADVISE_DROP_TO_KEYFRAME" << endl;
        cout << Utils::defaultOffsetDocInfo << "The timestamp is severely late compared to the current render position. Advise dropping everything up to the next key frame." << endl;
        break;
        case NS_S_NEED_TO_BUY_BURN_RIGHTS:
        cout << Utils::defaultOffset << "NS_S_NEED_TO_BUY_BURN_RIGHTS" << endl;
        cout << Utils::defaultOffsetDocInfo << "No burn rights. You will be prompted to buy burn rights when you try to burn this file to an audio CD." << endl;
        break;
        case NS_S_WMPCORE_PLAYLISTCLEARABORT:
        cout << Utils::defaultOffset << "NS_S_WMPCORE_PLAYLISTCLEARABORT" << endl;
        cout << Utils::defaultOffsetDocInfo << "Failed to clear playlist because it was aborted by user." << endl;
        break;
        case NS_S_WMPCORE_PLAYLISTREMOVEITEMABORT:
        cout << Utils::defaultOffset << "NS_S_WMPCORE_PLAYLISTREMOVEITEMABORT" << endl;
        cout << Utils::defaultOffsetDocInfo << "Failed to remove item in the playlist since it was aborted by user." << endl;
        break;
        case NS_S_WMPCORE_PLAYLIST_CREATION_PENDING:
        cout << Utils::defaultOffset << "NS_S_WMPCORE_PLAYLIST_CREATION_PENDING" << endl;
        cout << Utils::defaultOffsetDocInfo << "Playlist is being generated asynchronously." << endl;
        break;
        case NS_S_WMPCORE_MEDIA_VALIDATION_PENDING:
        cout << Utils::defaultOffset << "NS_S_WMPCORE_MEDIA_VALIDATION_PENDING" << endl;
        cout << Utils::defaultOffsetDocInfo << "Validation of the media is pending." << endl;
        break;
        case NS_S_WMPCORE_PLAYLIST_REPEAT_SECONDARY_SEGMENTS_IGNORED:
        cout << Utils::defaultOffset << "NS_S_WMPCORE_PLAYLIST_REPEAT_SECONDARY_SEGMENTS_IGNORED" << endl;
        cout << Utils::defaultOffsetDocInfo << "Encountered more than one Repeat block during ASX processing." << endl;
        break;
        case NS_S_WMPCORE_COMMAND_NOT_AVAILABLE:
        cout << Utils::defaultOffset << "NS_S_WMPCORE_COMMAND_NOT_AVAILABLE" << endl;
        cout << Utils::defaultOffsetDocInfo << "Current state of WMP disallows calling this method or property." << endl;
        break;
        case NS_S_WMPCORE_PLAYLIST_NAME_AUTO_GENERATED:
        cout << Utils::defaultOffset << "NS_S_WMPCORE_PLAYLIST_NAME_AUTO_GENERATED" << endl;
        cout << Utils::defaultOffsetDocInfo << "Name for the playlist has been auto generated." << endl;
        break;
        case NS_S_WMPCORE_PLAYLIST_IMPORT_MISSING_ITEMS:
        cout << Utils::defaultOffset << "NS_S_WMPCORE_PLAYLIST_IMPORT_MISSING_ITEMS" << endl;
        cout << Utils::defaultOffsetDocInfo << "The imported playlist does not contain all items from the original." << endl;
        break;
        case NS_S_WMPCORE_PLAYLIST_COLLAPSED_TO_SINGLE_MEDIA:
        cout << Utils::defaultOffset << "NS_S_WMPCORE_PLAYLIST_COLLAPSED_TO_SINGLE_MEDIA" << endl;
        cout << Utils::defaultOffsetDocInfo << "The M3U playlist has been ignored because it only contains one item." << endl;
        break;
        case NS_S_WMPCORE_MEDIA_CHILD_PLAYLIST_OPEN_PENDING:
        cout << Utils::defaultOffset << "NS_S_WMPCORE_MEDIA_CHILD_PLAYLIST_OPEN_PENDING" << endl;
        cout << Utils::defaultOffsetDocInfo << "The open for the child playlist associated with this media is pending." << endl;
        break;
        case NS_S_WMPCORE_MORE_NODES_AVAIABLE:
        cout << Utils::defaultOffset << "NS_S_WMPCORE_MORE_NODES_AVAIABLE" << endl;
        cout << Utils::defaultOffsetDocInfo << "More nodes support the interface requested, but the array for returning them is full." << endl;
        break;
        case NS_S_WMPBR_SUCCESS:
        cout << Utils::defaultOffset << "NS_S_WMPBR_SUCCESS" << endl;
        cout << Utils::defaultOffsetDocInfo << "Backup or Restore successful!." << endl;
        break;
        case NS_S_WMPBR_PARTIALSUCCESS:
        cout << Utils::defaultOffset << "NS_S_WMPBR_PARTIALSUCCESS" << endl;
        cout << Utils::defaultOffsetDocInfo << "Transfer complete with limitations." << endl;
        break;
        case NS_S_WMPEFFECT_TRANSPARENT:
        cout << Utils::defaultOffset << "NS_S_WMPEFFECT_TRANSPARENT" << endl;
        cout << Utils::defaultOffsetDocInfo << "Request to the effects control to change transparency status to transparent." << endl;
        break;
        case NS_S_WMPEFFECT_OPAQUE:
        cout << Utils::defaultOffset << "NS_S_WMPEFFECT_OPAQUE" << endl;
        cout << Utils::defaultOffsetDocInfo << "Request to the effects control to change transparency status to opaque." << endl;
        break;
        case NS_S_OPERATION_PENDING:
        cout << Utils::defaultOffset << "NS_S_OPERATION_PENDING" << endl;
        cout << Utils::defaultOffsetDocInfo << "The requested application pane is performing an operation and will not be released." << endl;
        break;
        case NS_S_TRACK_BUY_REQUIRES_ALBUM_PURCHASE:
        cout << Utils::defaultOffset << "NS_S_TRACK_BUY_REQUIRES_ALBUM_PURCHASE" << endl;
        cout << Utils::defaultOffsetDocInfo << "The file is only available for purchase when you buy the entire album." << endl;
        break;
        case NS_S_NAVIGATION_COMPLETE_WITH_ERRORS:
        cout << Utils::defaultOffset << "NS_S_NAVIGATION_COMPLETE_WITH_ERRORS" << endl;
        cout << Utils::defaultOffsetDocInfo << "There were problems completing the requested navigation. There are identifiers missing in the catalog." << endl;
        break;
        case NS_S_TRACK_ALREADY_DOWNLOADED:
        cout << Utils::defaultOffset << "NS_S_TRACK_ALREADY_DOWNLOADED" << endl;
        cout << Utils::defaultOffsetDocInfo << "Track already downloaded." << endl;
        break;
        case NS_S_PUBLISHING_POINT_STARTED_WITH_FAILED_SINKS:
        cout << Utils::defaultOffset << "NS_S_PUBLISHING_POINT_STARTED_WITH_FAILED_SINKS" << endl;
        cout << Utils::defaultOffsetDocInfo << "The publishing point successfully started, but one or more of the requested data writer plug-ins failed." << endl;
        break;
        case NS_S_DRM_LICENSE_ACQUIRED:
        cout << Utils::defaultOffset << "NS_S_DRM_LICENSE_ACQUIRED" << endl;
        cout << Utils::defaultOffsetDocInfo << "Status message: The license was acquired." << endl;
        break;
        case NS_S_DRM_INDIVIDUALIZED:
        cout << Utils::defaultOffset << "NS_S_DRM_INDIVIDUALIZED" << endl;
        cout << Utils::defaultOffsetDocInfo << "Status message: The security upgrade has been completed." << endl;
        break;
        case NS_S_DRM_MONITOR_CANCELLED:
        cout << Utils::defaultOffset << "NS_S_DRM_MONITOR_CANCELLED" << endl;
        cout << Utils::defaultOffsetDocInfo << "Status message: License monitoring has been canceled." << endl;
        break;
        case NS_S_DRM_ACQUIRE_CANCELLED:
        cout << Utils::defaultOffset << "NS_S_DRM_ACQUIRE_CANCELLED" << endl;
        cout << Utils::defaultOffsetDocInfo << "Status message: License acquisition has been canceled." << endl;
        break;
        case NS_S_DRM_BURNABLE_TRACK:
        cout << Utils::defaultOffset << "NS_S_DRM_BURNABLE_TRACK" << endl;
        cout << Utils::defaultOffsetDocInfo << "The track is burnable and had no playlist burn limit." << endl;
        break;
        case NS_S_DRM_BURNABLE_TRACK_WITH_PLAYLIST_RESTRICTION:
        cout << Utils::defaultOffset << "NS_S_DRM_BURNABLE_TRACK_WITH_PLAYLIST_RESTRICTION" << endl;
        cout << Utils::defaultOffsetDocInfo << "The track is burnable but has a playlist burn limit." << endl;
        break;
        case NS_S_DRM_NEEDS_INDIVIDUALIZATION:
        cout << Utils::defaultOffset << "NS_S_DRM_NEEDS_INDIVIDUALIZATION" << endl;
        cout << Utils::defaultOffsetDocInfo << "A security upgrade is required to perform the operation on this media file." << endl;
        break;
        case NS_S_REBOOT_RECOMMENDED:
        cout << Utils::defaultOffset << "NS_S_REBOOT_RECOMMENDED" << endl;
        cout << Utils::defaultOffsetDocInfo << "Installation was successful; however, some file cleanup is not complete. For best results, restart your computer." << endl;
        break;
        case NS_S_REBOOT_REQUIRED:
        cout << Utils::defaultOffset << "NS_S_REBOOT_REQUIRED" << endl;
        cout << Utils::defaultOffsetDocInfo << "Installation was successful; however, some file cleanup is not complete. To continue, you must restart your computer." << endl;
        break;
        case NS_S_EOSRECEDING:
        cout << Utils::defaultOffset << "NS_S_EOSRECEDING" << endl;
        cout << Utils::defaultOffsetDocInfo << "EOS hit during rewinding." << endl;
        break;
        case NS_S_CHANGENOTICE:
        cout << Utils::defaultOffset << "NS_S_CHANGENOTICE" << endl;
        cout << Utils::defaultOffsetDocInfo << "Internal." << endl;
        break;
        case ERROR_FLT_IO_COMPLETE:
        cout << Utils::defaultOffset << "ERROR_FLT_IO_COMPLETE" << endl;
        cout << Utils::defaultOffsetDocInfo << "The IO was completed by a filter." << endl;
        break;
        case ERROR_GRAPHICS_MODE_NOT_PINNED:
        cout << Utils::defaultOffset << "ERROR_GRAPHICS_MODE_NOT_PINNED" << endl;
        cout << Utils::defaultOffsetDocInfo << "No mode is pinned on the specified VidPN source or target." << endl;
        break;
        case ERROR_GRAPHICS_NO_PREFERRED_MODE:
        cout << Utils::defaultOffset << "ERROR_GRAPHICS_NO_PREFERRED_MODE" << endl;
        cout << Utils::defaultOffsetDocInfo << "Specified mode set does not specify preference for one of its modes." << endl;
        break;
        case ERROR_GRAPHICS_DATASET_IS_EMPTY:
        cout << Utils::defaultOffset << "ERROR_GRAPHICS_DATASET_IS_EMPTY" << endl;
        cout << Utils::defaultOffsetDocInfo << "Specified data set (for example, mode set, frequency range set, descriptor set, and topology) is empty." << endl;
        break;
        case ERROR_GRAPHICS_NO_MORE_ELEMENTS_IN_DATASET:
        cout << Utils::defaultOffset << "ERROR_GRAPHICS_NO_MORE_ELEMENTS_IN_DATASET" << endl;
        cout << Utils::defaultOffsetDocInfo << "Specified data set (for example, mode set, frequency range set, descriptor set, and topology) does not contain any more elements." << endl;
        break;
        case ERROR_GRAPHICS_PATH_CONTENT_GEOMETRY_TRANSFORMATION_NOT_PINNED:
        cout << Utils::defaultOffset << "ERROR_GRAPHICS_PATH_CONTENT_GEOMETRY_TRANSFORMATION_NOT_PINNED" << endl;
        cout << Utils::defaultOffsetDocInfo << "Specified content transformation is not pinned on the specified VidPN present path." << endl;
        break;
        case PLA_S_PROPERTY_IGNORED:
        cout << Utils::defaultOffset << "PLA_S_PROPERTY_IGNORED" << endl;
        cout << Utils::defaultOffsetDocInfo << "Property value will be ignored." << endl;
        break;
        case ERROR_NDIS_INDICATION_REQUIRED:
        cout << Utils::defaultOffset << "ERROR_NDIS_INDICATION_REQUIRED" << endl;
        cout << Utils::defaultOffsetDocInfo << "The request will be completed later by a Network Driver Interface Specification (NDIS) status indication." << endl;
        break;
        case TRK_S_OUT_OF_SYNC:
        cout << Utils::defaultOffset << "TRK_S_OUT_OF_SYNC" << endl;
        cout << Utils::defaultOffsetDocInfo << "The VolumeSequenceNumber of a MOVE_NOTIFICATION request is incorrect." << endl;
        break;
        case TRK_VOLUME_NOT_FOUND:
        cout << Utils::defaultOffset << "TRK_VOLUME_NOT_FOUND" << endl;
        cout << Utils::defaultOffsetDocInfo << "The VolumeID in a request was not found in the server's ServerVolumeTable." << endl;
        break;
        case TRK_VOLUME_NOT_OWNED:
        cout << Utils::defaultOffset << "TRK_VOLUME_NOT_OWNED" << endl;
        cout << Utils::defaultOffsetDocInfo << "A notification was sent to the LnkSvrMessage method, but the RequestMachine for the request was not the VolumeOwner for a VolumeID in the request." << endl;
        break;
        case TRK_S_NOTIFICATION_QUOTA_EXCEEDED:
        cout << Utils::defaultOffset << "TRK_S_NOTIFICATION_QUOTA_EXCEEDED" << endl;
        cout << Utils::defaultOffsetDocInfo << "The server received a MOVE_NOTIFICATION request, but the FileTable size limit has already been reached." << endl;
        break;
        case NS_I_TIGER_START:
        cout << Utils::defaultOffset << "NS_I_TIGER_START" << endl;
        cout << Utils::defaultOffsetDocInfo << "The Title Server %1 is running." << endl;
        break;
        case NS_I_CUB_START:
        cout << Utils::defaultOffset << "NS_I_CUB_START" << endl;
        cout << Utils::defaultOffsetDocInfo << "Content Server %1 (%2) is starting." << endl;
        break;
        case NS_I_CUB_RUNNING:
        cout << Utils::defaultOffset << "NS_I_CUB_RUNNING" << endl;
        cout << Utils::defaultOffsetDocInfo << "Content Server %1 (%2) is running." << endl;
        break;
        case NS_I_DISK_START:
        cout << Utils::defaultOffset << "NS_I_DISK_START" << endl;
        cout << Utils::defaultOffsetDocInfo << "Disk %1 ( %2 ) on Content Server %3, is running." << endl;
        break;
        case NS_I_DISK_REBUILD_STARTED:
        cout << Utils::defaultOffset << "NS_I_DISK_REBUILD_STARTED" << endl;
        cout << Utils::defaultOffsetDocInfo << "Started rebuilding disk %1 ( %2 ) on Content Server %3." << endl;
        break;
        case NS_I_DISK_REBUILD_FINISHED:
        cout << Utils::defaultOffset << "NS_I_DISK_REBUILD_FINISHED" << endl;
        cout << Utils::defaultOffsetDocInfo << "Finished rebuilding disk %1 ( %2 ) on Content Server %3." << endl;
        break;
        case NS_I_DISK_REBUILD_ABORTED:
        cout << Utils::defaultOffset << "NS_I_DISK_REBUILD_ABORTED" << endl;
        cout << Utils::defaultOffsetDocInfo << "Aborted rebuilding disk %1 ( %2 ) on Content Server %3." << endl;
        break;
        case NS_I_LIMIT_FUNNELS:
        cout << Utils::defaultOffset << "NS_I_LIMIT_FUNNELS" << endl;
        cout << Utils::defaultOffsetDocInfo << "A NetShow administrator at network location %1 set the data stream limit to %2 streams." << endl;
        break;
        case NS_I_START_DISK:
        cout << Utils::defaultOffset << "NS_I_START_DISK" << endl;
        cout << Utils::defaultOffsetDocInfo << "A NetShow administrator at network location %1 started disk %2." << endl;
        break;
        case NS_I_STOP_DISK:
        cout << Utils::defaultOffset << "NS_I_STOP_DISK" << endl;
        cout << Utils::defaultOffsetDocInfo << "A NetShow administrator at network location %1 stopped disk %2." << endl;
        break;
        case NS_I_STOP_CUB:
        cout << Utils::defaultOffset << "NS_I_STOP_CUB" << endl;
        cout << Utils::defaultOffsetDocInfo << "A NetShow administrator at network location %1 stopped Content Server %2." << endl;
        break;
        case NS_I_KILL_USERSESSION:
        cout << Utils::defaultOffset << "NS_I_KILL_USERSESSION" << endl;
        cout << Utils::defaultOffsetDocInfo << "A NetShow administrator at network location %1 aborted user session %2 from the system." << endl;
        break;
        case NS_I_KILL_CONNECTION:
        cout << Utils::defaultOffset << "NS_I_KILL_CONNECTION" << endl;
        cout << Utils::defaultOffsetDocInfo << "A NetShow administrator at network location %1 aborted obsolete connection %2 from the system." << endl;
        break;
        case NS_I_REBUILD_DISK:
        cout << Utils::defaultOffset << "NS_I_REBUILD_DISK" << endl;
        cout << Utils::defaultOffsetDocInfo << "A NetShow administrator at network location %1 started rebuilding disk %2." << endl;
        break;
        case MCMADM_I_NO_EVENTS:
        cout << Utils::defaultOffset << "MCMADM_I_NO_EVENTS" << endl;
        cout << Utils::defaultOffsetDocInfo << "Event initialization failed, there will be no MCM events." << endl;
        break;
        case NS_I_LOGGING_FAILED:
        cout << Utils::defaultOffset << "NS_I_LOGGING_FAILED" << endl;
        cout << Utils::defaultOffsetDocInfo << "The logging operation failed." << endl;
        break;
        case NS_I_LIMIT_BANDWIDTH:
        cout << Utils::defaultOffset << "NS_I_LIMIT_BANDWIDTH" << endl;
        cout << Utils::defaultOffsetDocInfo << "A NetShow administrator at network location %1 set the maximum bandwidth limit to %2 bps." << endl;
        break;
        case NS_I_CUB_UNFAIL_LINK:
        cout << Utils::defaultOffset << "NS_I_CUB_UNFAIL_LINK" << endl;
        cout << Utils::defaultOffsetDocInfo << "Content Server %1 (%2) has established its link to Content Server %3." << endl;
        break;
        case NS_I_RESTRIPE_START:
        cout << Utils::defaultOffset << "NS_I_RESTRIPE_START" << endl;
        cout << Utils::defaultOffsetDocInfo << "Restripe operation has started." << endl;
        break;
        case NS_I_RESTRIPE_DONE:
        cout << Utils::defaultOffset << "NS_I_RESTRIPE_DONE" << endl;
        cout << Utils::defaultOffsetDocInfo << "Restripe operation has completed." << endl;
        break;
        case NS_I_RESTRIPE_DISK_OUT:
        cout << Utils::defaultOffset << "NS_I_RESTRIPE_DISK_OUT" << endl;
        cout << Utils::defaultOffsetDocInfo << "Content disk %1 (%2) on Content Server %3 has been restriped out." << endl;
        break;
        case NS_I_RESTRIPE_CUB_OUT:
        cout << Utils::defaultOffset << "NS_I_RESTRIPE_CUB_OUT" << endl;
        cout << Utils::defaultOffsetDocInfo << "Content server %1 (%2) has been restriped out." << endl;
        break;
        case NS_I_DISK_STOP:
        cout << Utils::defaultOffset << "NS_I_DISK_STOP" << endl;
        cout << Utils::defaultOffsetDocInfo << "Disk %1 ( %2 ) on Content Server %3, has been offlined." << endl;
        break;
        case NS_I_PLAYLIST_CHANGE_RECEDING:
        cout << Utils::defaultOffset << "NS_I_PLAYLIST_CHANGE_RECEDING" << endl;
        cout << Utils::defaultOffsetDocInfo << "The playlist change occurred while receding." << endl;
        break;
        case NS_I_RECONNECTED:
        cout << Utils::defaultOffset << "NS_I_RECONNECTED" << endl;
        cout << Utils::defaultOffsetDocInfo << "The client is reconnected." << endl;
        break;
        case NS_I_NOLOG_STOP:
        cout << Utils::defaultOffset << "NS_I_NOLOG_STOP" << endl;
        cout << Utils::defaultOffsetDocInfo << "Forcing a switch to a pending header on start." << endl;
        break;
        case NS_I_EXISTING_PACKETIZER:
        cout << Utils::defaultOffset << "NS_I_EXISTING_PACKETIZER" << endl;
        cout << Utils::defaultOffsetDocInfo << "There is already an existing packetizer plugin for the stream." << endl;
        break;
        case NS_I_MANUAL_PROXY:
        cout << Utils::defaultOffset << "NS_I_MANUAL_PROXY" << endl;
        cout << Utils::defaultOffsetDocInfo << "The proxy setting is manual." << endl;
        break;
        case ERROR_GRAPHICS_DRIVER_MISMATCH:
        cout << Utils::defaultOffset << "ERROR_GRAPHICS_DRIVER_MISMATCH" << endl;
        cout << Utils::defaultOffsetDocInfo << "The kernel driver detected a version mismatch between it and the user mode driver." << endl;
        break;
        case ERROR_GRAPHICS_UNKNOWN_CHILD_STATUS:
        cout << Utils::defaultOffset << "ERROR_GRAPHICS_UNKNOWN_CHILD_STATUS" << endl;
        cout << Utils::defaultOffsetDocInfo << "Child device presence was not reliably detected." << endl;
        break;
        case ERROR_GRAPHICS_LEADLINK_START_DEFERRED:
        cout << Utils::defaultOffset << "ERROR_GRAPHICS_LEADLINK_START_DEFERRED" << endl;
        cout << Utils::defaultOffsetDocInfo << "Starting the lead-link adapter has been deferred temporarily." << endl;
        break;
        case ERROR_GRAPHICS_POLLING_TOO_FREQUENTLY:
        cout << Utils::defaultOffset << "ERROR_GRAPHICS_POLLING_TOO_FREQUENTLY" << endl;
        cout << Utils::defaultOffsetDocInfo << "The display adapter is being polled for children too frequently at the same polling level." << endl;
        break;
        case ERROR_GRAPHICS_START_DEFERRED:
        cout << Utils::defaultOffset << "ERROR_GRAPHICS_START_DEFERRED" << endl;
        cout << Utils::defaultOffsetDocInfo << "Starting the adapter has been deferred temporarily." << endl;
        break;
        case E_PENDING:
        cout << Utils::defaultOffset << "E_PENDING" << endl;
        cout << Utils::defaultOffsetDocInfo << "The data necessary to complete this operation is not yet available." << endl;
        break;
        case E_NOTIMPL:
        cout << Utils::defaultOffset << "E_NOTIMPL" << endl;
        cout << Utils::defaultOffsetDocInfo << "Not implemented." << endl;
        break;
        case E_NOINTERFACE:
        cout << Utils::defaultOffset << "E_NOINTERFACE" << endl;
        cout << Utils::defaultOffsetDocInfo << "No such interface supported." << endl;
        break;
        case E_POINTER:
        cout << Utils::defaultOffset << "E_POINTER" << endl;
        cout << Utils::defaultOffsetDocInfo << "Invalid pointer." << endl;
        break;
        case E_ABORT:
        cout << Utils::defaultOffset << "E_ABORT" << endl;
        cout << Utils::defaultOffsetDocInfo << "Operation aborted." << endl;
        break;
        case E_FAIL:
        cout << Utils::defaultOffset << "E_FAIL" << endl;
        cout << Utils::defaultOffsetDocInfo << "Unspecified error." << endl;
        break;
        case CO_E_INIT_TLS:
        cout << Utils::defaultOffset << "CO_E_INIT_TLS" << endl;
        cout << Utils::defaultOffsetDocInfo << "Thread local storage failure." << endl;
        break;
        case CO_E_INIT_SHARED_ALLOCATOR:
        cout << Utils::defaultOffset << "CO_E_INIT_SHARED_ALLOCATOR" << endl;
        cout << Utils::defaultOffsetDocInfo << "Get shared memory allocator failure." << endl;
        break;
        case CO_E_INIT_MEMORY_ALLOCATOR:
        cout << Utils::defaultOffset << "CO_E_INIT_MEMORY_ALLOCATOR" << endl;
        cout << Utils::defaultOffsetDocInfo << "Get memory allocator failure." << endl;
        break;
        case CO_E_INIT_CLASS_CACHE:
        cout << Utils::defaultOffset << "CO_E_INIT_CLASS_CACHE" << endl;
        cout << Utils::defaultOffsetDocInfo << "Unable to initialize class cache." << endl;
        break;
        case CO_E_INIT_RPC_CHANNEL:
        cout << Utils::defaultOffset << "CO_E_INIT_RPC_CHANNEL" << endl;
        cout << Utils::defaultOffsetDocInfo << "Unable to initialize remote procedure call (RPC) services." << endl;
        break;
        case CO_E_INIT_TLS_SET_CHANNEL_CONTROL:
        cout << Utils::defaultOffset << "CO_E_INIT_TLS_SET_CHANNEL_CONTROL" << endl;
        cout << Utils::defaultOffsetDocInfo << "Cannot set thread local storage channel control." << endl;
        break;
        case CO_E_INIT_TLS_CHANNEL_CONTROL:
        cout << Utils::defaultOffset << "CO_E_INIT_TLS_CHANNEL_CONTROL" << endl;
        cout << Utils::defaultOffsetDocInfo << "Could not allocate thread local storage channel control." << endl;
        break;
        case CO_E_INIT_UNACCEPTED_USER_ALLOCATOR:
        cout << Utils::defaultOffset << "CO_E_INIT_UNACCEPTED_USER_ALLOCATOR" << endl;
        cout << Utils::defaultOffsetDocInfo << "The user-supplied memory allocator is unacceptable." << endl;
        break;
        case CO_E_INIT_SCM_MUTEX_EXISTS:
        cout << Utils::defaultOffset << "CO_E_INIT_SCM_MUTEX_EXISTS" << endl;
        cout << Utils::defaultOffsetDocInfo << "The OLE service mutex already exists." << endl;
        break;
        case CO_E_INIT_SCM_FILE_MAPPING_EXISTS:
        cout << Utils::defaultOffset << "CO_E_INIT_SCM_FILE_MAPPING_EXISTS" << endl;
        cout << Utils::defaultOffsetDocInfo << "The OLE service file mapping already exists." << endl;
        break;
        case CO_E_INIT_SCM_MAP_VIEW_OF_FILE:
        cout << Utils::defaultOffset << "CO_E_INIT_SCM_MAP_VIEW_OF_FILE" << endl;
        cout << Utils::defaultOffsetDocInfo << "Unable to map view of file for OLE service." << endl;
        break;
        case CO_E_INIT_SCM_EXEC_FAILURE:
        cout << Utils::defaultOffset << "CO_E_INIT_SCM_EXEC_FAILURE" << endl;
        cout << Utils::defaultOffsetDocInfo << "Failure attempting to launch OLE service." << endl;
        break;
        case CO_E_INIT_ONLY_SINGLE_THREADED:
        cout << Utils::defaultOffset << "CO_E_INIT_ONLY_SINGLE_THREADED" << endl;
        cout << Utils::defaultOffsetDocInfo << "There was an attempt to call CoInitialize a second time while single-threaded." << endl;
        break;
        case CO_E_CANT_REMOTE:
        cout << Utils::defaultOffset << "CO_E_CANT_REMOTE" << endl;
        cout << Utils::defaultOffsetDocInfo << "A Remote activation was necessary but was not allowed." << endl;
        break;
        case CO_E_BAD_SERVER_NAME:
        cout << Utils::defaultOffset << "CO_E_BAD_SERVER_NAME" << endl;
        cout << Utils::defaultOffsetDocInfo << "A Remote activation was necessary, but the server name provided was invalid." << endl;
        break;
        case CO_E_WRONG_SERVER_IDENTITY:
        cout << Utils::defaultOffset << "CO_E_WRONG_SERVER_IDENTITY" << endl;
        cout << Utils::defaultOffsetDocInfo << "The class is configured to run as a security ID different from the caller." << endl;
        break;
        case CO_E_OLE1DDE_DISABLED:
        cout << Utils::defaultOffset << "CO_E_OLE1DDE_DISABLED" << endl;
        cout << Utils::defaultOffsetDocInfo << "Use of OLE1 services requiring Dynamic Data Exchange (DDE) Windows is disabled." << endl;
        break;
        case CO_E_RUNAS_SYNTAX:
        cout << Utils::defaultOffset << "CO_E_RUNAS_SYNTAX" << endl;
        cout << Utils::defaultOffsetDocInfo << "A RunAs specification must be <domain name>\\<user name> or simply <user name>." << endl;
        break;
        case CO_E_CREATEPROCESS_FAILURE:
        cout << Utils::defaultOffset << "CO_E_CREATEPROCESS_FAILURE" << endl;
        cout << Utils::defaultOffsetDocInfo << "The server process could not be started. The path name might be incorrect." << endl;
        break;
        case CO_E_RUNAS_CREATEPROCESS_FAILURE:
        cout << Utils::defaultOffset << "CO_E_RUNAS_CREATEPROCESS_FAILURE" << endl;
        cout << Utils::defaultOffsetDocInfo << "The server process could not be started as the configured identity. The path name might be incorrect or unavailable." << endl;
        break;
        case CO_E_RUNAS_LOGON_FAILURE:
        cout << Utils::defaultOffset << "CO_E_RUNAS_LOGON_FAILURE" << endl;
        cout << Utils::defaultOffsetDocInfo << "The server process could not be started because the configured identity is incorrect. Check the user name and password." << endl;
        break;
        case CO_E_LAUNCH_PERMSSION_DENIED:
        cout << Utils::defaultOffset << "CO_E_LAUNCH_PERMSSION_DENIED" << endl;
        cout << Utils::defaultOffsetDocInfo << "The client is not allowed to launch this server." << endl;
        break;
        case CO_E_START_SERVICE_FAILURE:
        cout << Utils::defaultOffset << "CO_E_START_SERVICE_FAILURE" << endl;
        cout << Utils::defaultOffsetDocInfo << "The service providing this server could not be started." << endl;
        break;
        case CO_E_REMOTE_COMMUNICATION_FAILURE:
        cout << Utils::defaultOffset << "CO_E_REMOTE_COMMUNICATION_FAILURE" << endl;
        cout << Utils::defaultOffsetDocInfo << "This computer was unable to communicate with the computer providing the server." << endl;
        break;
        case CO_E_SERVER_START_TIMEOUT:
        cout << Utils::defaultOffset << "CO_E_SERVER_START_TIMEOUT" << endl;
        cout << Utils::defaultOffsetDocInfo << "The server did not respond after being launched." << endl;
        break;
        case CO_E_CLSREG_INCONSISTENT:
        cout << Utils::defaultOffset << "CO_E_CLSREG_INCONSISTENT" << endl;
        cout << Utils::defaultOffsetDocInfo << "The registration information for this server is inconsistent or incomplete." << endl;
        break;
        case CO_E_IIDREG_INCONSISTENT:
        cout << Utils::defaultOffset << "CO_E_IIDREG_INCONSISTENT" << endl;
        cout << Utils::defaultOffsetDocInfo << "The registration information for this interface is inconsistent or incomplete." << endl;
        break;
        case CO_E_NOT_SUPPORTED:
        cout << Utils::defaultOffset << "CO_E_NOT_SUPPORTED" << endl;
        cout << Utils::defaultOffsetDocInfo << "The operation attempted is not supported." << endl;
        break;
        case CO_E_RELOAD_DLL:
        cout << Utils::defaultOffset << "CO_E_RELOAD_DLL" << endl;
        cout << Utils::defaultOffsetDocInfo << "A DLL must be loaded." << endl;
        break;
        case CO_E_MSI_ERROR:
        cout << Utils::defaultOffset << "CO_E_MSI_ERROR" << endl;
        cout << Utils::defaultOffsetDocInfo << "A Microsoft Software Installer error was encountered." << endl;
        break;
        case CO_E_ATTEMPT_TO_CREATE_OUTSIDE_CLIENT_CONTEXT:
        cout << Utils::defaultOffset << "CO_E_ATTEMPT_TO_CREATE_OUTSIDE_CLIENT_CONTEXT" << endl;
        cout << Utils::defaultOffsetDocInfo << "The specified activation could not occur in the client context as specified." << endl;
        break;
        case CO_E_SERVER_PAUSED:
        cout << Utils::defaultOffset << "CO_E_SERVER_PAUSED" << endl;
        cout << Utils::defaultOffsetDocInfo << "Activations on the server are paused." << endl;
        break;
        case CO_E_SERVER_NOT_PAUSED:
        cout << Utils::defaultOffset << "CO_E_SERVER_NOT_PAUSED" << endl;
        cout << Utils::defaultOffsetDocInfo << "Activations on the server are not paused." << endl;
        break;
        case CO_E_CLASS_DISABLED:
        cout << Utils::defaultOffset << "CO_E_CLASS_DISABLED" << endl;
        cout << Utils::defaultOffsetDocInfo << "The component or application containing the component has been disabled." << endl;
        break;
        case CO_E_CLRNOTAVAILABLE:
        cout << Utils::defaultOffset << "CO_E_CLRNOTAVAILABLE" << endl;
        cout << Utils::defaultOffsetDocInfo << "The common language runtime is not available." << endl;
        break;
        case CO_E_ASYNC_WORK_REJECTED:
        cout << Utils::defaultOffset << "CO_E_ASYNC_WORK_REJECTED" << endl;
        cout << Utils::defaultOffsetDocInfo << "The thread-pool rejected the submitted asynchronous work." << endl;
        break;
        case CO_E_SERVER_INIT_TIMEOUT:
        cout << Utils::defaultOffset << "CO_E_SERVER_INIT_TIMEOUT" << endl;
        cout << Utils::defaultOffsetDocInfo << "The server started, but it did not finish initializing in a timely fashion." << endl;
        break;
        case CO_E_NO_SECCTX_IN_ACTIVATE:
        cout << Utils::defaultOffset << "CO_E_NO_SECCTX_IN_ACTIVATE" << endl;
        cout << Utils::defaultOffsetDocInfo << "Unable to complete the call because there is no COM+ security context inside IObjectControl.Activate." << endl;
        break;
        case CO_E_TRACKER_CONFIG:
        cout << Utils::defaultOffset << "CO_E_TRACKER_CONFIG" << endl;
        cout << Utils::defaultOffsetDocInfo << "The provided tracker configuration is invalid." << endl;
        break;
        case CO_E_THREADPOOL_CONFIG:
        cout << Utils::defaultOffset << "CO_E_THREADPOOL_CONFIG" << endl;
        cout << Utils::defaultOffsetDocInfo << "The provided thread pool configuration is invalid." << endl;
        break;
        case CO_E_SXS_CONFIG:
        cout << Utils::defaultOffset << "CO_E_SXS_CONFIG" << endl;
        cout << Utils::defaultOffsetDocInfo << "The provided side-by-side configuration is invalid." << endl;
        break;
        case CO_E_MALFORMED_SPN:
        cout << Utils::defaultOffset << "CO_E_MALFORMED_SPN" << endl;
        cout << Utils::defaultOffsetDocInfo << "The server principal name (SPN) obtained during security negotiation is malformed." << endl;
        break;
        case E_UNEXPECTED:
        cout << Utils::defaultOffset << "E_UNEXPECTED" << endl;
        cout << Utils::defaultOffsetDocInfo << "Catastrophic failure." << endl;
        break;
        case RPC_E_CALL_REJECTED:
        cout << Utils::defaultOffset << "RPC_E_CALL_REJECTED" << endl;
        cout << Utils::defaultOffsetDocInfo << "Call was rejected by callee." << endl;
        break;
        case RPC_E_CALL_CANCELED:
        cout << Utils::defaultOffset << "RPC_E_CALL_CANCELED" << endl;
        cout << Utils::defaultOffsetDocInfo << "Call was canceled by the message filter." << endl;
        break;
        case RPC_E_CANTPOST_INSENDCALL:
        cout << Utils::defaultOffset << "RPC_E_CANTPOST_INSENDCALL" << endl;
        cout << Utils::defaultOffsetDocInfo << "The caller is dispatching an intertask SendMessage call and cannot call out via PostMessage." << endl;
        break;
        case RPC_E_CANTCALLOUT_INASYNCCALL:
        cout << Utils::defaultOffset << "RPC_E_CANTCALLOUT_INASYNCCALL" << endl;
        cout << Utils::defaultOffsetDocInfo << "The caller is dispatching an asynchronous call and cannot make an outgoing call on behalf of this call." << endl;
        break;
        case RPC_E_CANTCALLOUT_INEXTERNALCALL:
        cout << Utils::defaultOffset << "RPC_E_CANTCALLOUT_INEXTERNALCALL" << endl;
        cout << Utils::defaultOffsetDocInfo << "It is illegal to call out while inside message filter." << endl;
        break;
        case RPC_E_CONNECTION_TERMINATED:
        cout << Utils::defaultOffset << "RPC_E_CONNECTION_TERMINATED" << endl;
        cout << Utils::defaultOffsetDocInfo << "The connection terminated or is in a bogus state and can no longer be used. Other connections are still valid." << endl;
        break;
        case RPC_E_SERVER_DIED:
        cout << Utils::defaultOffset << "RPC_E_SERVER_DIED" << endl;
        cout << Utils::defaultOffsetDocInfo << "The callee (the server, not the server application) is not available and disappeared; all connections are invalid. The call might have executed." << endl;
        break;
        case RPC_E_CLIENT_DIED:
        cout << Utils::defaultOffset << "RPC_E_CLIENT_DIED" << endl;
        cout << Utils::defaultOffsetDocInfo << "The caller (client) disappeared while the callee (server) was processing a call." << endl;
        break;
        case RPC_E_INVALID_DATAPACKET:
        cout << Utils::defaultOffset << "RPC_E_INVALID_DATAPACKET" << endl;
        cout << Utils::defaultOffsetDocInfo << "The data packet with the marshaled parameter data is incorrect." << endl;
        break;
        case RPC_E_CANTTRANSMIT_CALL:
        cout << Utils::defaultOffset << "RPC_E_CANTTRANSMIT_CALL" << endl;
        cout << Utils::defaultOffsetDocInfo << "The call was not transmitted properly; the message queue was full and was not emptied after yielding." << endl;
        break;
        case RPC_E_CLIENT_CANTMARSHAL_DATA:
        cout << Utils::defaultOffset << "RPC_E_CLIENT_CANTMARSHAL_DATA" << endl;
        cout << Utils::defaultOffsetDocInfo << "The client RPC caller cannot marshal the parameter data due to errors (such as low memory)." << endl;
        break;
        case RPC_E_CLIENT_CANTUNMARSHAL_DATA:
        cout << Utils::defaultOffset << "RPC_E_CLIENT_CANTUNMARSHAL_DATA" << endl;
        cout << Utils::defaultOffsetDocInfo << "The client RPC caller cannot unmarshal the return data due to errors (such as low memory)." << endl;
        break;
        case RPC_E_SERVER_CANTMARSHAL_DATA:
        cout << Utils::defaultOffset << "RPC_E_SERVER_CANTMARSHAL_DATA" << endl;
        cout << Utils::defaultOffsetDocInfo << "The server RPC callee cannot marshal the return data due to errors (such as low memory)." << endl;
        break;
        case RPC_E_SERVER_CANTUNMARSHAL_DATA:
        cout << Utils::defaultOffset << "RPC_E_SERVER_CANTUNMARSHAL_DATA" << endl;
        cout << Utils::defaultOffsetDocInfo << "The server RPC callee cannot unmarshal the parameter data due to errors (such as low memory)." << endl;
        break;
        case RPC_E_INVALID_DATA:
        cout << Utils::defaultOffset << "RPC_E_INVALID_DATA" << endl;
        cout << Utils::defaultOffsetDocInfo << "Received data is invalid. The data might be server or client data." << endl;
        break;
        case RPC_E_INVALID_PARAMETER:
        cout << Utils::defaultOffset << "RPC_E_INVALID_PARAMETER" << endl;
        cout << Utils::defaultOffsetDocInfo << "A particular parameter is invalid and cannot be (un)marshaled." << endl;
        break;
        case RPC_E_CANTCALLOUT_AGAIN:
        cout << Utils::defaultOffset << "RPC_E_CANTCALLOUT_AGAIN" << endl;
        cout << Utils::defaultOffsetDocInfo << "There is no second outgoing call on same channel in DDE conversation." << endl;
        break;
        case RPC_E_SERVER_DIED_DNE:
        cout << Utils::defaultOffset << "RPC_E_SERVER_DIED_DNE" << endl;
        cout << Utils::defaultOffsetDocInfo << "The callee (the server, not the server application) is not available and disappeared; all connections are invalid. The call did not execute." << endl;
        break;
        case RPC_E_SYS_CALL_FAILED:
        cout << Utils::defaultOffset << "RPC_E_SYS_CALL_FAILED" << endl;
        cout << Utils::defaultOffsetDocInfo << "System call failed." << endl;
        break;
        case RPC_E_OUT_OF_RESOURCES:
        cout << Utils::defaultOffset << "RPC_E_OUT_OF_RESOURCES" << endl;
        cout << Utils::defaultOffsetDocInfo << "Could not allocate some required resource (such as memory or events)" << endl;
        break;
        case RPC_E_ATTEMPTED_MULTITHREAD:
        cout << Utils::defaultOffset << "RPC_E_ATTEMPTED_MULTITHREAD" << endl;
        cout << Utils::defaultOffsetDocInfo << "Attempted to make calls on more than one thread in single-threaded mode." << endl;
        break;
        case RPC_E_NOT_REGISTERED:
        cout << Utils::defaultOffset << "RPC_E_NOT_REGISTERED" << endl;
        cout << Utils::defaultOffsetDocInfo << "The requested interface is not registered on the server object." << endl;
        break;
        case RPC_E_FAULT:
        cout << Utils::defaultOffset << "RPC_E_FAULT" << endl;
        cout << Utils::defaultOffsetDocInfo << "RPC could not call the server or could not return the results of calling the server." << endl;
        break;
        case RPC_E_SERVERFAULT:
        cout << Utils::defaultOffset << "RPC_E_SERVERFAULT" << endl;
        cout << Utils::defaultOffsetDocInfo << "The server threw an exception." << endl;
        break;
        case RPC_E_CHANGED_MODE:
        cout << Utils::defaultOffset << "RPC_E_CHANGED_MODE" << endl;
        cout << Utils::defaultOffsetDocInfo << "Cannot change thread mode after it is set." << endl;
        break;
        case RPC_E_INVALIDMETHOD:
        cout << Utils::defaultOffset << "RPC_E_INVALIDMETHOD" << endl;
        cout << Utils::defaultOffsetDocInfo << "The method called does not exist on the server." << endl;
        break;
        case RPC_E_DISCONNECTED:
        cout << Utils::defaultOffset << "RPC_E_DISCONNECTED" << endl;
        cout << Utils::defaultOffsetDocInfo << "The object invoked has disconnected from its clients." << endl;
        break;
        case RPC_E_RETRY:
        cout << Utils::defaultOffset << "RPC_E_RETRY" << endl;
        cout << Utils::defaultOffsetDocInfo << "The object invoked chose not to process the call now. Try again later." << endl;
        break;
        case RPC_E_SERVERCALL_RETRYLATER:
        cout << Utils::defaultOffset << "RPC_E_SERVERCALL_RETRYLATER" << endl;
        cout << Utils::defaultOffsetDocInfo << "The message filter indicated that the application is busy." << endl;
        break;
        case RPC_E_SERVERCALL_REJECTED:
        cout << Utils::defaultOffset << "RPC_E_SERVERCALL_REJECTED" << endl;
        cout << Utils::defaultOffsetDocInfo << "The message filter rejected the call." << endl;
        break;
        case RPC_E_INVALID_CALLDATA:
        cout << Utils::defaultOffset << "RPC_E_INVALID_CALLDATA" << endl;
        cout << Utils::defaultOffsetDocInfo << "A call control interface was called with invalid data." << endl;
        break;
        case RPC_E_CANTCALLOUT_ININPUTSYNCCALL:
        cout << Utils::defaultOffset << "RPC_E_CANTCALLOUT_ININPUTSYNCCALL" << endl;
        cout << Utils::defaultOffsetDocInfo << "An outgoing call cannot be made because the application is dispatching an input-synchronous call." << endl;
        break;
        case RPC_E_WRONG_THREAD:
        cout << Utils::defaultOffset << "RPC_E_WRONG_THREAD" << endl;
        cout << Utils::defaultOffsetDocInfo << "The application called an interface that was marshaled for a different thread." << endl;
        break;
        case RPC_E_THREAD_NOT_INIT:
        cout << Utils::defaultOffset << "RPC_E_THREAD_NOT_INIT" << endl;
        cout << Utils::defaultOffsetDocInfo << "CoInitialize has not been called on the current thread." << endl;
        break;
        case RPC_E_VERSION_MISMATCH:
        cout << Utils::defaultOffset << "RPC_E_VERSION_MISMATCH" << endl;
        cout << Utils::defaultOffsetDocInfo << "The version of OLE on the client and server machines does not match." << endl;
        break;
        case RPC_E_INVALID_HEADER:
        cout << Utils::defaultOffset << "RPC_E_INVALID_HEADER" << endl;
        cout << Utils::defaultOffsetDocInfo << "OLE received a packet with an invalid header." << endl;
        break;
        case RPC_E_INVALID_EXTENSION:
        cout << Utils::defaultOffset << "RPC_E_INVALID_EXTENSION" << endl;
        cout << Utils::defaultOffsetDocInfo << "OLE received a packet with an invalid extension." << endl;
        break;
        case RPC_E_INVALID_IPID:
        cout << Utils::defaultOffset << "RPC_E_INVALID_IPID" << endl;
        cout << Utils::defaultOffsetDocInfo << "The requested object or interface does not exist." << endl;
        break;
        case RPC_E_INVALID_OBJECT:
        cout << Utils::defaultOffset << "RPC_E_INVALID_OBJECT" << endl;
        cout << Utils::defaultOffsetDocInfo << "The requested object does not exist." << endl;
        break;
        case RPC_S_CALLPENDING:
        cout << Utils::defaultOffset << "RPC_S_CALLPENDING" << endl;
        cout << Utils::defaultOffsetDocInfo << "OLE has sent a request and is waiting for a reply." << endl;
        break;
        case RPC_S_WAITONTIMER:
        cout << Utils::defaultOffset << "RPC_S_WAITONTIMER" << endl;
        cout << Utils::defaultOffsetDocInfo << "OLE is waiting before retrying a request." << endl;
        break;
        case RPC_E_CALL_COMPLETE:
        cout << Utils::defaultOffset << "RPC_E_CALL_COMPLETE" << endl;
        cout << Utils::defaultOffsetDocInfo << "Call context cannot be accessed after call completed." << endl;
        break;
        case RPC_E_UNSECURE_CALL:
        cout << Utils::defaultOffset << "RPC_E_UNSECURE_CALL" << endl;
        cout << Utils::defaultOffsetDocInfo << "Impersonate on unsecure calls is not supported." << endl;
        break;
        case RPC_E_TOO_LATE:
        cout << Utils::defaultOffset << "RPC_E_TOO_LATE" << endl;
        cout << Utils::defaultOffsetDocInfo << "Security must be initialized before any interfaces are marshaled or unmarshaled. It cannot be changed after initialized." << endl;
        break;
        case RPC_E_NO_GOOD_SECURITY_PACKAGES:
        cout << Utils::defaultOffset << "RPC_E_NO_GOOD_SECURITY_PACKAGES" << endl;
        cout << Utils::defaultOffsetDocInfo << "No security packages are installed on this machine, the user is not logged on, or there are no compatible security packages between the client and server." << endl;
        break;
        case RPC_E_ACCESS_DENIED:
        cout << Utils::defaultOffset << "RPC_E_ACCESS_DENIED" << endl;
        cout << Utils::defaultOffsetDocInfo << "Access is denied." << endl;
        break;
        case RPC_E_REMOTE_DISABLED:
        cout << Utils::defaultOffset << "RPC_E_REMOTE_DISABLED" << endl;
        cout << Utils::defaultOffsetDocInfo << "Remote calls are not allowed for this process." << endl;
        break;
        case RPC_E_INVALID_OBJREF:
        cout << Utils::defaultOffset << "RPC_E_INVALID_OBJREF" << endl;
        cout << Utils::defaultOffsetDocInfo << "The marshaled interface data packet (OBJREF) has an invalid or unknown format." << endl;
        break;
        case RPC_E_NO_CONTEXT:
        cout << Utils::defaultOffset << "RPC_E_NO_CONTEXT" << endl;
        cout << Utils::defaultOffsetDocInfo << "No context is associated with this call. This happens for some custom marshaled calls and on the client side of the call." << endl;
        break;
        case RPC_E_TIMEOUT:
        cout << Utils::defaultOffset << "RPC_E_TIMEOUT" << endl;
        cout << Utils::defaultOffsetDocInfo << "This operation returned because the time-out period expired." << endl;
        break;
        case RPC_E_NO_SYNC:
        cout << Utils::defaultOffset << "RPC_E_NO_SYNC" << endl;
        cout << Utils::defaultOffsetDocInfo << "There are no synchronize objects to wait on." << endl;
        break;
        case RPC_E_FULLSIC_REQUIRED:
        cout << Utils::defaultOffset << "RPC_E_FULLSIC_REQUIRED" << endl;
        cout << Utils::defaultOffsetDocInfo << "Full subject issuer chain Secure Sockets Layer (SSL) principal name expected from the server." << endl;
        break;
        case RPC_E_INVALID_STD_NAME:
        cout << Utils::defaultOffset << "RPC_E_INVALID_STD_NAME" << endl;
        cout << Utils::defaultOffsetDocInfo << "Principal name is not a valid Microsoft standard (msstd) name." << endl;
        break;
        case CO_E_FAILEDTOIMPERSONATE:
        cout << Utils::defaultOffset << "CO_E_FAILEDTOIMPERSONATE" << endl;
        cout << Utils::defaultOffsetDocInfo << "Unable to impersonate DCOM client." << endl;
        break;
        case CO_E_FAILEDTOGETSECCTX:
        cout << Utils::defaultOffset << "CO_E_FAILEDTOGETSECCTX" << endl;
        cout << Utils::defaultOffsetDocInfo << "Unable to obtain server's security context." << endl;
        break;
        case CO_E_FAILEDTOOPENTHREADTOKEN:
        cout << Utils::defaultOffset << "CO_E_FAILEDTOOPENTHREADTOKEN" << endl;
        cout << Utils::defaultOffsetDocInfo << "Unable to open the access token of the current thread." << endl;
        break;
        case CO_E_FAILEDTOGETTOKENINFO:
        cout << Utils::defaultOffset << "CO_E_FAILEDTOGETTOKENINFO" << endl;
        cout << Utils::defaultOffsetDocInfo << "Unable to obtain user information from an access token." << endl;
        break;
        case CO_E_TRUSTEEDOESNTMATCHCLIENT:
        cout << Utils::defaultOffset << "CO_E_TRUSTEEDOESNTMATCHCLIENT" << endl;
        cout << Utils::defaultOffsetDocInfo << "The client who called IAccessControl::IsAccessPermitted was not the trustee provided to the method." << endl;
        break;
        case CO_E_FAILEDTOQUERYCLIENTBLANKET:
        cout << Utils::defaultOffset << "CO_E_FAILEDTOQUERYCLIENTBLANKET" << endl;
        cout << Utils::defaultOffsetDocInfo << "Unable to obtain the client's security blanket." << endl;
        break;
        case CO_E_FAILEDTOSETDACL:
        cout << Utils::defaultOffset << "CO_E_FAILEDTOSETDACL" << endl;
        cout << Utils::defaultOffsetDocInfo << "Unable to set a discretionary access control list (ACL) into a security descriptor." << endl;
        break;
        case CO_E_ACCESSCHECKFAILED:
        cout << Utils::defaultOffset << "CO_E_ACCESSCHECKFAILED" << endl;
        cout << Utils::defaultOffsetDocInfo << "The system function AccessCheck returned false." << endl;
        break;
        case CO_E_NETACCESSAPIFAILED:
        cout << Utils::defaultOffset << "CO_E_NETACCESSAPIFAILED" << endl;
        cout << Utils::defaultOffsetDocInfo << "Either NetAccessDel or NetAccessAdd returned an error code." << endl;
        break;
        case CO_E_WRONGTRUSTEENAMESYNTAX:
        cout << Utils::defaultOffset << "CO_E_WRONGTRUSTEENAMESYNTAX" << endl;
        cout << Utils::defaultOffsetDocInfo << "One of the trustee strings provided by the user did not conform to the <Domain>\\<Name> syntax and it was not the *\" string\"." << endl;
        break;
        case CO_E_INVALIDSID:
        cout << Utils::defaultOffset << "CO_E_INVALIDSID" << endl;
        cout << Utils::defaultOffsetDocInfo << "One of the security identifiers provided by the user was invalid." << endl;
        break;
        case CO_E_CONVERSIONFAILED:
        cout << Utils::defaultOffset << "CO_E_CONVERSIONFAILED" << endl;
        cout << Utils::defaultOffsetDocInfo << "Unable to convert a wide character trustee string to a multiple-byte trustee string." << endl;
        break;
        case CO_E_NOMATCHINGSIDFOUND:
        cout << Utils::defaultOffset << "CO_E_NOMATCHINGSIDFOUND" << endl;
        cout << Utils::defaultOffsetDocInfo << "Unable to find a security identifier that corresponds to a trustee string provided by the user." << endl;
        break;
        case CO_E_LOOKUPACCSIDFAILED:
        cout << Utils::defaultOffset << "CO_E_LOOKUPACCSIDFAILED" << endl;
        cout << Utils::defaultOffsetDocInfo << "The system function LookupAccountSID failed." << endl;
        break;
        case CO_E_NOMATCHINGNAMEFOUND:
        cout << Utils::defaultOffset << "CO_E_NOMATCHINGNAMEFOUND" << endl;
        cout << Utils::defaultOffsetDocInfo << "Unable to find a trustee name that corresponds to a security identifier provided by the user." << endl;
        break;
        case CO_E_LOOKUPACCNAMEFAILED:
        cout << Utils::defaultOffset << "CO_E_LOOKUPACCNAMEFAILED" << endl;
        cout << Utils::defaultOffsetDocInfo << "The system function LookupAccountName failed." << endl;
        break;
        case CO_E_SETSERLHNDLFAILED:
        cout << Utils::defaultOffset << "CO_E_SETSERLHNDLFAILED" << endl;
        cout << Utils::defaultOffsetDocInfo << "Unable to set or reset a serialization handle." << endl;
        break;
        case CO_E_FAILEDTOGETWINDIR:
        cout << Utils::defaultOffset << "CO_E_FAILEDTOGETWINDIR" << endl;
        cout << Utils::defaultOffsetDocInfo << "Unable to obtain the Windows directory." << endl;
        break;
        case CO_E_PATHTOOLONG:
        cout << Utils::defaultOffset << "CO_E_PATHTOOLONG" << endl;
        cout << Utils::defaultOffsetDocInfo << "Path too long." << endl;
        break;
        case CO_E_FAILEDTOGENUUID:
        cout << Utils::defaultOffset << "CO_E_FAILEDTOGENUUID" << endl;
        cout << Utils::defaultOffsetDocInfo << "Unable to generate a UUID." << endl;
        break;
        case CO_E_FAILEDTOCREATEFILE:
        cout << Utils::defaultOffset << "CO_E_FAILEDTOCREATEFILE" << endl;
        cout << Utils::defaultOffsetDocInfo << "Unable to create file." << endl;
        break;
        case CO_E_FAILEDTOCLOSEHANDLE:
        cout << Utils::defaultOffset << "CO_E_FAILEDTOCLOSEHANDLE" << endl;
        cout << Utils::defaultOffsetDocInfo << "Unable to close a serialization handle or a file handle." << endl;
        break;
        case CO_E_EXCEEDSYSACLLIMIT:
        cout << Utils::defaultOffset << "CO_E_EXCEEDSYSACLLIMIT" << endl;
        cout << Utils::defaultOffsetDocInfo << "The number of access control entries (ACEs) in an ACL exceeds the system limit." << endl;
        break;
        case CO_E_ACESINWRONGORDER:
        cout << Utils::defaultOffset << "CO_E_ACESINWRONGORDER" << endl;
        cout << Utils::defaultOffsetDocInfo << "Not all the DENY_ACCESS ACEs are arranged in front of the GRANT_ACCESS ACEs in the stream." << endl;
        break;
        case CO_E_INCOMPATIBLESTREAMVERSION:
        cout << Utils::defaultOffset << "CO_E_INCOMPATIBLESTREAMVERSION" << endl;
        cout << Utils::defaultOffsetDocInfo << "The version of ACL format in the stream is not supported by this implementation of IAccessControl." << endl;
        break;
        case CO_E_FAILEDTOOPENPROCESSTOKEN:
        cout << Utils::defaultOffset << "CO_E_FAILEDTOOPENPROCESSTOKEN" << endl;
        cout << Utils::defaultOffsetDocInfo << "Unable to open the access token of the server process." << endl;
        break;
        case CO_E_DECODEFAILED:
        cout << Utils::defaultOffset << "CO_E_DECODEFAILED" << endl;
        cout << Utils::defaultOffsetDocInfo << "Unable to decode the ACL in the stream provided by the user." << endl;
        break;
        case CO_E_ACNOTINITIALIZED:
        cout << Utils::defaultOffset << "CO_E_ACNOTINITIALIZED" << endl;
        cout << Utils::defaultOffsetDocInfo << "The COM IAccessControl object is not initialized." << endl;
        break;
        case CO_E_CANCEL_DISABLED:
        cout << Utils::defaultOffset << "CO_E_CANCEL_DISABLED" << endl;
        cout << Utils::defaultOffsetDocInfo << "Call Cancellation is disabled." << endl;
        break;
        case RPC_E_UNEXPECTED:
        cout << Utils::defaultOffset << "RPC_E_UNEXPECTED" << endl;
        cout << Utils::defaultOffsetDocInfo << "An internal error occurred." << endl;
        break;
        case DISP_E_UNKNOWNINTERFACE:
        cout << Utils::defaultOffset << "DISP_E_UNKNOWNINTERFACE" << endl;
        cout << Utils::defaultOffsetDocInfo << "Unknown interface." << endl;
        break;
        case DISP_E_MEMBERNOTFOUND:
        cout << Utils::defaultOffset << "DISP_E_MEMBERNOTFOUND" << endl;
        cout << Utils::defaultOffsetDocInfo << "Member not found." << endl;
        break;
        case DISP_E_PARAMNOTFOUND:
        cout << Utils::defaultOffset << "DISP_E_PARAMNOTFOUND" << endl;
        cout << Utils::defaultOffsetDocInfo << "Parameter not found." << endl;
        break;
        case DISP_E_TYPEMISMATCH:
        cout << Utils::defaultOffset << "DISP_E_TYPEMISMATCH" << endl;
        cout << Utils::defaultOffsetDocInfo << "Type mismatch." << endl;
        break;
        case DISP_E_UNKNOWNNAME:
        cout << Utils::defaultOffset << "DISP_E_UNKNOWNNAME" << endl;
        cout << Utils::defaultOffsetDocInfo << "Unknown name." << endl;
        break;
        case DISP_E_NONAMEDARGS:
        cout << Utils::defaultOffset << "DISP_E_NONAMEDARGS" << endl;
        cout << Utils::defaultOffsetDocInfo << "No named arguments." << endl;
        break;
        case DISP_E_BADVARTYPE:
        cout << Utils::defaultOffset << "DISP_E_BADVARTYPE" << endl;
        cout << Utils::defaultOffsetDocInfo << "Bad variable type." << endl;
        break;
        case DISP_E_EXCEPTION:
        cout << Utils::defaultOffset << "DISP_E_EXCEPTION" << endl;
        cout << Utils::defaultOffsetDocInfo << "Exception occurred." << endl;
        break;
        case DISP_E_OVERFLOW:
        cout << Utils::defaultOffset << "DISP_E_OVERFLOW" << endl;
        cout << Utils::defaultOffsetDocInfo << "Out of present range." << endl;
        break;
        case DISP_E_BADINDEX:
        cout << Utils::defaultOffset << "DISP_E_BADINDEX" << endl;
        cout << Utils::defaultOffsetDocInfo << "Invalid index." << endl;
        break;
        case DISP_E_UNKNOWNLCID:
        cout << Utils::defaultOffset << "DISP_E_UNKNOWNLCID" << endl;
        cout << Utils::defaultOffsetDocInfo << "Unknown language." << endl;
        break;
        case DISP_E_ARRAYISLOCKED:
        cout << Utils::defaultOffset << "DISP_E_ARRAYISLOCKED" << endl;
        cout << Utils::defaultOffsetDocInfo << "Memory is locked." << endl;
        break;
        case DISP_E_BADPARAMCOUNT:
        cout << Utils::defaultOffset << "DISP_E_BADPARAMCOUNT" << endl;
        cout << Utils::defaultOffsetDocInfo << "Invalid number of parameters." << endl;
        break;
        case DISP_E_PARAMNOTOPTIONAL:
        cout << Utils::defaultOffset << "DISP_E_PARAMNOTOPTIONAL" << endl;
        cout << Utils::defaultOffsetDocInfo << "Parameter not optional." << endl;
        break;
        case DISP_E_BADCALLEE:
        cout << Utils::defaultOffset << "DISP_E_BADCALLEE" << endl;
        cout << Utils::defaultOffsetDocInfo << "Invalid callee." << endl;
        break;
        case DISP_E_NOTACOLLECTION:
        cout << Utils::defaultOffset << "DISP_E_NOTACOLLECTION" << endl;
        cout << Utils::defaultOffsetDocInfo << "Does not support a collection." << endl;
        break;
        case DISP_E_DIVBYZERO:
        cout << Utils::defaultOffset << "DISP_E_DIVBYZERO" << endl;
        cout << Utils::defaultOffsetDocInfo << "Division by zero." << endl;
        break;
        case DISP_E_BUFFERTOOSMALL:
        cout << Utils::defaultOffset << "DISP_E_BUFFERTOOSMALL" << endl;
        cout << Utils::defaultOffsetDocInfo << "Buffer too small." << endl;
        break;
        case TYPE_E_BUFFERTOOSMALL:
        cout << Utils::defaultOffset << "TYPE_E_BUFFERTOOSMALL" << endl;
        cout << Utils::defaultOffsetDocInfo << "Buffer too small." << endl;
        break;
        case TYPE_E_FIELDNOTFOUND:
        cout << Utils::defaultOffset << "TYPE_E_FIELDNOTFOUND" << endl;
        cout << Utils::defaultOffsetDocInfo << "Field name not defined in the record." << endl;
        break;
        case TYPE_E_INVDATAREAD:
        cout << Utils::defaultOffset << "TYPE_E_INVDATAREAD" << endl;
        cout << Utils::defaultOffsetDocInfo << "Old format or invalid type library." << endl;
        break;
        case TYPE_E_UNSUPFORMAT:
        cout << Utils::defaultOffset << "TYPE_E_UNSUPFORMAT" << endl;
        cout << Utils::defaultOffsetDocInfo << "Old format or invalid type library." << endl;
        break;
        case TYPE_E_REGISTRYACCESS:
        cout << Utils::defaultOffset << "TYPE_E_REGISTRYACCESS" << endl;
        cout << Utils::defaultOffsetDocInfo << "Error accessing the OLE registry." << endl;
        break;
        case TYPE_E_LIBNOTREGISTERED:
        cout << Utils::defaultOffset << "TYPE_E_LIBNOTREGISTERED" << endl;
        cout << Utils::defaultOffsetDocInfo << "Library not registered." << endl;
        break;
        case TYPE_E_UNDEFINEDTYPE:
        cout << Utils::defaultOffset << "TYPE_E_UNDEFINEDTYPE" << endl;
        cout << Utils::defaultOffsetDocInfo << "Bound to unknown type." << endl;
        break;
        case TYPE_E_QUALIFIEDNAMEDISALLOWED:
        cout << Utils::defaultOffset << "TYPE_E_QUALIFIEDNAMEDISALLOWED" << endl;
        cout << Utils::defaultOffsetDocInfo << "Qualified name disallowed." << endl;
        break;
        case TYPE_E_INVALIDSTATE:
        cout << Utils::defaultOffset << "TYPE_E_INVALIDSTATE" << endl;
        cout << Utils::defaultOffsetDocInfo << "Invalid forward reference, or reference to uncompiled type." << endl;
        break;
        case TYPE_E_WRONGTYPEKIND:
        cout << Utils::defaultOffset << "TYPE_E_WRONGTYPEKIND" << endl;
        cout << Utils::defaultOffsetDocInfo << "Type mismatch." << endl;
        break;
        case TYPE_E_ELEMENTNOTFOUND:
        cout << Utils::defaultOffset << "TYPE_E_ELEMENTNOTFOUND" << endl;
        cout << Utils::defaultOffsetDocInfo << "Element not found." << endl;
        break;
        case TYPE_E_AMBIGUOUSNAME:
        cout << Utils::defaultOffset << "TYPE_E_AMBIGUOUSNAME" << endl;
        cout << Utils::defaultOffsetDocInfo << "Ambiguous name." << endl;
        break;
        case TYPE_E_NAMECONFLICT:
        cout << Utils::defaultOffset << "TYPE_E_NAMECONFLICT" << endl;
        cout << Utils::defaultOffsetDocInfo << "Name already exists in the library." << endl;
        break;
        case TYPE_E_UNKNOWNLCID:
        cout << Utils::defaultOffset << "TYPE_E_UNKNOWNLCID" << endl;
        cout << Utils::defaultOffsetDocInfo << "Unknown language code identifier (LCID)." << endl;
        break;
        case TYPE_E_DLLFUNCTIONNOTFOUND:
        cout << Utils::defaultOffset << "TYPE_E_DLLFUNCTIONNOTFOUND" << endl;
        cout << Utils::defaultOffsetDocInfo << "Function not defined in specified DLL." << endl;
        break;
        case TYPE_E_BADMODULEKIND:
        cout << Utils::defaultOffset << "TYPE_E_BADMODULEKIND" << endl;
        cout << Utils::defaultOffsetDocInfo << "Wrong module kind for the operation." << endl;
        break;
        case TYPE_E_SIZETOOBIG:
        cout << Utils::defaultOffset << "TYPE_E_SIZETOOBIG" << endl;
        cout << Utils::defaultOffsetDocInfo << "Size cannot exceed 64 KB." << endl;
        break;
        case TYPE_E_DUPLICATEID:
        cout << Utils::defaultOffset << "TYPE_E_DUPLICATEID" << endl;
        cout << Utils::defaultOffsetDocInfo << "Duplicate ID in inheritance hierarchy." << endl;
        break;
        case TYPE_E_INVALIDID:
        cout << Utils::defaultOffset << "TYPE_E_INVALIDID" << endl;
        cout << Utils::defaultOffsetDocInfo << "Incorrect inheritance depth in standard OLE hmember." << endl;
        break;
        case TYPE_E_TYPEMISMATCH:
        cout << Utils::defaultOffset << "TYPE_E_TYPEMISMATCH" << endl;
        cout << Utils::defaultOffsetDocInfo << "Type mismatch." << endl;
        break;
        case TYPE_E_OUTOFBOUNDS:
        cout << Utils::defaultOffset << "TYPE_E_OUTOFBOUNDS" << endl;
        cout << Utils::defaultOffsetDocInfo << "Invalid number of arguments." << endl;
        break;
        case TYPE_E_IOERROR:
        cout << Utils::defaultOffset << "TYPE_E_IOERROR" << endl;
        cout << Utils::defaultOffsetDocInfo << "I/O error." << endl;
        break;
        case TYPE_E_CANTCREATETMPFILE:
        cout << Utils::defaultOffset << "TYPE_E_CANTCREATETMPFILE" << endl;
        cout << Utils::defaultOffsetDocInfo << "Error creating unique .tmp file." << endl;
        break;
        case TYPE_E_CANTLOADLIBRARY:
        cout << Utils::defaultOffset << "TYPE_E_CANTLOADLIBRARY" << endl;
        cout << Utils::defaultOffsetDocInfo << "Error loading type library or DLL." << endl;
        break;
        case TYPE_E_INCONSISTENTPROPFUNCS:
        cout << Utils::defaultOffset << "TYPE_E_INCONSISTENTPROPFUNCS" << endl;
        cout << Utils::defaultOffsetDocInfo << "Inconsistent property functions." << endl;
        break;
        case TYPE_E_CIRCULARTYPE:
        cout << Utils::defaultOffset << "TYPE_E_CIRCULARTYPE" << endl;
        cout << Utils::defaultOffsetDocInfo << "Circular dependency between types and modules." << endl;
        break;
        case STG_E_INVALIDFUNCTION:
        cout << Utils::defaultOffset << "STG_E_INVALIDFUNCTION" << endl;
        cout << Utils::defaultOffsetDocInfo << "Unable to perform requested operation." << endl;
        break;
        case STG_E_FILENOTFOUND:
        cout << Utils::defaultOffset << "STG_E_FILENOTFOUND" << endl;
        cout << Utils::defaultOffsetDocInfo << "%1 could not be found." << endl;
        break;
        case STG_E_PATHNOTFOUND:
        cout << Utils::defaultOffset << "STG_E_PATHNOTFOUND" << endl;
        cout << Utils::defaultOffsetDocInfo << "The path %1 could not be found." << endl;
        break;
        case STG_E_TOOMANYOPENFILES:
        cout << Utils::defaultOffset << "STG_E_TOOMANYOPENFILES" << endl;
        cout << Utils::defaultOffsetDocInfo << "There are insufficient resources to open another file." << endl;
        break;
        case STG_E_ACCESSDENIED:
        cout << Utils::defaultOffset << "STG_E_ACCESSDENIED" << endl;
        cout << Utils::defaultOffsetDocInfo << "Access denied." << endl;
        break;
        case STG_E_INVALIDHANDLE:
        cout << Utils::defaultOffset << "STG_E_INVALIDHANDLE" << endl;
        cout << Utils::defaultOffsetDocInfo << "Attempted an operation on an invalid object." << endl;
        break;
        case STG_E_INSUFFICIENTMEMORY:
        cout << Utils::defaultOffset << "STG_E_INSUFFICIENTMEMORY" << endl;
        cout << Utils::defaultOffsetDocInfo << "There is insufficient memory available to complete operation." << endl;
        break;
        case STG_E_INVALIDPOINTER:
        cout << Utils::defaultOffset << "STG_E_INVALIDPOINTER" << endl;
        cout << Utils::defaultOffsetDocInfo << "Invalid pointer error." << endl;
        break;
        case STG_E_NOMOREFILES:
        cout << Utils::defaultOffset << "STG_E_NOMOREFILES" << endl;
        cout << Utils::defaultOffsetDocInfo << "There are no more entries to return." << endl;
        break;
        case STG_E_DISKISWRITEPROTECTED:
        cout << Utils::defaultOffset << "STG_E_DISKISWRITEPROTECTED" << endl;
        cout << Utils::defaultOffsetDocInfo << "Disk is write-protected." << endl;
        break;
        case STG_E_SEEKERROR:
        cout << Utils::defaultOffset << "STG_E_SEEKERROR" << endl;
        cout << Utils::defaultOffsetDocInfo << "An error occurred during a seek operation." << endl;
        break;
        case STG_E_WRITEFAULT:
        cout << Utils::defaultOffset << "STG_E_WRITEFAULT" << endl;
        cout << Utils::defaultOffsetDocInfo << "A disk error occurred during a write operation." << endl;
        break;
        case STG_E_READFAULT:
        cout << Utils::defaultOffset << "STG_E_READFAULT" << endl;
        cout << Utils::defaultOffsetDocInfo << "A disk error occurred during a read operation." << endl;
        break;
        case STG_E_SHAREVIOLATION:
        cout << Utils::defaultOffset << "STG_E_SHAREVIOLATION" << endl;
        cout << Utils::defaultOffsetDocInfo << "A share violation has occurred." << endl;
        break;
        case STG_E_LOCKVIOLATION:
        cout << Utils::defaultOffset << "STG_E_LOCKVIOLATION" << endl;
        cout << Utils::defaultOffsetDocInfo << "A lock violation has occurred." << endl;
        break;
        case STG_E_FILEALREADYEXISTS:
        cout << Utils::defaultOffset << "STG_E_FILEALREADYEXISTS" << endl;
        cout << Utils::defaultOffsetDocInfo << "%1 already exists." << endl;
        break;
        case STG_E_INVALIDPARAMETER:
        cout << Utils::defaultOffset << "STG_E_INVALIDPARAMETER" << endl;
        cout << Utils::defaultOffsetDocInfo << "Invalid parameter error." << endl;
        break;
        case STG_E_MEDIUMFULL:
        cout << Utils::defaultOffset << "STG_E_MEDIUMFULL" << endl;
        cout << Utils::defaultOffsetDocInfo << "There is insufficient disk space to complete operation." << endl;
        break;
        case STG_E_PROPSETMISMATCHED:
        cout << Utils::defaultOffset << "STG_E_PROPSETMISMATCHED" << endl;
        cout << Utils::defaultOffsetDocInfo << "Illegal write of non-simple property to simple property set." << endl;
        break;
        case STG_E_ABNORMALAPIEXIT:
        cout << Utils::defaultOffset << "STG_E_ABNORMALAPIEXIT" << endl;
        cout << Utils::defaultOffsetDocInfo << "An application programming interface (API) call exited abnormally." << endl;
        break;
        case STG_E_INVALIDHEADER:
        cout << Utils::defaultOffset << "STG_E_INVALIDHEADER" << endl;
        cout << Utils::defaultOffsetDocInfo << "The file %1 is not a valid compound file." << endl;
        break;
        case STG_E_INVALIDNAME:
        cout << Utils::defaultOffset << "STG_E_INVALIDNAME" << endl;
        cout << Utils::defaultOffsetDocInfo << "The name %1 is not valid." << endl;
        break;
        case STG_E_UNKNOWN:
        cout << Utils::defaultOffset << "STG_E_UNKNOWN" << endl;
        cout << Utils::defaultOffsetDocInfo << "An unexpected error occurred." << endl;
        break;
        case STG_E_UNIMPLEMENTEDFUNCTION:
        cout << Utils::defaultOffset << "STG_E_UNIMPLEMENTEDFUNCTION" << endl;
        cout << Utils::defaultOffsetDocInfo << "That function is not implemented." << endl;
        break;
        case STG_E_INVALIDFLAG:
        cout << Utils::defaultOffset << "STG_E_INVALIDFLAG" << endl;
        cout << Utils::defaultOffsetDocInfo << "Invalid flag error." << endl;
        break;
        case STG_E_INUSE:
        cout << Utils::defaultOffset << "STG_E_INUSE" << endl;
        cout << Utils::defaultOffsetDocInfo << "Attempted to use an object that is busy." << endl;
        break;
        case STG_E_NOTCURRENT:
        cout << Utils::defaultOffset << "STG_E_NOTCURRENT" << endl;
        cout << Utils::defaultOffsetDocInfo << "The storage has been changed since the last commit." << endl;
        break;
        case STG_E_REVERTED:
        cout << Utils::defaultOffset << "STG_E_REVERTED" << endl;
        cout << Utils::defaultOffsetDocInfo << "Attempted to use an object that has ceased to exist." << endl;
        break;
        case STG_E_CANTSAVE:
        cout << Utils::defaultOffset << "STG_E_CANTSAVE" << endl;
        cout << Utils::defaultOffsetDocInfo << "Cannot save." << endl;
        break;
        case STG_E_OLDFORMAT:
        cout << Utils::defaultOffset << "STG_E_OLDFORMAT" << endl;
        cout << Utils::defaultOffsetDocInfo << "The compound file %1 was produced with an incompatible version of storage." << endl;
        break;
        case STG_E_OLDDLL:
        cout << Utils::defaultOffset << "STG_E_OLDDLL" << endl;
        cout << Utils::defaultOffsetDocInfo << "The compound file %1 was produced with a newer version of storage." << endl;
        break;
        case STG_E_SHAREREQUIRED:
        cout << Utils::defaultOffset << "STG_E_SHAREREQUIRED" << endl;
        cout << Utils::defaultOffsetDocInfo << "Share.exe or equivalent is required for operation." << endl;
        break;
        case STG_E_NOTFILEBASEDSTORAGE:
        cout << Utils::defaultOffset << "STG_E_NOTFILEBASEDSTORAGE" << endl;
        cout << Utils::defaultOffsetDocInfo << "Illegal operation called on non-file based storage." << endl;
        break;
        case STG_E_EXTANTMARSHALLINGS:
        cout << Utils::defaultOffset << "STG_E_EXTANTMARSHALLINGS" << endl;
        cout << Utils::defaultOffsetDocInfo << "Illegal operation called on object with extant marshalings." << endl;
        break;
        case STG_E_DOCFILECORRUPT:
        cout << Utils::defaultOffset << "STG_E_DOCFILECORRUPT" << endl;
        cout << Utils::defaultOffsetDocInfo << "The docfile has been corrupted." << endl;
        break;
        case STG_E_BADBASEADDRESS:
        cout << Utils::defaultOffset << "STG_E_BADBASEADDRESS" << endl;
        cout << Utils::defaultOffsetDocInfo << "OLE32.DLL has been loaded at the wrong address." << endl;
        break;
        case STG_E_DOCFILETOOLARGE:
        cout << Utils::defaultOffset << "STG_E_DOCFILETOOLARGE" << endl;
        cout << Utils::defaultOffsetDocInfo << "The compound file is too large for the current implementation." << endl;
        break;
        case STG_E_NOTSIMPLEFORMAT:
        cout << Utils::defaultOffset << "STG_E_NOTSIMPLEFORMAT" << endl;
        cout << Utils::defaultOffsetDocInfo << "The compound file was not created with the STGM_SIMPLE flag." << endl;
        break;
        case STG_E_INCOMPLETE:
        cout << Utils::defaultOffset << "STG_E_INCOMPLETE" << endl;
        cout << Utils::defaultOffsetDocInfo << "The file download was aborted abnormally. The file is incomplete." << endl;
        break;
        case STG_E_TERMINATED:
        cout << Utils::defaultOffset << "STG_E_TERMINATED" << endl;
        cout << Utils::defaultOffsetDocInfo << "The file download has been terminated." << endl;
        break;
        case STG_E_STATUS_COPY_PROTECTION_FAILURE:
        cout << Utils::defaultOffset << "STG_E_STATUS_COPY_PROTECTION_FAILURE" << endl;
        cout << Utils::defaultOffsetDocInfo << "Generic Copy Protection Error." << endl;
        break;
        case STG_E_CSS_AUTHENTICATION_FAILURE:
        cout << Utils::defaultOffset << "STG_E_CSS_AUTHENTICATION_FAILURE" << endl;
        cout << Utils::defaultOffsetDocInfo << "Copy Protection Error—DVD CSS Authentication failed." << endl;
        break;
        case STG_E_CSS_KEY_NOT_PRESENT:
        cout << Utils::defaultOffset << "STG_E_CSS_KEY_NOT_PRESENT" << endl;
        cout << Utils::defaultOffsetDocInfo << "Copy Protection Error—The given sector does not have a valid CSS key." << endl;
        break;
        case STG_E_CSS_KEY_NOT_ESTABLISHED:
        cout << Utils::defaultOffset << "STG_E_CSS_KEY_NOT_ESTABLISHED"  << endl;
        cout << Utils::defaultOffsetDocInfo << "Copy Protection Error—DVD session key not established." << endl;
        break;
        case STG_E_CSS_SCRAMBLED_SECTOR:
        cout << Utils::defaultOffset << "STG_E_CSS_SCRAMBLED_SECTOR" << endl;
        cout << Utils::defaultOffsetDocInfo << "Copy Protection Error—The read failed because the sector is encrypted." << endl;
        break;
        case STG_E_CSS_REGION_MISMATCH:
        cout << Utils::defaultOffset << "STG_E_CSS_REGION_MISMATCH" << endl;
        cout << Utils::defaultOffsetDocInfo << "Copy Protection Error—The current DVD's region does not correspond to the region setting of the drive." << endl;
        break;
        case  STG_E_RESETS_EXHAUSTED:
        cout << Utils::defaultOffset << "STG_E_RESETS_EXHAUSTED" << endl;
        cout << Utils::defaultOffsetDocInfo << "Copy Protection Error—The drive's region setting might be permanent or the number of user resets has been exhausted." << endl;
        break;
        case OLE_E_OLEVERB:
        cout << Utils::defaultOffset << "OLE_E_OLEVERB" << endl;
        cout << Utils::defaultOffsetDocInfo << "Invalid OLEVERB structure." << endl;
        break;
        case OLE_E_ADVF:
        cout << Utils::defaultOffset << "OLE_E_ADVF" << endl;
        cout << Utils::defaultOffsetDocInfo << "Invalid advise flags." << endl;
        break;
        case OLE_E_ENUM_NOMORE:
        cout << Utils::defaultOffset << "OLE_E_ENUM_NOMORE" << endl;
        cout << Utils::defaultOffsetDocInfo << "Cannot enumerate any more because the associated data is missing." << endl;
        break;
        case OLE_E_ADVISENOTSUPPORTED:
        cout << Utils::defaultOffset << "OLE_E_ADVISENOTSUPPORTED" << endl;
        cout << Utils::defaultOffsetDocInfo << "This implementation does not take advises." << endl;
        break;
        case OLE_E_NOCONNECTION:
        cout << Utils::defaultOffset << "OLE_E_NOCONNECTION" << endl;
        cout << Utils::defaultOffsetDocInfo << "There is no connection for this connection ID." << endl;
        break;
        case OLE_E_NOTRUNNING:
        cout << Utils::defaultOffset << "OLE_E_NOTRUNNING" << endl;
        cout << Utils::defaultOffsetDocInfo << "Need to run the object to perform this operation." << endl;
        break;
        case OLE_E_NOCACHE:
        cout << Utils::defaultOffset << "OLE_E_NOCACHE" << endl;
        cout << Utils::defaultOffsetDocInfo << "There is no cache to operate on." << endl;
        break;
        case OLE_E_BLANK:
        cout << Utils::defaultOffset << "OLE_E_BLANK" << endl;
        cout << Utils::defaultOffsetDocInfo << "Uninitialized object." << endl;
        break;
        case OLE_E_CLASSDIFF:
        cout << Utils::defaultOffset << "OLE_E_CLASSDIFF" << endl;
        cout << Utils::defaultOffsetDocInfo << "Linked object's source class has changed." << endl;
        break;
        case OLE_E_CANT_GETMONIKER:
        cout << Utils::defaultOffset << "OLE_E_CANT_GETMONIKER" << endl;
        cout << Utils::defaultOffsetDocInfo << "Not able to get the moniker of the object." << endl;
        break;
        case OLE_E_CANT_BINDTOSOURCE:
        cout << Utils::defaultOffset << "OLE_E_CANT_BINDTOSOURCE" << endl;
        cout << Utils::defaultOffsetDocInfo << "Not able to bind to the source." << endl;
        break;
        case OLE_E_STATIC:
        cout << Utils::defaultOffset << "OLE_E_STATIC" << endl;
        cout << Utils::defaultOffsetDocInfo << "Object is static; operation not allowed." << endl;
        break;
        case OLE_E_PROMPTSAVECANCELLED:
        cout << Utils::defaultOffset << "OLE_E_PROMPTSAVECANCELLED" << endl;
        cout << Utils::defaultOffsetDocInfo << "User canceled out of the Save dialog box." << endl;
        break;
        case OLE_E_INVALIDRECT:
        cout << Utils::defaultOffset << "OLE_E_INVALIDRECT" << endl;
        cout << Utils::defaultOffsetDocInfo << "Invalid rectangle." << endl;
        break;
        case OLE_E_WRONGCOMPOBJ:
        cout << Utils::defaultOffset << "OLE_E_WRONGCOMPOBJ" << endl;
        cout << Utils::defaultOffsetDocInfo << "compobj.dll is too old for the ole2.dll initialized." << endl;
        break;
        case OLE_E_INVALIDHWND:
        cout << Utils::defaultOffset << "OLE_E_INVALIDHWND" << endl;
        cout << Utils::defaultOffsetDocInfo << "Invalid window handle." << endl;
        break;
        case OLE_E_NOT_INPLACEACTIVE:
        cout << Utils::defaultOffset << "OLE_E_NOT_INPLACEACTIVE" << endl;
        cout << Utils::defaultOffsetDocInfo << "Object is not in any of the inplace active states." << endl;
        break;
        case OLE_E_CANTCONVERT:
        cout << Utils::defaultOffset << "OLE_E_CANTCONVERT" << endl;
        cout << Utils::defaultOffsetDocInfo << "Not able to convert object." << endl;
        break;
        case OLE_E_NOSTORAGE:
        cout << Utils::defaultOffset << "OLE_E_NOSTORAGE" << endl;
        cout << Utils::defaultOffsetDocInfo << "Not able to perform the operation because object is not given storage yet." << endl;
        break;
        case DV_E_FORMATETC:
        cout << Utils::defaultOffset << "DV_E_FORMATETC" << endl;
        cout << Utils::defaultOffsetDocInfo << "Invalid FORMATETC structure." << endl;
        break;
        case DV_E_DVTARGETDEVICE:
        cout << Utils::defaultOffset << "DV_E_DVTARGETDEVICE" << endl;
        cout << Utils::defaultOffsetDocInfo << "Invalid DVTARGETDEVICE structure." << endl;
        break;
        case DV_E_STGMEDIUM:
        cout << Utils::defaultOffset << "DV_E_STGMEDIUM" << endl;
        cout << Utils::defaultOffsetDocInfo << "Invalid STDGMEDIUM structure." << endl;
        break;
        case DV_E_STATDATA:
        cout << Utils::defaultOffset << "DV_E_STATDATA" << endl;
        cout << Utils::defaultOffsetDocInfo << "Invalid STATDATA structure." << endl;
        break;
        case DV_E_LINDEX:
        cout << Utils::defaultOffset << "DV_E_LINDEX" << endl;
        cout << Utils::defaultOffsetDocInfo << "Invalid lindex." << endl;
        break;
        case DV_E_TYMED:
        cout << Utils::defaultOffset << "DV_E_TYMED" << endl;
        cout << Utils::defaultOffsetDocInfo << "Invalid TYMED structure." << endl;
        break;
        case DV_E_CLIPFORMAT:
        cout << Utils::defaultOffset << "DV_E_CLIPFORMAT" << endl;
        cout << Utils::defaultOffsetDocInfo << "Invalid clipboard format." << endl;
        break;
        case DV_E_DVASPECT:
        cout << Utils::defaultOffset << "DV_E_DVASPECT" << endl;
        cout << Utils::defaultOffsetDocInfo << "Invalid aspects." << endl;
        break;
        case DV_E_DVTARGETDEVICE_SIZE:
        cout << Utils::defaultOffset << "DV_E_DVTARGETDEVICE_SIZE" << endl;
        cout << Utils::defaultOffsetDocInfo << "The tdSize parameter of the DVTARGETDEVICE structure is invalid." << endl;
        break;
        case DV_E_NOIVIEWOBJECT:
        cout << Utils::defaultOffset << "DV_E_NOIVIEWOBJECT" << endl;
        cout << Utils::defaultOffsetDocInfo << "Object does not support IViewObject interface." << endl;
        break;
        case DRAGDROP_E_NOTREGISTERED:
        cout << Utils::defaultOffset << "DRAGDROP_E_NOTREGISTERED" << endl;
        cout << Utils::defaultOffsetDocInfo << "Trying to revoke a drop target that has not been registered." << endl;
        break;
        case DRAGDROP_E_ALREADYREGISTERED:
        cout << Utils::defaultOffset << "DRAGDROP_E_ALREADYREGISTERED" << endl;
        cout << Utils::defaultOffsetDocInfo << "This window has already been registered as a drop target." << endl;
        break;
        case DRAGDROP_E_INVALIDHWND:
        cout << Utils::defaultOffset << "DRAGDROP_E_INVALIDHWND" << endl;
        cout << Utils::defaultOffsetDocInfo << "Invalid window handle." << endl;
        break;
        case CLASS_E_NOAGGREGATION:
        cout << Utils::defaultOffset << "CLASS_E_NOAGGREGATION" << endl;
        cout << Utils::defaultOffsetDocInfo << "Class does not support aggregation (or class object is remote)." << endl;
        break;
        case CLASS_E_CLASSNOTAVAILABLE:
        cout << Utils::defaultOffset << "CLASS_E_CLASSNOTAVAILABLE" << endl;
        cout << Utils::defaultOffsetDocInfo << "ClassFactory cannot supply requested class." << endl;
        break;
        case CLASS_E_NOTLICENSED:
        cout << Utils::defaultOffset << "CLASS_E_NOTLICENSED" << endl;
        cout << Utils::defaultOffsetDocInfo << "Class is not licensed for use." << endl;
        break;
        case VIEW_E_DRAW:
        cout << Utils::defaultOffset << "VIEW_E_DRAW" << endl;
        cout << Utils::defaultOffsetDocInfo << "Error drawing view." << endl;
        break;
        case REGDB_E_READREGDB:
        cout << Utils::defaultOffset << "REGDB_E_READREGDB" << endl;
        cout << Utils::defaultOffsetDocInfo << "Could not read key from registry." << endl;
        break;
        case REGDB_E_WRITEREGDB:
        cout << Utils::defaultOffset << "REGDB_E_WRITEREGDB" << endl;
        cout << Utils::defaultOffsetDocInfo << "Could not write key to registry." << endl;
        break;
        case REGDB_E_KEYMISSING:
        cout << Utils::defaultOffset << "REGDB_E_KEYMISSING" << endl;
        cout << Utils::defaultOffsetDocInfo << "Could not find the key in the registry." << endl;
        break;
        case REGDB_E_INVALIDVALUE:
        cout << Utils::defaultOffset << "REGDB_E_INVALIDVALUE" << endl;
        cout << Utils::defaultOffsetDocInfo << "Invalid value for registry." << endl;
        break;
        case REGDB_E_CLASSNOTREG:
        cout << Utils::defaultOffset << "REGDB_E_CLASSNOTREG" << endl;
        cout << Utils::defaultOffsetDocInfo << "Class not registered." << endl;
        break;
        case REGDB_E_IIDNOTREG:
        cout << Utils::defaultOffset << "REGDB_E_IIDNOTREG" << endl;
        cout << Utils::defaultOffsetDocInfo << "Interface not registered." << endl;
        break;
        case REGDB_E_BADTHREADINGMODEL:
        cout << Utils::defaultOffset << "REGDB_E_BADTHREADINGMODEL" << endl;
        cout << Utils::defaultOffsetDocInfo << "Threading model entry is not valid." << endl;
        break;
        case CAT_E_CATIDNOEXIST:
        cout << Utils::defaultOffset << "CAT_E_CATIDNOEXIST" << endl;
        cout << Utils::defaultOffsetDocInfo << "CATID does not exist." << endl;
        break;
        case CAT_E_NODESCRIPTION:
        cout << Utils::defaultOffset << "CAT_E_NODESCRIPTION" << endl;
        cout << Utils::defaultOffsetDocInfo << "Description not found." << endl;
        break;
        case CS_E_PACKAGE_NOTFOUND:
        cout << Utils::defaultOffset << "CS_E_PACKAGE_NOTFOUND" << endl;
        cout << Utils::defaultOffsetDocInfo << "No package in the software installation data in Active Directory meets this criteria." << endl;
        break;
        case CS_E_NOT_DELETABLE:
        cout << Utils::defaultOffset << "CS_E_NOT_DELETABLE" << endl;
        cout << Utils::defaultOffsetDocInfo << "Deleting this will break the referential integrity of the software installation data in Active Directory." << endl;
        break;
        case CS_E_CLASS_NOTFOUND:
        cout << Utils::defaultOffset << "CS_E_CLASS_NOTFOUND" << endl;
        cout << Utils::defaultOffsetDocInfo << "The CLSID was not found in the software installation data in Active Directory." << endl;
        break;
        case CS_E_INVALID_VERSION:
        cout << Utils::defaultOffset << "CS_E_INVALID_VERSION" << endl;
        cout << Utils::defaultOffsetDocInfo << "The software installation data in Active Directory is corrupt." << endl;
        break;
        case CS_E_NO_CLASSSTORE:
        cout << Utils::defaultOffset << "CS_E_NO_CLASSSTORE" << endl;
        cout << Utils::defaultOffsetDocInfo << "There is no software installation data in Active Directory." << endl;
        break;
        case CS_E_OBJECT_NOTFOUND:
        cout << Utils::defaultOffset << "CS_E_OBJECT_NOTFOUND" << endl;
        cout << Utils::defaultOffsetDocInfo << "There is no software installation data object in Active Directory." << endl;
        break;
        case CS_E_OBJECT_ALREADY_EXISTS:
        cout << Utils::defaultOffset << "CS_E_OBJECT_ALREADY_EXISTS" << endl;
        cout << Utils::defaultOffsetDocInfo << "The software installation data object in Active Directory already exists." << endl;
        break;
        case CS_E_INVALID_PATH:
        cout << Utils::defaultOffset << "CS_E_INVALID_PATH" << endl;
        cout << Utils::defaultOffsetDocInfo << "The path to the software installation data in Active Directory is not correct." << endl;
        break;
        case CS_E_NETWORK_ERROR:
        cout << Utils::defaultOffset << "CS_E_NETWORK_ERROR" << endl;
        cout << Utils::defaultOffsetDocInfo << "A network error interrupted the operation." << endl;
        break;
        case CS_E_ADMIN_LIMIT_EXCEEDED:
        cout << Utils::defaultOffset << "CS_E_ADMIN_LIMIT_EXCEEDED" << endl;
        cout << Utils::defaultOffsetDocInfo << "The size of this object exceeds the maximum size set by the administrator." << endl;
        break;
        case CS_E_SCHEMA_MISMATCH:
        cout << Utils::defaultOffset << "CS_E_SCHEMA_MISMATCH" << endl;
        cout << Utils::defaultOffsetDocInfo << "The schema for the software installation data in Active Directory does not match the required schema." << endl;
        break;
        case CS_E_INTERNAL_ERROR:
        cout << Utils::defaultOffset << "CS_E_INTERNAL_ERROR" << endl;
        cout << Utils::defaultOffsetDocInfo << "An error occurred in the software installation data in Active Directory." << endl;
        break;
        case CACHE_E_NOCACHE_UPDATED:
        cout << Utils::defaultOffset << "CACHE_E_NOCACHE_UPDATED" << endl;
        cout << Utils::defaultOffsetDocInfo << "Cache not updated." << endl;
        break;
        case OLEOBJ_E_NOVERBS:
        cout << Utils::defaultOffset << "OLEOBJ_E_NOVERBS" << endl;
        cout << Utils::defaultOffsetDocInfo << "No verbs for OLE object." << endl;
        break;
        case OLEOBJ_E_INVALIDVERB:
        cout << Utils::defaultOffset << "OLEOBJ_E_INVALIDVERB" << endl;
        cout << Utils::defaultOffsetDocInfo << "Invalid verb for OLE object." << endl;
        break;
        case INPLACE_E_NOTUNDOABLE:
        cout << Utils::defaultOffset << "INPLACE_E_NOTUNDOABLE" << endl;
        cout << Utils::defaultOffsetDocInfo << "Undo is not available." << endl;
        break;
        case INPLACE_E_NOTOOLSPACE:
        cout << Utils::defaultOffset << "INPLACE_E_NOTOOLSPACE" << endl;
        cout << Utils::defaultOffsetDocInfo << "Space for tools is not available." << endl;
        break;
        case CONVERT10_E_OLESTREAM_GET:
        cout << Utils::defaultOffset << "CONVERT10_E_OLESTREAM_GET" << endl;
        cout << Utils::defaultOffsetDocInfo << "OLESTREAM Get method failed." << endl;
        break;
        case CONVERT10_E_OLESTREAM_PUT:
        cout << Utils::defaultOffset << "CONVERT10_E_OLESTREAM_PUT" << endl;
        cout << Utils::defaultOffsetDocInfo << "OLESTREAM Put method failed." << endl;
        break;
        case CONVERT10_E_OLESTREAM_FMT:
        cout << Utils::defaultOffset << "CONVERT10_E_OLESTREAM_FMT" << endl;
        cout << Utils::defaultOffsetDocInfo << "Contents of the OLESTREAM not in correct format." << endl;
        break;
        case CONVERT10_E_OLESTREAM_BITMAP_TO_DIB:
        cout << Utils::defaultOffset << "CONVERT10_E_OLESTREAM_BITMAP_TO_DIB" << endl;
        cout << Utils::defaultOffsetDocInfo << "There was an error in a Windows GDI call while converting the bitmap to a device-independent bitmap (DIB)." << endl;
        break;
        case CONVERT10_E_STG_FMT:
        cout << Utils::defaultOffset << "CONVERT10_E_STG_FMT" << endl;
        cout << Utils::defaultOffsetDocInfo << "Contents of the IStorage not in correct format." << endl;
        break;
        case CONVERT10_E_STG_NO_STD_STREAM:
        cout << Utils::defaultOffset << "CONVERT10_E_STG_NO_STD_STREAM" << endl;
        cout << Utils::defaultOffsetDocInfo << "Contents of IStorage is missing one of the standard streams." << endl;
        break;
        case CONVERT10_E_STG_DIB_TO_BITMAP:
        cout << Utils::defaultOffset << "CONVERT10_E_STG_DIB_TO_BITMAP" << endl;
        cout << Utils::defaultOffsetDocInfo << "There was an error in a Windows Graphics Device Interface (GDI) call while converting the DIB to a bitmap." << endl;
        break;
        case CLIPBRD_E_CANT_OPEN:
        cout << Utils::defaultOffset << "CLIPBRD_E_CANT_OPEN" << endl;
        cout << Utils::defaultOffsetDocInfo << "OpenClipboard failed." << endl;
        break;
        case CLIPBRD_E_CANT_EMPTY:
        cout << Utils::defaultOffset << "CLIPBRD_E_CANT_EMPTY" << endl;
        cout << Utils::defaultOffsetDocInfo << "EmptyClipboard failed." << endl;
        break;
        case CLIPBRD_E_CANT_SET:
        cout << Utils::defaultOffset << "CLIPBRD_E_CANT_SET" << endl;
        cout << Utils::defaultOffsetDocInfo << "SetClipboard failed." << endl;
        break;
        case CLIPBRD_E_BAD_DATA:
        cout << Utils::defaultOffset << "CLIPBRD_E_BAD_DATA" << endl;
        cout << Utils::defaultOffsetDocInfo << "Data on clipboard is invalid." << endl;
        break;
        case CLIPBRD_E_CANT_CLOSE:
        cout << Utils::defaultOffset << "CLIPBRD_E_CANT_CLOSE" << endl;
        cout << Utils::defaultOffsetDocInfo << "CloseClipboard failed." << endl;
        break;
        case MK_E_CONNECTMANUALLY:
        cout << Utils::defaultOffset << "MK_E_CONNECTMANUALLY" << endl;
        cout << Utils::defaultOffsetDocInfo << "Moniker needs to be connected manually." << endl;
        break;
        case MK_E_EXCEEDEDDEADLINE:
        cout << Utils::defaultOffset << "MK_E_EXCEEDEDDEADLINE" << endl;
        cout << Utils::defaultOffsetDocInfo << "Operation exceeded deadline." << endl;
        break;
        case MK_E_NEEDGENERIC:
        cout << Utils::defaultOffset << "MK_E_NEEDGENERIC" << endl;
        cout << Utils::defaultOffsetDocInfo << "Moniker needs to be generic." << endl;
        break;
        case MK_E_UNAVAILABLE:
        cout << Utils::defaultOffset << "MK_E_UNAVAILABLE" << endl;
        cout << Utils::defaultOffsetDocInfo << "Operation unavailable." << endl;
        break;
        case MK_E_SYNTAX:
        cout << Utils::defaultOffset << "MK_E_SYNTAX" << endl;
        cout << Utils::defaultOffsetDocInfo << "Invalid syntax." << endl;
        break;
        case MK_E_NOOBJECT:
        cout << Utils::defaultOffset << "MK_E_NOOBJECT" << endl;
        cout << Utils::defaultOffsetDocInfo << "No object for moniker." << endl;
        break;
        case MK_E_INVALIDEXTENSION:
        cout << Utils::defaultOffset << "MK_E_INVALIDEXTENSION" << endl;
        cout << Utils::defaultOffsetDocInfo << "Bad extension for file." << endl;
        break;
        case MK_E_INTERMEDIATEINTERFACENOTSUPPORTED:
        cout << Utils::defaultOffset << "MK_E_INTERMEDIATEINTERFACENOTSUPPORTED" << endl;
        cout << Utils::defaultOffsetDocInfo << "Intermediate operation failed." << endl;
        break;
        case MK_E_NOTBINDABLE:
        cout << Utils::defaultOffset << "MK_E_NOTBINDABLE" << endl;
        cout << Utils::defaultOffsetDocInfo << "Moniker is not bindable." << endl;
        break;
        case MK_E_NOTBOUND:
        cout << Utils::defaultOffset << "MK_E_NOTBOUND" << endl;
        cout << Utils::defaultOffsetDocInfo << "Moniker is not bound." << endl;
        break;
        case MK_E_CANTOPENFILE:
        cout << Utils::defaultOffset << "MK_E_CANTOPENFILE" << endl;
        cout << Utils::defaultOffsetDocInfo << "Moniker cannot open file." << endl;
        break;
        case MK_E_MUSTBOTHERUSER:
        cout << Utils::defaultOffset << "MK_E_MUSTBOTHERUSER" << endl;
        cout << Utils::defaultOffsetDocInfo << "User input required for operation to succeed." << endl;
        break;
        case MK_E_NOINVERSE:
        cout << Utils::defaultOffset << "MK_E_NOINVERSE" << endl;
        cout << Utils::defaultOffsetDocInfo << "Moniker class has no inverse." << endl;
        break;
        case MK_E_NOSTORAGE:
        cout << Utils::defaultOffset << "MK_E_NOSTORAGE" << endl;
        cout << Utils::defaultOffsetDocInfo << "Moniker does not refer to storage." << endl;
        break;
        case MK_E_NOPREFIX:
        cout << Utils::defaultOffset << "MK_E_NOPREFIX" << endl;
        cout << Utils::defaultOffsetDocInfo << "No common prefix." << endl;
        break;
        case MK_E_ENUMERATION_FAILED:
        cout << Utils::defaultOffset << "MK_E_ENUMERATION_FAILED" << endl;
        cout << Utils::defaultOffsetDocInfo << "Moniker could not be enumerated." << endl;
        break;
        case CO_E_NOTINITIALIZED:
        cout << Utils::defaultOffset << "CO_E_NOTINITIALIZED" << endl;
        cout << Utils::defaultOffsetDocInfo << "CoInitialize has not been called." << endl;
        break;
        case CO_E_ALREADYINITIALIZED:
        cout << Utils::defaultOffset << "CO_E_ALREADYINITIALIZED" << endl;
        cout << Utils::defaultOffsetDocInfo << "CoInitialize has already been called." << endl;
        break;
        case CO_E_CANTDETERMINECLASS:
        cout << Utils::defaultOffset << "CO_E_CANTDETERMINECLASS" << endl;
        cout << Utils::defaultOffsetDocInfo << "Class of object cannot be determined." << endl;
        break;
        case CO_E_CLASSSTRING:
        cout << Utils::defaultOffset << "CO_E_CLASSSTRING" << endl;
        cout << Utils::defaultOffsetDocInfo << "Invalid class string." << endl;
        break;
        case CO_E_IIDSTRING:
        cout << Utils::defaultOffset << "CO_E_IIDSTRING" << endl;
        cout << Utils::defaultOffsetDocInfo << "Invalid interface string." << endl;
        break;
        case CO_E_APPNOTFOUND:
        cout << Utils::defaultOffset << "CO_E_APPNOTFOUND" << endl;
        cout << Utils::defaultOffsetDocInfo << "Application not found." << endl;
        break;
        case CO_E_APPSINGLEUSE:
        cout << Utils::defaultOffset << "CO_E_APPSINGLEUSE" << endl;
        cout << Utils::defaultOffsetDocInfo << "Application cannot be run more than once." << endl;
        break;
        case CO_E_ERRORINAPP:
        cout << Utils::defaultOffset << "CO_E_ERRORINAPP" << endl;
        cout << Utils::defaultOffsetDocInfo << "Some error in application." << endl;
        break;
        case CO_E_DLLNOTFOUND:
        cout << Utils::defaultOffset << "CO_E_DLLNOTFOUND" << endl;
        cout << Utils::defaultOffsetDocInfo << "DLL for class not found." << endl;
        break;
        case CO_E_ERRORINDLL:
        cout << Utils::defaultOffset << "CO_E_ERRORINDLL" << endl;
        cout << Utils::defaultOffsetDocInfo << "Error in the DLL." << endl;
        break;
        case CO_E_WRONGOSFORAPP:
        cout << Utils::defaultOffset << "CO_E_WRONGOSFORAPP" << endl;
        cout << Utils::defaultOffsetDocInfo << "Wrong operating system or operating system version for application." << endl;
        break;
        case CO_E_OBJNOTREG:
        cout << Utils::defaultOffset << "CO_E_OBJNOTREG" << endl;
        cout << Utils::defaultOffsetDocInfo << "Object is not registered." << endl;
        break;
        case CO_E_OBJISREG:
        cout << Utils::defaultOffset << "CO_E_OBJISREG" << endl;
        cout << Utils::defaultOffsetDocInfo << "Object is already registered." << endl;
        break;
        case CO_E_OBJNOTCONNECTED:
        cout << Utils::defaultOffset << "CO_E_OBJNOTCONNECTED" << endl;
        cout << Utils::defaultOffsetDocInfo << "Object is not connected to server." << endl;
        break;
        case CO_E_APPDIDNTREG:
        cout << Utils::defaultOffset << "CO_E_APPDIDNTREG" << endl;
        cout << Utils::defaultOffsetDocInfo << "Application was launched, but it did not register a class factory." << endl;
        break;
        case CO_E_RELEASED:
        cout << Utils::defaultOffset << "CO_E_RELEASED" << endl;
        cout << Utils::defaultOffsetDocInfo << "Object has been released." << endl;
        break;
        case EVENT_E_ALL_SUBSCRIBERS_FAILED:
        cout << Utils::defaultOffset << "EVENT_E_ALL_SUBSCRIBERS_FAILED" << endl;
        cout << Utils::defaultOffsetDocInfo << "An event was unable to invoke any of the subscribers." << endl;
        break;
        case EVENT_E_QUERYSYNTAX:
        cout << Utils::defaultOffset << "EVENT_E_QUERYSYNTAX" << endl;
        cout << Utils::defaultOffsetDocInfo << "A syntax error occurred trying to evaluate a query string." << endl;
        break;
        case EVENT_E_QUERYFIELD:
        cout << Utils::defaultOffset << "EVENT_E_QUERYFIELD" << endl;
        cout << Utils::defaultOffsetDocInfo << "An invalid field name was used in a query string." << endl;
        break;
        case EVENT_E_INTERNALEXCEPTION:
        cout << Utils::defaultOffset << "EVENT_E_INTERNALEXCEPTION" << endl;
        cout << Utils::defaultOffsetDocInfo << "An unexpected exception was raised." << endl;
        break;
        case EVENT_E_INTERNALERROR:
        cout << Utils::defaultOffset << "EVENT_E_INTERNALERROR" << endl;
        cout << Utils::defaultOffsetDocInfo << "An unexpected internal error was detected." << endl;
        break;
        case EVENT_E_INVALID_PER_USER_SID:
        cout << Utils::defaultOffset << "EVENT_E_INVALID_PER_USER_SID" << endl;
        cout << Utils::defaultOffsetDocInfo << "The owner security identifier (SID) on a per-user subscription does not exist." << endl;
        break;
        case EVENT_E_USER_EXCEPTION:
        cout << Utils::defaultOffset << "EVENT_E_USER_EXCEPTION" << endl;
        cout << Utils::defaultOffsetDocInfo << "A user-supplied component or subscriber raised an exception." << endl;
        break;
        case EVENT_E_TOO_MANY_METHODS:
        cout << Utils::defaultOffset << "EVENT_E_TOO_MANY_METHODS" << endl;
        cout << Utils::defaultOffsetDocInfo << "An interface has too many methods to fire events from." << endl;
        break;
        case EVENT_E_MISSING_EVENTCLASS:
        cout << Utils::defaultOffset << "EVENT_E_MISSING_EVENTCLASS" << endl;
        cout << Utils::defaultOffsetDocInfo << "A subscription cannot be stored unless its event class already exists." << endl;
        break;
        case EVENT_E_NOT_ALL_REMOVED:
        cout << Utils::defaultOffset << "EVENT_E_NOT_ALL_REMOVED" << endl;
        cout << Utils::defaultOffsetDocInfo << "Not all the objects requested could be removed." << endl;
        break;
        case EVENT_E_COMPLUS_NOT_INSTALLED:
        cout << Utils::defaultOffset << "EVENT_E_COMPLUS_NOT_INSTALLED" << endl;
        cout << Utils::defaultOffsetDocInfo << "COM+ is required for this operation, but it is not installed." << endl;
        break;
        case EVENT_E_CANT_MODIFY_OR_DELETE_UNCONFIGURED_OBJECT:
        cout << Utils::defaultOffset << "EVENT_E_CANT_MODIFY_OR_DELETE_UNCONFIGURED_OBJECT" << endl;
        cout << Utils::defaultOffsetDocInfo << "Cannot modify or delete an object that was not added using the COM+ Administrative SDK." << endl;
        break;
        case EVENT_E_CANT_MODIFY_OR_DELETE_CONFIGURED_OBJECT:
        cout << Utils::defaultOffset << "EVENT_E_CANT_MODIFY_OR_DELETE_CONFIGURED_OBJECT" << endl;
        cout << Utils::defaultOffsetDocInfo << "Cannot modify or delete an object that was added using the COM+ Administrative SDK." << endl;
        break;
        case EVENT_E_INVALID_EVENT_CLASS_PARTITION:
        cout << Utils::defaultOffset << "EVENT_E_INVALID_EVENT_CLASS_PARTITION" << endl;
        cout << Utils::defaultOffsetDocInfo << "The event class for this subscription is in an invalid partition." << endl;
        break;
        case EVENT_E_PER_USER_SID_NOT_LOGGED_ON:
        cout << Utils::defaultOffset << "EVENT_E_PER_USER_SID_NOT_LOGGED_ON" << endl;
        cout << Utils::defaultOffsetDocInfo << "The owner of the PerUser subscription is not logged on to the system specified." << endl;
        break;
        case SCHED_E_TRIGGER_NOT_FOUND:
        cout << Utils::defaultOffset << "SCHED_E_TRIGGER_NOT_FOUND" << endl;
        cout << Utils::defaultOffsetDocInfo << "Trigger not found." << endl;
        break;
        case SCHED_E_TASK_NOT_READY:
        cout << Utils::defaultOffset << "SCHED_E_TASK_NOT_READY" << endl;
        cout << Utils::defaultOffsetDocInfo << "One or more of the properties that are needed to run this task have not been set." << endl;
        break;
        case SCHED_E_TASK_NOT_RUNNING:
        cout << Utils::defaultOffset << "SCHED_E_TASK_NOT_RUNNING" << endl;
        cout << Utils::defaultOffsetDocInfo << "There is no running instance of the task." << endl;
        break;
        case SCHED_E_SERVICE_NOT_INSTALLED:
        cout << Utils::defaultOffset << "SCHED_E_SERVICE_NOT_INSTALLED" << endl;
        cout << Utils::defaultOffsetDocInfo << "The Task Scheduler service is not installed on this computer." << endl;
        break;
        case SCHED_E_CANNOT_OPEN_TASK:
        cout << Utils::defaultOffset << "SCHED_E_CANNOT_OPEN_TASK" << endl;
        cout << Utils::defaultOffsetDocInfo << "The task object could not be opened." << endl;
        break;
        case SCHED_E_INVALID_TASK:
        cout << Utils::defaultOffset << "SCHED_E_INVALID_TASK" << endl;
        cout << Utils::defaultOffsetDocInfo << "The object is either an invalid task object or is not a task object." << endl;
        break;
        case SCHED_E_ACCOUNT_INFORMATION_NOT_SET:
        cout << Utils::defaultOffset << "SCHED_E_ACCOUNT_INFORMATION_NOT_SET" << endl;
        cout << Utils::defaultOffsetDocInfo << "No account information could be found in the Task Scheduler security database for the task indicated." << endl;
        break;
        case SCHED_E_ACCOUNT_NAME_NOT_FOUND:
        cout << Utils::defaultOffset << "SCHED_E_ACCOUNT_NAME_NOT_FOUND" << endl;
        cout << Utils::defaultOffsetDocInfo << "Unable to establish existence of the account specified." << endl;
        break;
        case SCHED_E_ACCOUNT_DBASE_CORRUPT:
        cout << Utils::defaultOffset << "SCHED_E_ACCOUNT_DBASE_CORRUPT" << endl;
        cout << Utils::defaultOffsetDocInfo << "Corruption was detected in the Task Scheduler security database; the database has been reset." << endl;
        break;
        case SCHED_E_NO_SECURITY_SERVICES:
        cout << Utils::defaultOffset << "SCHED_E_NO_SECURITY_SERVICES" << endl;
        cout << Utils::defaultOffsetDocInfo << "Task Scheduler security services are available only on Windows NT operating system." << endl;
        break;
        case SCHED_E_UNKNOWN_OBJECT_VERSION:
        cout << Utils::defaultOffset << "SCHED_E_UNKNOWN_OBJECT_VERSION" << endl;
        cout << Utils::defaultOffsetDocInfo << "The task object version is either unsupported or invalid." << endl;
        break;
        case SCHED_E_UNSUPPORTED_ACCOUNT_OPTION:
        cout << Utils::defaultOffset << "SCHED_E_UNSUPPORTED_ACCOUNT_OPTION" << endl;
        cout << Utils::defaultOffsetDocInfo << "The task has been configured with an unsupported combination of account settings and run-time options." << endl;
        break;
        case SCHED_E_SERVICE_NOT_RUNNING:
        cout << Utils::defaultOffset << "SCHED_E_SERVICE_NOT_RUNNING" << endl;
        cout << Utils::defaultOffsetDocInfo << "The Task Scheduler service is not running." << endl;
        break;
        case SCHED_E_UNEXPECTEDNODE:
        cout << Utils::defaultOffset << "SCHED_E_UNEXPECTEDNODE" << endl;
        cout << Utils::defaultOffsetDocInfo << "The task XML contains an unexpected node." << endl;
        break;
        case SCHED_E_NAMESPACE:
        cout << Utils::defaultOffset << "SCHED_E_NAMESPACE" << endl;
        cout << Utils::defaultOffsetDocInfo << "The task XML contains an element or attribute from an unexpected namespace." << endl;
        break;
        case SCHED_E_INVALIDVALUE:
        cout << Utils::defaultOffset << "SCHED_E_INVALIDVALUE" << endl;
        cout << Utils::defaultOffsetDocInfo << "The task XML contains a value that is incorrectly formatted or out of range." << endl;
        break;
        case SCHED_E_MISSINGNODE:
        cout << Utils::defaultOffset << "SCHED_E_MISSINGNODE" << endl;
        cout << Utils::defaultOffsetDocInfo << "The task XML is missing a required element or attribute." << endl;
        break;
        case SCHED_E_MALFORMEDXML:
        cout << Utils::defaultOffset << "SCHED_E_MALFORMEDXML" << endl;
        cout << Utils::defaultOffsetDocInfo << "The task XML is malformed." << endl;
        break;
        case SCHED_E_TOO_MANY_NODES:
        cout << Utils::defaultOffset << "SCHED_E_TOO_MANY_NODES" << endl;
        cout << Utils::defaultOffsetDocInfo << "The task XML contains too many nodes of the same type." << endl;
        break;
        case SCHED_E_PAST_END_BOUNDARY:
        cout << Utils::defaultOffset << "SCHED_E_PAST_END_BOUNDARY" << endl;
        cout << Utils::defaultOffsetDocInfo << "The task cannot be started after the trigger's end boundary." << endl;
        break;
        case SCHED_E_ALREADY_RUNNING:
        cout << Utils::defaultOffset << "SCHED_E_ALREADY_RUNNING" << endl;
        cout << Utils::defaultOffsetDocInfo << "An instance of this task is already running." << endl;
        break;
        case SCHED_E_USER_NOT_LOGGED_ON:
        cout << Utils::defaultOffset << "SCHED_E_USER_NOT_LOGGED_ON" << endl;
        cout << Utils::defaultOffsetDocInfo << "The task will not run because the user is not logged on." << endl;
        break;
        case SCHED_E_INVALID_TASK_HASH:
        cout << Utils::defaultOffset << "SCHED_E_INVALID_TASK_HASH" << endl;
        cout << Utils::defaultOffsetDocInfo << "The task image is corrupt or has been tampered with." << endl;
        break;
        case SCHED_E_SERVICE_NOT_AVAILABLE:
        cout << Utils::defaultOffset << "SCHED_E_SERVICE_NOT_AVAILABLE" << endl;
        cout << Utils::defaultOffsetDocInfo << "The Task Scheduler service is not available." << endl;
        break;
        case SCHED_E_SERVICE_TOO_BUSY:
        cout << Utils::defaultOffset << "SCHED_E_SERVICE_TOO_BUSY" << endl;
        cout << Utils::defaultOffsetDocInfo << "The Task Scheduler service is too busy to handle your request. Try again later." << endl;
        break;
        case SCHED_E_TASK_ATTEMPTED:
        cout << Utils::defaultOffset << "SCHED_E_TASK_ATTEMPTED" << endl;
        cout << Utils::defaultOffsetDocInfo << "The Task Scheduler service attempted to run the task, but the task did not run due to one of the constraints in the task definition." << endl;
        break;
        case XACT_E_ALREADYOTHERSINGLEPHASE:
        cout << Utils::defaultOffset << "XACT_E_ALREADYOTHERSINGLEPHASE" << endl;
        cout << Utils::defaultOffsetDocInfo << "Another single phase resource manager has already been enlisted in this transaction." << endl;
        break;
        case XACT_E_CANTRETAIN:
        cout << Utils::defaultOffset << "XACT_E_CANTRETAIN" << endl;
        cout << Utils::defaultOffsetDocInfo << "A retaining commit or abort is not supported." << endl;
        break;
        case XACT_E_COMMITFAILED:
        cout << Utils::defaultOffset << "XACT_E_COMMITFAILED" << endl;
        cout << Utils::defaultOffsetDocInfo << "The transaction failed to commit for an unknown reason. The transaction was aborted." << endl;
        break;
        case XACT_E_COMMITPREVENTED:
        cout << Utils::defaultOffset << "XACT_E_COMMITPREVENTED" << endl;
        cout << Utils::defaultOffsetDocInfo << "Cannot call commit on this transaction object because the calling application did not initiate the transaction." << endl;
        break;
        case XACT_E_HEURISTICABORT:
        cout << Utils::defaultOffset << "XACT_E_HEURISTICABORT" << endl;
        cout << Utils::defaultOffsetDocInfo << "Instead of committing, the resource heuristically aborted." << endl;
        break;
        case XACT_E_HEURISTICCOMMIT:
        cout << Utils::defaultOffset << "XACT_E_HEURISTICCOMMIT" << endl;
        cout << Utils::defaultOffsetDocInfo << "Instead of aborting, the resource heuristically committed." << endl;
        break;
        case XACT_E_HEURISTICDAMAGE:
        cout << Utils::defaultOffset << "XACT_E_HEURISTICDAMAGE" << endl;
        cout << Utils::defaultOffsetDocInfo << "Some of the states of the resource were committed while others were aborted, likely because of heuristic decisions." << endl;
        break;
        case XACT_E_HEURISTICDANGER:
        cout << Utils::defaultOffset << "XACT_E_HEURISTICDANGER" << endl;
        cout << Utils::defaultOffsetDocInfo << "Some of the states of the resource might have been committed while others were aborted, likely because of heuristic decisions." << endl;
        break;
        case XACT_E_ISOLATIONLEVEL:
        cout << Utils::defaultOffset << "XACT_E_ISOLATIONLEVEL" << endl;
        cout << Utils::defaultOffsetDocInfo << "The requested isolation level is not valid or supported." << endl;
        break;
        case XACT_E_NOASYNC:
        cout << Utils::defaultOffset << "XACT_E_NOASYNC" << endl;
        cout << Utils::defaultOffsetDocInfo << "The transaction manager does not support an asynchronous operation for this method." << endl;
        break;
        case XACT_E_NOENLIST:
        cout << Utils::defaultOffset << "XACT_E_NOENLIST" << endl;
        cout << Utils::defaultOffsetDocInfo << "Unable to enlist in the transaction." << endl;
        break;
        case XACT_E_NOISORETAIN:
        cout << Utils::defaultOffset << "XACT_E_NOISORETAIN" << endl;
        cout << Utils::defaultOffsetDocInfo << "The requested semantics of retention of isolation across retaining commit and abort boundaries cannot be supported by this transaction implementation, or isoFlags was not equal to 0." << endl;
        break;
        case XACT_E_NORESOURCE:
        cout << Utils::defaultOffset << "XACT_E_NORESOURCE" << endl;
        cout << Utils::defaultOffsetDocInfo << "There is no resource presently associated with this enlistment." << endl;
        break;
        case XACT_E_NOTCURRENT:
        cout << Utils::defaultOffset << "XACT_E_NOTCURRENT" << endl;
        cout << Utils::defaultOffsetDocInfo << "The transaction failed to commit due to the failure of optimistic concurrency control in at least one of the resource managers." << endl;
        break;
        case XACT_E_NOTRANSACTION:
        cout << Utils::defaultOffset << "XACT_E_NOTRANSACTION" << endl;
        cout << Utils::defaultOffsetDocInfo << "The transaction has already been implicitly or explicitly committed or aborted." << endl;
        break;
        case XACT_E_NOTSUPPORTED:
        cout << Utils::defaultOffset << "XACT_E_NOTSUPPORTED" << endl;
        cout << Utils::defaultOffsetDocInfo << "An invalid combination of flags was specified." << endl;
        break;
        case XACT_E_UNKNOWNRMGRID:
        cout << Utils::defaultOffset << "XACT_E_UNKNOWNRMGRID" << endl;
        cout << Utils::defaultOffsetDocInfo << "The resource manager ID is not associated with this transaction or the transaction manager." << endl;
        break;
        case XACT_E_WRONGSTATE:
        cout << Utils::defaultOffset << "XACT_E_WRONGSTATE" << endl;
        cout << Utils::defaultOffsetDocInfo << "This method was called in the wrong state." << endl;
        break;
        case XACT_E_WRONGUOW:
        cout << Utils::defaultOffset << "XACT_E_WRONGUOW" << endl;
        cout << Utils::defaultOffsetDocInfo << "The indicated unit of work does not match the unit of work expected by the resource manager." << endl;
        break;
        case XACT_E_XTIONEXISTS:
        cout << Utils::defaultOffset << "XACT_E_XTIONEXISTS" << endl;
        cout << Utils::defaultOffsetDocInfo << "An enlistment in a transaction already exists." << endl;
        break;
        case XACT_E_NOIMPORTOBJECT:
        cout << Utils::defaultOffset << "XACT_E_NOIMPORTOBJECT" << endl;
        cout << Utils::defaultOffsetDocInfo << "An import object for the transaction could not be found." << endl;
        break;
        case XACT_E_INVALIDCOOKIE:
        cout << Utils::defaultOffset << "XACT_E_INVALIDCOOKIE" << endl;
        cout << Utils::defaultOffsetDocInfo << "The transaction cookie is invalid." << endl;
        break;
        case XACT_E_INDOUBT:
        cout << Utils::defaultOffset << "XACT_E_INDOUBT" << endl;
        cout << Utils::defaultOffsetDocInfo << "The transaction status is in doubt. A communication failure occurred, or a transaction manager or resource manager has failed." << endl;
        break;
        case XACT_E_NOTIMEOUT:
        cout << Utils::defaultOffset << "XACT_E_NOTIMEOUT" << endl;
        cout << Utils::defaultOffsetDocInfo << "A time-out was specified, but time-outs are not supported." << endl;
        break;
        case XACT_E_ALREADYINPROGRESS:
        cout << Utils::defaultOffset << "XACT_E_ALREADYINPROGRESS" << endl;
        cout << Utils::defaultOffsetDocInfo << "The requested operation is already in progress for the transaction." << endl;
        break;
        case XACT_E_ABORTED:
        cout << Utils::defaultOffset << "XACT_E_ABORTED" << endl;
        cout << Utils::defaultOffsetDocInfo << "The transaction has already been aborted." << endl;
        break;
        case XACT_E_LOGFULL:
        cout << Utils::defaultOffset << "XACT_E_LOGFULL" << endl;
        cout << Utils::defaultOffsetDocInfo << "The Transaction Manager returned a log full error." << endl;
        break;
        case XACT_E_TMNOTAVAILABLE:
        cout << Utils::defaultOffset << "XACT_E_TMNOTAVAILABLE" << endl;
        cout << Utils::defaultOffsetDocInfo << "The transaction manager is not available." << endl;
        break;
        case XACT_E_CONNECTION_DOWN:
        cout << Utils::defaultOffset << "XACT_E_CONNECTION_DOWN" << endl;
        cout << Utils::defaultOffsetDocInfo << "A connection with the transaction manager was lost." << endl;
        break;
        case XACT_E_CONNECTION_DENIED:
        cout << Utils::defaultOffset << "XACT_E_CONNECTION_DENIED" << endl;
        cout << Utils::defaultOffsetDocInfo << "A request to establish a connection with the transaction manager was denied." << endl;
        break;
        case XACT_E_REENLISTTIMEOUT:
        cout << Utils::defaultOffset << "XACT_E_REENLISTTIMEOUT" << endl;
        cout << Utils::defaultOffsetDocInfo << "Resource manager reenlistment to determine transaction status timed out." << endl;
        break;
        case XACT_E_TIP_CONNECT_FAILED:
        cout << Utils::defaultOffset << "XACT_E_TIP_CONNECT_FAILED" << endl;
        cout << Utils::defaultOffsetDocInfo << "The transaction manager failed to establish a connection with another Transaction Internet Protocol (TIP) transaction manager." << endl;
        break;
        case XACT_E_TIP_PROTOCOL_ERROR:
        cout << Utils::defaultOffset << "XACT_E_TIP_PROTOCOL_ERROR" << endl;
        cout << Utils::defaultOffsetDocInfo << "The transaction manager encountered a protocol error with another TIP transaction manager." << endl;
        break;
        case XACT_E_TIP_PULL_FAILED:
        cout << Utils::defaultOffset << "XACT_E_TIP_PULL_FAILED" << endl;
        cout << Utils::defaultOffsetDocInfo << "The transaction manager could not propagate a transaction from another TIP transaction manager." << endl;
        break;
        case XACT_E_DEST_TMNOTAVAILABLE:
        cout << Utils::defaultOffset << "XACT_E_DEST_TMNOTAVAILABLE" << endl;
        cout << Utils::defaultOffsetDocInfo << "The transaction manager on the destination machine is not available." << endl;
        break;
        case XACT_E_TIP_DISABLED:
        cout << Utils::defaultOffset << "XACT_E_TIP_DISABLED" << endl;
        cout << Utils::defaultOffsetDocInfo << "The transaction manager has disabled its support for TIP." << endl;
        break;
        case XACT_E_NETWORK_TX_DISABLED:
        cout << Utils::defaultOffset << "XACT_E_NETWORK_TX_DISABLED" << endl;
        cout << Utils::defaultOffsetDocInfo << "The transaction manager has disabled its support for remote or network transactions." << endl;
        break;
        case XACT_E_PARTNER_NETWORK_TX_DISABLED:
        cout << Utils::defaultOffset << "XACT_E_PARTNER_NETWORK_TX_DISABLED" << endl;
        cout << Utils::defaultOffsetDocInfo << "The partner transaction manager has disabled its support for remote or network transactions." << endl;
        break;
        case XACT_E_XA_TX_DISABLED:
        cout << Utils::defaultOffset << "XACT_E_XA_TX_DISABLED" << endl;
        cout << Utils::defaultOffsetDocInfo << "The transaction manager has disabled its support for XA transactions." << endl;
        break;
        case XACT_E_UNABLE_TO_READ_DTC_CONFIG:
        cout << Utils::defaultOffset << "XACT_E_UNABLE_TO_READ_DTC_CONFIG" << endl;
        cout << Utils::defaultOffsetDocInfo << "Microsoft Distributed Transaction Coordinator (MSDTC) was unable to read its configuration information." << endl;
        break;
        case XACT_E_UNABLE_TO_LOAD_DTC_PROXY:
        cout << Utils::defaultOffset << "XACT_E_UNABLE_TO_LOAD_DTC_PROXY" << endl;
        cout << Utils::defaultOffsetDocInfo << "MSDTC was unable to load the DTC proxy DLL." << endl;
        break;
        case XACT_E_ABORTING:
        cout << Utils::defaultOffset << "XACT_E_ABORTING" << endl;
        cout << Utils::defaultOffsetDocInfo << "The local transaction has aborted." << endl;
        break;
        case XACT_E_CLERKNOTFOUND:
        cout << Utils::defaultOffset << "XACT_E_CLERKNOTFOUND" << endl;
        cout << Utils::defaultOffsetDocInfo << "The specified CRM clerk was not found. It might have completed before it could be held." << endl;
        break;
        case XACT_E_CLERKEXISTS:
        cout << Utils::defaultOffset << "XACT_E_CLERKEXISTS" << endl;
        cout << Utils::defaultOffsetDocInfo << "The specified CRM clerk does not exist." << endl;
        break;
        case XACT_E_RECOVERYINPROGRESS:
        cout << Utils::defaultOffset << "XACT_E_RECOVERYINPROGRESS" << endl;
        cout << Utils::defaultOffsetDocInfo << "Recovery of the CRM log file is still in progress." << endl;
        break;
        case XACT_E_TRANSACTIONCLOSED:
        cout << Utils::defaultOffset << "XACT_E_TRANSACTIONCLOSED" << endl;
        cout << Utils::defaultOffsetDocInfo << "The transaction has completed, and the log records have been discarded from the log file. They are no longer available." << endl;
        break;
        case XACT_E_INVALIDLSN:
        cout << Utils::defaultOffset << "XACT_E_INVALIDLSN" << endl;
        cout << Utils::defaultOffsetDocInfo << "lsnToRead is outside of the current limits of the log" << endl;
        break;
        case XACT_E_REPLAYREQUEST:
        cout << Utils::defaultOffset << "XACT_E_REPLAYREQUEST" << endl;
        cout << Utils::defaultOffsetDocInfo << "The COM+ Compensating Resource Manager has records it wishes to replay." << endl;
        break;
        case XACT_E_CONNECTION_REQUEST_DENIED:
        cout << Utils::defaultOffset << "XACT_E_CONNECTION_REQUEST_DENIED" << endl;
        cout << Utils::defaultOffsetDocInfo << "The request to connect to the specified transaction coordinator was denied." << endl;
        break;
        case XACT_E_TOOMANY_ENLISTMENTS:
        cout << Utils::defaultOffset << "XACT_E_TOOMANY_ENLISTMENTS" << endl;
        cout << Utils::defaultOffsetDocInfo << "The maximum number of enlistments for the specified transaction has been reached." << endl;
        break;
        case XACT_E_DUPLICATE_GUID:
        cout << Utils::defaultOffset << "XACT_E_DUPLICATE_GUID" << endl;
        cout << Utils::defaultOffsetDocInfo << "A resource manager with the same identifier is already registered with the specified transaction coordinator." << endl;
        break;
        case XACT_E_NOTSINGLEPHASE:
        cout << Utils::defaultOffset << "XACT_E_NOTSINGLEPHASE" << endl;
        cout << Utils::defaultOffsetDocInfo << "The prepare request given was not eligible for single-phase optimizations." << endl;
        break;
        case XACT_E_RECOVERYALREADYDONE:
        cout << Utils::defaultOffset << "XACT_E_RECOVERYALREADYDONE" << endl;
        cout << Utils::defaultOffsetDocInfo << "RecoveryComplete has already been called for the given resource manager." << endl;
        break;
        case XACT_E_PROTOCOL:
        cout << Utils::defaultOffset << "XACT_E_PROTOCOL" << endl;
        cout << Utils::defaultOffsetDocInfo << "The interface call made was incorrect for the current state of the protocol." << endl;
        break;
        case XACT_E_RM_FAILURE:
        cout << Utils::defaultOffset << "XACT_E_RM_FAILURE" << endl;
        cout << Utils::defaultOffsetDocInfo << "The xa_open call failed for the XA resource." << endl;
        break;
        case XACT_E_RECOVERY_FAILED:
        cout << Utils::defaultOffset << "XACT_E_RECOVERY_FAILED" << endl;
        cout << Utils::defaultOffsetDocInfo << "The xa_recover call failed for the XA resource." << endl;
        break;
        case XACT_E_LU_NOT_FOUND:
        cout << Utils::defaultOffset << "XACT_E_LU_NOT_FOUND" << endl;
        cout << Utils::defaultOffsetDocInfo << "The logical unit of work specified cannot be found." << endl;
        break;
        case XACT_E_DUPLICATE_LU:
        cout << Utils::defaultOffset << "XACT_E_DUPLICATE_LU" << endl;
        cout << Utils::defaultOffsetDocInfo << "The specified logical unit of work already exists." << endl;
        break;
        case XACT_E_LU_NOT_CONNECTED:
        cout << Utils::defaultOffset << "XACT_E_LU_NOT_CONNECTED" << endl;
        cout << Utils::defaultOffsetDocInfo << "Subordinate creation failed. The specified logical unit of work was not connected." << endl;
        break;
        case XACT_E_DUPLICATE_TRANSID:
        cout << Utils::defaultOffset << "XACT_E_DUPLICATE_TRANSID" << endl;
        cout << Utils::defaultOffsetDocInfo << "A transaction with the given identifier already exists." << endl;
        break;
        case XACT_E_LU_BUSY:
        cout << Utils::defaultOffset << "XACT_E_LU_BUSY" << endl;
        cout << Utils::defaultOffsetDocInfo << "The resource is in use." << endl;
        break;
        case XACT_E_LU_NO_RECOVERY_PROCESS:
        cout << Utils::defaultOffset << "XACT_E_LU_NO_RECOVERY_PROCESS" << endl;
        cout << Utils::defaultOffsetDocInfo << "The LU Recovery process is down." << endl;
        break;
        case XACT_E_LU_DOWN:
        cout << Utils::defaultOffset << "XACT_E_LU_DOWN" << endl;
        cout << Utils::defaultOffsetDocInfo << "The remote session was lost." << endl;
        break;
        case XACT_E_LU_RECOVERING:
        cout << Utils::defaultOffset << "XACT_E_LU_RECOVERING" << endl;
        cout << Utils::defaultOffsetDocInfo << "The resource is currently recovering." << endl;
        break;
        case XACT_E_LU_RECOVERY_MISMATCH:
        cout << Utils::defaultOffset << "XACT_E_LU_RECOVERY_MISMATCH" << endl;
        cout << Utils::defaultOffsetDocInfo << "There was a mismatch in driving recovery." << endl;
        break;
        case XACT_E_RM_UNAVAILABLE:
        cout << Utils::defaultOffset << "XACT_E_RM_UNAVAILABLE" << endl;
        cout << Utils::defaultOffsetDocInfo << "An error occurred with the XA resource." << endl;
        break;
        case CONTEXT_E_ABORTED:
        cout << Utils::defaultOffset << "CONTEXT_E_ABORTED" << endl;
        cout << Utils::defaultOffsetDocInfo << "The root transaction wanted to commit, but the transaction aborted." << endl;
        break;
        case CONTEXT_E_ABORTING:
        cout << Utils::defaultOffset << "CONTEXT_E_ABORTING" << endl;
        cout << Utils::defaultOffsetDocInfo << "The COM+ component on which the method call was made has a transaction that has already aborted or is in the process of aborting." << endl;
        break;
        case CONTEXT_E_NOCONTEXT:
        cout << Utils::defaultOffset << "CONTEXT_E_NOCONTEXT" << endl;
        cout << Utils::defaultOffsetDocInfo << "There is no Microsoft Transaction Server (MTS) object context." << endl;
        break;
        case CONTEXT_E_WOULD_DEADLOCK:
        cout << Utils::defaultOffset << "CONTEXT_E_WOULD_DEADLOCK" << endl;
        cout << Utils::defaultOffsetDocInfo << "The component is configured to use synchronization, and this method call would cause a deadlock to occur." << endl;
        break;
        case CONTEXT_E_SYNCH_TIMEOUT:
        cout << Utils::defaultOffset << "CONTEXT_E_SYNCH_TIMEOUT" << endl;
        cout << Utils::defaultOffsetDocInfo << "The component is configured to use synchronization, and a thread has timed out waiting to enter the context." << endl;
        break;
        case CONTEXT_E_OLDREF:
        cout << Utils::defaultOffset << "CONTEXT_E_OLDREF" << endl;
        cout << Utils::defaultOffsetDocInfo << "You made a method call on a COM+ component that has a transaction that has already committed or aborted." << endl;
        break;
        case CONTEXT_E_ROLENOTFOUND:
        cout << Utils::defaultOffset << "CONTEXT_E_ROLENOTFOUND" << endl;
        cout << Utils::defaultOffsetDocInfo << "The specified role was not configured for the application." << endl;
        break;
        case CONTEXT_E_TMNOTAVAILABLE:
        cout << Utils::defaultOffset << "CONTEXT_E_TMNOTAVAILABLE" << endl;
        cout << Utils::defaultOffsetDocInfo << "COM+ was unable to talk to the MSDTC." << endl;
        break;
        case CO_E_ACTIVATIONFAILED:
        cout << Utils::defaultOffset << "CO_E_ACTIVATIONFAILED" << endl;
        cout << Utils::defaultOffsetDocInfo << "An unexpected error occurred during COM+ activation." << endl;
        break;
        case CO_E_ACTIVATIONFAILED_EVENTLOGGED:
        cout << Utils::defaultOffset << "CO_E_ACTIVATIONFAILED_EVENTLOGGED" << endl;
        cout << Utils::defaultOffsetDocInfo << "COM+ activation failed. Check the event log for more information." << endl;
        break;
        case CO_E_ACTIVATIONFAILED_CATALOGERROR:
        cout << Utils::defaultOffset << "CO_E_ACTIVATIONFAILED_CATALOGERROR" << endl;
        cout << Utils::defaultOffsetDocInfo << "COM+ activation failed due to a catalog or configuration error." << endl;
        break;
        case CO_E_ACTIVATIONFAILED_TIMEOUT:
        cout << Utils::defaultOffset << "CO_E_ACTIVATIONFAILED_TIMEOUT" << endl;
        cout << Utils::defaultOffsetDocInfo << "COM+ activation failed because the activation could not be completed in the specified amount of time." << endl;
        break;
        case CO_E_INITIALIZATIONFAILED:
        cout << Utils::defaultOffset << "CO_E_INITIALIZATIONFAILED" << endl;
        cout << Utils::defaultOffsetDocInfo << "COM+ activation failed because an initialization function failed. Check the event log for more information." << endl;
        break;
        case CONTEXT_E_NOJIT:
        cout << Utils::defaultOffset << "CONTEXT_E_NOJIT" << endl;
        cout << Utils::defaultOffsetDocInfo << "The requested operation requires that just-in-time (JIT) be in the current context, and it is not." << endl;
        break;
        case CONTEXT_E_NOTRANSACTION:
        cout << Utils::defaultOffset << "CONTEXT_E_NOTRANSACTION" << endl;
        cout << Utils::defaultOffsetDocInfo << "The requested operation requires that the current context have a transaction, and it does not." << endl;
        break;
        case CO_E_THREADINGMODEL_CHANGED:
        cout << Utils::defaultOffset << "CO_E_THREADINGMODEL_CHANGED" << endl;
        cout << Utils::defaultOffsetDocInfo << "The components threading model has changed after install into a COM+ application. Re-install component." << endl;
        break;
        case CO_E_NOIISINTRINSICS:
        cout << Utils::defaultOffset << "CO_E_NOIISINTRINSICS" << endl;
        cout << Utils::defaultOffsetDocInfo << "Internet Information Services (IIS) intrinsics not available. Start your work with IIS." << endl;
        break;
        case CO_E_NOCOOKIES:
        cout << Utils::defaultOffset << "CO_E_NOCOOKIES" << endl;
        cout << Utils::defaultOffsetDocInfo << "An attempt to write a cookie failed." << endl;
        break;
        case CO_E_DBERROR:
        cout << Utils::defaultOffset << "CO_E_DBERROR" << endl;
        cout << Utils::defaultOffsetDocInfo << "An attempt to use a database generated a database-specific error." << endl;
        break;
        case CO_E_NOTPOOLED:
        cout << Utils::defaultOffset << "CO_E_NOTPOOLED" << endl;
        cout << Utils::defaultOffsetDocInfo << "The COM+ component you created must use object pooling to work." << endl;
        break;
        case CO_E_NOTCONSTRUCTED:
        cout << Utils::defaultOffset << "CO_E_NOTCONSTRUCTED" << endl;
        cout << Utils::defaultOffsetDocInfo << "The COM+ component you created must use object construction to work correctly." << endl;
        break;
        case CO_E_NOSYNCHRONIZATION:
        cout << Utils::defaultOffset << "CO_E_NOSYNCHRONIZATION" << endl;
        cout << Utils::defaultOffsetDocInfo << "The COM+ component requires synchronization, and it is not configured for it." << endl;
        break;
        case CO_E_ISOLEVELMISMATCH:
        cout << Utils::defaultOffset << "CO_E_ISOLEVELMISMATCH" << endl;
        cout << Utils::defaultOffsetDocInfo << "The TxIsolation Level property for the COM+ component being created is stronger than the TxIsolationLevel for the root." << endl;
        break;
        case CO_E_CALL_OUT_OF_TX_SCOPE_NOT_ALLOWED:
        cout << Utils::defaultOffset << "CO_E_CALL_OUT_OF_TX_SCOPE_NOT_ALLOWED" << endl;
        cout << Utils::defaultOffsetDocInfo << "The component attempted to make a cross-context call between invocations of EnterTransactionScope and ExitTransactionScope. This is not allowed. Cross-context calls cannot be made while inside a transaction scope." << endl;
        break;
        case CO_E_EXIT_TRANSACTION_SCOPE_NOT_CALLED:
        cout << Utils::defaultOffset << "CO_E_EXIT_TRANSACTION_SCOPE_NOT_CALLED" << endl;
        cout << Utils::defaultOffsetDocInfo << "The component made a call to EnterTransactionScope, but did not make a corresponding call to ExitTransactionScope before returning." << endl;
        break;
        case E_ACCESSDENIED:
        cout << Utils::defaultOffset << "E_ACCESSDENIED" << endl;
        cout << Utils::defaultOffsetDocInfo << "General access denied error." << endl;
        break;
        case E_OUTOFMEMORY:
        cout << Utils::defaultOffset << "E_OUTOFMEMORY" << endl;
        cout << Utils::defaultOffsetDocInfo << "The server does not have enough memory for the new channel." << endl;
        break;
        case ERROR_NOT_SUPPORTED:
        cout << Utils::defaultOffset << "ERROR_NOT_SUPPORTED" << endl;
        cout << Utils::defaultOffsetDocInfo << "The server cannot support a client request for a dynamic virtual channel." << endl;
        break;
        case E_INVALIDARG:
        cout << Utils::defaultOffset << "E_INVALIDARG" << endl;
        cout << Utils::defaultOffsetDocInfo << "One or more arguments are invalid." << endl;
        break;
        case ERROR_DISK_FULL:
        cout << Utils::defaultOffset << "ERROR_DISK_FULL" << endl;
        cout << Utils::defaultOffsetDocInfo << "There is not enough space on the disk." << endl;
        break;
        case CO_E_CLASS_CREATE_FAILED:
        cout << Utils::defaultOffset << "CO_E_CLASS_CREATE_FAILED" << endl;
        cout << Utils::defaultOffsetDocInfo << "Attempt to create a class object failed." << endl;
        break;
        case CO_E_SCM_ERROR:
        cout << Utils::defaultOffset << "CO_E_SCM_ERROR" << endl;
        cout << Utils::defaultOffsetDocInfo << "OLE service could not bind object." << endl;
        break;
        case CO_E_SCM_RPC_FAILURE:
        cout << Utils::defaultOffset << "CO_E_SCM_RPC_FAILURE" << endl;
        cout << Utils::defaultOffsetDocInfo << "RPC communication failed with OLE service." << endl;
        break;
        case CO_E_BAD_PATH:
        cout << Utils::defaultOffset << "CO_E_BAD_PATH" << endl;
        cout << Utils::defaultOffsetDocInfo << "Bad path to object." << endl;
        break;
        case CO_E_SERVER_EXEC_FAILURE:
        cout << Utils::defaultOffset << "CO_E_SERVER_EXEC_FAILURE" << endl;
        cout << Utils::defaultOffsetDocInfo << "Server execution failed." << endl;
        break;
        case CO_E_OBJSRV_RPC_FAILURE:
        cout << Utils::defaultOffset << "CO_E_OBJSRV_RPC_FAILURE" << endl;
        cout << Utils::defaultOffsetDocInfo << "OLE service could not communicate with the object server." << endl;
        break;
        case MK_E_NO_NORMALIZED:
        cout << Utils::defaultOffset << "MK_E_NO_NORMALIZED" << endl;
        cout << Utils::defaultOffsetDocInfo << "Moniker path could not be normalized." << endl;
        break;
        case CO_E_SERVER_STOPPING:
        cout << Utils::defaultOffset << "CO_E_SERVER_STOPPING" << endl;
        cout << Utils::defaultOffsetDocInfo << "Object server is stopping when OLE service contacts it." << endl;
        break;
        case MEM_E_INVALID_ROOT:
        cout << Utils::defaultOffset << "MEM_E_INVALID_ROOT" << endl;
        cout << Utils::defaultOffsetDocInfo << "An invalid root block pointer was specified." << endl;
        break;
        case MEM_E_INVALID_LINK:
        cout << Utils::defaultOffset << "MEM_E_INVALID_LINK" << endl;
        cout << Utils::defaultOffsetDocInfo << "An allocation chain contained an invalid link pointer." << endl;
        break;
        case MEM_E_INVALID_SIZE:
        cout << Utils::defaultOffset << "MEM_E_INVALID_SIZE" << endl;
        cout << Utils::defaultOffsetDocInfo << "The requested allocation size was too large." << endl;
        break;
        case CO_E_MISSING_DISPLAYNAME:
        cout << Utils::defaultOffset << "CO_E_MISSING_DISPLAYNAME" << endl;
        cout << Utils::defaultOffsetDocInfo << "The activation requires a display name to be present under the class identifier (CLSID) key." << endl;
        break;
        case CO_E_RUNAS_VALUE_MUST_BE_AAA:
        cout << Utils::defaultOffset << "CO_E_RUNAS_VALUE_MUST_BE_AAA" << endl;
        cout << Utils::defaultOffsetDocInfo << "The activation requires that the RunAs value for the application is Activate As Activator." << endl;
        break;
        case CO_E_ELEVATION_DISABLED:
        cout << Utils::defaultOffset << "CO_E_ELEVATION_DISABLED" << endl;
        cout << Utils::defaultOffsetDocInfo << "The class is not configured to support elevated activation." << endl;
        break;
        case NTE_BAD_UID:
        cout << Utils::defaultOffset << "NTE_BAD_UID" << endl;
        cout << Utils::defaultOffsetDocInfo << "Bad UID." << endl;
        break;
        case NTE_BAD_HASH:
        cout << Utils::defaultOffset << "NTE_BAD_HASH" << endl;
        cout << Utils::defaultOffsetDocInfo << "Bad hash." << endl;
        break;
        case NTE_BAD_KEY:
        cout << Utils::defaultOffset << "NTE_BAD_KEY" << endl;
        cout << Utils::defaultOffsetDocInfo << "Bad key." << endl;
        break;
        case NTE_BAD_LEN:
        cout << Utils::defaultOffset << "NTE_BAD_LEN" << endl;
        cout << Utils::defaultOffsetDocInfo << "Bad length." << endl;
        break;
        case NTE_BAD_DATA:
        cout << Utils::defaultOffset << "NTE_BAD_DATA" << endl;
        cout << Utils::defaultOffsetDocInfo << "Bad data." << endl;
        break;
        case NTE_BAD_SIGNATURE:
        cout << Utils::defaultOffset << "NTE_BAD_SIGNATURE" << endl;
        cout << Utils::defaultOffsetDocInfo << "Invalid signature." << endl;
        break;
        case NTE_BAD_VER:
        cout << Utils::defaultOffset << "NTE_BAD_VER" << endl;
        cout << Utils::defaultOffsetDocInfo << "Bad version of provider." << endl;
        break;
        case NTE_BAD_ALGID:
        cout << Utils::defaultOffset << "NTE_BAD_ALGID" << endl;
        cout << Utils::defaultOffsetDocInfo << "Invalid algorithm specified." << endl;
        break;
        case NTE_BAD_FLAGS:
        cout << Utils::defaultOffset << "NTE_BAD_FLAGS" << endl;
        cout << Utils::defaultOffsetDocInfo << "Invalid flags specified." << endl;
        break;
        case NTE_BAD_TYPE:
        cout << Utils::defaultOffset << "NTE_BAD_TYPE" << endl;
        cout << Utils::defaultOffsetDocInfo << "Invalid type specified." << endl;
        break;
        case NTE_BAD_KEY_STATE:
        cout << Utils::defaultOffset << "NTE_BAD_KEY_STATE" << endl;
        cout << Utils::defaultOffsetDocInfo << "Key not valid for use in specified state." << endl;
        break;
        case NTE_BAD_HASH_STATE:
        cout << Utils::defaultOffset << "NTE_BAD_HASH_STATE" << endl;
        cout << Utils::defaultOffsetDocInfo << "Hash not valid for use in specified state." << endl;
        break;
        case NTE_NO_KEY:
        cout << Utils::defaultOffset << "NTE_NO_KEY" << endl;
        cout << Utils::defaultOffsetDocInfo << "Key does not exist." << endl;
        break;
        case NTE_NO_MEMORY:
        cout << Utils::defaultOffset << "NTE_NO_MEMORY" << endl;
        cout << Utils::defaultOffsetDocInfo << "Insufficient memory available for the operation." << endl;
        break;
        case NTE_EXISTS:
        cout << Utils::defaultOffset << "NTE_EXISTS" << endl;
        cout << Utils::defaultOffsetDocInfo << "Object already exists." << endl;
        break;
        case NTE_PERM:
        cout << Utils::defaultOffset << "NTE_PERM" << endl;
        cout << Utils::defaultOffsetDocInfo << "Access denied." << endl;
        break;
        case NTE_NOT_FOUND:
        cout << Utils::defaultOffset << "NTE_NOT_FOUND" << endl;
        cout << Utils::defaultOffsetDocInfo << "Object was not found." << endl;
        break;
        case NTE_DOUBLE_ENCRYPT:
        cout << Utils::defaultOffset << "NTE_DOUBLE_ENCRYPT" << endl;
        cout << Utils::defaultOffsetDocInfo << "Data already encrypted." << endl;
        break;
        case NTE_BAD_PROVIDER:
        cout << Utils::defaultOffset << "NTE_BAD_PROVIDER" << endl;
        cout << Utils::defaultOffsetDocInfo << "Invalid provider specified." << endl;
        break;
        case NTE_BAD_PROV_TYPE:
        cout << Utils::defaultOffset << "NTE_BAD_PROV_TYPE" << endl;
        cout << Utils::defaultOffsetDocInfo << "Invalid provider type specified." << endl;
        break;
        case NTE_BAD_PUBLIC_KEY:
        cout << Utils::defaultOffset << "NTE_BAD_PUBLIC_KEY" << endl;
        cout << Utils::defaultOffsetDocInfo << "Provider's public key is invalid." << endl;
        break;
        case NTE_BAD_KEYSET:
        cout << Utils::defaultOffset << "NTE_BAD_KEYSET" << endl;
        cout << Utils::defaultOffsetDocInfo << "Key set does not exist." << endl;
        break;
        case NTE_PROV_TYPE_NOT_DEF:
        cout << Utils::defaultOffset << "NTE_PROV_TYPE_NOT_DEF" << endl;
        cout << Utils::defaultOffsetDocInfo << "Provider type not defined." << endl;
        break;
        case NTE_PROV_TYPE_ENTRY_BAD:
        cout << Utils::defaultOffset << "NTE_PROV_TYPE_ENTRY_BAD" << endl;
        cout << Utils::defaultOffsetDocInfo << "The provider type, as registered, is invalid." << endl;
        break;
        case NTE_KEYSET_NOT_DEF:
        cout << Utils::defaultOffset << "NTE_KEYSET_NOT_DEF" << endl;
        cout << Utils::defaultOffsetDocInfo << "The key set is not defined." << endl;
        break;
        case NTE_KEYSET_ENTRY_BAD:
        cout << Utils::defaultOffset << "NTE_KEYSET_ENTRY_BAD" << endl;
        cout << Utils::defaultOffsetDocInfo << "The key set, as registered, is invalid." << endl;
        break;
        case NTE_PROV_TYPE_NO_MATCH:
        cout << Utils::defaultOffset << "NTE_PROV_TYPE_NO_MATCH" << endl;
        cout << Utils::defaultOffsetDocInfo << "Provider type does not match registered value." << endl;
        break;
        case NTE_SIGNATURE_FILE_BAD:
        cout << Utils::defaultOffset << "NTE_SIGNATURE_FILE_BAD" << endl;
        cout << Utils::defaultOffsetDocInfo << "The digital signature file is corrupt." << endl;
        break;
        case NTE_PROVIDER_DLL_FAIL:
        cout << Utils::defaultOffset << "NTE_PROVIDER_DLL_FAIL" << endl;
        cout << Utils::defaultOffsetDocInfo << "Provider DLL failed to initialize correctly." << endl;
        break;
        case NTE_PROV_DLL_NOT_FOUND:
        cout << Utils::defaultOffset << "NTE_PROV_DLL_NOT_FOUND" << endl;
        cout << Utils::defaultOffsetDocInfo << "Provider DLL could not be found." << endl;
        break;
        case NTE_BAD_KEYSET_PARAM:
        cout << Utils::defaultOffset << "NTE_BAD_KEYSET_PARAM" << endl;
        cout << Utils::defaultOffsetDocInfo << "The keyset parameter is invalid." << endl;
        break;
        case NTE_FAIL:
        cout << Utils::defaultOffset << "NTE_FAIL" << endl;
        cout << Utils::defaultOffsetDocInfo << "An internal error occurred." << endl;
        break;
        case NTE_SYS_ERR:
        cout << Utils::defaultOffset << "NTE_SYS_ERR" << endl;
        cout << Utils::defaultOffsetDocInfo << "A base error occurred." << endl;
        break;
        case NTE_SILENT_CONTEXT:
        cout << Utils::defaultOffset << "NTE_SILENT_CONTEXT" << endl;
        cout << Utils::defaultOffsetDocInfo << "Provider could not perform the action because the context was acquired as silent." << endl;
        break;
        case NTE_TOKEN_KEYSET_STORAGE_FULL:
        cout << Utils::defaultOffset << "NTE_TOKEN_KEYSET_STORAGE_FULL" << endl;
        cout << Utils::defaultOffsetDocInfo << "The security token does not have storage space available for an additional container." << endl;
        break;
        case NTE_TEMPORARY_PROFILE:
        cout << Utils::defaultOffset << "NTE_TEMPORARY_PROFILE" << endl;
        cout << Utils::defaultOffsetDocInfo << "The profile for the user is a temporary profile." << endl;
        break;
        case NTE_FIXEDPARAMETER:
        cout << Utils::defaultOffset << "NTE_FIXEDPARAMETER" << endl;
        cout << Utils::defaultOffsetDocInfo << "The key parameters could not be set because the configuration service provider (CSP) uses fixed parameters." << endl;
        break;
        case NTE_INVALID_HANDLE:
        cout << Utils::defaultOffset << "NTE_INVALID_HANDLE" << endl;
        cout << Utils::defaultOffsetDocInfo << "The supplied handle is invalid." << endl;
        break;
        case NTE_INVALID_PARAMETER:
        cout << Utils::defaultOffset << "NTE_INVALID_PARAMETER" << endl;
        cout << Utils::defaultOffsetDocInfo << "The parameter is incorrect." << endl;
        break;
        case NTE_BUFFER_TOO_SMALL:
        cout << Utils::defaultOffset << "NTE_BUFFER_TOO_SMALL" << endl;
        cout << Utils::defaultOffsetDocInfo << "The buffer supplied to a function was too small." << endl;
        break;
        case NTE_NOT_SUPPORTED:
        cout << Utils::defaultOffset << "NTE_NOT_SUPPORTED" << endl;
        cout << Utils::defaultOffsetDocInfo << "The requested operation is not supported." << endl;
        break;
        case NTE_NO_MORE_ITEMS:
        cout << Utils::defaultOffset << "NTE_NO_MORE_ITEMS" << endl;
        cout << Utils::defaultOffsetDocInfo << "No more data is available." << endl;
        break;
        case NTE_BUFFERS_OVERLAP:
        cout << Utils::defaultOffset << "NTE_BUFFERS_OVERLAP" << endl;
        cout << Utils::defaultOffsetDocInfo << "The supplied buffers overlap incorrectly." << endl;
        break;
        case NTE_DECRYPTION_FAILURE:
        cout << Utils::defaultOffset << "NTE_DECRYPTION_FAILURE" << endl;
        cout << Utils::defaultOffsetDocInfo << "The specified data could not be decrypted." << endl;
        break;
        case NTE_INTERNAL_ERROR:
        cout << Utils::defaultOffset << "NTE_INTERNAL_ERROR" << endl;
        cout << Utils::defaultOffsetDocInfo << "An internal consistency check failed." << endl;
        break;
        case NTE_UI_REQUIRED:
        cout << Utils::defaultOffset << "NTE_UI_REQUIRED" << endl;
        cout << Utils::defaultOffsetDocInfo << "This operation requires input from the user." << endl;
        break;
        case NTE_HMAC_NOT_SUPPORTED:
        cout << Utils::defaultOffset << "NTE_HMAC_NOT_SUPPORTED" << endl;
        cout << Utils::defaultOffsetDocInfo << "The cryptographic provider does not support Hash Message Authentication Code (HMAC)." << endl;
        break;
        case SEC_E_INSUFFICIENT_MEMORY:
        cout << Utils::defaultOffset << "SEC_E_INSUFFICIENT_MEMORY" << endl;
        cout << Utils::defaultOffsetDocInfo << "Not enough memory is available to complete this request." << endl;
        break;
        case SEC_E_INVALID_HANDLE:
        cout << Utils::defaultOffset << "SEC_E_INVALID_HANDLE" << endl;
        cout << Utils::defaultOffsetDocInfo << "The handle specified is invalid." << endl;
        break;
        case SEC_E_UNSUPPORTED_FUNCTION:
        cout << Utils::defaultOffset << "SEC_E_UNSUPPORTED_FUNCTION" << endl;
        cout << Utils::defaultOffsetDocInfo << "The function requested is not supported." << endl;
        break;
        case SEC_E_TARGET_UNKNOWN:
        cout << Utils::defaultOffset << "SEC_E_TARGET_UNKNOWN" << endl;
        cout << Utils::defaultOffsetDocInfo << "The specified target is unknown or unreachable." << endl;
        break;
        case SEC_E_INTERNAL_ERROR:
        cout << Utils::defaultOffset << "SEC_E_INTERNAL_ERROR" << endl;
        cout << Utils::defaultOffsetDocInfo << "The Local Security Authority (LSA) cannot be contacted." << endl;
        break;
        case SEC_E_SECPKG_NOT_FOUND:
        cout << Utils::defaultOffset << "SEC_E_SECPKG_NOT_FOUND" << endl;
        cout << Utils::defaultOffsetDocInfo << "The requested security package does not exist." << endl;
        break;
        case SEC_E_NOT_OWNER:
        cout << Utils::defaultOffset << "SEC_E_NOT_OWNER" << endl;
        cout << Utils::defaultOffsetDocInfo << "The caller is not the owner of the desired credentials." << endl;
        break;
        case SEC_E_CANNOT_INSTALL:
        cout << Utils::defaultOffset << "SEC_E_CANNOT_INSTALL" << endl;
        cout << Utils::defaultOffsetDocInfo << "The security package failed to initialize and cannot be installed." << endl;
        break;
        case SEC_E_INVALID_TOKEN:
        cout << Utils::defaultOffset << "SEC_E_INVALID_TOKEN" << endl;
        cout << Utils::defaultOffsetDocInfo << "The token supplied to the function is invalid." << endl;
        break;
        case SEC_E_CANNOT_PACK:
        cout << Utils::defaultOffset << "SEC_E_CANNOT_PACK" << endl;
        cout << Utils::defaultOffsetDocInfo << "The security package is not able to marshal the logon buffer, so the logon attempt has failed." << endl;
        break;
        case SEC_E_QOP_NOT_SUPPORTED:
        cout << Utils::defaultOffset << "SEC_E_QOP_NOT_SUPPORTED" << endl;
        cout << Utils::defaultOffsetDocInfo << "The per-message quality of protection is not supported by the security package." << endl;
        break;
        case SEC_E_NO_IMPERSONATION:
        cout << Utils::defaultOffset << "SEC_E_NO_IMPERSONATION" << endl;
        cout << Utils::defaultOffsetDocInfo << "The security context does not allow impersonation of the client." << endl;
        break;
        case SEC_E_LOGON_DENIED:
        cout << Utils::defaultOffset << "SEC_E_LOGON_DENIED" << endl;
        cout << Utils::defaultOffsetDocInfo << "The logon attempt failed." << endl;
        break;
        case SEC_E_UNKNOWN_CREDENTIALS:
        cout << Utils::defaultOffset << "SEC_E_UNKNOWN_CREDENTIALS" << endl;
        cout << Utils::defaultOffsetDocInfo << "The credentials supplied to the package were not recognized." << endl;
        break;
        case SEC_E_NO_CREDENTIALS:
        cout << Utils::defaultOffset << "SEC_E_NO_CREDENTIALS" << endl;
        cout << Utils::defaultOffsetDocInfo << "No credentials are available in the security package." << endl;
        break;
        case SEC_E_MESSAGE_ALTERED:
        cout << Utils::defaultOffset << "SEC_E_MESSAGE_ALTERED" << endl;
        cout << Utils::defaultOffsetDocInfo << "The message or signature supplied for verification has been altered." << endl;
        break;
        case SEC_E_OUT_OF_SEQUENCE:
        cout << Utils::defaultOffset << "SEC_E_OUT_OF_SEQUENCE" << endl;
        cout << Utils::defaultOffsetDocInfo << "The message supplied for verification is out of sequence." << endl;
        break;
        case SEC_E_NO_AUTHENTICATING_AUTHORITY:
        cout << Utils::defaultOffset << "SEC_E_NO_AUTHENTICATING_AUTHORITY" << endl;
        cout << Utils::defaultOffsetDocInfo << "No authority could be contacted for authentication." << endl;
        break;
        case SEC_E_BAD_PKGID:
        cout << Utils::defaultOffset << "SEC_E_BAD_PKGID" << endl;
        cout << Utils::defaultOffsetDocInfo << "The requested security package does not exist." << endl;
        break;
        case SEC_E_CONTEXT_EXPIRED:
        cout << Utils::defaultOffset << "SEC_E_CONTEXT_EXPIRED" << endl;
        cout << Utils::defaultOffsetDocInfo << "The context has expired and can no longer be used." << endl;
        break;
        case SEC_E_INCOMPLETE_MESSAGE:
        cout << Utils::defaultOffset << "SEC_E_INCOMPLETE_MESSAGE" << endl;
        cout << Utils::defaultOffsetDocInfo << "The supplied message is incomplete. The signature was not verified." << endl;
        break;
        case SEC_E_INCOMPLETE_CREDENTIALS:
        cout << Utils::defaultOffset << "SEC_E_INCOMPLETE_CREDENTIALS" << endl;
        cout << Utils::defaultOffsetDocInfo << "The credentials supplied were not complete and could not be verified. The context could not be initialized." << endl;
        break;
        case SEC_E_BUFFER_TOO_SMALL:
        cout << Utils::defaultOffset << "SEC_E_BUFFER_TOO_SMALL" << endl;
        cout << Utils::defaultOffsetDocInfo << "The buffers supplied to a function was too small." << endl;
        break;
        case SEC_E_WRONG_PRINCIPAL:
        cout << Utils::defaultOffset << "SEC_E_WRONG_PRINCIPAL" << endl;
        cout << Utils::defaultOffsetDocInfo << "The target principal name is incorrect." << endl;
        break;
        case SEC_E_TIME_SKEW:
        cout << Utils::defaultOffset << "SEC_E_TIME_SKEW" << endl;
        cout << Utils::defaultOffsetDocInfo << "The clocks on the client and server machines are skewed." << endl;
        break;
        case SEC_E_UNTRUSTED_ROOT:
        cout << Utils::defaultOffset << "SEC_E_UNTRUSTED_ROOT" << endl;
        cout << Utils::defaultOffsetDocInfo << "The certificate chain was issued by an authority that is not trusted." << endl;
        break;
        case SEC_E_ILLEGAL_MESSAGE:
        cout << Utils::defaultOffset << "SEC_E_ILLEGAL_MESSAGE" << endl;
        cout << Utils::defaultOffsetDocInfo << "The message received was unexpected or badly formatted." << endl;
        break;
        case SEC_E_CERT_UNKNOWN:
        cout << Utils::defaultOffset << "SEC_E_CERT_UNKNOWN" << endl;
        cout << Utils::defaultOffsetDocInfo << "An unknown error occurred while processing the certificate." << endl;
        break;
        case SEC_E_CERT_EXPIRED:
        cout << Utils::defaultOffset << "SEC_E_CERT_EXPIRED" << endl;
        cout << Utils::defaultOffsetDocInfo << "The received certificate has expired." << endl;
        break;
        case SEC_E_ENCRYPT_FAILURE:
        cout << Utils::defaultOffset << "SEC_E_ENCRYPT_FAILURE" << endl;
        cout << Utils::defaultOffsetDocInfo << "The specified data could not be encrypted." << endl;
        break;
        case SEC_E_DECRYPT_FAILURE:
        cout << Utils::defaultOffset << "SEC_E_DECRYPT_FAILURE" << endl;
        cout << Utils::defaultOffsetDocInfo << "The specified data could not be decrypted." << endl;
        break;
        case SEC_E_ALGORITHM_MISMATCH:
        cout << Utils::defaultOffset << "SEC_E_ALGORITHM_MISMATCH" << endl;
        cout << Utils::defaultOffsetDocInfo << "The client and server cannot communicate because they do not possess a common algorithm." << endl;
        break;
        case SEC_E_SECURITY_QOS_FAILED:
        cout << Utils::defaultOffset << "SEC_E_SECURITY_QOS_FAILED" << endl;
        cout << Utils::defaultOffsetDocInfo << "The security context could not be established due to a failure in the requested quality of service (for example, mutual authentication or delegation)." << endl;
        break;
        case SEC_E_UNFINISHED_CONTEXT_DELETED:
        cout << Utils::defaultOffset << "SEC_E_UNFINISHED_CONTEXT_DELETED" << endl;
        cout << Utils::defaultOffsetDocInfo << "A security context was deleted before the context was completed. This is considered a logon failure." << endl;
        break;
        case SEC_E_NO_TGT_REPLY:
        cout << Utils::defaultOffset << "SEC_E_NO_TGT_REPLY" << endl;
        cout << Utils::defaultOffsetDocInfo << "The client is trying to negotiate a context and the server requires user-to-user but did not send a ticket granting ticket (TGT) reply." << endl;
        break;
        case SEC_E_NO_IP_ADDRESSES:
        cout << Utils::defaultOffset << "SEC_E_NO_IP_ADDRESSES" << endl;
        cout << Utils::defaultOffsetDocInfo << "Unable to accomplish the requested task because the local machine does not have an IP addresses." << endl;
        break;
        case SEC_E_WRONG_CREDENTIAL_HANDLE:
        cout << Utils::defaultOffset << "SEC_E_WRONG_CREDENTIAL_HANDLE" << endl;
        cout << Utils::defaultOffsetDocInfo << "The supplied credential handle does not match the credential associated with the security context." << endl;
        break;
        case SEC_E_CRYPTO_SYSTEM_INVALID:
        cout << Utils::defaultOffset << "SEC_E_CRYPTO_SYSTEM_INVALID" << endl;
        cout << Utils::defaultOffsetDocInfo << "The cryptographic system or checksum function is invalid because a required function is unavailable." << endl;
        break;
        case SEC_E_MAX_REFERRALS_EXCEEDED:
        cout << Utils::defaultOffset << "SEC_E_MAX_REFERRALS_EXCEEDED" << endl;
        cout << Utils::defaultOffsetDocInfo << "The number of maximum ticket referrals has been exceeded." << endl;
        break;
        case SEC_E_MUST_BE_KDC:
        cout << Utils::defaultOffset << "SEC_E_MUST_BE_KDC" << endl;
        cout << Utils::defaultOffsetDocInfo << "The local machine must be a Kerberos domain controller (KDC), and it is not." << endl;
        break;
        case SEC_E_STRONG_CRYPTO_NOT_SUPPORTED:
        cout << Utils::defaultOffset << "SEC_E_STRONG_CRYPTO_NOT_SUPPORTED" << endl;
        cout << Utils::defaultOffsetDocInfo << "The other end of the security negotiation requires strong cryptographics, but it is not supported on the local machine." << endl;
        break;
        case SEC_E_TOO_MANY_PRINCIPALS:
        cout << Utils::defaultOffset << "SEC_E_TOO_MANY_PRINCIPALS" << endl;
        cout << Utils::defaultOffsetDocInfo << "The KDC reply contained more than one principal name." << endl;
        break;
        case SEC_E_NO_PA_DATA:
        cout << Utils::defaultOffset << "SEC_E_NO_PA_DATA" << endl;
        cout << Utils::defaultOffsetDocInfo << "Expected to find PA data for a hint of what etype to use, but it was not found." << endl;
        break;
        case SEC_E_PKINIT_NAME_MISMATCH:
        cout << Utils::defaultOffset << "SEC_E_PKINIT_NAME_MISMATCH" << endl;
        cout << Utils::defaultOffsetDocInfo << "The client certificate does not contain a valid user principal name (UPN), or does not match the client name in the logon request. Contact your administrator." << endl;
        break;
        case SEC_E_SMARTCARD_LOGON_REQUIRED:
        cout << Utils::defaultOffset << "SEC_E_SMARTCARD_LOGON_REQUIRED" << endl;
        cout << Utils::defaultOffsetDocInfo << "Smart card logon is required and was not used." << endl;
        break;
        case SEC_E_SHUTDOWN_IN_PROGRESS:
        cout << Utils::defaultOffset << "SEC_E_SHUTDOWN_IN_PROGRESS" << endl;
        cout << Utils::defaultOffsetDocInfo << "A system shutdown is in progress." << endl;
        break;
        case SEC_E_KDC_INVALID_REQUEST:
        cout << Utils::defaultOffset << "SEC_E_KDC_INVALID_REQUEST" << endl;
        cout << Utils::defaultOffsetDocInfo << "An invalid request was sent to the KDC." << endl;
        break;
        case SEC_E_KDC_UNABLE_TO_REFER:
        cout << Utils::defaultOffset << "SEC_E_KDC_UNABLE_TO_REFER" << endl;
        cout << Utils::defaultOffsetDocInfo << "The KDC was unable to generate a referral for the service requested." << endl;
        break;
        case SEC_E_KDC_UNKNOWN_ETYPE:
        cout << Utils::defaultOffset << "SEC_E_KDC_UNKNOWN_ETYPE" << endl;
        cout << Utils::defaultOffsetDocInfo << "The encryption type requested is not supported by the KDC." << endl;
        break;
        case SEC_E_UNSUPPORTED_PREAUTH:
        cout << Utils::defaultOffset << "SEC_E_UNSUPPORTED_PREAUTH" << endl;
        cout << Utils::defaultOffsetDocInfo << "An unsupported pre-authentication mechanism was presented to the Kerberos package." << endl;
        break;
        case SEC_E_DELEGATION_REQUIRED:
        cout << Utils::defaultOffset << "SEC_E_DELEGATION_REQUIRED" << endl;
        cout << Utils::defaultOffsetDocInfo << "The requested operation cannot be completed. The computer must be trusted for delegation, and the current user account must be configured to allow delegation." << endl;
        break;
        case SEC_E_BAD_BINDINGS:
        cout << Utils::defaultOffset << "SEC_E_BAD_BINDINGS" << endl;
        cout << Utils::defaultOffsetDocInfo << "Client's supplied Security Support Provider Interface (SSPI) channel bindings were incorrect." << endl;
        break;
        case SEC_E_MULTIPLE_ACCOUNTS:
        cout << Utils::defaultOffset << "SEC_E_MULTIPLE_ACCOUNTS" << endl;
        cout << Utils::defaultOffsetDocInfo << "The received certificate was mapped to multiple accounts." << endl;
        break;
        case SEC_E_NO_KERB_KEY:
        cout << Utils::defaultOffset << "SEC_E_NO_KERB_KEY" << endl;
        cout << Utils::defaultOffsetDocInfo << "No Kerberos key was found." << endl;
        break;
        case SEC_E_CERT_WRONG_USAGE:
        cout << Utils::defaultOffset << "SEC_E_CERT_WRONG_USAGE" << endl;
        cout << Utils::defaultOffsetDocInfo << "The certificate is not valid for the requested usage." << endl;
        break;
        case SEC_E_DOWNGRADE_DETECTED:
        cout << Utils::defaultOffset << "SEC_E_DOWNGRADE_DETECTED" << endl;
        cout << Utils::defaultOffsetDocInfo << "The system detected a possible attempt to compromise security. Ensure that you can contact the server that authenticated you." << endl;
        break;
        case SEC_E_SMARTCARD_CERT_REVOKED:
        cout << Utils::defaultOffset << "SEC_E_SMARTCARD_CERT_REVOKED" << endl;
        cout << Utils::defaultOffsetDocInfo << "The smart card certificate used for authentication has been revoked. Contact your system administrator. The event log might contain additional information." << endl;
        break;
        case SEC_E_ISSUING_CA_UNTRUSTED:
        cout << Utils::defaultOffset << "SEC_E_ISSUING_CA_UNTRUSTED" << endl;
        cout << Utils::defaultOffsetDocInfo << "An untrusted certification authority (CA) was detected while processing the smart card certificate used for authentication. Contact your system administrator." << endl;
        break;
        case SEC_E_REVOCATION_OFFLINE_C:
        cout << Utils::defaultOffset << "SEC_E_REVOCATION_OFFLINE_C" << endl;
        cout << Utils::defaultOffsetDocInfo << "The revocation status of the smart card certificate used for authentication could not be determined. Contact your system administrator." << endl;
        break;
        case SEC_E_PKINIT_CLIENT_FAILURE:
        cout << Utils::defaultOffset << "SEC_E_PKINIT_CLIENT_FAILURE" << endl;
        cout << Utils::defaultOffsetDocInfo << "The smart card certificate used for authentication was not trusted. Contact your system administrator." << endl;
        break;
        case SEC_E_SMARTCARD_CERT_EXPIRED:
        cout << Utils::defaultOffset << "SEC_E_SMARTCARD_CERT_EXPIRED" << endl;
        cout << Utils::defaultOffsetDocInfo << "The smart card certificate used for authentication has expired. Contact your system administrator." << endl;
        break;
        case SEC_E_NO_S4U_PROT_SUPPORT:
        cout << Utils::defaultOffset << "SEC_E_NO_S4U_PROT_SUPPORT" << endl;
        cout << Utils::defaultOffsetDocInfo << "The Kerberos subsystem encountered an error. A service for user protocol requests was made against a domain controller that does not support services for users." << endl;
        break;
        case SEC_E_CROSSREALM_DELEGATION_FAILURE:
        cout << Utils::defaultOffset << "SEC_E_CROSSREALM_DELEGATION_FAILURE" << endl;
        cout << Utils::defaultOffsetDocInfo << "An attempt was made by this server to make a Kerberos-constrained delegation request for a target outside the server's realm. This is not supported and indicates a misconfiguration on this server's allowed-to-delegate-to list. Contact your administrator." << endl;
        break;
        case SEC_E_REVOCATION_OFFLINE_KDC:
        cout << Utils::defaultOffset << "SEC_E_REVOCATION_OFFLINE_KDC" << endl;
        cout << Utils::defaultOffsetDocInfo << "The revocation status of the domain controller certificate used for smart card authentication could not be determined. The system event log contains additional information. Contact your system administrator." << endl;
        break;
        case SEC_E_ISSUING_CA_UNTRUSTED_KDC:
        cout << Utils::defaultOffset << "SEC_E_ISSUING_CA_UNTRUSTED_KDC" << endl;
        cout << Utils::defaultOffsetDocInfo << "An untrusted CA was detected while processing the domain controller certificate used for authentication. The system event log contains additional information. Contact your system administrator." << endl;
        break;
        case SEC_E_KDC_CERT_EXPIRED:
        cout << Utils::defaultOffset << "SEC_E_KDC_CERT_EXPIRED" << endl;
        cout << Utils::defaultOffsetDocInfo << "The domain controller certificate used for smart card logon has expired. Contact your system administrator with the contents of your system event log." << endl;
        break;
        case SEC_E_KDC_CERT_REVOKED:
        cout << Utils::defaultOffset << "SEC_E_KDC_CERT_REVOKED" << endl;
        cout << Utils::defaultOffsetDocInfo << "The domain controller certificate used for smart card logon has been revoked. Contact your system administrator with the contents of your system event log." << endl;
        break;
        case SEC_E_INVALID_PARAMETER:
        cout << Utils::defaultOffset << "SEC_E_INVALID_PARAMETER" << endl;
        cout << Utils::defaultOffsetDocInfo << "One or more of the parameters passed to the function were invalid." << endl;
        break;
        case SEC_E_DELEGATION_POLICY:
        cout << Utils::defaultOffset << "SEC_E_DELEGATION_POLICY" << endl;
        cout << Utils::defaultOffsetDocInfo << "The client policy does not allow credential delegation to the target server." << endl;
        break;
        case SEC_E_POLICY_NLTM_ONLY:
        cout << Utils::defaultOffset << "SEC_E_POLICY_NLTM_ONLY" << endl;
        cout << Utils::defaultOffsetDocInfo << "The client policy does not allow credential delegation to the target server with NLTM only authentication." << endl;
        break;
        case CRYPT_E_MSG_ERROR:
        cout << Utils::defaultOffset << "CRYPT_E_MSG_ERROR" << endl;
        cout << Utils::defaultOffsetDocInfo << "An error occurred while performing an operation on a cryptographic message." << endl;
        break;
        case CRYPT_E_UNKNOWN_ALGO:
        cout << Utils::defaultOffset << "CRYPT_E_UNKNOWN_ALGO" << endl;
        cout << Utils::defaultOffsetDocInfo << "Unknown cryptographic algorithm." << endl;
        break;
        case CRYPT_E_OID_FORMAT:
        cout << Utils::defaultOffset << "CRYPT_E_OID_FORMAT" << endl;
        cout << Utils::defaultOffsetDocInfo << "The object identifier is poorly formatted." << endl;
        break;
        case CRYPT_E_INVALID_MSG_TYPE:
        cout << Utils::defaultOffset << "CRYPT_E_INVALID_MSG_TYPE" << endl;
        cout << Utils::defaultOffsetDocInfo << "Invalid cryptographic message type." << endl;
        break;
        case CRYPT_E_UNEXPECTED_ENCODING:
        cout << Utils::defaultOffset << "CRYPT_E_UNEXPECTED_ENCODING" << endl;
        cout << Utils::defaultOffsetDocInfo << "Unexpected cryptographic message encoding." << endl;
        break;
        case CRYPT_E_AUTH_ATTR_MISSING:
        cout << Utils::defaultOffset << "CRYPT_E_AUTH_ATTR_MISSING" << endl;
        cout << Utils::defaultOffsetDocInfo << "The cryptographic message does not contain an expected authenticated attribute." << endl;
        break;
        case CRYPT_E_HASH_VALUE:
        cout << Utils::defaultOffset << "CRYPT_E_HASH_VALUE" << endl;
        cout << Utils::defaultOffsetDocInfo << "The hash value is not correct." << endl;
        break;
        case CRYPT_E_INVALID_INDEX:
        cout << Utils::defaultOffset << "CRYPT_E_INVALID_INDEX" << endl;
        cout << Utils::defaultOffsetDocInfo << "The index value is not valid." << endl;
        break;
        case CRYPT_E_ALREADY_DECRYPTED:
        cout << Utils::defaultOffset << "CRYPT_E_ALREADY_DECRYPTED" << endl;
        cout << Utils::defaultOffsetDocInfo << "The content of the cryptographic message has already been decrypted." << endl;
        break;
        case CRYPT_E_NOT_DECRYPTED:
        cout << Utils::defaultOffset << "CRYPT_E_NOT_DECRYPTED" << endl;
        cout << Utils::defaultOffsetDocInfo << "The content of the cryptographic message has not been decrypted yet." << endl;
        break;
        case CRYPT_E_RECIPIENT_NOT_FOUND:
        cout << Utils::defaultOffset << "CRYPT_E_RECIPIENT_NOT_FOUND" << endl;
        cout << Utils::defaultOffsetDocInfo << "The enveloped-data message does not contain the specified recipient." << endl;
        break;
        case CRYPT_E_CONTROL_TYPE:
        cout << Utils::defaultOffset << "CRYPT_E_CONTROL_TYPE" << endl;
        cout << Utils::defaultOffsetDocInfo << "Invalid control type." << endl;
        break;
        case CRYPT_E_ISSUER_SERIALNUMBER:
        cout << Utils::defaultOffset << "CRYPT_E_ISSUER_SERIALNUMBER" << endl;
        cout << Utils::defaultOffsetDocInfo << "Invalid issuer or serial number." << endl;
        break;
        case CRYPT_E_SIGNER_NOT_FOUND:
        cout << Utils::defaultOffset << "CRYPT_E_SIGNER_NOT_FOUND" << endl;
        cout << Utils::defaultOffsetDocInfo << "Cannot find the original signer." << endl;
        break;
        case CRYPT_E_ATTRIBUTES_MISSING:
        cout << Utils::defaultOffset << "CRYPT_E_ATTRIBUTES_MISSING" << endl;
        cout << Utils::defaultOffsetDocInfo << "The cryptographic message does not contain all of the requested attributes." << endl;
        break;
        case CRYPT_E_STREAM_MSG_NOT_READY:
        cout << Utils::defaultOffset << "CRYPT_E_STREAM_MSG_NOT_READY" << endl;
        cout << Utils::defaultOffsetDocInfo << "The streamed cryptographic message is not ready to return data." << endl;
        break;
        case CRYPT_E_STREAM_INSUFFICIENT_DATA:
        cout << Utils::defaultOffset << "CRYPT_E_STREAM_INSUFFICIENT_DATA" << endl;
        cout << Utils::defaultOffsetDocInfo << "The streamed cryptographic message requires more data to complete the decode operation." << endl;
        break;
        case CRYPT_E_BAD_LEN:
        cout << Utils::defaultOffset << "CRYPT_E_BAD_LEN" << endl;
        cout << Utils::defaultOffsetDocInfo << "The length specified for the output data was insufficient." << endl;
        break;
        case CRYPT_E_BAD_ENCODE:
        cout << Utils::defaultOffset << "CRYPT_E_BAD_ENCODE" << endl;
        cout << Utils::defaultOffsetDocInfo << "An error occurred during the encode or decode operation." << endl;
        break;
        case CRYPT_E_FILE_ERROR:
        cout << Utils::defaultOffset << "CRYPT_E_FILE_ERROR" << endl;
        cout << Utils::defaultOffsetDocInfo << "An error occurred while reading or writing to a file." << endl;
        break;
        case CRYPT_E_NOT_FOUND:
        cout << Utils::defaultOffset << "CRYPT_E_NOT_FOUND" << endl;
        cout << Utils::defaultOffsetDocInfo << "Cannot find object or property." << endl;
        break;
        case CRYPT_E_EXISTS:
        cout << Utils::defaultOffset << "CRYPT_E_EXISTS" << endl;
        cout << Utils::defaultOffsetDocInfo << "The object or property already exists." << endl;
        break;
        case CRYPT_E_NO_PROVIDER:
        cout << Utils::defaultOffset << "CRYPT_E_NO_PROVIDER" << endl;
        cout << Utils::defaultOffsetDocInfo << "No provider was specified for the store or object." << endl;
        break;
        case CRYPT_E_SELF_SIGNED:
        cout << Utils::defaultOffset << "CRYPT_E_SELF_SIGNED" << endl;
        cout << Utils::defaultOffsetDocInfo << "The specified certificate is self-signed." << endl;
        break;
        case CRYPT_E_DELETED_PREV:
        cout << Utils::defaultOffset << "CRYPT_E_DELETED_PREV" << endl;
        cout << Utils::defaultOffsetDocInfo << "The previous certificate or certificate revocation list (CRL) context was deleted." << endl;
        break;
        case CRYPT_E_NO_MATCH:
        cout << Utils::defaultOffset << "CRYPT_E_NO_MATCH" << endl;
        cout << Utils::defaultOffsetDocInfo << "Cannot find the requested object." << endl;
        break;
        case CRYPT_E_UNEXPECTED_MSG_TYPE:
        cout << Utils::defaultOffset << "CRYPT_E_UNEXPECTED_MSG_TYPE" << endl;
        cout << Utils::defaultOffsetDocInfo << "The certificate does not have a property that references a private key." << endl;
        break;
        case CRYPT_E_NO_KEY_PROPERTY:
        cout << Utils::defaultOffset << "CRYPT_E_NO_KEY_PROPERTY" << endl;
        cout << Utils::defaultOffsetDocInfo << "Cannot find the certificate and private key for decryption." << endl;
        break;
        case CRYPT_E_NO_DECRYPT_CERT:
        cout << Utils::defaultOffset << "CRYPT_E_NO_DECRYPT_CERT" << endl;
        cout << Utils::defaultOffsetDocInfo << "Cannot find the certificate and private key to use for decryption." << endl;
        break;
        case CRYPT_E_BAD_MSG:
        cout << Utils::defaultOffset << "CRYPT_E_BAD_MSG" << endl;
        cout << Utils::defaultOffsetDocInfo << "Not a cryptographic message or the cryptographic message is not formatted correctly." << endl;
        break;
        case CRYPT_E_NO_SIGNER:
        cout << Utils::defaultOffset << "CRYPT_E_NO_SIGNER" << endl;
        cout << Utils::defaultOffsetDocInfo << "The signed cryptographic message does not have a signer for the specified signer index." << endl;
        break;
        case CRYPT_E_PENDING_CLOSE:
        cout << Utils::defaultOffset << "CRYPT_E_PENDING_CLOSE" << endl;
        cout << Utils::defaultOffsetDocInfo << "Final closure is pending until additional frees or closes." << endl;
        break;
        case CRYPT_E_REVOKED:
        cout << Utils::defaultOffset << "CRYPT_E_REVOKED" << endl;
        cout << Utils::defaultOffsetDocInfo << "The certificate is revoked." << endl;
        break;
        case CRYPT_E_NO_REVOCATION_DLL:
        cout << Utils::defaultOffset << "CRYPT_E_NO_REVOCATION_DLL" << endl;
        cout << Utils::defaultOffsetDocInfo << "No DLL or exported function was found to verify revocation." << endl;
        break;
        case CRYPT_E_NO_REVOCATION_CHECK:
        cout << Utils::defaultOffset << "CRYPT_E_NO_REVOCATION_CHECK" << endl;
        cout << Utils::defaultOffsetDocInfo << "The revocation function was unable to check revocation for the certificate." << endl;
        break;
        case CRYPT_E_REVOCATION_OFFLINE:
        cout << Utils::defaultOffset << "CRYPT_E_REVOCATION_OFFLINE" << endl;
        cout << Utils::defaultOffsetDocInfo << "The revocation function was unable to check revocation because the revocation server was offline." << endl;
        break;
        case CRYPT_E_NOT_IN_REVOCATION_DATABASE:
        cout << Utils::defaultOffset << "CRYPT_E_NOT_IN_REVOCATION_DATABASE" << endl;
        cout << Utils::defaultOffsetDocInfo << "The certificate is not in the revocation server's database." << endl;
        break;
        case CRYPT_E_INVALID_NUMERIC_STRING:
        cout << Utils::defaultOffset << "CRYPT_E_INVALID_NUMERIC_STRING" << endl;
        cout << Utils::defaultOffsetDocInfo << "The string contains a non-numeric character." << endl;
        break;
        case CRYPT_E_INVALID_PRINTABLE_STRING:
        cout << Utils::defaultOffset << "CRYPT_E_INVALID_PRINTABLE_STRING" << endl;
        cout << Utils::defaultOffsetDocInfo << "The string contains a nonprintable character." << endl;
        break;
        case CRYPT_E_INVALID_IA5_STRING:
        cout << Utils::defaultOffset << "CRYPT_E_INVALID_IA5_STRING" << endl;
        cout << Utils::defaultOffsetDocInfo << "The string contains a character not in the 7-bit ASCII character set." << endl;
        break;
        case CRYPT_E_INVALID_X500_STRING:
        cout << Utils::defaultOffset << "CRYPT_E_INVALID_X500_STRING" << endl;
        cout << Utils::defaultOffsetDocInfo << "The string contains an invalid X500 name attribute key, object identifier (OID), value, or delimiter." << endl;
        break;
        case CRYPT_E_NOT_CHAR_STRING:
        cout << Utils::defaultOffset << "CRYPT_E_NOT_CHAR_STRING" << endl;
        cout << Utils::defaultOffsetDocInfo << "The dwValueType for the CERT_NAME_VALUE is not one of the character strings. Most likely it is either a CERT_RDN_ENCODED_BLOB or CERT_TDN_OCTED_STRING." << endl;
        break;
        case CRYPT_E_FILERESIZED:
        cout << Utils::defaultOffset << "CRYPT_E_FILERESIZED" << endl;
        cout << Utils::defaultOffsetDocInfo << "The Put operation cannot continue. The file needs to be resized. However, there is already a signature present. A complete signing operation must be done." << endl;
        break;
        case CRYPT_E_SECURITY_SETTINGS:
        cout << Utils::defaultOffset << "CRYPT_E_SECURITY_SETTINGS" << endl;
        cout << Utils::defaultOffsetDocInfo << "The cryptographic operation failed due to a local security option setting." << endl;
        break;
        case CRYPT_E_NO_VERIFY_USAGE_DLL:
        cout << Utils::defaultOffset << "CRYPT_E_NO_VERIFY_USAGE_DLL" << endl;
        cout << Utils::defaultOffsetDocInfo << "No DLL or exported function was found to verify subject usage." << endl;
        break;
        case CRYPT_E_NO_VERIFY_USAGE_CHECK:
        cout << Utils::defaultOffset << "CRYPT_E_NO_VERIFY_USAGE_CHECK" << endl;
        cout << Utils::defaultOffsetDocInfo << "The called function was unable to perform a usage check on the subject." << endl;
        break;
        case CRYPT_E_VERIFY_USAGE_OFFLINE:
        cout << Utils::defaultOffset << "CRYPT_E_VERIFY_USAGE_OFFLINE" << endl;
        cout << Utils::defaultOffsetDocInfo << "The called function was unable to complete the usage check because the server was offline." << endl;
        break;
        case CRYPT_E_NOT_IN_CTL:
        cout << Utils::defaultOffset << "CRYPT_E_NOT_IN_CTL" << endl;
        cout << Utils::defaultOffsetDocInfo << "The subject was not found in a certificate trust list (CTL)." << endl;
        break;
        case CRYPT_E_NO_TRUSTED_SIGNER:
        cout << Utils::defaultOffset << "CRYPT_E_NO_TRUSTED_SIGNER" << endl;
        cout << Utils::defaultOffsetDocInfo << "None of the signers of the cryptographic message or certificate trust list is trusted." << endl;
        break;
        case CRYPT_E_MISSING_PUBKEY_PARA:
        cout << Utils::defaultOffset << "CRYPT_E_MISSING_PUBKEY_PARA" << endl;
        cout << Utils::defaultOffsetDocInfo << "The public key's algorithm parameters are missing." << endl;
        break;
        case CRYPT_E_OSS_ERROR:
        cout << Utils::defaultOffset << "CRYPT_E_OSS_ERROR" << endl;
        cout << Utils::defaultOffsetDocInfo << "OSS Certificate encode/decode error code base." << endl;
        break;
        case OSS_MORE_BUF:
        cout << Utils::defaultOffset << "OSS_MORE_BUF" << endl;
        cout << Utils::defaultOffsetDocInfo << "OSS ASN.1 Error: Output Buffer is too small." << endl;
        break;
        case OSS_NEGATIVE_UINTEGER:
        cout << Utils::defaultOffset << "OSS_NEGATIVE_UINTEGER" << endl;
        cout << Utils::defaultOffsetDocInfo << "OSS ASN.1 Error: Signed integer is encoded as a unsigned integer." << endl;
        break;
        case OSS_PDU_RANGE:
        cout << Utils::defaultOffset << "OSS_PDU_RANGE" << endl;
        cout << Utils::defaultOffsetDocInfo << "OSS ASN.1 Error: Unknown ASN.1 data type." << endl;
        break;
        case OSS_MORE_INPUT:
        cout << Utils::defaultOffset << "OSS_MORE_INPUT" << endl;
        cout << Utils::defaultOffsetDocInfo << "OSS ASN.1 Error: Output buffer is too small; the decoded data has been truncated." << endl;
        break;
        case OSS_DATA_ERROR:
        cout << Utils::defaultOffset << "OSS_DATA_ERROR" << endl;
        cout << Utils::defaultOffsetDocInfo << "OSS ASN.1 Error: Invalid data." << endl;
        break;
        case OSS_BAD_ARG:
        cout << Utils::defaultOffset << "OSS_BAD_ARG" << endl;
        cout << Utils::defaultOffsetDocInfo << "OSS ASN.1 Error: Invalid argument." << endl;
        break;
        case OSS_BAD_VERSION:
        cout << Utils::defaultOffset << "OSS_BAD_VERSION" << endl;
        cout << Utils::defaultOffsetDocInfo << "OSS ASN.1 Error: Encode/Decode version mismatch." << endl;
        break;
        case OSS_OUT_MEMORY:
        cout << Utils::defaultOffset << "OSS_OUT_MEMORY" << endl;
        cout << Utils::defaultOffsetDocInfo << "OSS ASN.1 Error: Out of memory." << endl;
        break;
        case OSS_PDU_MISMATCH:
        cout << Utils::defaultOffset << "OSS_PDU_MISMATCH" << endl;
        cout << Utils::defaultOffsetDocInfo << "OSS ASN.1 Error: Encode/Decode error." << endl;
        break;
        case OSS_LIMITED:
        cout << Utils::defaultOffset << "OSS_LIMITED" << endl;
        cout << Utils::defaultOffsetDocInfo << "OSS ASN.1 Error: Internal error." << endl;
        break;
        case OSS_BAD_PTR:
        cout << Utils::defaultOffset << "OSS_BAD_PTR" << endl;
        cout << Utils::defaultOffsetDocInfo << "OSS ASN.1 Error: Invalid data." << endl;
        break;
        case OSS_BAD_TIME:
        cout << Utils::defaultOffset << "OSS_BAD_TIME" << endl;
        cout << Utils::defaultOffsetDocInfo << "OSS ASN.1 Error: Invalid data." << endl;
        break;
        case OSS_INDEFINITE_NOT_SUPPORTED:
        cout << Utils::defaultOffset << "OSS_INDEFINITE_NOT_SUPPORTED" << endl;
        cout << Utils::defaultOffsetDocInfo << "OSS ASN.1 Error: Unsupported BER indefinite-length encoding." << endl;
        break;
        case OSS_MEM_ERROR:
        cout << Utils::defaultOffset << "OSS_MEM_ERROR" << endl;
        cout << Utils::defaultOffsetDocInfo << "OSS ASN.1 Error: Access violation." << endl;
        break;
        case OSS_BAD_TABLE:
        cout << Utils::defaultOffset << "OSS_BAD_TABLE" << endl;
        cout << Utils::defaultOffsetDocInfo << "OSS ASN.1 Error: Invalid data." << endl;
        break;
        case OSS_TOO_LONG:
        cout << Utils::defaultOffset << "OSS_TOO_LONG" << endl;
        cout << Utils::defaultOffsetDocInfo << "OSS ASN.1 Error: Invalid data." << endl;
        break;
        case OSS_CONSTRAINT_VIOLATED:
        cout << Utils::defaultOffset << "OSS_CONSTRAINT_VIOLATED" << endl;
        cout << Utils::defaultOffsetDocInfo << "OSS ASN.1 Error: Invalid data." << endl;
        break;
        case OSS_FATAL_ERROR:
        cout << Utils::defaultOffset << "OSS_FATAL_ERROR" << endl;
        cout << Utils::defaultOffsetDocInfo << "OSS ASN.1 Error: Internal error." << endl;
        break;
        case OSS_ACCESS_SERIALIZATION_ERROR:
        cout << Utils::defaultOffset << "OSS_ACCESS_SERIALIZATION_ERROR" << endl;
        cout << Utils::defaultOffsetDocInfo << "OSS ASN.1 Error: Multithreading conflict." << endl;
        break;
        case OSS_NULL_TBL:
        cout << Utils::defaultOffset << "OSS_NULL_TBL" << endl;
        cout << Utils::defaultOffsetDocInfo << "OSS ASN.1 Error: Invalid data." << endl;
        break;
        case OSS_NULL_FCN:
        cout << Utils::defaultOffset << "OSS_NULL_FCN" << endl;
        cout << Utils::defaultOffsetDocInfo << "OSS ASN.1 Error: Invalid data." << endl;
        break;
        case OSS_BAD_ENCRULES:
        cout << Utils::defaultOffset << "OSS_BAD_ENCRULES" << endl;
        cout << Utils::defaultOffsetDocInfo << "OSS ASN.1 Error: Invalid data." << endl;
        break;
        case OSS_UNAVAIL_ENCRULES:
        cout << Utils::defaultOffset << "OSS_UNAVAIL_ENCRULES" << endl;
        cout << Utils::defaultOffsetDocInfo << "OSS ASN.1 Error: Encode/Decode function not implemented." << endl;
        break;
        case OSS_CANT_OPEN_TRACE_WINDOW:
        cout << Utils::defaultOffset << "OSS_CANT_OPEN_TRACE_WINDOW" << endl;
        cout << Utils::defaultOffsetDocInfo << "OSS ASN.1 Error: Trace file error." << endl;
        break;
        case OSS_UNIMPLEMENTED:
        cout << Utils::defaultOffset << "OSS_UNIMPLEMENTED" << endl;
        cout << Utils::defaultOffsetDocInfo << "OSS ASN.1 Error: Function not implemented." << endl;
        break;
        case OSS_OID_DLL_NOT_LINKED:
        cout << Utils::defaultOffset << "OSS_OID_DLL_NOT_LINKED" << endl;
        cout << Utils::defaultOffsetDocInfo << "OSS ASN.1 Error: Program link error." << endl;
        break;
        case OSS_CANT_OPEN_TRACE_FILE:
        cout << Utils::defaultOffset << "OSS_CANT_OPEN_TRACE_FILE" << endl;
        cout << Utils::defaultOffsetDocInfo << "OSS ASN.1 Error: Trace file error." << endl;
        break;
        case OSS_TRACE_FILE_ALREADY_OPEN:
        cout << Utils::defaultOffset << "OSS_TRACE_FILE_ALREADY_OPEN" << endl;
        cout << Utils::defaultOffsetDocInfo << "OSS ASN.1 Error: Trace file error." << endl;
        break;
        case OSS_TABLE_MISMATCH:
        cout << Utils::defaultOffset << "OSS_TABLE_MISMATCH" << endl;
        cout << Utils::defaultOffsetDocInfo << "OSS ASN.1 Error: Invalid data." << endl;
        break;
        case OSS_TYPE_NOT_SUPPORTED:
        cout << Utils::defaultOffset << "OSS_TYPE_NOT_SUPPORTED" << endl;
        cout << Utils::defaultOffsetDocInfo << "OSS ASN.1 Error: Invalid data." << endl;
        break;
        case OSS_REAL_DLL_NOT_LINKED:
        cout << Utils::defaultOffset << "OSS_REAL_DLL_NOT_LINKED" << endl;
        cout << Utils::defaultOffsetDocInfo << "OSS ASN.1 Error: Program link error." << endl;
        break;
        case OSS_REAL_CODE_NOT_LINKED:
        cout << Utils::defaultOffset << "OSS_REAL_CODE_NOT_LINKED" << endl;
        cout << Utils::defaultOffsetDocInfo << "OSS ASN.1 Error: Program link error." << endl;
        break;
        case OSS_OUT_OF_RANGE:
        cout << Utils::defaultOffset << "OSS_OUT_OF_RANGE" << endl;
        cout << Utils::defaultOffsetDocInfo << "OSS ASN.1 Error: Program link error." << endl;
        break;
        case OSS_COPIER_DLL_NOT_LINKED:
        cout << Utils::defaultOffset << "OSS_COPIER_DLL_NOT_LINKED" << endl;
        cout << Utils::defaultOffsetDocInfo << "OSS ASN.1 Error: Program link error." << endl;
        break;
        case OSS_CONSTRAINT_DLL_NOT_LINKED:
        cout << Utils::defaultOffset << "OSS_CONSTRAINT_DLL_NOT_LINKED" << endl;
        cout << Utils::defaultOffsetDocInfo << "OSS ASN.1 Error: Program link error." << endl;
        break;
        case OSS_COMPARATOR_DLL_NOT_LINKED:
        cout << Utils::defaultOffset << "OSS_COMPARATOR_DLL_NOT_LINKED" << endl;
        cout << Utils::defaultOffsetDocInfo << "OSS ASN.1 Error: Program link error." << endl;
        break;
        case OSS_COMPARATOR_CODE_NOT_LINKED:
        cout << Utils::defaultOffset << "OSS_COMPARATOR_CODE_NOT_LINKED" << endl;
        cout << Utils::defaultOffsetDocInfo << "OSS ASN.1 Error: Program link error." << endl;
        break;
        case OSS_MEM_MGR_DLL_NOT_LINKED:
        cout << Utils::defaultOffset << "OSS_MEM_MGR_DLL_NOT_LINKED" << endl;
        cout << Utils::defaultOffsetDocInfo << "OSS ASN.1 Error: Program link error." << endl;
        break;
        case OSS_PDV_DLL_NOT_LINKED:
        cout << Utils::defaultOffset << "OSS_PDV_DLL_NOT_LINKED" << endl;
        cout << Utils::defaultOffsetDocInfo << "OSS ASN.1 Error: Program link error." << endl;
        break;
        case OSS_PDV_CODE_NOT_LINKED:
        cout << Utils::defaultOffset << "OSS_PDV_CODE_NOT_LINKED" << endl;
        cout << Utils::defaultOffsetDocInfo << "OSS ASN.1 Error: Program link error." << endl;
        break;
        case OSS_API_DLL_NOT_LINKED:
        cout << Utils::defaultOffset << "OSS_API_DLL_NOT_LINKED" << endl;
        cout << Utils::defaultOffsetDocInfo << "OSS ASN.1 Error: Program link error." << endl;
        break;
        case OSS_BERDER_DLL_NOT_LINKED:
        cout << Utils::defaultOffset << "OSS_BERDER_DLL_NOT_LINKED" << endl;
        cout << Utils::defaultOffsetDocInfo << "OSS ASN.1 Error: Program link error." << endl;
        break;
        case OSS_PER_DLL_NOT_LINKED:
        cout << Utils::defaultOffset << "OSS_PER_DLL_NOT_LINKED" << endl;
        cout << Utils::defaultOffsetDocInfo << "OSS ASN.1 Error: Program link error." << endl;
        break;
        case OSS_OPEN_TYPE_ERROR:
        cout << Utils::defaultOffset << "OSS_OPEN_TYPE_ERROR" << endl;
        cout << Utils::defaultOffsetDocInfo << "OSS ASN.1 Error: Program link error." << endl;
        break;
        case OSS_MUTEX_NOT_CREATED:
        cout << Utils::defaultOffset << "OSS_MUTEX_NOT_CREATED" << endl;
        cout << Utils::defaultOffsetDocInfo << "OSS ASN.1 Error: System resource error." << endl;
        break;
        case OSS_CANT_CLOSE_TRACE_FILE:
        cout << Utils::defaultOffset << "OSS_CANT_CLOSE_TRACE_FILE" << endl;
        cout << Utils::defaultOffsetDocInfo << "OSS ASN.1 Error: Trace file error." << endl;
        break;
        case CRYPT_E_ASN1_ERROR:
        cout << Utils::defaultOffset << "CRYPT_E_ASN1_ERROR" << endl;
        cout << Utils::defaultOffsetDocInfo << "ASN1 Certificate encode/decode error code base." << endl;
        break;
        case CRYPT_E_ASN1_INTERNAL:
        cout << Utils::defaultOffset << "CRYPT_E_ASN1_INTERNAL" << endl;
        cout << Utils::defaultOffsetDocInfo << "ASN1 internal encode or decode error." << endl;
        break;
        case CRYPT_E_ASN1_EOD:
        cout << Utils::defaultOffset << "CRYPT_E_ASN1_EOD" << endl;
        cout << Utils::defaultOffsetDocInfo << "ASN1 unexpected end of data." << endl;
        break;
        case CRYPT_E_ASN1_CORRUPT:
        cout << Utils::defaultOffset << "CRYPT_E_ASN1_CORRUPT" << endl;
        cout << Utils::defaultOffsetDocInfo << "ASN1 corrupted data." << endl;
        break;
        case CRYPT_E_ASN1_LARGE:
        cout << Utils::defaultOffset << "CRYPT_E_ASN1_LARGE" << endl;
        cout << Utils::defaultOffsetDocInfo << "ASN1 value too large." << endl;
        break;
        case CRYPT_E_ASN1_CONSTRAINT:
        cout << Utils::defaultOffset << "CRYPT_E_ASN1_CONSTRAINT" << endl;
        cout << Utils::defaultOffsetDocInfo << "ASN1 constraint violated." << endl;
        break;
        case CRYPT_E_ASN1_MEMORY:
        cout << Utils::defaultOffset << "CRYPT_E_ASN1_MEMORY" << endl;
        cout << Utils::defaultOffsetDocInfo << "ASN1 out of memory." << endl;
        break;
        case CRYPT_E_ASN1_OVERFLOW:
        cout << Utils::defaultOffset << "CRYPT_E_ASN1_OVERFLOW" << endl;
        cout << Utils::defaultOffsetDocInfo << "ASN1 buffer overflow." << endl;
        break;
        case CRYPT_E_ASN1_BADPDU:
        cout << Utils::defaultOffset << "CRYPT_E_ASN1_BADPDU" << endl;
        cout << Utils::defaultOffsetDocInfo << "ASN1 function not supported for this protocol data unit (PDU)." << endl;
        break;
        case CRYPT_E_ASN1_BADARGS:
        cout << Utils::defaultOffset << "CRYPT_E_ASN1_BADARGS" << endl;
        cout << Utils::defaultOffsetDocInfo << "ASN1 bad arguments to function call." << endl;
        break;
        case CRYPT_E_ASN1_BADREAL:
        cout << Utils::defaultOffset << "CRYPT_E_ASN1_BADREAL" << endl;
        cout << Utils::defaultOffsetDocInfo << "ASN1 bad real value." << endl;
        break;
        case CRYPT_E_ASN1_BADTAG:
        cout << Utils::defaultOffset << "CRYPT_E_ASN1_BADTAG" << endl;
        cout << Utils::defaultOffsetDocInfo << "ASN1 bad tag value met." << endl;
        break;
        case CRYPT_E_ASN1_CHOICE:
        cout << Utils::defaultOffset << "CRYPT_E_ASN1_CHOICE" << endl;
        cout << Utils::defaultOffsetDocInfo << "ASN1 bad choice value." << endl;
        break;
        case CRYPT_E_ASN1_RULE:
        cout << Utils::defaultOffset << "CRYPT_E_ASN1_RULE" << endl;
        cout << Utils::defaultOffsetDocInfo << "ASN1 bad encoding rule." << endl;
        break;
        case CRYPT_E_ASN1_UTF8:
        cout << Utils::defaultOffset << "CRYPT_E_ASN1_UTF8" << endl;
        cout << Utils::defaultOffsetDocInfo << "ASN1 bad Unicode (UTF8)." << endl;
        break;
        case CRYPT_E_ASN1_PDU_TYPE:
        cout << Utils::defaultOffset << "CRYPT_E_ASN1_PDU_TYPE" << endl;
        cout << Utils::defaultOffsetDocInfo << "ASN1 bad PDU type." << endl;
        break;
        case CRYPT_E_ASN1_NYI:
        cout << Utils::defaultOffset << "CRYPT_E_ASN1_NYI" << endl;
        cout << Utils::defaultOffsetDocInfo << "ASN1 not yet implemented." << endl;
        break;
        case CRYPT_E_ASN1_EXTENDED:
        cout << Utils::defaultOffset << "CRYPT_E_ASN1_EXTENDED" << endl;
        cout << Utils::defaultOffsetDocInfo << "ASN1 skipped unknown extensions." << endl;
        break;
        case CRYPT_E_ASN1_NOEOD:
        cout << Utils::defaultOffset << "CRYPT_E_ASN1_NOEOD" << endl;
        cout << Utils::defaultOffsetDocInfo << "ASN1 end of data expected." << endl;
        break;
        case CERTSRV_E_BAD_REQUESTSUBJECT:
        cout << Utils::defaultOffset << "CERTSRV_E_BAD_REQUESTSUBJECT" << endl;
        cout << Utils::defaultOffsetDocInfo << "The request subject name is invalid or too long." << endl;
        break;
        case CERTSRV_E_NO_REQUEST:
        cout << Utils::defaultOffset << "CERTSRV_E_NO_REQUEST" << endl;
        cout << Utils::defaultOffsetDocInfo << "The request does not exist." << endl;
        break;
        case CERTSRV_E_BAD_REQUESTSTATUS:
        cout << Utils::defaultOffset << "CERTSRV_E_BAD_REQUESTSTATUS" << endl;
        cout << Utils::defaultOffsetDocInfo << "The request's current status does not allow this operation." << endl;
        break;
        case CERTSRV_E_PROPERTY_EMPTY:
        cout << Utils::defaultOffset << "CERTSRV_E_PROPERTY_EMPTY" << endl;
        cout << Utils::defaultOffsetDocInfo << "The requested property value is empty." << endl;
        break;
        case CERTSRV_E_INVALID_CA_CERTIFICATE:
        cout << Utils::defaultOffset << "CERTSRV_E_INVALID_CA_CERTIFICATE" << endl;
        cout << Utils::defaultOffsetDocInfo << "The CA's certificate contains invalid data." << endl;
        break;
        case CERTSRV_E_SERVER_SUSPENDED:
        cout << Utils::defaultOffset << "CERTSRV_E_SERVER_SUSPENDED" << endl;
        cout << Utils::defaultOffsetDocInfo << "Certificate service has been suspended for a database restore operation." << endl;
        break;
        case CERTSRV_E_ENCODING_LENGTH:
        cout << Utils::defaultOffset << "CERTSRV_E_ENCODING_LENGTH" << endl;
        cout << Utils::defaultOffsetDocInfo << "The certificate contains an encoded length that is potentially incompatible with older enrollment software." << endl;
        break;
        case CERTSRV_E_ROLECONFLICT:
        cout << Utils::defaultOffset << "CERTSRV_E_ROLECONFLICT" << endl;
        cout << Utils::defaultOffsetDocInfo << "The operation is denied. The user has multiple roles assigned, and the CA is configured to enforce role separation." << endl;
        break;
        case CERTSRV_E_RESTRICTEDOFFICER:
        cout << Utils::defaultOffset << "CERTSRV_E_RESTRICTEDOFFICER" << endl;
        cout << Utils::defaultOffsetDocInfo << "The operation is denied. It can only be performed by a certificate manager that is allowed to manage certificates for the current requester." << endl;
        break;
        case CERTSRV_E_KEY_ARCHIVAL_NOT_CONFIGURED:
        cout << Utils::defaultOffset << "CERTSRV_E_KEY_ARCHIVAL_NOT_CONFIGURED" << endl;
        cout << Utils::defaultOffsetDocInfo << "Cannot archive private key. The CA is not configured for key archival." << endl;
        break;
        case CERTSRV_E_NO_VALID_KRA:
        cout << Utils::defaultOffset << "CERTSRV_E_NO_VALID_KRA" << endl;
        cout << Utils::defaultOffsetDocInfo << "Cannot archive private key. The CA could not verify one or more key recovery certificates." << endl;
        break;
        case CERTSRV_E_BAD_REQUEST_KEY_ARCHIVAL:
        cout << Utils::defaultOffset << "CERTSRV_E_BAD_REQUEST_KEY_ARCHIVAL" << endl;
        cout << Utils::defaultOffsetDocInfo << "The request is incorrectly formatted. The encrypted private key must be in an unauthenticated attribute in an outermost signature." << endl;
        break;
        case CERTSRV_E_NO_CAADMIN_DEFINED:
        cout << Utils::defaultOffset << "CERTSRV_E_NO_CAADMIN_DEFINED" << endl;
        cout << Utils::defaultOffsetDocInfo << "At least one security principal must have the permission to manage this CA." << endl;
        break;
        case CERTSRV_E_BAD_RENEWAL_CERT_ATTRIBUTE:
        cout << Utils::defaultOffset << "CERTSRV_E_BAD_RENEWAL_CERT_ATTRIBUTE" << endl;
        cout << Utils::defaultOffsetDocInfo << "The request contains an invalid renewal certificate attribute." << endl;
        break;
        case CERTSRV_E_NO_DB_SESSIONS:
        cout << Utils::defaultOffset << "CERTSRV_E_NO_DB_SESSIONS" << endl;
        cout << Utils::defaultOffsetDocInfo << "An attempt was made to open a CA database session, but there are already too many active sessions. The server needs to be configured to allow additional sessions." << endl;
        break;
        case CERTSRV_E_ALIGNMENT_FAULT:
        cout << Utils::defaultOffset << "CERTSRV_E_ALIGNMENT_FAULT" << endl;
        cout << Utils::defaultOffsetDocInfo << "A memory reference caused a data alignment fault." << endl;
        break;
        case CERTSRV_E_ENROLL_DENIED:
        cout << Utils::defaultOffset << "CERTSRV_E_ENROLL_DENIED" << endl;
        cout << Utils::defaultOffsetDocInfo << "The permissions on this CA do not allow the current user to enroll for certificates." << endl;
        break;
        case CERTSRV_E_TEMPLATE_DENIED:
        cout << Utils::defaultOffset << "CERTSRV_E_TEMPLATE_DENIED" << endl;
        cout << Utils::defaultOffsetDocInfo << "The permissions on the certificate template do not allow the current user to enroll for this type of certificate." << endl;
        break;
        case CERTSRV_E_DOWNLEVEL_DC_SSL_OR_UPGRADE:
        cout << Utils::defaultOffset << "CERTSRV_E_DOWNLEVEL_DC_SSL_OR_UPGRADE" << endl;
        cout << Utils::defaultOffsetDocInfo << "The contacted domain controller cannot support signed Lightweight Directory Access Protocol (LDAP) traffic. Update the domain controller or configure Certificate Services to use SSL for Active Directory access." << endl;
        break;
        case CERTSRV_E_UNSUPPORTED_CERT_TYPE:
        cout << Utils::defaultOffset << "CERTSRV_E_UNSUPPORTED_CERT_TYPE" << endl;
        cout << Utils::defaultOffsetDocInfo << "The requested certificate template is not supported by this CA." << endl;
        break;
        case CERTSRV_E_NO_CERT_TYPE:
        cout << Utils::defaultOffset << "CERTSRV_E_NO_CERT_TYPE" << endl;
        cout << Utils::defaultOffsetDocInfo << "The request contains no certificate template information." << endl;
        break;
        case CERTSRV_E_TEMPLATE_CONFLICT:
        cout << Utils::defaultOffset << "CERTSRV_E_TEMPLATE_CONFLICT" << endl;
        cout << Utils::defaultOffsetDocInfo << "The request contains conflicting template information." << endl;
        break;
        case CERTSRV_E_SUBJECT_ALT_NAME_REQUIRED:
        cout << Utils::defaultOffset << "CERTSRV_E_SUBJECT_ALT_NAME_REQUIRED" << endl;
        cout << Utils::defaultOffsetDocInfo << "The request is missing a required Subject Alternate name extension." << endl;
        break;
        case CERTSRV_E_ARCHIVED_KEY_REQUIRED:
        cout << Utils::defaultOffset << "CERTSRV_E_ARCHIVED_KEY_REQUIRED" << endl;
        cout << Utils::defaultOffsetDocInfo << "The request is missing a required private key for archival by the server." << endl;
        break;
        case CERTSRV_E_SMIME_REQUIRED:
        cout << Utils::defaultOffset << "CERTSRV_E_SMIME_REQUIRED" << endl;
        cout << Utils::defaultOffsetDocInfo << "The request is missing a required SMIME capabilities extension." << endl;
        break;
        case CERTSRV_E_BAD_RENEWAL_SUBJECT:
        cout << Utils::defaultOffset << "CERTSRV_E_BAD_RENEWAL_SUBJECT" << endl;
        cout << Utils::defaultOffsetDocInfo << "The request was made on behalf of a subject other than the caller. The certificate template must be configured to require at least one signature to authorize the request." << endl;
        break;
        case CERTSRV_E_BAD_TEMPLATE_VERSION:
        cout << Utils::defaultOffset << "CERTSRV_E_BAD_TEMPLATE_VERSION" << endl;
        cout << Utils::defaultOffsetDocInfo << "The request template version is newer than the supported template version." << endl;
        break;
        case CERTSRV_E_TEMPLATE_POLICY_REQUIRED:
        cout << Utils::defaultOffset << "CERTSRV_E_TEMPLATE_POLICY_REQUIRED" << endl;
        cout << Utils::defaultOffsetDocInfo << "The template is missing a required signature policy attribute." << endl;
        break;
        case CERTSRV_E_SIGNATURE_POLICY_REQUIRED:
        cout << Utils::defaultOffset << "CERTSRV_E_SIGNATURE_POLICY_REQUIRED" << endl;
        cout << Utils::defaultOffsetDocInfo << "The request is missing required signature policy information." << endl;
        break;
        case CERTSRV_E_SIGNATURE_COUNT:
        cout << Utils::defaultOffset << "CERTSRV_E_SIGNATURE_COUNT" << endl;
        cout << Utils::defaultOffsetDocInfo << "The request is missing one or more required signatures." << endl;
        break;
        case CERTSRV_E_SIGNATURE_REJECTED:
        cout << Utils::defaultOffset << "CERTSRV_E_SIGNATURE_REJECTED" << endl;
        cout << Utils::defaultOffsetDocInfo << "One or more signatures did not include the required application or issuance policies. The request is missing one or more required valid signatures." << endl;
        break;
        case CERTSRV_E_ISSUANCE_POLICY_REQUIRED:
        cout << Utils::defaultOffset << "CERTSRV_E_ISSUANCE_POLICY_REQUIRED" << endl;
        cout << Utils::defaultOffsetDocInfo << "The request is missing one or more required signature issuance policies." << endl;
        break;
        case CERTSRV_E_SUBJECT_UPN_REQUIRED:
        cout << Utils::defaultOffset << "CERTSRV_E_SUBJECT_UPN_REQUIRED" << endl;
        cout << Utils::defaultOffsetDocInfo << "The UPN is unavailable and cannot be added to the Subject Alternate name." << endl;
        break;
        case CERTSRV_E_SUBJECT_DIRECTORY_GUID_REQUIRED:
        cout << Utils::defaultOffset << "CERTSRV_E_SUBJECT_DIRECTORY_GUID_REQUIRED" << endl;
        cout << Utils::defaultOffsetDocInfo << "The Active Directory GUID is unavailable and cannot be added to the Subject Alternate name." << endl;
        break;
        case CERTSRV_E_SUBJECT_DNS_REQUIRED:
        cout << Utils::defaultOffset << "CERTSRV_E_SUBJECT_DNS_REQUIRED" << endl;
        cout << Utils::defaultOffsetDocInfo << "The Domain Name System (DNS) name is unavailable and cannot be added to the Subject Alternate name." << endl;
        break;
        case CERTSRV_E_ARCHIVED_KEY_UNEXPECTED:
        cout << Utils::defaultOffset << "CERTSRV_E_ARCHIVED_KEY_UNEXPECTED" << endl;
        cout << Utils::defaultOffsetDocInfo << "The request includes a private key for archival by the server, but key archival is not enabled for the specified certificate template." << endl;
        break;
        case CERTSRV_E_KEY_LENGTH:
        cout << Utils::defaultOffset << "CERTSRV_E_KEY_LENGTH" << endl;
        cout << Utils::defaultOffsetDocInfo << "The public key does not meet the minimum size required by the specified certificate template." << endl;
        break;
        case CERTSRV_E_SUBJECT_EMAIL_REQUIRED:
        cout << Utils::defaultOffset << "CERTSRV_E_SUBJECT_EMAIL_REQUIRED" << endl;
        cout << Utils::defaultOffsetDocInfo << "The email name is unavailable and cannot be added to the Subject or Subject Alternate name." << endl;
        break;
        case CERTSRV_E_UNKNOWN_CERT_TYPE:
        cout << Utils::defaultOffset << "CERTSRV_E_UNKNOWN_CERT_TYPE" << endl;
        cout << Utils::defaultOffsetDocInfo << "One or more certificate templates to be enabled on this CA could not be found." << endl;
        break;
        case CERTSRV_E_CERT_TYPE_OVERLAP:
        cout << Utils::defaultOffset << "CERTSRV_E_CERT_TYPE_OVERLAP" << endl;
        cout << Utils::defaultOffsetDocInfo << "The certificate template renewal period is longer than the certificate validity period. The template should be reconfigured or the CA certificate renewed." << endl;
        break;
        case CERTSRV_E_TOO_MANY_SIGNATURES:
        cout << Utils::defaultOffset << "CERTSRV_E_TOO_MANY_SIGNATURES" << endl;
        cout << Utils::defaultOffsetDocInfo << "The certificate template requires too many return authorization (RA) signatures. Only one RA signature is allowed." << endl;
        break;
        case CERTSRV_E_RENEWAL_BAD_PUBLIC_KEY:
        cout << Utils::defaultOffset << "CERTSRV_E_RENEWAL_BAD_PUBLIC_KEY" << endl;
        cout << Utils::defaultOffsetDocInfo << "The key used in a renewal request does not match one of the certificates being renewed." << endl;
        break;
        case CERTSRV_E_INVALID_EK:
        cout << Utils::defaultOffset << "CERTSRV_E_INVALID_EK" << endl;
        cout << Utils::defaultOffsetDocInfo << "The endorsement key certificate is not valid." << endl;
        break;
        case CERTSRV_E_KEY_ATTESTATION:
        cout << Utils::defaultOffset << "CERTSRV_E_KEY_ATTESTATION" << endl;
        cout << Utils::defaultOffsetDocInfo << "Key attestation did not succeed." << endl;
        break;
        case XENROLL_E_KEY_NOT_EXPORTABLE:
        cout << Utils::defaultOffset << "XENROLL_E_KEY_NOT_EXPORTABLE" << endl;
        cout << Utils::defaultOffsetDocInfo << "The key is not exportable." << endl;
        break;
        case XENROLL_E_CANNOT_ADD_ROOT_CERT:
        cout << Utils::defaultOffset << "XENROLL_E_CANNOT_ADD_ROOT_CERT" << endl;
        cout << Utils::defaultOffsetDocInfo << "You cannot add the root CA certificate into your local store." << endl;
        break;
        case XENROLL_E_RESPONSE_KA_HASH_NOT_FOUND:
        cout << Utils::defaultOffset << "XENROLL_E_RESPONSE_KA_HASH_NOT_FOUND" << endl;
        cout << Utils::defaultOffsetDocInfo << "The key archival hash attribute was not found in the response." << endl;
        break;
        case XENROLL_E_RESPONSE_UNEXPECTED_KA_HASH:
        cout << Utils::defaultOffset << "XENROLL_E_RESPONSE_UNEXPECTED_KA_HASH" << endl;
        cout << Utils::defaultOffsetDocInfo << "An unexpected key archival hash attribute was found in the response." << endl;
        break;
        case XENROLL_E_RESPONSE_KA_HASH_MISMATCH:
        cout << Utils::defaultOffset << "XENROLL_E_RESPONSE_KA_HASH_MISMATCH" << endl;
        cout << Utils::defaultOffsetDocInfo << "There is a key archival hash mismatch between the request and the response." << endl;
        break;
        case XENROLL_E_KEYSPEC_SMIME_MISMATCH:
        cout << Utils::defaultOffset << "XENROLL_E_KEYSPEC_SMIME_MISMATCH" << endl;
        cout << Utils::defaultOffsetDocInfo << "Signing certificate cannot include SMIME extension." << endl;
        break;
        case TRUST_E_SYSTEM_ERROR:
        cout << Utils::defaultOffset << "TRUST_E_SYSTEM_ERROR" << endl;
        cout << Utils::defaultOffsetDocInfo << "A system-level error occurred while verifying trust." << endl;
        break;
        case TRUST_E_NO_SIGNER_CERT:
        cout << Utils::defaultOffset << "TRUST_E_NO_SIGNER_CERT" << endl;
        cout << Utils::defaultOffsetDocInfo << "The certificate for the signer of the message is invalid or not found." << endl;
        break;
        case TRUST_E_COUNTER_SIGNER:
        cout << Utils::defaultOffset << "TRUST_E_COUNTER_SIGNER" << endl;
        cout << Utils::defaultOffsetDocInfo << "One of the counter signatures was invalid." << endl;
        break;
        case TRUST_E_CERT_SIGNATURE:
        cout << Utils::defaultOffset << "TRUST_E_CERT_SIGNATURE" << endl;
        cout << Utils::defaultOffsetDocInfo << "The signature of the certificate cannot be verified." << endl;
        break;
        case TRUST_E_TIME_STAMP:
        cout << Utils::defaultOffset << "TRUST_E_TIME_STAMP" << endl;
        cout << Utils::defaultOffsetDocInfo << "The time-stamp signature or certificate could not be verified or is malformed." << endl;
        break;
        case TRUST_E_BAD_DIGEST:
        cout << Utils::defaultOffset << "TRUST_E_BAD_DIGEST" << endl;
        cout << Utils::defaultOffsetDocInfo << "The digital signature of the object did not verify." << endl;
        break;
        case TRUST_E_BASIC_CONSTRAINTS:
        cout << Utils::defaultOffset << "TRUST_E_BASIC_CONSTRAINTS" << endl;
        cout << Utils::defaultOffsetDocInfo << "A certificate's basic constraint extension has not been observed." << endl;
        break;
        case TRUST_E_FINANCIAL_CRITERIA:
        cout << Utils::defaultOffset << "TRUST_E_FINANCIAL_CRITERIA" << endl;
        cout << Utils::defaultOffsetDocInfo << "The certificate does not meet or contain the Authenticode financial extensions." << endl;
        break;
        case MSSIPOTF_E_OUTOFMEMRANGE:
        cout << Utils::defaultOffset << "MSSIPOTF_E_OUTOFMEMRANGE" << endl;
        cout << Utils::defaultOffsetDocInfo << "Tried to reference a part of the file outside the proper range." << endl;
        break;
        case MSSIPOTF_E_CANTGETOBJECT:
        cout << Utils::defaultOffset << "MSSIPOTF_E_CANTGETOBJECT" << endl;
        cout << Utils::defaultOffsetDocInfo << "Could not retrieve an object from the file." << endl;
        break;
        case MSSIPOTF_E_NOHEADTABLE:
        cout << Utils::defaultOffset << "MSSIPOTF_E_NOHEADTABLE" << endl;
        cout << Utils::defaultOffsetDocInfo << "Could not find the head table in the file." << endl;
        break;
        case MSSIPOTF_E_BAD_MAGICNUMBER:
        cout << Utils::defaultOffset << "MSSIPOTF_E_BAD_MAGICNUMBER" << endl;
        cout << Utils::defaultOffsetDocInfo << "The magic number in the head table is incorrect." << endl;
        break;
        case MSSIPOTF_E_BAD_OFFSET_TABLE:
        cout << Utils::defaultOffset << "MSSIPOTF_E_BAD_OFFSET_TABLE" << endl;
        cout << Utils::defaultOffsetDocInfo << "The offset table has incorrect values." << endl;
        break;
        case MSSIPOTF_E_TABLE_TAGORDER:
        cout << Utils::defaultOffset << "MSSIPOTF_E_TABLE_TAGORDER" << endl;
        cout << Utils::defaultOffsetDocInfo << "Duplicate table tags or the tags are out of alphabetical order." << endl;
        break;
        case MSSIPOTF_E_TABLE_LONGWORD:
        cout << Utils::defaultOffset << "MSSIPOTF_E_TABLE_LONGWORD" << endl;
        cout << Utils::defaultOffsetDocInfo << "A table does not start on a long word boundary." << endl;
        break;
        case MSSIPOTF_E_BAD_FIRST_TABLE_PLACEMENT:
        cout << Utils::defaultOffset << "MSSIPOTF_E_BAD_FIRST_TABLE_PLACEMENT" << endl;
        cout << Utils::defaultOffsetDocInfo << "First table does not appear after header information." << endl;
        break;
        case MSSIPOTF_E_TABLES_OVERLAP:
        cout << Utils::defaultOffset << "MSSIPOTF_E_TABLES_OVERLAP" << endl;
        cout << Utils::defaultOffsetDocInfo << "Two or more tables overlap." << endl;
        break;
        case MSSIPOTF_E_TABLE_PADBYTES:
        cout << Utils::defaultOffset << "MSSIPOTF_E_TABLE_PADBYTES" << endl;
        cout << Utils::defaultOffsetDocInfo << "Too many pad bytes between tables, or pad bytes are not 0." << endl;
        break;
        case MSSIPOTF_E_FILETOOSMALL:
        cout << Utils::defaultOffset << "MSSIPOTF_E_FILETOOSMALL" << endl;
        cout << Utils::defaultOffsetDocInfo << "File is too small to contain the last table." << endl;
        break;
        case MSSIPOTF_E_TABLE_CHECKSUM:
        cout << Utils::defaultOffset << "MSSIPOTF_E_TABLE_CHECKSUM" << endl;
        cout << Utils::defaultOffsetDocInfo << "A table checksum is incorrect." << endl;
        break;
        case MSSIPOTF_E_FILE_CHECKSUM:
        cout << Utils::defaultOffset << "MSSIPOTF_E_FILE_CHECKSUM" << endl;
        cout << Utils::defaultOffsetDocInfo << "The file checksum is incorrect." << endl;
        break;
        case MSSIPOTF_E_FAILED_POLICY:
        cout << Utils::defaultOffset << "MSSIPOTF_E_FAILED_POLICY" << endl;
        cout << Utils::defaultOffsetDocInfo << "The signature does not have the correct attributes for the policy." << endl;
        break;
        case MSSIPOTF_E_FAILED_HINTS_CHECK:
        cout << Utils::defaultOffset << "MSSIPOTF_E_FAILED_HINTS_CHECK" << endl;
        cout << Utils::defaultOffsetDocInfo << "The file did not pass the hints check." << endl;
        break;
        case MSSIPOTF_E_NOT_OPENTYPE:
        cout << Utils::defaultOffset << "MSSIPOTF_E_NOT_OPENTYPE" << endl;
        cout << Utils::defaultOffsetDocInfo << "The file is not an OpenType file." << endl;
        break;
        case MSSIPOTF_E_FILE:
        cout << Utils::defaultOffset << "MSSIPOTF_E_FILE" << endl;
        cout << Utils::defaultOffsetDocInfo << "Failed on a file operation (such as open, map, read, or write)." << endl;
        break;
        case MSSIPOTF_E_CRYPT:
        cout << Utils::defaultOffset << "MSSIPOTF_E_CRYPT" << endl;
        cout << Utils::defaultOffsetDocInfo << "A call to a CryptoAPI function failed." << endl;
        break;
        case MSSIPOTF_E_BADVERSION:
        cout << Utils::defaultOffset << "MSSIPOTF_E_BADVERSION" << endl;
        cout << Utils::defaultOffsetDocInfo << "There is a bad version number in the file." << endl;
        break;
        case MSSIPOTF_E_DSIG_STRUCTURE:
        cout << Utils::defaultOffset << "MSSIPOTF_E_DSIG_STRUCTURE" << endl;
        cout << Utils::defaultOffsetDocInfo << "The structure of the DSIG table is incorrect." << endl;
        break;
        case MSSIPOTF_E_PCONST_CHECK:
        cout << Utils::defaultOffset << "MSSIPOTF_E_PCONST_CHECK" << endl;
        cout << Utils::defaultOffsetDocInfo << "A check failed in a partially constant table." << endl;
        break;
        case MSSIPOTF_E_STRUCTURE:
        cout << Utils::defaultOffset << "MSSIPOTF_E_STRUCTURE" << endl;
        cout << Utils::defaultOffsetDocInfo << "Some kind of structural error." << endl;
        break;
        case ERROR_CRED_REQUIRES_CONFIRMATION:
        cout << Utils::defaultOffset << "ERROR_CRED_REQUIRES_CONFIRMATION" << endl;
        cout << Utils::defaultOffsetDocInfo << "The requested credential requires confirmation." << endl;
        break;
        case TRUST_E_PROVIDER_UNKNOWN:
        cout << Utils::defaultOffset << "TRUST_E_PROVIDER_UNKNOWN" << endl;
        cout << Utils::defaultOffsetDocInfo << "Unknown trust provider." << endl;
        break;
        case TRUST_E_ACTION_UNKNOWN:
        cout << Utils::defaultOffset << "TRUST_E_ACTION_UNKNOWN" << endl;
        cout << Utils::defaultOffsetDocInfo << "The trust verification action specified is not supported by the specified trust provider." << endl;
        break;
        case TRUST_E_SUBJECT_FORM_UNKNOWN:
        cout << Utils::defaultOffset << "TRUST_E_SUBJECT_FORM_UNKNOWN" << endl;
        cout << Utils::defaultOffsetDocInfo << "The form specified for the subject is not one supported or known by the specified trust provider." << endl;
        break;
        case TRUST_E_SUBJECT_NOT_TRUSTED:
        cout << Utils::defaultOffset << "TRUST_E_SUBJECT_NOT_TRUSTED" << endl;
        cout << Utils::defaultOffsetDocInfo << "The subject is not trusted for the specified action." << endl;
        break;
        case DIGSIG_E_ENCODE:
        cout << Utils::defaultOffset << "DIGSIG_E_ENCODE" << endl;
        cout << Utils::defaultOffsetDocInfo << "Error due to problem in ASN.1 encoding process." << endl;
        break;
        case DIGSIG_E_DECODE:
        cout << Utils::defaultOffset << "DIGSIG_E_DECODE" << endl;
        cout << Utils::defaultOffsetDocInfo << "Error due to problem in ASN.1 decoding process." << endl;
        break;
        case DIGSIG_E_EXTENSIBILITY:
        cout << Utils::defaultOffset << "DIGSIG_E_EXTENSIBILITY" << endl;
        cout << Utils::defaultOffsetDocInfo << "Reading/writing extensions where attributes are appropriate, and vice versa." << endl;
        break;
        case DIGSIG_E_CRYPTO:
        cout << Utils::defaultOffset << "DIGSIG_E_CRYPTO" << endl;
        cout << Utils::defaultOffsetDocInfo << "Unspecified cryptographic failure." << endl;
        break;
        case PERSIST_E_SIZEDEFINITE:
        cout << Utils::defaultOffset << "PERSIST_E_SIZEDEFINITE" << endl;
        cout << Utils::defaultOffsetDocInfo << "The size of the data could not be determined." << endl;
        break;
        case PERSIST_E_SIZEINDEFINITE:
        cout << Utils::defaultOffset << "PERSIST_E_SIZEINDEFINITE" << endl;
        cout << Utils::defaultOffsetDocInfo << "The size of the indefinite-sized data could not be determined." << endl;
        break;
        case PERSIST_E_NOTSELFSIZING:
        cout << Utils::defaultOffset << "PERSIST_E_NOTSELFSIZING" << endl;
        cout << Utils::defaultOffsetDocInfo << "This object does not read and write self-sizing data." << endl;
        break;
        case TRUST_E_NOSIGNATURE:
        cout << Utils::defaultOffset << "TRUST_E_NOSIGNATURE" << endl;
        cout << Utils::defaultOffsetDocInfo << "No signature was present in the subject." << endl;
        break;
        case CERT_E_EXPIRED:
        cout << Utils::defaultOffset << "CERT_E_EXPIRED" << endl;
        cout << Utils::defaultOffsetDocInfo << "A required certificate is not within its validity period when verifying against the current system clock or the time stamp in the signed file." << endl;
        break;
        case CERT_E_VALIDITYPERIODNESTING:
        cout << Utils::defaultOffset << "CERT_E_VALIDITYPERIODNESTING" << endl;
        cout << Utils::defaultOffsetDocInfo << "The validity periods of the certification chain do not nest correctly." << endl;
        break;
        case CERT_E_ROLE:
        cout << Utils::defaultOffset << "CERT_E_ROLE" << endl;
        cout << Utils::defaultOffsetDocInfo << "A certificate that can only be used as an end entity is being used as a CA or vice versa." << endl;
        break;
        case CERT_E_PATHLENCONST:
        cout << Utils::defaultOffset << "CERT_E_PATHLENCONST" << endl;
        cout << Utils::defaultOffsetDocInfo << "A path length constraint in the certification chain has been violated." << endl;
        break;
        case CERT_E_CRITICAL:
        cout << Utils::defaultOffset << "CERT_E_CRITICAL" << endl;
        cout << Utils::defaultOffsetDocInfo << "A certificate contains an unknown extension that is marked \"critical\"." << endl;
        break;
        case CERT_E_PURPOSE:
        cout << Utils::defaultOffset << "CERT_E_PURPOSE" << endl;
        cout << Utils::defaultOffsetDocInfo << "A certificate is being used for a purpose other than the ones specified by its CA." << endl;
        break;
        case CERT_E_ISSUERCHAINING:
        cout << Utils::defaultOffset << "CERT_E_ISSUERCHAINING" << endl;
        cout << Utils::defaultOffsetDocInfo << "A parent of a given certificate did not issue that child certificate." << endl;
        break;
        case CERT_E_MALFORMED:
        cout << Utils::defaultOffset << "CERT_E_MALFORMED" << endl;
        cout << Utils::defaultOffsetDocInfo << "A certificate is missing or has an empty value for an important field, such as a subject or issuer name." << endl;
        break;
        case CERT_E_UNTRUSTEDROOT:
        cout << Utils::defaultOffset << "CERT_E_UNTRUSTEDROOT" << endl;
        cout << Utils::defaultOffsetDocInfo << "A certificate chain processed, but terminated in a root certificate that is not trusted by the trust provider." << endl;
        break;
        case CERT_E_CHAINING:
        cout << Utils::defaultOffset << "CERT_E_CHAINING" << endl;
        cout << Utils::defaultOffsetDocInfo << "A certificate chain could not be built to a trusted root authority." << endl;
        break;
        case TRUST_E_FAIL:
        cout << Utils::defaultOffset << "TRUST_E_FAIL" << endl;
        cout << Utils::defaultOffsetDocInfo << "Generic trust failure." << endl;
        break;
        case CERT_E_REVOKED:
        cout << Utils::defaultOffset << "CERT_E_REVOKED" << endl;
        cout << Utils::defaultOffsetDocInfo << "A certificate was explicitly revoked by its issuer." << endl;
        break;
        case CERT_E_UNTRUSTEDTESTROOT:
        cout << Utils::defaultOffset << "CERT_E_UNTRUSTEDTESTROOT" << endl;
        cout << Utils::defaultOffsetDocInfo << "The certification path terminates with the test root that is not trusted with the current policy settings." << endl;
        break;
        case CERT_E_REVOCATION_FAILURE:
        cout << Utils::defaultOffset << "CERT_E_REVOCATION_FAILURE" << endl;
        cout << Utils::defaultOffsetDocInfo << "The revocation process could not continue—the certificates could not be checked." << endl;
        break;
        case CERT_E_CN_NO_MATCH:
        cout << Utils::defaultOffset << "CERT_E_CN_NO_MATCH" << endl;
        cout << Utils::defaultOffsetDocInfo << "The certificate's CN name does not match the passed value." << endl;
        break;
        case CERT_E_WRONG_USAGE:
        cout << Utils::defaultOffset << "CERT_E_WRONG_USAGE" << endl;
        cout << Utils::defaultOffsetDocInfo << "The certificate is not valid for the requested usage." << endl;
        break;
        case TRUST_E_EXPLICIT_DISTRUST:
        cout << Utils::defaultOffset << "TRUST_E_EXPLICIT_DISTRUST" << endl;
        cout << Utils::defaultOffsetDocInfo << "The certificate was explicitly marked as untrusted by the user." << endl;
        break;
        case CERT_E_UNTRUSTEDCA:
        cout << Utils::defaultOffset << "CERT_E_UNTRUSTEDCA" << endl;
        cout << Utils::defaultOffsetDocInfo << "A certification chain processed correctly, but one of the CA certificates is not trusted by the policy provider." << endl;
        break;
        case CERT_E_INVALID_POLICY:
        cout << Utils::defaultOffset << "CERT_E_INVALID_POLICY" << endl;
        cout << Utils::defaultOffsetDocInfo << "The certificate has invalid policy." << endl;
        break;
        case CERT_E_INVALID_NAME:
        cout << Utils::defaultOffset << "CERT_E_INVALID_NAME" << endl;
        cout << Utils::defaultOffsetDocInfo << "The certificate has an invalid name. The name is not included in the permitted list or is explicitly excluded." << endl;
        break;
        case NS_W_SERVER_BANDWIDTH_LIMIT:
        cout << Utils::defaultOffset << "NS_W_SERVER_BANDWIDTH_LIMIT" << endl;
        cout << Utils::defaultOffsetDocInfo << "The maximum filebitrate value specified is greater than the server's configured maximum bandwidth." << endl;
        break;
        case NS_W_FILE_BANDWIDTH_LIMIT:
        cout << Utils::defaultOffset << "NS_W_FILE_BANDWIDTH_LIMIT" << endl;
        cout << Utils::defaultOffsetDocInfo << "The maximum bandwidth value specified is less than the maximum filebitrate." << endl;
        break;
        case NS_W_UNKNOWN_EVENT:
        cout << Utils::defaultOffset << "NS_W_UNKNOWN_EVENT" << endl;
        cout << Utils::defaultOffsetDocInfo << "Unknown %1 event encountered." << endl;
        break;
        case NS_I_CATATONIC_FAILURE:
        cout << Utils::defaultOffset << "NS_I_CATATONIC_FAILURE" << endl;
        cout << Utils::defaultOffsetDocInfo << "Disk %1 ( %2 ) on Content Server %3, will be failed because it is catatonic." << endl;
        break;
        case NS_I_CATATONIC_AUTO_UNFAIL:
        cout << Utils::defaultOffset << "NS_I_CATATONIC_AUTO_UNFAIL" << endl;
        cout << Utils::defaultOffsetDocInfo << "Disk %1 ( %2 ) on Content Server %3, auto online from catatonic state." << endl;
        break;
        case SPAPI_E_EXPECTED_SECTION_NAME:
        cout << Utils::defaultOffset << "SPAPI_E_EXPECTED_SECTION_NAME" << endl;
        cout << Utils::defaultOffsetDocInfo << "A non-empty line was encountered in the INF before the start of a section." << endl;
        break;
        case SPAPI_E_BAD_SECTION_NAME_LINE:
        cout << Utils::defaultOffset << "SPAPI_E_BAD_SECTION_NAME_LINE" << endl;
        cout << Utils::defaultOffsetDocInfo << "A section name marker in the information file (INF) is not complete or does not exist on a line by itself." << endl;
        break;
        case SPAPI_E_SECTION_NAME_TOO_LONG:
        cout << Utils::defaultOffset << "SPAPI_E_SECTION_NAME_TOO_LONG" << endl;
        cout << Utils::defaultOffsetDocInfo << "An INF section was encountered whose name exceeds the maximum section name length." << endl;
        break;
        case SPAPI_E_GENERAL_SYNTAX:
        cout << Utils::defaultOffset << "SPAPI_E_GENERAL_SYNTAX" << endl;
        cout << Utils::defaultOffsetDocInfo << "The syntax of the INF is invalid." << endl;
        break;
        case SPAPI_E_WRONG_INF_STYLE:
        cout << Utils::defaultOffset << "SPAPI_E_WRONG_INF_STYLE" << endl;
        cout << Utils::defaultOffsetDocInfo << "The style of the INF is different than what was requested." << endl;
        break;
        case SPAPI_E_SECTION_NOT_FOUND:
        cout << Utils::defaultOffset << "SPAPI_E_SECTION_NOT_FOUND" << endl;
        cout << Utils::defaultOffsetDocInfo << "The required section was not found in the INF." << endl;
        break;
        case SPAPI_E_LINE_NOT_FOUND:
        cout << Utils::defaultOffset << "SPAPI_E_LINE_NOT_FOUND" << endl;
        cout << Utils::defaultOffsetDocInfo << "The required line was not found in the INF." << endl;
        break;
        case SPAPI_E_NO_BACKUP:
        cout << Utils::defaultOffset << "SPAPI_E_NO_BACKUP" << endl;
        cout << Utils::defaultOffsetDocInfo << "The files affected by the installation of this file queue have not been backed up for uninstall." << endl;
        break;
        case SPAPI_E_NO_ASSOCIATED_CLASS:
        cout << Utils::defaultOffset << "SPAPI_E_NO_ASSOCIATED_CLASS" << endl;
        cout << Utils::defaultOffsetDocInfo << "The INF or the device information set or element does not have an associated install class." << endl;
        break;
        case SPAPI_E_CLASS_MISMATCH:
        cout << Utils::defaultOffset << "SPAPI_E_CLASS_MISMATCH" << endl;
        cout << Utils::defaultOffsetDocInfo << "The INF or the device information set or element does not match the specified install class." << endl;
        break;
        case SPAPI_E_DUPLICATE_FOUND:
        cout << Utils::defaultOffset << "SPAPI_E_DUPLICATE_FOUND" << endl;
        cout << Utils::defaultOffsetDocInfo << "An existing device was found that is a duplicate of the device being manually installed." << endl;
        break;
        case SPAPI_E_NO_DRIVER_SELECTED:
        cout << Utils::defaultOffset << "SPAPI_E_NO_DRIVER_SELECTED" << endl;
        cout << Utils::defaultOffsetDocInfo << "There is no driver selected for the device information set or element." << endl;
        break;
        case SPAPI_E_KEY_DOES_NOT_EXIST:
        cout << Utils::defaultOffset << "SPAPI_E_KEY_DOES_NOT_EXIST" << endl;
        cout << Utils::defaultOffsetDocInfo << "The requested device registry key does not exist." << endl;
        break;
        case SPAPI_E_INVALID_DEVINST_NAME:
        cout << Utils::defaultOffset << "SPAPI_E_INVALID_DEVINST_NAME" << endl;
        cout << Utils::defaultOffsetDocInfo << "The device instance name is invalid." << endl;
        break;
        case SPAPI_E_INVALID_CLASS:
        cout << Utils::defaultOffset << "SPAPI_E_INVALID_CLASS" << endl;
        cout << Utils::defaultOffsetDocInfo << "The install class is not present or is invalid." << endl;
        break;
        case SPAPI_E_DEVINST_ALREADY_EXISTS:
        cout << Utils::defaultOffset << "SPAPI_E_DEVINST_ALREADY_EXISTS" << endl;
        cout << Utils::defaultOffsetDocInfo << "The device instance cannot be created because it already exists." << endl;
        break;
        case SPAPI_E_DEVINFO_NOT_REGISTERED:
        cout << Utils::defaultOffset << "SPAPI_E_DEVINFO_NOT_REGISTERED" << endl;
        cout << Utils::defaultOffsetDocInfo << "The operation cannot be performed on a device information element that has not been registered." << endl;
        break;
        case SPAPI_E_INVALID_REG_PROPERTY:
        cout << Utils::defaultOffset << "SPAPI_E_INVALID_REG_PROPERTY" << endl;
        cout << Utils::defaultOffsetDocInfo << "The device property code is invalid." << endl;
        break;
        case SPAPI_E_NO_INF:
        cout << Utils::defaultOffset << "SPAPI_E_NO_INF" << endl;
        cout << Utils::defaultOffsetDocInfo << "The INF from which a driver list is to be built does not exist." << endl;
        break;
        case SPAPI_E_NO_SUCH_DEVINST:
        cout << Utils::defaultOffset << "SPAPI_E_NO_SUCH_DEVINST" << endl;
        cout << Utils::defaultOffsetDocInfo << "The device instance does not exist in the hardware tree." << endl;
        break;
        case SPAPI_E_CANT_LOAD_CLASS_ICON:
        cout << Utils::defaultOffset << "SPAPI_E_CANT_LOAD_CLASS_ICON" << endl;
        cout << Utils::defaultOffsetDocInfo << "The icon representing this install class cannot be loaded." << endl;
        break;
        case SPAPI_E_INVALID_CLASS_INSTALLER:
        cout << Utils::defaultOffset << "SPAPI_E_INVALID_CLASS_INSTALLER" << endl;
        cout << Utils::defaultOffsetDocInfo << "The class installer registry entry is invalid." << endl;
        break;
        case SPAPI_E_DI_DO_DEFAULT:
        cout << Utils::defaultOffset << "SPAPI_E_DI_DO_DEFAULT" << endl;
        cout << Utils::defaultOffsetDocInfo << "The class installer has indicated that the default action should be performed for this installation request." << endl;
        break;
        case SPAPI_E_DI_NOFILECOPY:
        cout << Utils::defaultOffset << "SPAPI_E_DI_NOFILECOPY" << endl;
        cout << Utils::defaultOffsetDocInfo << "The operation does not require any files to be copied." << endl;
        break;
        case SPAPI_E_INVALID_HWPROFILE:
        cout << Utils::defaultOffset << "SPAPI_E_INVALID_HWPROFILE" << endl;
        cout << Utils::defaultOffsetDocInfo << "The specified hardware profile does not exist." << endl;
        break;
        case SPAPI_E_NO_DEVICE_SELECTED:
        cout << Utils::defaultOffset << "SPAPI_E_NO_DEVICE_SELECTED" << endl;
        cout << Utils::defaultOffsetDocInfo << "There is no device information element currently selected for this device information set." << endl;
        break;
        case SPAPI_E_DEVINFO_LIST_LOCKED:
        cout << Utils::defaultOffset << "SPAPI_E_DEVINFO_LIST_LOCKED" << endl;
        cout << Utils::defaultOffsetDocInfo << "The operation cannot be performed because the device information set is locked." << endl;
        break;
        case SPAPI_E_DEVINFO_DATA_LOCKED:
        cout << Utils::defaultOffset << "SPAPI_E_DEVINFO_DATA_LOCKED" << endl;
        cout << Utils::defaultOffsetDocInfo << "The operation cannot be performed because the device information element is locked." << endl;
        break;
        case SPAPI_E_DI_BAD_PATH:
        cout << Utils::defaultOffset << "SPAPI_E_DI_BAD_PATH" << endl;
        cout << Utils::defaultOffsetDocInfo << "The specified path does not contain any applicable device INFs." << endl;
        break;
        case SPAPI_E_NO_CLASSINSTALL_PARAMS:
        cout << Utils::defaultOffset << "SPAPI_E_NO_CLASSINSTALL_PARAMS" << endl;
        cout << Utils::defaultOffsetDocInfo << "No class installer parameters have been set for the device information set or element." << endl;
        break;
        case SPAPI_E_FILEQUEUE_LOCKED:
        cout << Utils::defaultOffset << "SPAPI_E_FILEQUEUE_LOCKED" << endl;
        cout << Utils::defaultOffsetDocInfo << "The operation cannot be performed because the file queue is locked." << endl;
        break;
        case SPAPI_E_BAD_SERVICE_INSTALLSECT:
        cout << Utils::defaultOffset << "SPAPI_E_BAD_SERVICE_INSTALLSECT" << endl;
        cout << Utils::defaultOffsetDocInfo << "A service installation section in this INF is invalid." << endl;
        break;
        case SPAPI_E_NO_CLASS_DRIVER_LIST:
        cout << Utils::defaultOffset << "SPAPI_E_NO_CLASS_DRIVER_LIST" << endl;
        cout << Utils::defaultOffsetDocInfo << "There is no class driver list for the device information element." << endl;
        break;
        case SPAPI_E_NO_ASSOCIATED_SERVICE:
        cout << Utils::defaultOffset << "SPAPI_E_NO_ASSOCIATED_SERVICE" << endl;
        cout << Utils::defaultOffsetDocInfo << "The installation failed because a function driver was not specified for this device instance." << endl;
        break;
        case SPAPI_E_NO_DEFAULT_DEVICE_INTERFACE:
        cout << Utils::defaultOffset << "SPAPI_E_NO_DEFAULT_DEVICE_INTERFACE" << endl;
        cout << Utils::defaultOffsetDocInfo << "There is presently no default device interface designated for this interface class." << endl;
        break;
        case SPAPI_E_DEVICE_INTERFACE_ACTIVE:
        cout << Utils::defaultOffset << "SPAPI_E_DEVICE_INTERFACE_ACTIVE" << endl;
        cout << Utils::defaultOffsetDocInfo << "The operation cannot be performed because the device interface is currently active." << endl;
        break;
        case SPAPI_E_DEVICE_INTERFACE_REMOVED:
        cout << Utils::defaultOffset << "SPAPI_E_DEVICE_INTERFACE_REMOVED" << endl;
        cout << Utils::defaultOffsetDocInfo << "The operation cannot be performed because the device interface has been removed from the system." << endl;
        break;
        case SPAPI_E_BAD_INTERFACE_INSTALLSECT:
        cout << Utils::defaultOffset << "SPAPI_E_BAD_INTERFACE_INSTALLSECT" << endl;
        cout << Utils::defaultOffsetDocInfo << "An interface installation section in this INF is invalid." << endl;
        break;
        case SPAPI_E_NO_SUCH_INTERFACE_CLASS:
        cout << Utils::defaultOffset << "SPAPI_E_NO_SUCH_INTERFACE_CLASS" << endl;
        cout << Utils::defaultOffsetDocInfo << "This interface class does not exist in the system." << endl;
        break;
        case SPAPI_E_INVALID_REFERENCE_STRING:
        cout << Utils::defaultOffset << "SPAPI_E_INVALID_REFERENCE_STRING" << endl;
        cout << Utils::defaultOffsetDocInfo << "The reference string supplied for this interface device is invalid." << endl;
        break;
        case SPAPI_E_INVALID_MACHINENAME:
        cout << Utils::defaultOffset << "SPAPI_E_INVALID_MACHINENAME" << endl;
        cout << Utils::defaultOffsetDocInfo << "The specified machine name does not conform to Universal Naming Convention (UNCs)." << endl;
        break;
        case SPAPI_E_REMOTE_COMM_FAILURE:
        cout << Utils::defaultOffset << "SPAPI_E_REMOTE_COMM_FAILURE" << endl;
        cout << Utils::defaultOffsetDocInfo << "A general remote communication error occurred." << endl;
        break;
        case SPAPI_E_MACHINE_UNAVAILABLE:
        cout << Utils::defaultOffset << "SPAPI_E_MACHINE_UNAVAILABLE" << endl;
        cout << Utils::defaultOffsetDocInfo << "The machine selected for remote communication is not available at this time." << endl;
        break;
        case SPAPI_E_NO_CONFIGMGR_SERVICES:
        cout << Utils::defaultOffset << "SPAPI_E_NO_CONFIGMGR_SERVICES" << endl;
        cout << Utils::defaultOffsetDocInfo << "The Plug and Play service is not available on the remote machine." << endl;
        break;
        case SPAPI_E_INVALID_PROPPAGE_PROVIDER:
        cout << Utils::defaultOffset << "SPAPI_E_INVALID_PROPPAGE_PROVIDER" << endl;
        cout << Utils::defaultOffsetDocInfo << "The property page provider registry entry is invalid." << endl;
        break;
        case SPAPI_E_NO_SUCH_DEVICE_INTERFACE:
        cout << Utils::defaultOffset << "SPAPI_E_NO_SUCH_DEVICE_INTERFACE" << endl;
        cout << Utils::defaultOffsetDocInfo << "The requested device interface is not present in the system." << endl;
        break;
        case SPAPI_E_DI_POSTPROCESSING_REQUIRED:
        cout << Utils::defaultOffset << "SPAPI_E_DI_POSTPROCESSING_REQUIRED" << endl;
        cout << Utils::defaultOffsetDocInfo << "The device's co-installer has additional work to perform after installation is complete." << endl;
        break;
        case SPAPI_E_INVALID_COINSTALLER:
        cout << Utils::defaultOffset << "SPAPI_E_INVALID_COINSTALLER" << endl;
        cout << Utils::defaultOffsetDocInfo << "The device's co-installer is invalid." << endl;
        break;
        case SPAPI_E_NO_COMPAT_DRIVERS:
        cout << Utils::defaultOffset << "SPAPI_E_NO_COMPAT_DRIVERS" << endl;
        cout << Utils::defaultOffsetDocInfo << "There are no compatible drivers for this device." << endl;
        break;
        case SPAPI_E_NO_DEVICE_ICON:
        cout << Utils::defaultOffset << "SPAPI_E_NO_DEVICE_ICON" << endl;
        cout << Utils::defaultOffsetDocInfo << "There is no icon that represents this device or device type." << endl;
        break;
        case SPAPI_E_INVALID_INF_LOGCONFIG:
        cout << Utils::defaultOffset << "SPAPI_E_INVALID_INF_LOGCONFIG" << endl;
        cout << Utils::defaultOffsetDocInfo << "A logical configuration specified in this INF is invalid." << endl;
        break;
        case SPAPI_E_DI_DONT_INSTALL:
        cout << Utils::defaultOffset << "SPAPI_E_DI_DONT_INSTALL" << endl;
        cout << Utils::defaultOffsetDocInfo << "The class installer has denied the request to install or upgrade this device." << endl;
        break;
        case SPAPI_E_INVALID_FILTER_DRIVER:
        cout << Utils::defaultOffset << "SPAPI_E_INVALID_FILTER_DRIVER" << endl;
        cout << Utils::defaultOffsetDocInfo << "One of the filter drivers installed for this device is invalid." << endl;
        break;
        case SPAPI_E_NON_WINDOWS_NT_DRIVER:
        cout << Utils::defaultOffset << "SPAPI_E_NON_WINDOWS_NT_DRIVER" << endl;
        cout << Utils::defaultOffsetDocInfo << "The driver selected for this device does not support Windows XP operating system." << endl;
        break;
        case SPAPI_E_NON_WINDOWS_DRIVER:
        cout << Utils::defaultOffset << "SPAPI_E_NON_WINDOWS_DRIVER" << endl;
        cout << Utils::defaultOffsetDocInfo << "The driver selected for this device does not support Windows." << endl;
        break;
        case SPAPI_E_NO_CATALOG_FOR_OEM_INF:
        cout << Utils::defaultOffset << "SPAPI_E_NO_CATALOG_FOR_OEM_INF" << endl;
        cout << Utils::defaultOffsetDocInfo << "The third-party INF does not contain digital signature information." << endl;
        break;
        case SPAPI_E_DEVINSTALL_QUEUE_NONNATIVE:
        cout << Utils::defaultOffset << "SPAPI_E_DEVINSTALL_QUEUE_NONNATIVE" << endl;
        cout << Utils::defaultOffsetDocInfo << "An invalid attempt was made to use a device installation file queue for verification of digital signatures relative to other platforms." << endl;
        break;
        case SPAPI_E_NOT_DISABLEABLE:
        cout << Utils::defaultOffset << "SPAPI_E_NOT_DISABLEABLE" << endl;
        cout << Utils::defaultOffsetDocInfo << "The device cannot be disabled." << endl;
        break;
        case SPAPI_E_CANT_REMOVE_DEVINST:
        cout << Utils::defaultOffset << "SPAPI_E_CANT_REMOVE_DEVINST" << endl;
        cout << Utils::defaultOffsetDocInfo << "The device could not be dynamically removed." << endl;
        break;
        case SPAPI_E_INVALID_TARGET:
        cout << Utils::defaultOffset << "SPAPI_E_INVALID_TARGET" << endl;
        cout << Utils::defaultOffsetDocInfo << "Cannot copy to specified target." << endl;
        break;
        case SPAPI_E_DRIVER_NONNATIVE:
        cout << Utils::defaultOffset << "SPAPI_E_DRIVER_NONNATIVE" << endl;
        cout << Utils::defaultOffsetDocInfo << "Driver is not intended for this platform." << endl;
        break;
        case SPAPI_E_IN_WOW64:
        cout << Utils::defaultOffset << "SPAPI_E_IN_WOW64" << endl;
        cout << Utils::defaultOffsetDocInfo << "Operation not allowed in WOW64." << endl;
        break;
        case SPAPI_E_SET_SYSTEM_RESTORE_POINT:
        cout << Utils::defaultOffset << "SPAPI_E_SET_SYSTEM_RESTORE_POINT" << endl;
        cout << Utils::defaultOffsetDocInfo << "The operation involving unsigned file copying was rolled back, so that a system restore point could be set." << endl;
        break;
        case SPAPI_E_INCORRECTLY_COPIED_INF:
        cout << Utils::defaultOffset << "SPAPI_E_INCORRECTLY_COPIED_INF" << endl;
        cout << Utils::defaultOffsetDocInfo << "An INF was copied into the Windows INF directory in an improper manner." << endl;
        break;
        case SPAPI_E_SCE_DISABLED:
        cout << Utils::defaultOffset << "SPAPI_E_SCE_DISABLED" << endl;
        cout << Utils::defaultOffsetDocInfo << "The Security Configuration Editor (SCE) APIs have been disabled on this embedded product." << endl;
        break;
        case SPAPI_E_UNKNOWN_EXCEPTION:
        cout << Utils::defaultOffset << "SPAPI_E_UNKNOWN_EXCEPTION" << endl;
        cout << Utils::defaultOffsetDocInfo << "An unknown exception was encountered." << endl;
        break;
        case SPAPI_E_PNP_REGISTRY_ERROR:
        cout << Utils::defaultOffset << "SPAPI_E_PNP_REGISTRY_ERROR" << endl;
        cout << Utils::defaultOffsetDocInfo << "A problem was encountered when accessing the Plug and Play registry database." << endl;
        break;
        case SPAPI_E_REMOTE_REQUEST_UNSUPPORTED:
        cout << Utils::defaultOffset << "SPAPI_E_REMOTE_REQUEST_UNSUPPORTED" << endl;
        cout << Utils::defaultOffsetDocInfo << "The requested operation is not supported for a remote machine." << endl;
        break;
        case SPAPI_E_NOT_AN_INSTALLED_OEM_INF:
        cout << Utils::defaultOffset << "SPAPI_E_NOT_AN_INSTALLED_OEM_INF" << endl;
        cout << Utils::defaultOffsetDocInfo << "The specified file is not an installed original equipment manufacturer (OEM) INF." << endl;
        break;
        case SPAPI_E_INF_IN_USE_BY_DEVICES:
        cout << Utils::defaultOffset << "SPAPI_E_INF_IN_USE_BY_DEVICES" << endl;
        cout << Utils::defaultOffsetDocInfo << "One or more devices are presently installed using the specified INF." << endl;
        break;
        case SPAPI_E_DI_FUNCTION_OBSOLETE:
        cout << Utils::defaultOffset << "SPAPI_E_DI_FUNCTION_OBSOLETE" << endl;
        cout << Utils::defaultOffsetDocInfo << "The requested device install operation is obsolete." << endl;
        break;
        case SPAPI_E_NO_AUTHENTICODE_CATALOG:
        cout << Utils::defaultOffset << "SPAPI_E_NO_AUTHENTICODE_CATALOG" << endl;
        cout << Utils::defaultOffsetDocInfo << "A file could not be verified because it does not have an associated catalog signed via Authenticode." << endl;
        break;
        case SPAPI_E_AUTHENTICODE_DISALLOWED:
        cout << Utils::defaultOffset << "SPAPI_E_AUTHENTICODE_DISALLOWED" << endl;
        cout << Utils::defaultOffsetDocInfo << "Authenticode signature verification is not supported for the specified INF." << endl;
        break;
        case SPAPI_E_AUTHENTICODE_TRUSTED_PUBLISHER:
        cout << Utils::defaultOffset << "SPAPI_E_AUTHENTICODE_TRUSTED_PUBLISHER" << endl;
        cout << Utils::defaultOffsetDocInfo << "The INF was signed with an Authenticode catalog from a trusted publisher." << endl;
        break;
        case SPAPI_E_AUTHENTICODE_TRUST_NOT_ESTABLISHED:
        cout << Utils::defaultOffset << "SPAPI_E_AUTHENTICODE_TRUST_NOT_ESTABLISHED" << endl;
        cout << Utils::defaultOffsetDocInfo << "The publisher of an Authenticode-signed catalog has not yet been established as trusted." << endl;
        break;
        case SPAPI_E_AUTHENTICODE_PUBLISHER_NOT_TRUSTED:
        cout << Utils::defaultOffset << "SPAPI_E_AUTHENTICODE_PUBLISHER_NOT_TRUSTED" << endl;
        cout << Utils::defaultOffsetDocInfo << "The publisher of an Authenticode-signed catalog was not established as trusted." << endl;
        break;
        case SPAPI_E_SIGNATURE_OSATTRIBUTE_MISMATCH:
        cout << Utils::defaultOffset << "SPAPI_E_SIGNATURE_OSATTRIBUTE_MISMATCH" << endl;
        cout << Utils::defaultOffsetDocInfo << "The software was tested for compliance with Windows logo requirements on a different version of Windows and might not be compatible with this version." << endl;
        break;
        case SPAPI_E_ONLY_VALIDATE_VIA_AUTHENTICODE:
        cout << Utils::defaultOffset << "SPAPI_E_ONLY_VALIDATE_VIA_AUTHENTICODE" << endl;
        cout << Utils::defaultOffsetDocInfo << "The file can be validated only by a catalog signed via Authenticode." << endl;
        break;
        case SPAPI_E_DEVICE_INSTALLER_NOT_READY:
        cout << Utils::defaultOffset << "SPAPI_E_DEVICE_INSTALLER_NOT_READY" << endl;
        cout << Utils::defaultOffsetDocInfo << "One of the installers for this device cannot perform the installation at this time." << endl;
        break;
        case SPAPI_E_DRIVER_STORE_ADD_FAILED:
        cout << Utils::defaultOffset << "SPAPI_E_DRIVER_STORE_ADD_FAILED" << endl;
        cout << Utils::defaultOffsetDocInfo << "A problem was encountered while attempting to add the driver to the store." << endl;
        break;
        case SPAPI_E_DEVICE_INSTALL_BLOCKED:
        cout << Utils::defaultOffset << "SPAPI_E_DEVICE_INSTALL_BLOCKED" << endl;
        cout << Utils::defaultOffsetDocInfo << "The installation of this device is forbidden by system policy. Contact your system administrator." << endl;
        break;
        case SPAPI_E_DRIVER_INSTALL_BLOCKED:
        cout << Utils::defaultOffset << "SPAPI_E_DRIVER_INSTALL_BLOCKED" << endl;
        cout << Utils::defaultOffsetDocInfo << "The installation of this driver is forbidden by system policy. Contact your system administrator." << endl;
        break;
        case SPAPI_E_WRONG_INF_TYPE:
        cout << Utils::defaultOffset << "SPAPI_E_WRONG_INF_TYPE" << endl;
        cout << Utils::defaultOffsetDocInfo << "The specified INF is the wrong type for this operation." << endl;
        break;
        case SPAPI_E_FILE_HASH_NOT_IN_CATALOG:
        cout << Utils::defaultOffset << "SPAPI_E_FILE_HASH_NOT_IN_CATALOG" << endl;
        cout << Utils::defaultOffsetDocInfo << "The hash for the file is not present in the specified catalog file. The file is likely corrupt or the victim of tampering." << endl;
        break;
        case SPAPI_E_DRIVER_STORE_DELETE_FAILED:
        cout << Utils::defaultOffset << "SPAPI_E_DRIVER_STORE_DELETE_FAILED" << endl;
        cout << Utils::defaultOffsetDocInfo << "A problem was encountered while attempting to delete the driver from the store." << endl;
        break;
        case SPAPI_E_UNRECOVERABLE_STACK_OVERFLOW:
        cout << Utils::defaultOffset << "SPAPI_E_UNRECOVERABLE_STACK_OVERFLOW" << endl;
        cout << Utils::defaultOffsetDocInfo << "An unrecoverable stack overflow was encountered." << endl;
        break;
        case SPAPI_E_ERROR_NOT_INSTALLED:
        cout << Utils::defaultOffset << "SPAPI_E_ERROR_NOT_INSTALLED" << endl;
        cout << Utils::defaultOffsetDocInfo << "No installed components were detected." << endl;
        break;
        case SCARD_F_INTERNAL_ERROR:
        cout << Utils::defaultOffset << "SCARD_F_INTERNAL_ERROR" << endl;
        cout << Utils::defaultOffsetDocInfo << "An internal consistency check failed." << endl;
        break;
        case SCARD_E_CANCELLED:
        cout << Utils::defaultOffset << "SCARD_E_CANCELLED" << endl;
        cout << Utils::defaultOffsetDocInfo << "The action was canceled by an SCardCancel request." << endl;
        break;
        case SCARD_E_INVALID_HANDLE:
        cout << Utils::defaultOffset << "SCARD_E_INVALID_HANDLE" << endl;
        cout << Utils::defaultOffsetDocInfo << "The supplied handle was invalid." << endl;
        break;
        case SCARD_E_INVALID_PARAMETER:
        cout << Utils::defaultOffset << "SCARD_E_INVALID_PARAMETER" << endl;
        cout << Utils::defaultOffsetDocInfo << "One or more of the supplied parameters could not be properly interpreted." << endl;
        break;
        case SCARD_E_INVALID_TARGET:
        cout << Utils::defaultOffset << "SCARD_E_INVALID_TARGET" << endl;
        cout << Utils::defaultOffsetDocInfo << "Registry startup information is missing or invalid." << endl;
        break;
        case SCARD_E_NO_MEMORY:
        cout << Utils::defaultOffset << "SCARD_E_NO_MEMORY" << endl;
        cout << Utils::defaultOffsetDocInfo << "Not enough memory available to complete this command." << endl;
        break;
        case SCARD_F_WAITED_TOO_LONG:
        cout << Utils::defaultOffset << "SCARD_F_WAITED_TOO_LONG" << endl;
        cout << Utils::defaultOffsetDocInfo << "An internal consistency timer has expired." << endl;
        break;
        case SCARD_E_INSUFFICIENT_BUFFER:
        cout << Utils::defaultOffset << "SCARD_E_INSUFFICIENT_BUFFER" << endl;
        cout << Utils::defaultOffsetDocInfo << "The data buffer to receive returned data is too small for the returned data." << endl;
        break;
        case SCARD_E_UNKNOWN_READER:
        cout << Utils::defaultOffset << "SCARD_E_UNKNOWN_READER" << endl;
        cout << Utils::defaultOffsetDocInfo << "The specified reader name is not recognized." << endl;
        break;
        case SCARD_E_TIMEOUT:
        cout << Utils::defaultOffset << "SCARD_E_TIMEOUT" << endl;
        cout << Utils::defaultOffsetDocInfo << "The user-specified time-out value has expired." << endl;
        break;
        case SCARD_E_SHARING_VIOLATION:
        cout << Utils::defaultOffset << "SCARD_E_SHARING_VIOLATION" << endl;
        cout << Utils::defaultOffsetDocInfo << "The smart card cannot be accessed because of other connections outstanding." << endl;
        break;
        case SCARD_E_NO_SMARTCARD:
        cout << Utils::defaultOffset << "SCARD_E_NO_SMARTCARD" << endl;
        cout << Utils::defaultOffsetDocInfo << "The operation requires a smart card, but no smart card is currently in the device." << endl;
        break;
        case SCARD_E_UNKNOWN_CARD:
        cout << Utils::defaultOffset << "SCARD_E_UNKNOWN_CARD" << endl;
        cout << Utils::defaultOffsetDocInfo << "The specified smart card name is not recognized." << endl;
        break;
        case SCARD_E_CANT_DISPOSE:
        cout << Utils::defaultOffset << "SCARD_E_CANT_DISPOSE" << endl;
        cout << Utils::defaultOffsetDocInfo << "The system could not dispose of the media in the requested manner." << endl;
        break;
        case SCARD_E_PROTO_MISMATCH:
        cout << Utils::defaultOffset << "SCARD_E_PROTO_MISMATCH" << endl;
        cout << Utils::defaultOffsetDocInfo << "The requested protocols are incompatible with the protocol currently in use with the smart card." << endl;
        break;
        case SCARD_E_NOT_READY:
        cout << Utils::defaultOffset << "SCARD_E_NOT_READY" << endl;
        cout << Utils::defaultOffsetDocInfo << "The reader or smart card is not ready to accept commands." << endl;
        break;
        case SCARD_E_INVALID_VALUE:
        cout << Utils::defaultOffset << "SCARD_E_INVALID_VALUE" << endl;
        cout << Utils::defaultOffsetDocInfo << "One or more of the supplied parameters values could not be properly interpreted." << endl;
        break;
        case SCARD_E_SYSTEM_CANCELLED:
        cout << Utils::defaultOffset << "SCARD_E_SYSTEM_CANCELLED" << endl;
        cout << Utils::defaultOffsetDocInfo << "The action was canceled by the system, presumably to log off or shut down." << endl;
        break;
        case SCARD_F_COMM_ERROR:
        cout << Utils::defaultOffset << "SCARD_F_COMM_ERROR" << endl;
        cout << Utils::defaultOffsetDocInfo << "An internal communications error has been detected." << endl;
        break;
        case SCARD_F_UNKNOWN_ERROR:
        cout << Utils::defaultOffset << "SCARD_F_UNKNOWN_ERROR" << endl;
        cout << Utils::defaultOffsetDocInfo << "An internal error has been detected, but the source is unknown." << endl;
        break;
        case SCARD_E_INVALID_ATR:
        cout << Utils::defaultOffset << "SCARD_E_INVALID_ATR" << endl;
        cout << Utils::defaultOffsetDocInfo << "An automatic terminal recognition (ATR) obtained from the registry is not a valid ATR string." << endl;
        break;
        case SCARD_E_NOT_TRANSACTED:
        cout << Utils::defaultOffset << "SCARD_E_NOT_TRANSACTED" << endl;
        cout << Utils::defaultOffsetDocInfo << "An attempt was made to end a nonexistent transaction." << endl;
        break;
        case SCARD_E_READER_UNAVAILABLE:
        cout << Utils::defaultOffset << "SCARD_E_READER_UNAVAILABLE" << endl;
        cout << Utils::defaultOffsetDocInfo << "The specified reader is not currently available for use." << endl;
        break;
        case SCARD_P_SHUTDOWN:
        cout << Utils::defaultOffset << "SCARD_P_SHUTDOWN" << endl;
        cout << Utils::defaultOffsetDocInfo << "The operation has been aborted to allow the server application to exit." << endl;
        break;
        case SCARD_E_PCI_TOO_SMALL:
        cout << Utils::defaultOffset << "SCARD_E_PCI_TOO_SMALL" << endl;
        cout << Utils::defaultOffsetDocInfo << "The peripheral component interconnect (PCI) Receive buffer was too small." << endl;
        break;
        case SCARD_E_READER_UNSUPPORTED:
        cout << Utils::defaultOffset << "SCARD_E_READER_UNSUPPORTED" << endl;
        cout << Utils::defaultOffsetDocInfo << "The reader driver does not meet minimal requirements for support." << endl;
        break;
        case SCARD_E_DUPLICATE_READER:
        cout << Utils::defaultOffset << "SCARD_E_DUPLICATE_READER" << endl;
        cout << Utils::defaultOffsetDocInfo << "The reader driver did not produce a unique reader name." << endl;
        break;
        case SCARD_E_CARD_UNSUPPORTED:
        cout << Utils::defaultOffset << "SCARD_E_CARD_UNSUPPORTED" << endl;
        cout << Utils::defaultOffsetDocInfo << "The smart card does not meet minimal requirements for support." << endl;
        break;
        case SCARD_E_NO_SERVICE:
        cout << Utils::defaultOffset << "SCARD_E_NO_SERVICE" << endl;
        cout << Utils::defaultOffsetDocInfo << "The smart card resource manager is not running." << endl;
        break;
        case SCARD_E_SERVICE_STOPPED:
        cout << Utils::defaultOffset << "SCARD_E_SERVICE_STOPPED" << endl;
        cout << Utils::defaultOffsetDocInfo << "The smart card resource manager has shut down." << endl;
        break;
        case SCARD_E_UNEXPECTED:
        cout << Utils::defaultOffset << "SCARD_E_UNEXPECTED" << endl;
        cout << Utils::defaultOffsetDocInfo << "An unexpected card error has occurred." << endl;
        break;
        case SCARD_E_ICC_INSTALLATION:
        cout << Utils::defaultOffset << "SCARD_E_ICC_INSTALLATION" << endl;
        cout << Utils::defaultOffsetDocInfo << "No primary provider can be found for the smart card." << endl;
        break;
        case SCARD_E_ICC_CREATEORDER:
        cout << Utils::defaultOffset << "SCARD_E_ICC_CREATEORDER" << endl;
        cout << Utils::defaultOffsetDocInfo << "The requested order of object creation is not supported." << endl;
        break;
        case SCARD_E_UNSUPPORTED_FEATURE:
        cout << Utils::defaultOffset << "SCARD_E_UNSUPPORTED_FEATURE" << endl;
        cout << Utils::defaultOffsetDocInfo << "This smart card does not support the requested feature." << endl;
        break;
        case SCARD_E_DIR_NOT_FOUND:
        cout << Utils::defaultOffset << "SCARD_E_DIR_NOT_FOUND" << endl;
        cout << Utils::defaultOffsetDocInfo << "The identified directory does not exist in the smart card." << endl;
        break;
        case SCARD_E_FILE_NOT_FOUND:
        cout << Utils::defaultOffset << "SCARD_E_FILE_NOT_FOUND" << endl;
        cout << Utils::defaultOffsetDocInfo << "The identified file does not exist in the smart card." << endl;
        break;
        case SCARD_E_NO_DIR:
        cout << Utils::defaultOffset << "SCARD_E_NO_DIR" << endl;
        cout << Utils::defaultOffsetDocInfo << "The supplied path does not represent a smart card directory." << endl;
        break;
        case SCARD_E_NO_FILE:
        cout << Utils::defaultOffset << "SCARD_E_NO_FILE" << endl;
        cout << Utils::defaultOffsetDocInfo << "The supplied path does not represent a smart card file." << endl;
        break;
        case SCARD_E_NO_ACCESS:
        cout << Utils::defaultOffset << "SCARD_E_NO_ACCESS" << endl;
        cout << Utils::defaultOffsetDocInfo << "Access is denied to this file." << endl;
        break;
        case SCARD_E_WRITE_TOO_MANY:
        cout << Utils::defaultOffset << "SCARD_E_WRITE_TOO_MANY" << endl;
        cout << Utils::defaultOffsetDocInfo << "The smart card does not have enough memory to store the information." << endl;
        break;
        case SCARD_E_BAD_SEEK:
        cout << Utils::defaultOffset << "SCARD_E_BAD_SEEK" << endl;
        cout << Utils::defaultOffsetDocInfo << "There was an error trying to set the smart card file object pointer." << endl;
        break;
        case SCARD_E_INVALID_CHV:
        cout << Utils::defaultOffset << "SCARD_E_INVALID_CHV" << endl;
        cout << Utils::defaultOffsetDocInfo << "The supplied PIN is incorrect." << endl;
        break;
        case SCARD_E_UNKNOWN_RES_MNG:
        cout << Utils::defaultOffset << "SCARD_E_UNKNOWN_RES_MNG" << endl;
        cout << Utils::defaultOffsetDocInfo << "An unrecognized error code was returned from a layered component." << endl;
        break;
        case SCARD_E_NO_SUCH_CERTIFICATE:
        cout << Utils::defaultOffset << "SCARD_E_NO_SUCH_CERTIFICATE" << endl;
        cout << Utils::defaultOffsetDocInfo << "The requested certificate does not exist." << endl;
        break;
        case SCARD_E_CERTIFICATE_UNAVAILABLE:
        cout << Utils::defaultOffset << "SCARD_E_CERTIFICATE_UNAVAILABLE" << endl;
        cout << Utils::defaultOffsetDocInfo << "The requested certificate could not be obtained." << endl;
        break;
        case SCARD_E_NO_READERS_AVAILABLE:
        cout << Utils::defaultOffset << "SCARD_E_NO_READERS_AVAILABLE" << endl;
        cout << Utils::defaultOffsetDocInfo << "Cannot find a smart card reader." << endl;
        break;
        case SCARD_E_COMM_DATA_LOST:
        cout << Utils::defaultOffset << "SCARD_E_COMM_DATA_LOST" << endl;
        cout << Utils::defaultOffsetDocInfo << "A communications error with the smart card has been detected. Retry the operation." << endl;
        break;
        case SCARD_E_NO_KEY_CONTAINER:
        cout << Utils::defaultOffset << "SCARD_E_NO_KEY_CONTAINER" << endl;
        cout << Utils::defaultOffsetDocInfo << "The requested key container does not exist on the smart card." << endl;
        break;
        case SCARD_E_SERVER_TOO_BUSY:
        cout << Utils::defaultOffset << "SCARD_E_SERVER_TOO_BUSY" << endl;
        cout << Utils::defaultOffsetDocInfo << "The smart card resource manager is too busy to complete this operation." << endl;
        break;
        case SCARD_W_UNSUPPORTED_CARD:
        cout << Utils::defaultOffset << "SCARD_W_UNSUPPORTED_CARD" << endl;
        cout << Utils::defaultOffsetDocInfo << "The reader cannot communicate with the smart card, due to ATR configuration conflicts." << endl;
        break;
        case SCARD_W_UNRESPONSIVE_CARD:
        cout << Utils::defaultOffset << "SCARD_W_UNRESPONSIVE_CARD" << endl;
        cout << Utils::defaultOffsetDocInfo << "The smart card is not responding to a reset." << endl;
        break;
        case SCARD_W_UNPOWERED_CARD:
        cout << Utils::defaultOffset << "SCARD_W_UNPOWERED_CARD" << endl;
        cout << Utils::defaultOffsetDocInfo << "Power has been removed from the smart card, so that further communication is not possible." << endl;
        break;
        case SCARD_W_RESET_CARD:
        cout << Utils::defaultOffset << "SCARD_W_RESET_CARD" << endl;
        cout << Utils::defaultOffsetDocInfo << "The smart card has been reset, so any shared state information is invalid." << endl;
        break;
        case SCARD_W_REMOVED_CARD:
        cout << Utils::defaultOffset << "SCARD_W_REMOVED_CARD" << endl;
        cout << Utils::defaultOffsetDocInfo << "The smart card has been removed, so that further communication is not possible." << endl;
        break;
        case SCARD_W_SECURITY_VIOLATION:
        cout << Utils::defaultOffset << "SCARD_W_SECURITY_VIOLATION" << endl;
        cout << Utils::defaultOffsetDocInfo << "Access was denied because of a security violation." << endl;
        break;
        case SCARD_W_WRONG_CHV:
        cout << Utils::defaultOffset << "SCARD_W_WRONG_CHV" << endl;
        cout << Utils::defaultOffsetDocInfo << "The card cannot be accessed because the wrong PIN was presented." << endl;
        break;
        case SCARD_W_CHV_BLOCKED:
        cout << Utils::defaultOffset << "SCARD_W_CHV_BLOCKED" << endl;
        cout << Utils::defaultOffsetDocInfo << "The card cannot be accessed because the maximum number of PIN entry attempts has been reached." << endl;
        break;
        case SCARD_W_EOF:
        cout << Utils::defaultOffset << "SCARD_W_EOF" << endl;
        cout << Utils::defaultOffsetDocInfo << "The end of the smart card file has been reached." << endl;
        break;
        case SCARD_W_CANCELLED_BY_USER:
        cout << Utils::defaultOffset << "SCARD_W_CANCELLED_BY_USER" << endl;
        cout << Utils::defaultOffsetDocInfo << "The action was canceled by the user." << endl;
        break;
        case SCARD_W_CARD_NOT_AUTHENTICATED:
        cout << Utils::defaultOffset << "SCARD_W_CARD_NOT_AUTHENTICATED" << endl;
        cout << Utils::defaultOffsetDocInfo << "No PIN was presented to the smart card." << endl;
        break;
        case COMADMIN_E_OBJECTERRORS:
        cout << Utils::defaultOffset << "COMADMIN_E_OBJECTERRORS" << endl;
        cout << Utils::defaultOffsetDocInfo << "Errors occurred accessing one or more objects—the ErrorInfo collection contains more detail." << endl;
        break;
        case COMADMIN_E_OBJECTINVALID:
        cout << Utils::defaultOffset << "COMADMIN_E_OBJECTINVALID" << endl;
        cout << Utils::defaultOffsetDocInfo << "One or more of the object's properties are missing or invalid." << endl;
        break;
        case COMADMIN_E_KEYMISSING:
        cout << Utils::defaultOffset << "COMADMIN_E_KEYMISSING" << endl;
        cout << Utils::defaultOffsetDocInfo << "The object was not found in the catalog." << endl;
        break;
        case COMADMIN_E_ALREADYINSTALLED:
        cout << Utils::defaultOffset << "COMADMIN_E_ALREADYINSTALLED" << endl;
        cout << Utils::defaultOffsetDocInfo << "The object is already registered." << endl;
        break;
        case COMADMIN_E_APP_FILE_WRITEFAIL:
        cout << Utils::defaultOffset << "COMADMIN_E_APP_FILE_WRITEFAIL" << endl;
        cout << Utils::defaultOffsetDocInfo << "An error occurred writing to the application file." << endl;
        break;
        case COMADMIN_E_APP_FILE_READFAIL:
        cout << Utils::defaultOffset << "COMADMIN_E_APP_FILE_READFAIL" << endl;
        cout << Utils::defaultOffsetDocInfo << "An error occurred reading the application file." << endl;
        break;
        case COMADMIN_E_APP_FILE_VERSION:
        cout << Utils::defaultOffset << "COMADMIN_E_APP_FILE_VERSION" << endl;
        cout << Utils::defaultOffsetDocInfo << "Invalid version number in application file." << endl;
        break;
        case COMADMIN_E_BADPATH:
        cout << Utils::defaultOffset << "COMADMIN_E_BADPATH" << endl;
        cout << Utils::defaultOffsetDocInfo << "The file path is invalid." << endl;
        break;
        case COMADMIN_E_APPLICATIONEXISTS:
        cout << Utils::defaultOffset << "COMADMIN_E_APPLICATIONEXISTS" << endl;
        cout << Utils::defaultOffsetDocInfo << "The application is already installed." << endl;
        break;
        case COMADMIN_E_ROLEEXISTS:
        cout << Utils::defaultOffset << "COMADMIN_E_ROLEEXISTS" << endl;
        cout << Utils::defaultOffsetDocInfo << "The role already exists." << endl;
        break;
        case COMADMIN_E_CANTCOPYFILE:
        cout << Utils::defaultOffset << "COMADMIN_E_CANTCOPYFILE" << endl;
        cout << Utils::defaultOffsetDocInfo << "An error occurred copying the file." << endl;
        break;
        case COMADMIN_E_NOUSER:
        cout << Utils::defaultOffset << "COMADMIN_E_NOUSER" << endl;
        cout << Utils::defaultOffsetDocInfo << "One or more users are not valid." << endl;
        break;
        case COMADMIN_E_INVALIDUSERIDS:
        cout << Utils::defaultOffset << "COMADMIN_E_INVALIDUSERIDS" << endl;
        cout << Utils::defaultOffsetDocInfo << "One or more users in the application file are not valid." << endl;
        break;
        case COMADMIN_E_NOREGISTRYCLSID:
        cout << Utils::defaultOffset << "COMADMIN_E_NOREGISTRYCLSID" << endl;
        cout << Utils::defaultOffsetDocInfo << "The component's CLSID is missing or corrupt." << endl;
        break;
        case COMADMIN_E_BADREGISTRYPROGID:
        cout << Utils::defaultOffset << "COMADMIN_E_BADREGISTRYPROGID" << endl;
        cout << Utils::defaultOffsetDocInfo << "The component's programmatic ID is missing or corrupt." << endl;
        break;
        case COMADMIN_E_AUTHENTICATIONLEVEL:
        cout << Utils::defaultOffset << "COMADMIN_E_AUTHENTICATIONLEVEL" << endl;
        cout << Utils::defaultOffsetDocInfo << "Unable to set required authentication level for update request." << endl;
        break;
        case COMADMIN_E_USERPASSWDNOTVALID:
        cout << Utils::defaultOffset << "COMADMIN_E_USERPASSWDNOTVALID" << endl;
        cout << Utils::defaultOffsetDocInfo << "The identity or password set on the application is not valid." << endl;
        break;
        case COMADMIN_E_CLSIDORIIDMISMATCH:
        cout << Utils::defaultOffset << "COMADMIN_E_CLSIDORIIDMISMATCH" << endl;
        cout << Utils::defaultOffsetDocInfo << "Application file CLSIDs or instance identifiers (IIDs) do not match corresponding DLLs." << endl;
        break;
        case COMADMIN_E_REMOTEINTERFACE:
        cout << Utils::defaultOffset << "COMADMIN_E_REMOTEINTERFACE" << endl;
        cout << Utils::defaultOffsetDocInfo << "Interface information is either missing or changed." << endl;
        break;
        case COMADMIN_E_DLLREGISTERSERVER:
        cout << Utils::defaultOffset << "COMADMIN_E_DLLREGISTERSERVER" << endl;
        cout << Utils::defaultOffsetDocInfo << "DllRegisterServer failed on component install." << endl;
        break;
        case COMADMIN_E_NOSERVERSHARE:
        cout << Utils::defaultOffset << "COMADMIN_E_NOSERVERSHARE" << endl;
        cout << Utils::defaultOffsetDocInfo << "No server file share available." << endl;
        break;
        case COMADMIN_E_DLLLOADFAILED:
        cout << Utils::defaultOffset << "COMADMIN_E_DLLLOADFAILED" << endl;
        cout << Utils::defaultOffsetDocInfo << "DLL could not be loaded." << endl;
        break;
        case COMADMIN_E_BADREGISTRYLIBID:
        cout << Utils::defaultOffset << "COMADMIN_E_BADREGISTRYLIBID" << endl;
        cout << Utils::defaultOffsetDocInfo << "The registered TypeLib ID is not valid." << endl;
        break;
        case COMADMIN_E_APPDIRNOTFOUND:
        cout << Utils::defaultOffset << "COMADMIN_E_APPDIRNOTFOUND" << endl;
        cout << Utils::defaultOffsetDocInfo << "Application install directory not found." << endl;
        break;
        case COMADMIN_E_REGISTRARFAILED:
        cout << Utils::defaultOffset << "COMADMIN_E_REGISTRARFAILED" << endl;
        cout << Utils::defaultOffsetDocInfo << "Errors occurred while in the component registrar." << endl;
        break;
        case COMADMIN_E_COMPFILE_DOESNOTEXIST:
        cout << Utils::defaultOffset << "COMADMIN_E_COMPFILE_DOESNOTEXIST" << endl;
        cout << Utils::defaultOffsetDocInfo << "The file does not exist." << endl;
        break;
        case COMADMIN_E_COMPFILE_LOADDLLFAIL:
        cout << Utils::defaultOffset << "COMADMIN_E_COMPFILE_LOADDLLFAIL" << endl;
        cout << Utils::defaultOffsetDocInfo << "The DLL could not be loaded." << endl;
        break;
        case COMADMIN_E_COMPFILE_GETCLASSOBJ:
        cout << Utils::defaultOffset << "COMADMIN_E_COMPFILE_GETCLASSOBJ" << endl;
        cout << Utils::defaultOffsetDocInfo << "GetClassObject failed in the DLL." << endl;
        break;
        case COMADMIN_E_COMPFILE_CLASSNOTAVAIL:
        cout << Utils::defaultOffset << "COMADMIN_E_COMPFILE_CLASSNOTAVAIL" << endl;
        cout << Utils::defaultOffsetDocInfo << "The DLL does not support the components listed in the TypeLib." << endl;
        break;
        case COMADMIN_E_COMPFILE_BADTLB:
        cout << Utils::defaultOffset << "COMADMIN_E_COMPFILE_BADTLB" << endl;
        cout << Utils::defaultOffsetDocInfo << "The TypeLib could not be loaded." << endl;
        break;
        case COMADMIN_E_COMPFILE_NOTINSTALLABLE:
        cout << Utils::defaultOffset << "COMADMIN_E_COMPFILE_NOTINSTALLABLE" << endl;
        cout << Utils::defaultOffsetDocInfo << "The file does not contain components or component information." << endl;
        break;
        case COMADMIN_E_NOTCHANGEABLE:
        cout << Utils::defaultOffset << "COMADMIN_E_NOTCHANGEABLE" << endl;
        cout << Utils::defaultOffsetDocInfo << "Changes to this object and its subobjects have been disabled." << endl;
        break;
        case COMADMIN_E_NOTDELETEABLE:
        cout << Utils::defaultOffset << "COMADMIN_E_NOTDELETEABLE" << endl;
        cout << Utils::defaultOffsetDocInfo << "The delete function has been disabled for this object." << endl;
        break;
        case COMADMIN_E_SESSION:
        cout << Utils::defaultOffset << "COMADMIN_E_SESSION" << endl;
        cout << Utils::defaultOffsetDocInfo << "The server catalog version is not supported." << endl;
        break;
        case COMADMIN_E_COMP_MOVE_LOCKED:
        cout << Utils::defaultOffset << "COMADMIN_E_COMP_MOVE_LOCKED" << endl;
        cout << Utils::defaultOffsetDocInfo << "The component move was disallowed because the source or destination application is either a system application or currently locked against changes." << endl;
        break;
        case COMADMIN_E_COMP_MOVE_BAD_DEST:
        cout << Utils::defaultOffset << "COMADMIN_E_COMP_MOVE_BAD_DEST" << endl;
        cout << Utils::defaultOffsetDocInfo << "The component move failed because the destination application no longer exists." << endl;
        break;
        case COMADMIN_E_REGISTERTLB:
        cout << Utils::defaultOffset << "COMADMIN_E_REGISTERTLB" << endl;
        cout << Utils::defaultOffsetDocInfo << "The system was unable to register the TypeLib." << endl;
        break;
        case COMADMIN_E_SYSTEMAPP:
        cout << Utils::defaultOffset << "COMADMIN_E_SYSTEMAPP" << endl;
        cout << Utils::defaultOffsetDocInfo << "This operation cannot be performed on the system application." << endl;
        break;
        case COMADMIN_E_COMPFILE_NOREGISTRAR:
        cout << Utils::defaultOffset << "COMADMIN_E_COMPFILE_NOREGISTRAR" << endl;
        cout << Utils::defaultOffsetDocInfo << "The component registrar referenced in this file is not available." << endl;
        break;
        case COMADMIN_E_COREQCOMPINSTALLED:
        cout << Utils::defaultOffset << "COMADMIN_E_COREQCOMPINSTALLED" << endl;
        cout << Utils::defaultOffsetDocInfo << "A component in the same DLL is already installed." << endl;
        break;
        case COMADMIN_E_SERVICENOTINSTALLED:
        cout << Utils::defaultOffset << "COMADMIN_E_SERVICENOTINSTALLED" << endl;
        cout << Utils::defaultOffsetDocInfo << "The service is not installed." << endl;
        break;
        case COMADMIN_E_PROPERTYSAVEFAILED:
        cout << Utils::defaultOffset << "COMADMIN_E_PROPERTYSAVEFAILED" << endl;
        cout << Utils::defaultOffsetDocInfo << "One or more property settings are either invalid or in conflict with each other." << endl;
        break;
        case COMADMIN_E_OBJECTEXISTS:
        cout << Utils::defaultOffset << "COMADMIN_E_OBJECTEXISTS" << endl;
        cout << Utils::defaultOffsetDocInfo << "The object you are attempting to add or rename already exists." << endl;
        break;
        case COMADMIN_E_COMPONENTEXISTS:
        cout << Utils::defaultOffset << "COMADMIN_E_COMPONENTEXISTS" << endl;
        cout << Utils::defaultOffsetDocInfo << "The component already exists." << endl;
        break;
        case COMADMIN_E_REGFILE_CORRUPT:
        cout << Utils::defaultOffset << "COMADMIN_E_REGFILE_CORRUPT" << endl;
        cout << Utils::defaultOffsetDocInfo << "The registration file is corrupt." << endl;
        break;
        case COMADMIN_E_PROPERTY_OVERFLOW:
        cout << Utils::defaultOffset << "COMADMIN_E_PROPERTY_OVERFLOW" << endl;
        cout << Utils::defaultOffsetDocInfo << "The property value is too large." << endl;
        break;
        case COMADMIN_E_NOTINREGISTRY:
        cout << Utils::defaultOffset << "COMADMIN_E_NOTINREGISTRY" << endl;
        cout << Utils::defaultOffsetDocInfo << "Object was not found in registry." << endl;
        break;
        case COMADMIN_E_OBJECTNOTPOOLABLE:
        cout << Utils::defaultOffset << "COMADMIN_E_OBJECTNOTPOOLABLE" << endl;
        cout << Utils::defaultOffsetDocInfo << "This object cannot be pooled." << endl;
        break;
        case COMADMIN_E_APPLID_MATCHES_CLSID:
        cout << Utils::defaultOffset << "COMADMIN_E_APPLID_MATCHES_CLSID" << endl;
        cout << Utils::defaultOffsetDocInfo << "A CLSID with the same GUID as the new application ID is already installed on this machine." << endl;
        break;
        case COMADMIN_E_ROLE_DOES_NOT_EXIST:
        cout << Utils::defaultOffset << "COMADMIN_E_ROLE_DOES_NOT_EXIST" << endl;
        cout << Utils::defaultOffsetDocInfo << "A role assigned to a component, interface, or method did not exist in the application." << endl;
        break;
        case COMADMIN_E_START_APP_NEEDS_COMPONENTS:
        cout << Utils::defaultOffset << "COMADMIN_E_START_APP_NEEDS_COMPONENTS" << endl;
        cout << Utils::defaultOffsetDocInfo << "You must have components in an application to start the application." << endl;
        break;
        case COMADMIN_E_REQUIRES_DIFFERENT_PLATFORM:
        cout << Utils::defaultOffset << "COMADMIN_E_REQUIRES_DIFFERENT_PLATFORM" << endl;
        cout << Utils::defaultOffsetDocInfo << "This operation is not enabled on this platform." << endl;
        break;
        case COMADMIN_E_CAN_NOT_EXPORT_APP_PROXY:
        cout << Utils::defaultOffset << "COMADMIN_E_CAN_NOT_EXPORT_APP_PROXY" << endl;
        cout << Utils::defaultOffsetDocInfo << "Application proxy is not exportable." << endl;
        break;
        case COMADMIN_E_CAN_NOT_START_APP:
        cout << Utils::defaultOffset << "COMADMIN_E_CAN_NOT_START_APP" << endl;
        cout << Utils::defaultOffsetDocInfo << "Failed to start application because it is either a library application or an application proxy." << endl;
        break;
        case COMADMIN_E_CAN_NOT_EXPORT_SYS_APP:
        cout << Utils::defaultOffset << "COMADMIN_E_CAN_NOT_EXPORT_SYS_APP" << endl;
        cout << Utils::defaultOffsetDocInfo << "System application is not exportable." << endl;
        break;
        case COMADMIN_E_CANT_SUBSCRIBE_TO_COMPONENT:
        cout << Utils::defaultOffset << "COMADMIN_E_CANT_SUBSCRIBE_TO_COMPONENT" << endl;
        cout << Utils::defaultOffsetDocInfo << "Cannot subscribe to this component (the component might have been imported)." << endl;
        break;
        case COMADMIN_E_EVENTCLASS_CANT_BE_SUBSCRIBER:
        cout << Utils::defaultOffset << "COMADMIN_E_EVENTCLASS_CANT_BE_SUBSCRIBER" << endl;
        cout << Utils::defaultOffsetDocInfo << "An event class cannot also be a subscriber component." << endl;
        break;
        case COMADMIN_E_LIB_APP_PROXY_INCOMPATIBLE:
        cout << Utils::defaultOffset << "COMADMIN_E_LIB_APP_PROXY_INCOMPATIBLE" << endl;
        cout << Utils::defaultOffsetDocInfo << "Library applications and application proxies are incompatible." << endl;
        break;
        case COMADMIN_E_BASE_PARTITION_ONLY:
        cout << Utils::defaultOffset << "COMADMIN_E_BASE_PARTITION_ONLY" << endl;
        cout << Utils::defaultOffsetDocInfo << "This function is valid for the base partition only." << endl;
        break;
        case COMADMIN_E_START_APP_DISABLED:
        cout << Utils::defaultOffset << "COMADMIN_E_START_APP_DISABLED" << endl;
        cout << Utils::defaultOffsetDocInfo << "You cannot start an application that has been disabled." << endl;
        break;
        case COMADMIN_E_CAT_DUPLICATE_PARTITION_NAME:
        cout << Utils::defaultOffset << "COMADMIN_E_CAT_DUPLICATE_PARTITION_NAME" << endl;
        cout << Utils::defaultOffsetDocInfo << "The specified partition name is already in use on this computer." << endl;
        break;
        case COMADMIN_E_CAT_INVALID_PARTITION_NAME:
        cout << Utils::defaultOffset << "COMADMIN_E_CAT_INVALID_PARTITION_NAME" << endl;
        cout << Utils::defaultOffsetDocInfo << "The specified partition name is invalid. Check that the name contains at least one visible character." << endl;
        break;
        case COMADMIN_E_CAT_PARTITION_IN_USE:
        cout << Utils::defaultOffset << "COMADMIN_E_CAT_PARTITION_IN_USE" << endl;
        cout << Utils::defaultOffsetDocInfo << "The partition cannot be deleted because it is the default partition for one or more users." << endl;
        break;
        case COMADMIN_E_FILE_PARTITION_DUPLICATE_FILES:
        cout << Utils::defaultOffset << "COMADMIN_E_FILE_PARTITION_DUPLICATE_FILES" << endl;
        cout << Utils::defaultOffsetDocInfo << "The partition cannot be exported because one or more components in the partition have the same file name." << endl;
        break;
        case COMADMIN_E_CAT_IMPORTED_COMPONENTS_NOT_ALLOWED:
        cout << Utils::defaultOffset << "COMADMIN_E_CAT_IMPORTED_COMPONENTS_NOT_ALLOWED" << endl;
        cout << Utils::defaultOffsetDocInfo << "Applications that contain one or more imported components cannot be installed into a nonbase partition." << endl;
        break;
        case COMADMIN_E_AMBIGUOUS_APPLICATION_NAME:
        cout << Utils::defaultOffset << "COMADMIN_E_AMBIGUOUS_APPLICATION_NAME" << endl;
        cout << Utils::defaultOffsetDocInfo << "The application name is not unique and cannot be resolved to an application ID." << endl;
        break;
        case COMADMIN_E_AMBIGUOUS_PARTITION_NAME:
        cout << Utils::defaultOffset << "COMADMIN_E_AMBIGUOUS_PARTITION_NAME" << endl;
        cout << Utils::defaultOffsetDocInfo << "The partition name is not unique and cannot be resolved to a partition ID." << endl;
        break;
        case COMADMIN_E_REGDB_NOTINITIALIZED:
        cout << Utils::defaultOffset << "COMADMIN_E_REGDB_NOTINITIALIZED" << endl;
        cout << Utils::defaultOffsetDocInfo << "The COM+ registry database has not been initialized." << endl;
        break;
        case COMADMIN_E_REGDB_NOTOPEN:
        cout << Utils::defaultOffset << "COMADMIN_E_REGDB_NOTOPEN" << endl;
        cout << Utils::defaultOffsetDocInfo << "The COM+ registry database is not open." << endl;
        break;
        case COMADMIN_E_REGDB_SYSTEMERR:
        cout << Utils::defaultOffset << "COMADMIN_E_REGDB_SYSTEMERR" << endl;
        cout << Utils::defaultOffsetDocInfo << "The COM+ registry database detected a system error." << endl;
        break;
        case COMADMIN_E_REGDB_ALREADYRUNNING:
        cout << Utils::defaultOffset << "COMADMIN_E_REGDB_ALREADYRUNNING" << endl;
        cout << Utils::defaultOffsetDocInfo << "The COM+ registry database is already running." << endl;
        break;
        case COMADMIN_E_MIG_VERSIONNOTSUPPORTED:
        cout << Utils::defaultOffset << "COMADMIN_E_MIG_VERSIONNOTSUPPORTED" << endl;
        cout << Utils::defaultOffsetDocInfo << "This version of the COM+ registry database cannot be migrated." << endl;
        break;
        case COMADMIN_E_MIG_SCHEMANOTFOUND:
        cout << Utils::defaultOffset << "COMADMIN_E_MIG_SCHEMANOTFOUND" << endl;
        cout << Utils::defaultOffsetDocInfo << "The schema version to be migrated could not be found in the COM+ registry database." << endl;
        break;
        case COMADMIN_E_CAT_BITNESSMISMATCH:
        cout << Utils::defaultOffset << "COMADMIN_E_CAT_BITNESSMISMATCH" << endl;
        cout << Utils::defaultOffsetDocInfo << "There was a type mismatch between binaries." << endl;
        break;
        case COMADMIN_E_CAT_UNACCEPTABLEBITNESS:
        cout << Utils::defaultOffset << "COMADMIN_E_CAT_UNACCEPTABLEBITNESS" << endl;
        cout << Utils::defaultOffsetDocInfo << "A binary of unknown or invalid type was provided." << endl;
        break;
        case COMADMIN_E_CAT_WRONGAPPBITNESS:
        cout << Utils::defaultOffset << "COMADMIN_E_CAT_WRONGAPPBITNESS" << endl;
        cout << Utils::defaultOffsetDocInfo << "There was a type mismatch between a binary and an application." << endl;
        break;
        case COMADMIN_E_CAT_PAUSE_RESUME_NOT_SUPPORTED:
        cout << Utils::defaultOffset << "COMADMIN_E_CAT_PAUSE_RESUME_NOT_SUPPORTED" << endl;
        cout << Utils::defaultOffsetDocInfo << "The application cannot be paused or resumed." << endl;
        break;
        case COMADMIN_E_CAT_SERVERFAULT:
        cout << Utils::defaultOffset << "COMADMIN_E_CAT_SERVERFAULT" << endl;
        cout << Utils::defaultOffsetDocInfo << "The COM+ catalog server threw an exception during execution." << endl;
        break;
        case COMQC_E_APPLICATION_NOT_QUEUED:
        cout << Utils::defaultOffset << "COMQC_E_APPLICATION_NOT_QUEUED" << endl;
        cout << Utils::defaultOffsetDocInfo << "Only COM+ applications marked \"queued\" can be invoked using the \"queue\" moniker." << endl;
        break;
        case COMQC_E_NO_QUEUEABLE_INTERFACES:
        cout << Utils::defaultOffset << "COMQC_E_NO_QUEUEABLE_INTERFACES" << endl;
        cout << Utils::defaultOffsetDocInfo << "At least one interface must be marked \"queued\" to create a queued component instance with the \"queue\" moniker." << endl;
        break;
        case COMQC_E_QUEUING_SERVICE_NOT_AVAILABLE:
        cout << Utils::defaultOffset << "COMQC_E_QUEUING_SERVICE_NOT_AVAILABLE" << endl;
        cout << Utils::defaultOffsetDocInfo << "Message Queuing is required for the requested operation and is not installed." << endl;
        break;
        case COMQC_E_NO_IPERSISTSTREAM:
        cout << Utils::defaultOffset << "COMQC_E_NO_IPERSISTSTREAM" << endl;
        cout << Utils::defaultOffsetDocInfo << "Unable to marshal an interface that does not support IPersistStream." << endl;
        break;
        case COMQC_E_BAD_MESSAGE:
        cout << Utils::defaultOffset << "COMQC_E_BAD_MESSAGE" << endl;
        cout << Utils::defaultOffsetDocInfo << "The message is improperly formatted or was damaged in transit." << endl;
        break;
        case COMQC_E_UNAUTHENTICATED:
        cout << Utils::defaultOffset << "COMQC_E_UNAUTHENTICATED" << endl;
        cout << Utils::defaultOffsetDocInfo << "An unauthenticated message was received by an application that accepts only authenticated messages." << endl;
        break;
        case COMQC_E_UNTRUSTED_ENQUEUER:
        cout << Utils::defaultOffset << "COMQC_E_UNTRUSTED_ENQUEUER" << endl;
        cout << Utils::defaultOffsetDocInfo << "The message was requeued or moved by a user not in the QC Trusted User role." << endl;
        break;
        case MSDTC_E_DUPLICATE_RESOURCE:
        cout << Utils::defaultOffset << "MSDTC_E_DUPLICATE_RESOURCE" << endl;
        cout << Utils::defaultOffsetDocInfo << "Cannot create a duplicate resource of type Distributed Transaction Coordinator." << endl;
        break;
        case COMADMIN_E_OBJECT_PARENT_MISSING:
        cout << Utils::defaultOffset << "COMADMIN_E_OBJECT_PARENT_MISSING" << endl;
        cout << Utils::defaultOffsetDocInfo << "One of the objects being inserted or updated does not belong to a valid parent collection." << endl;
        break;
        case COMADMIN_E_OBJECT_DOES_NOT_EXIST:
        cout << Utils::defaultOffset << "COMADMIN_E_OBJECT_DOES_NOT_EXIST" << endl;
        cout << Utils::defaultOffsetDocInfo << "One of the specified objects cannot be found." << endl;
        break;
        case COMADMIN_E_APP_NOT_RUNNING:
        cout << Utils::defaultOffset << "COMADMIN_E_APP_NOT_RUNNING" << endl;
        cout << Utils::defaultOffsetDocInfo << "The specified application is not currently running." << endl;
        break;
        case COMADMIN_E_INVALID_PARTITION:
        cout << Utils::defaultOffset << "COMADMIN_E_INVALID_PARTITION" << endl;
        cout << Utils::defaultOffsetDocInfo << "The partitions specified are not valid." << endl;
        break;
        case COMADMIN_E_SVCAPP_NOT_POOLABLE_OR_RECYCLABLE:
        cout << Utils::defaultOffset << "COMADMIN_E_SVCAPP_NOT_POOLABLE_OR_RECYCLABLE" << endl;
        cout << Utils::defaultOffsetDocInfo << "COM+ applications that run as Windows NT service cannot be pooled or recycled." << endl;
        break;
        case COMADMIN_E_USER_IN_SET:
        cout << Utils::defaultOffset << "COMADMIN_E_USER_IN_SET" << endl;
        cout << Utils::defaultOffsetDocInfo << "One or more users are already assigned to a local partition set." << endl;
        break;
        case COMADMIN_E_CANTRECYCLELIBRARYAPPS:
        cout << Utils::defaultOffset << "COMADMIN_E_CANTRECYCLELIBRARYAPPS" << endl;
        cout << Utils::defaultOffsetDocInfo << "Library applications cannot be recycled." << endl;
        break;
        case COMADMIN_E_CANTRECYCLESERVICEAPPS:
        cout << Utils::defaultOffset << "COMADMIN_E_CANTRECYCLESERVICEAPPS" << endl;
        cout << Utils::defaultOffsetDocInfo << "Applications running as Windows NT services cannot be recycled." << endl;
        break;
        case COMADMIN_E_PROCESSALREADYRECYCLED:
        cout << Utils::defaultOffset << "COMADMIN_E_PROCESSALREADYRECYCLED" << endl;
        cout << Utils::defaultOffsetDocInfo << "The process has already been recycled." << endl;
        break;
        case COMADMIN_E_PAUSEDPROCESSMAYNOTBERECYCLED:
        cout << Utils::defaultOffset << "COMADMIN_E_PAUSEDPROCESSMAYNOTBERECYCLED" << endl;
        cout << Utils::defaultOffsetDocInfo << "A paused process cannot be recycled." << endl;
        break;
        case COMADMIN_E_CANTMAKEINPROCSERVICE:
        cout << Utils::defaultOffset << "COMADMIN_E_CANTMAKEINPROCSERVICE" << endl;
        cout << Utils::defaultOffsetDocInfo << "Library applications cannot be Windows NT services." << endl;
        break;
        case COMADMIN_E_PROGIDINUSEBYCLSID:
        cout << Utils::defaultOffset << "COMADMIN_E_PROGIDINUSEBYCLSID" << endl;
        cout << Utils::defaultOffsetDocInfo << "The ProgID provided to the copy operation is invalid. The ProgID is in use by another registered CLSID." << endl;
        break;
        case COMADMIN_E_DEFAULT_PARTITION_NOT_IN_SET:
        cout << Utils::defaultOffset << "COMADMIN_E_DEFAULT_PARTITION_NOT_IN_SET" << endl;
        cout << Utils::defaultOffsetDocInfo << "The partition specified as the default is not a member of the partition set." << endl;
        break;
        case COMADMIN_E_RECYCLEDPROCESSMAYNOTBEPAUSED:
        cout << Utils::defaultOffset << "COMADMIN_E_RECYCLEDPROCESSMAYNOTBEPAUSED" << endl;
        cout << Utils::defaultOffsetDocInfo << "A recycled process cannot be paused." << endl;
        break;
        case COMADMIN_E_PARTITION_ACCESSDENIED:
        cout << Utils::defaultOffset << "COMADMIN_E_PARTITION_ACCESSDENIED" << endl;
        cout << Utils::defaultOffsetDocInfo << "Access to the specified partition is denied." << endl;
        break;
        case COMADMIN_E_PARTITION_MSI_ONLY:
        cout << Utils::defaultOffset << "COMADMIN_E_PARTITION_MSI_ONLY" << endl;
        cout << Utils::defaultOffsetDocInfo << "Only application files (*.msi files) can be installed into partitions." << endl;
        break;
        case COMADMIN_E_LEGACYCOMPS_NOT_ALLOWED_IN_1_0_FORMAT:
        cout << Utils::defaultOffset << "COMADMIN_E_LEGACYCOMPS_NOT_ALLOWED_IN_1_0_FORMAT" << endl;
        cout << Utils::defaultOffsetDocInfo << "Applications containing one or more legacy components cannot be exported to 1.0 format." << endl;
        break;
        case COMADMIN_E_LEGACYCOMPS_NOT_ALLOWED_IN_NONBASE_PARTITIONS:
        cout << Utils::defaultOffset << "COMADMIN_E_LEGACYCOMPS_NOT_ALLOWED_IN_NONBASE_PARTITIONS" << endl;
        cout << Utils::defaultOffsetDocInfo << "Legacy components cannot exist in nonbase partitions." << endl;
        break;
        case COMADMIN_E_COMP_MOVE_SOURCE:
        cout << Utils::defaultOffset << "COMADMIN_E_COMP_MOVE_SOURCE" << endl;
        cout << Utils::defaultOffsetDocInfo << "A component cannot be moved (or copied) from the System Application, an application proxy, or a nonchangeable application." << endl;
        break;
        case COMADMIN_E_COMP_MOVE_DEST:
        cout << Utils::defaultOffset << "COMADMIN_E_COMP_MOVE_DEST" << endl;
        cout << Utils::defaultOffsetDocInfo << "A component cannot be moved (or copied) to the System Application, an application proxy or a nonchangeable application." << endl;
        break;
        case COMADMIN_E_COMP_MOVE_PRIVATE:
        cout << Utils::defaultOffset << "COMADMIN_E_COMP_MOVE_PRIVATE" << endl;
        cout << Utils::defaultOffsetDocInfo << "A private component cannot be moved (or copied) to a library application or to the base partition." << endl;
        break;
        case COMADMIN_E_BASEPARTITION_REQUIRED_IN_SET:
        cout << Utils::defaultOffset << "COMADMIN_E_BASEPARTITION_REQUIRED_IN_SET" << endl;
        cout << Utils::defaultOffsetDocInfo << "The Base Application Partition exists in all partition sets and cannot be removed." << endl;
        break;
        case COMADMIN_E_CANNOT_ALIAS_EVENTCLASS:
        cout << Utils::defaultOffset << "COMADMIN_E_CANNOT_ALIAS_EVENTCLASS" << endl;
        cout << Utils::defaultOffsetDocInfo << "Alas, Event Class components cannot be aliased." << endl;
        break;
        case COMADMIN_E_PRIVATE_ACCESSDENIED:
        cout << Utils::defaultOffset << "COMADMIN_E_PRIVATE_ACCESSDENIED" << endl;
        cout << Utils::defaultOffsetDocInfo << "Access is denied because the component is private." << endl;
        break;
        case COMADMIN_E_SAFERINVALID:
        cout << Utils::defaultOffset << "COMADMIN_E_SAFERINVALID" << endl;
        cout << Utils::defaultOffsetDocInfo << "The specified SAFER level is invalid." << endl;
        break;
        case COMADMIN_E_REGISTRY_ACCESSDENIED:
        cout << Utils::defaultOffset << "COMADMIN_E_REGISTRY_ACCESSDENIED" << endl;
        cout << Utils::defaultOffsetDocInfo << "The specified user cannot write to the system registry." << endl;
        break;
        case COMADMIN_E_PARTITIONS_DISABLED:
        cout << Utils::defaultOffset << "COMADMIN_E_PARTITIONS_DISABLED" << endl;
        cout << Utils::defaultOffsetDocInfo << "COM+ partitions are currently disabled." << endl;
        break;
        case ERROR_FLT_NO_HANDLER_DEFINED:
        cout << Utils::defaultOffset << "ERROR_FLT_NO_HANDLER_DEFINED" << endl;
        cout << Utils::defaultOffsetDocInfo << "A handler was not defined by the filter for this operation." << endl;
        break;
        case ERROR_FLT_CONTEXT_ALREADY_DEFINED:
        cout << Utils::defaultOffset << "ERROR_FLT_CONTEXT_ALREADY_DEFINED" << endl;
        cout << Utils::defaultOffsetDocInfo << "A context is already defined for this object." << endl;
        break;
        case ERROR_FLT_INVALID_ASYNCHRONOUS_REQUEST:
        cout << Utils::defaultOffset << "ERROR_FLT_INVALID_ASYNCHRONOUS_REQUEST" << endl;
        cout << Utils::defaultOffsetDocInfo << "Asynchronous requests are not valid for this operation." << endl;
        break;
        case ERROR_FLT_DISALLOW_FAST_IO:
        cout << Utils::defaultOffset << "ERROR_FLT_DISALLOW_FAST_IO" << endl;
        cout << Utils::defaultOffsetDocInfo << "Disallow the Fast IO path for this operation." << endl;
        break;
        case ERROR_FLT_INVALID_NAME_REQUEST:
        cout << Utils::defaultOffset << "ERROR_FLT_INVALID_NAME_REQUEST" << endl;
        cout << Utils::defaultOffsetDocInfo << "An invalid name request was made. The name requested cannot be retrieved at this time." << endl;
        break;
        case ERROR_FLT_NOT_SAFE_TO_POST_OPERATION:
        cout << Utils::defaultOffset << "ERROR_FLT_NOT_SAFE_TO_POST_OPERATION" << endl;
        cout << Utils::defaultOffsetDocInfo << "Posting this operation to a worker thread for further processing is not safe at this time because it could lead to a system deadlock." << endl;
        break;
        case ERROR_FLT_NOT_INITIALIZED:
        cout << Utils::defaultOffset << "ERROR_FLT_NOT_INITIALIZED" << endl;
        cout << Utils::defaultOffsetDocInfo << "The Filter Manager was not initialized when a filter tried to register. Be sure that the Filter Manager is being loaded as a driver." << endl;
        break;
        case ERROR_FLT_FILTER_NOT_READY:
        cout << Utils::defaultOffset << "ERROR_FLT_FILTER_NOT_READY" << endl;
        cout << Utils::defaultOffsetDocInfo << "The filter is not ready for attachment to volumes because it has not finished initializing (FltStartFiltering has not been called)." << endl;
        break;
        case ERROR_FLT_POST_OPERATION_CLEANUP:
        cout << Utils::defaultOffset << "ERROR_FLT_POST_OPERATION_CLEANUP" << endl;
        cout << Utils::defaultOffsetDocInfo << "The filter must clean up any operation-specific context at this time because it is being removed from the system before the operation is completed by the lower drivers." << endl;
        break;
        case ERROR_FLT_INTERNAL_ERROR:
        cout << Utils::defaultOffset << "ERROR_FLT_INTERNAL_ERROR" << endl;
        cout << Utils::defaultOffsetDocInfo << "The Filter Manager had an internal error from which it cannot recover; therefore, the operation has been failed. This is usually the result of a filter returning an invalid value from a preoperation callback." << endl;
        break;
        case ERROR_FLT_DELETING_OBJECT:
        cout << Utils::defaultOffset << "ERROR_FLT_DELETING_OBJECT" << endl;
        cout << Utils::defaultOffsetDocInfo << "The object specified for this action is in the process of being deleted; therefore, the action requested cannot be completed at this time." << endl;
        break;
        case ERROR_FLT_MUST_BE_NONPAGED_POOL:
        cout << Utils::defaultOffset << "ERROR_FLT_MUST_BE_NONPAGED_POOL" << endl;
        cout << Utils::defaultOffsetDocInfo << "Nonpaged pool must be used for this type of context." << endl;
        break;
        case ERROR_FLT_DUPLICATE_ENTRY:
        cout << Utils::defaultOffset << "ERROR_FLT_DUPLICATE_ENTRY" << endl;
        cout << Utils::defaultOffsetDocInfo << "A duplicate handler definition has been provided for an operation." << endl;
        break;
        case ERROR_FLT_CBDQ_DISABLED:
        cout << Utils::defaultOffset << "ERROR_FLT_CBDQ_DISABLED" << endl;
        cout << Utils::defaultOffsetDocInfo << "The callback data queue has been disabled." << endl;
        break;
        case ERROR_FLT_DO_NOT_ATTACH:
        cout << Utils::defaultOffset << "ERROR_FLT_DO_NOT_ATTACH" << endl;
        cout << Utils::defaultOffsetDocInfo << "Do not attach the filter to the volume at this time." << endl;
        break;
        case ERROR_FLT_DO_NOT_DETACH:
        cout << Utils::defaultOffset << "ERROR_FLT_DO_NOT_DETACH" << endl;
        cout << Utils::defaultOffsetDocInfo << "Do not detach the filter from the volume at this time." << endl;
        break;
        case ERROR_FLT_INSTANCE_ALTITUDE_COLLISION:
        cout << Utils::defaultOffset << "ERROR_FLT_INSTANCE_ALTITUDE_COLLISION" << endl;
        cout << Utils::defaultOffsetDocInfo << "An instance already exists at this altitude on the volume specified." << endl;
        break;
        case ERROR_FLT_INSTANCE_NAME_COLLISION:
        cout << Utils::defaultOffset << "ERROR_FLT_INSTANCE_NAME_COLLISION" << endl;
        cout << Utils::defaultOffsetDocInfo << "An instance already exists with this name on the volume specified." << endl;
        break;
        case ERROR_FLT_FILTER_NOT_FOUND:
        cout << Utils::defaultOffset << "ERROR_FLT_FILTER_NOT_FOUND" << endl;
        cout << Utils::defaultOffsetDocInfo << "The system could not find the filter specified." << endl;
        break;
        case ERROR_FLT_VOLUME_NOT_FOUND:
        cout << Utils::defaultOffset << "ERROR_FLT_VOLUME_NOT_FOUND" << endl;
        cout << Utils::defaultOffsetDocInfo << "The system could not find the volume specified." << endl;
        break;
        case ERROR_FLT_INSTANCE_NOT_FOUND:
        cout << Utils::defaultOffset << "ERROR_FLT_INSTANCE_NOT_FOUND" << endl;
        cout << Utils::defaultOffsetDocInfo << "The system could not find the instance specified." << endl;
        break;
        case ERROR_FLT_CONTEXT_ALLOCATION_NOT_FOUND:
        cout << Utils::defaultOffset << "ERROR_FLT_CONTEXT_ALLOCATION_NOT_FOUND" << endl;
        cout << Utils::defaultOffsetDocInfo << "No registered context allocation definition was found for the given request." << endl;
        break;
        case ERROR_FLT_INVALID_CONTEXT_REGISTRATION:
        cout << Utils::defaultOffset << "ERROR_FLT_INVALID_CONTEXT_REGISTRATION" << endl;
        cout << Utils::defaultOffsetDocInfo << "An invalid parameter was specified during context registration." << endl;
        break;
        case ERROR_FLT_NAME_CACHE_MISS:
        cout << Utils::defaultOffset << "ERROR_FLT_NAME_CACHE_MISS" << endl;
        cout << Utils::defaultOffsetDocInfo << "The name requested was not found in the Filter Manager name cache and could not be retrieved from the file system." << endl;
        break;
        case ERROR_FLT_NO_DEVICE_OBJECT:
        cout << Utils::defaultOffset << "ERROR_FLT_NO_DEVICE_OBJECT" << endl;
        cout << Utils::defaultOffsetDocInfo << "The requested device object does not exist for the given volume." << endl;
        break;
        case ERROR_FLT_VOLUME_ALREADY_MOUNTED:
        cout << Utils::defaultOffset << "ERROR_FLT_VOLUME_ALREADY_MOUNTED" << endl;
        cout << Utils::defaultOffsetDocInfo << "The specified volume is already mounted." << endl;
        break;
        case ERROR_FLT_ALREADY_ENLISTED:
        cout << Utils::defaultOffset << "ERROR_FLT_ALREADY_ENLISTED" << endl;
        cout << Utils::defaultOffsetDocInfo << "The specified Transaction Context is already enlisted in a transaction." << endl;
        break;
        case ERROR_FLT_CONTEXT_ALREADY_LINKED:
        cout << Utils::defaultOffset << "ERROR_FLT_CONTEXT_ALREADY_LINKED" << endl;
        cout << Utils::defaultOffsetDocInfo << "The specified context is already attached to another object." << endl;
        break;
        case ERROR_FLT_NO_WAITER_FOR_REPLY:
        cout << Utils::defaultOffset << "ERROR_FLT_NO_WAITER_FOR_REPLY" << endl;
        cout << Utils::defaultOffsetDocInfo << "No waiter is present for the filter's reply to this message." << endl;
        break;
        case ERROR_HUNG_DISPLAY_DRIVER_THREAD:
        cout << Utils::defaultOffset << "ERROR_HUNG_DISPLAY_DRIVER_THREAD" << endl;
        cout << Utils::defaultOffsetDocInfo << "{Display Driver Stopped Responding} The %hs display driver has stopped working normally. Save your work and reboot the system to restore full display functionality. The next time you reboot the machine a dialog will be displayed giving you a chance to report this failure to Microsoft." << endl;
        break;
        case ERROR_MONITOR_NO_DESCRIPTOR:
        cout << Utils::defaultOffset << "ERROR_MONITOR_NO_DESCRIPTOR" << endl;
        cout << Utils::defaultOffsetDocInfo << "Monitor descriptor could not be obtained." << endl;
        break;
        case ERROR_MONITOR_UNKNOWN_DESCRIPTOR_FORMAT:
        cout << Utils::defaultOffset << "ERROR_MONITOR_UNKNOWN_DESCRIPTOR_FORMAT" << endl;
        cout << Utils::defaultOffsetDocInfo << "Format of the obtained monitor descriptor is not supported by this release." << endl;
        break;
        case DWM_E_COMPOSITIONDISABLED:
        cout << Utils::defaultOffset << "DWM_E_COMPOSITIONDISABLED" << endl;
        cout << Utils::defaultOffsetDocInfo << "{Desktop Composition is Disabled} The operation could not be completed because desktop composition is disabled." << endl;
        break;
        case DWM_E_REMOTING_NOT_SUPPORTED:
        cout << Utils::defaultOffset << "DWM_E_REMOTING_NOT_SUPPORTED" << endl;
        cout << Utils::defaultOffsetDocInfo << "{Some Desktop Composition APIs Are Not Supported While Remoting} Some desktop composition APIs are not supported while remoting. The operation is not supported while running in a remote session." << endl;
        break;
        case DWM_E_NO_REDIRECTION_SURFACE_AVAILABLE:
        cout << Utils::defaultOffset << "DWM_E_NO_REDIRECTION_SURFACE_AVAILABLE" << endl;
        cout << Utils::defaultOffsetDocInfo << "{No DWM Redirection Surface is Available} The Desktop Window Manager (DWM) was unable to provide a redirection surface to complete the DirectX present." << endl;
        break;
        case DWM_E_NOT_QUEUING_PRESENTS:
        cout << Utils::defaultOffset << "DWM_E_NOT_QUEUING_PRESENTS" << endl;
        cout << Utils::defaultOffsetDocInfo << "{DWM Is Not Queuing Presents for the Specified Window} The window specified is not currently using queued presents." << endl;
        break;
        case TPM_E_ERROR_MASK:
        cout << Utils::defaultOffset << "TPM_E_ERROR_MASK" << endl;
        cout << Utils::defaultOffsetDocInfo << "This is an error mask to convert Trusted Platform Module (TPM) hardware errors to Win32 errors." << endl;
        break;
        case TPM_E_AUTHFAIL:
        cout << Utils::defaultOffset << "TPM_E_AUTHFAIL" << endl;
        cout << Utils::defaultOffsetDocInfo << "Authentication failed." << endl;
        break;
        case TPM_E_BADINDEX:
        cout << Utils::defaultOffset << "TPM_E_BADINDEX" << endl;
        cout << Utils::defaultOffsetDocInfo << "The index to a Platform Configuration Register (PCR), DIR, or other register is incorrect." << endl;
        break;
        case TPM_E_BAD_PARAMETER:
        cout << Utils::defaultOffset << "TPM_E_BAD_PARAMETER" << endl;
        cout << Utils::defaultOffsetDocInfo << "One or more parameters are bad." << endl;
        break;
        case TPM_E_AUDITFAILURE:
        cout << Utils::defaultOffset << "TPM_E_AUDITFAILURE" << endl;
        cout << Utils::defaultOffsetDocInfo << "An operation completed successfully but the auditing of that operation failed." << endl;
        break;
        case TPM_E_CLEAR_DISABLED:
        cout << Utils::defaultOffset << "TPM_E_CLEAR_DISABLED" << endl;
        cout << Utils::defaultOffsetDocInfo << "The clear disable flag is set and all clear operations now require physical access." << endl;
        break;
        case TPM_E_DEACTIVATED:
        cout << Utils::defaultOffset << "TPM_E_DEACTIVATED" << endl;
        cout << Utils::defaultOffsetDocInfo << "The TPM is deactivated." << endl;
        break;
        case TPM_E_DISABLED:
        cout << Utils::defaultOffset << "TPM_E_DISABLED" << endl;
        cout << Utils::defaultOffsetDocInfo << "The TPM is disabled." << endl;
        break;
        case TPM_E_DISABLED_CMD:
        cout << Utils::defaultOffset << "TPM_E_DISABLED_CMD" << endl;
        cout << Utils::defaultOffsetDocInfo << "The target command has been disabled." << endl;
        break;
        case TPM_E_FAIL:
        cout << Utils::defaultOffset << "TPM_E_FAIL" << endl;
        cout << Utils::defaultOffsetDocInfo << "The operation failed." << endl;
        break;
        case TPM_E_BAD_ORDINAL:
        cout << Utils::defaultOffset << "TPM_E_BAD_ORDINAL" << endl;
        cout << Utils::defaultOffsetDocInfo << "The ordinal was unknown or inconsistent." << endl;
        break;
        case TPM_E_INSTALL_DISABLED:
        cout << Utils::defaultOffset << "TPM_E_INSTALL_DISABLED" << endl;
        cout << Utils::defaultOffsetDocInfo << "The ability to install an owner is disabled." << endl;
        break;
        case TPM_E_INVALID_KEYHANDLE:
        cout << Utils::defaultOffset << "TPM_E_INVALID_KEYHANDLE" << endl;
        cout << Utils::defaultOffsetDocInfo << "The key handle cannot be interpreted." << endl;
        break;
        case TPM_E_KEYNOTFOUND:
        cout << Utils::defaultOffset << "TPM_E_KEYNOTFOUND" << endl;
        cout << Utils::defaultOffsetDocInfo << "The key handle points to an invalid key." << endl;
        break;
        case TPM_E_INAPPROPRIATE_ENC:
        cout << Utils::defaultOffset << "TPM_E_INAPPROPRIATE_ENC" << endl;
        cout << Utils::defaultOffsetDocInfo << "Unacceptable encryption scheme." << endl;
        break;
        case TPM_E_MIGRATEFAIL:
        cout << Utils::defaultOffset << "TPM_E_MIGRATEFAIL" << endl;
        cout << Utils::defaultOffsetDocInfo << "Migration authorization failed." << endl;
        break;
        case TPM_E_INVALID_PCR_INFO:
        cout << Utils::defaultOffset << "TPM_E_INVALID_PCR_INFO" << endl;
        cout << Utils::defaultOffsetDocInfo << "PCR information could not be interpreted." << endl;
        break;
        case TPM_E_NOSPACE:
        cout << Utils::defaultOffset << "TPM_E_NOSPACE" << endl;
        cout << Utils::defaultOffsetDocInfo << "No room to load key." << endl;
        break;
        case TPM_E_NOSRK:
        cout << Utils::defaultOffset << "TPM_E_NOSRK" << endl;
        cout << Utils::defaultOffsetDocInfo << "There is no storage root key (SRK) set." << endl;
        break;
        case TPM_E_NOTSEALED_BLOB:
        cout << Utils::defaultOffset << "TPM_E_NOTSEALED_BLOB" << endl;
        cout << Utils::defaultOffsetDocInfo << "An encrypted blob is invalid or was not created by this TPM." << endl;
        break;
        case TPM_E_OWNER_SET:
        cout << Utils::defaultOffset << "TPM_E_OWNER_SET" << endl;
        cout << Utils::defaultOffsetDocInfo << "There is already an owner." << endl;
        break;
        case TPM_E_RESOURCES:
        cout << Utils::defaultOffset << "TPM_E_RESOURCES" << endl;
        cout << Utils::defaultOffsetDocInfo << "The TPM has insufficient internal resources to perform the requested action." << endl;
        break;
        case TPM_E_SHORTRANDOM:
        cout << Utils::defaultOffset << "TPM_E_SHORTRANDOM" << endl;
        cout << Utils::defaultOffsetDocInfo << "A random string was too short." << endl;
        break;
        case TPM_E_SIZE:
        cout << Utils::defaultOffset << "TPM_E_SIZE" << endl;
        cout << Utils::defaultOffsetDocInfo << "The TPM does not have the space to perform the operation." << endl;
        break;
        case TPM_E_WRONGPCRVAL:
        cout << Utils::defaultOffset << "TPM_E_WRONGPCRVAL" << endl;
        cout << Utils::defaultOffsetDocInfo << "The named PCR value does not match the current PCR value." << endl;
        break;
        case TPM_E_BAD_PARAM_SIZE:
        cout << Utils::defaultOffset << "TPM_E_BAD_PARAM_SIZE" << endl;
        cout << Utils::defaultOffsetDocInfo << "The paramSize argument to the command has the incorrect value." << endl;
        break;
        case TPM_E_SHA_THREAD:
        cout << Utils::defaultOffset << "TPM_E_SHA_THREAD" << endl;
        cout << Utils::defaultOffsetDocInfo << "There is no existing SHA-1 thread." << endl;
        break;
        case TPM_E_SHA_ERROR:
        cout << Utils::defaultOffset << "TPM_E_SHA_ERROR" << endl;
        cout << Utils::defaultOffsetDocInfo << "The calculation is unable to proceed because the existing SHA-1 thread has already encountered an error." << endl;
        break;
        case TPM_E_FAILEDSELFTEST:
        cout << Utils::defaultOffset << "TPM_E_FAILEDSELFTEST" << endl;
        cout << Utils::defaultOffsetDocInfo << "Self-test has failed and the TPM has shut down." << endl;
        break;
        case TPM_E_AUTH2FAIL:
        cout << Utils::defaultOffset << "TPM_E_AUTH2FAIL" << endl;
        cout << Utils::defaultOffsetDocInfo << "The authorization for the second key in a two-key function failed authorization." << endl;
        break;
        case TPM_E_BADTAG:
        cout << Utils::defaultOffset << "TPM_E_BADTAG" << endl;
        cout << Utils::defaultOffsetDocInfo << "The tag value sent to for a command is invalid." << endl;
        break;
        case TPM_E_IOERROR:
        cout << Utils::defaultOffset << "TPM_E_IOERROR" << endl;
        cout << Utils::defaultOffsetDocInfo << "An I/O error occurred transmitting information to the TPM." << endl;
        break;
        case TPM_E_ENCRYPT_ERROR:
        cout << Utils::defaultOffset << "TPM_E_ENCRYPT_ERROR" << endl;
        cout << Utils::defaultOffsetDocInfo << "The encryption process had a problem." << endl;
        break;
        case TPM_E_DECRYPT_ERROR:
        cout << Utils::defaultOffset << "TPM_E_DECRYPT_ERROR" << endl;
        cout << Utils::defaultOffsetDocInfo << "The decryption process did not complete." << endl;
        break;
        case TPM_E_INVALID_AUTHHANDLE:
        cout << Utils::defaultOffset << "TPM_E_INVALID_AUTHHANDLE" << endl;
        cout << Utils::defaultOffsetDocInfo << "An invalid handle was used." << endl;
        break;
        case TPM_E_NO_ENDORSEMENT:
        cout << Utils::defaultOffset << "TPM_E_NO_ENDORSEMENT" << endl;
        cout << Utils::defaultOffsetDocInfo << "The TPM does not have an endorsement key (EK) installed." << endl;
        break;
        case TPM_E_INVALID_KEYUSAGE:
        cout << Utils::defaultOffset << "TPM_E_INVALID_KEYUSAGE" << endl;
        cout << Utils::defaultOffsetDocInfo << "The usage of a key is not allowed." << endl;
        break;
        case TPM_E_WRONG_ENTITYTYPE:
        cout << Utils::defaultOffset << "TPM_E_WRONG_ENTITYTYPE" << endl;
        cout << Utils::defaultOffsetDocInfo << "The submitted entity type is not allowed." << endl;
        break;
        case TPM_E_INVALID_POSTINIT:
        cout << Utils::defaultOffset << "TPM_E_INVALID_POSTINIT" << endl;
        cout << Utils::defaultOffsetDocInfo << "The command was received in the wrong sequence relative to TPM_Init and a subsequent TPM_Startup." << endl;
        break;
        case TPM_E_INAPPROPRIATE_SIG:
        cout << Utils::defaultOffset << "TPM_E_INAPPROPRIATE_SIG" << endl;
        cout << Utils::defaultOffsetDocInfo << "Signed data cannot include additional DER information." << endl;
        break;
        case TPM_E_BAD_KEY_PROPERTY:
        cout << Utils::defaultOffset << "TPM_E_BAD_KEY_PROPERTY" << endl;
        cout << Utils::defaultOffsetDocInfo << "The key properties in TPM_KEY_PARMs are not supported by this TPM." << endl;
        break;
        case TPM_E_BAD_MIGRATION:
        cout << Utils::defaultOffset << "TPM_E_BAD_MIGRATION" << endl;
        cout << Utils::defaultOffsetDocInfo << "The migration properties of this key are incorrect." << endl;
        break;
        case TPM_E_BAD_SCHEME:
        cout << Utils::defaultOffset << "TPM_E_BAD_SCHEME" << endl;
        cout << Utils::defaultOffsetDocInfo << "The signature or encryption scheme for this key is incorrect or not permitted in this situation." << endl;
        break;
        case TPM_E_BAD_DATASIZE:
        cout << Utils::defaultOffset << "TPM_E_BAD_DATASIZE" << endl;
        cout << Utils::defaultOffsetDocInfo << "The size of the data (or blob) parameter is bad or inconsistent with the referenced key." << endl;
        break;
        case TPM_E_BAD_MODE:
        cout << Utils::defaultOffset << "TPM_E_BAD_MODE" << endl;
        cout << Utils::defaultOffsetDocInfo << "A mode parameter is bad, such as capArea or subCapArea for TPM_GetCapability, physicalPresence parameter for TPM_PhysicalPresence, or migrationType for TPM_CreateMigrationBlob." << endl;
        break;
        case TPM_E_BAD_PRESENCE:
        cout << Utils::defaultOffset << "TPM_E_BAD_PRESENCE" << endl;
        cout << Utils::defaultOffsetDocInfo << "Either the physicalPresence or physicalPresenceLock bits have the wrong value." << endl;
        break;
        case TPM_E_BAD_VERSION:
        cout << Utils::defaultOffset << "TPM_E_BAD_VERSION" << endl;
        cout << Utils::defaultOffsetDocInfo << "The TPM cannot perform this version of the capability." << endl;
        break;
        case TPM_E_NO_WRAP_TRANSPORT:
        cout << Utils::defaultOffset << "TPM_E_NO_WRAP_TRANSPORT" << endl;
        cout << Utils::defaultOffsetDocInfo << "The TPM does not allow for wrapped transport sessions." << endl;
        break;
        case TPM_E_AUDITFAIL_UNSUCCESSFUL:
        cout << Utils::defaultOffset << "TPM_E_AUDITFAIL_UNSUCCESSFUL" << endl;
        cout << Utils::defaultOffsetDocInfo << "TPM audit construction failed and the underlying command was returning a failure code also." << endl;
        break;
        case TPM_E_AUDITFAIL_SUCCESSFUL:
        cout << Utils::defaultOffset << "TPM_E_AUDITFAIL_SUCCESSFUL" << endl;
        cout << Utils::defaultOffsetDocInfo << "TPM audit construction failed and the underlying command was returning success." << endl;
        break;
        case TPM_E_NOTRESETABLE:
        cout << Utils::defaultOffset << "TPM_E_NOTRESETABLE" << endl;
        cout << Utils::defaultOffsetDocInfo << "Attempt to reset a PCR that does not have the resettable attribute." << endl;
        break;
        case TPM_E_NOTLOCAL:
        cout << Utils::defaultOffset << "TPM_E_NOTLOCAL" << endl;
        cout << Utils::defaultOffsetDocInfo << "Attempt to reset a PCR register that requires locality and the locality modifier not part of command transport." << endl;
        break;
        case TPM_E_BAD_TYPE:
        cout << Utils::defaultOffset << "TPM_E_BAD_TYPE" << endl;
        cout << Utils::defaultOffsetDocInfo << "Make identity blob not properly typed." << endl;
        break;
        case TPM_E_INVALID_RESOURCE:
        cout << Utils::defaultOffset << "TPM_E_INVALID_RESOURCE" << endl;
        cout << Utils::defaultOffsetDocInfo << "When saving context identified resource type does not match actual resource." << endl;
        break;
        case TPM_E_NOTFIPS:
        cout << Utils::defaultOffset << "TPM_E_NOTFIPS" << endl;
        cout << Utils::defaultOffsetDocInfo << "The TPM is attempting to execute a command only available when in Federal Information Processing Standards (FIPS) mode." << endl;
        break;
        case TPM_E_INVALID_FAMILY:
        cout << Utils::defaultOffset << "TPM_E_INVALID_FAMILY" << endl;
        cout << Utils::defaultOffsetDocInfo << "The command is attempting to use an invalid family ID." << endl;
        break;
        case TPM_E_NO_NV_PERMISSION:
        cout << Utils::defaultOffset << "TPM_E_NO_NV_PERMISSION" << endl;
        cout << Utils::defaultOffsetDocInfo << "The permission to manipulate the NV storage is not available." << endl;
        break;
        case TPM_E_REQUIRES_SIGN:
        cout << Utils::defaultOffset << "TPM_E_REQUIRES_SIGN" << endl;
        cout << Utils::defaultOffsetDocInfo << "The operation requires a signed command." << endl;
        break;
        case TPM_E_KEY_NOTSUPPORTED:
        cout << Utils::defaultOffset << "TPM_E_KEY_NOTSUPPORTED" << endl;
        cout << Utils::defaultOffsetDocInfo << "Wrong operation to load an NV key." << endl;
        break;
        case TPM_E_AUTH_CONFLICT:
        cout << Utils::defaultOffset << "TPM_E_AUTH_CONFLICT" << endl;
        cout << Utils::defaultOffsetDocInfo << "NV_LoadKey blob requires both owner and blob authorization." << endl;
        break;
        case TPM_E_AREA_LOCKED:
        cout << Utils::defaultOffset << "TPM_E_AREA_LOCKED" << endl;
        cout << Utils::defaultOffsetDocInfo << "The NV area is locked and not writable." << endl;
        break;
        case TPM_E_BAD_LOCALITY:
        cout << Utils::defaultOffset << "TPM_E_BAD_LOCALITY" << endl;
        cout << Utils::defaultOffsetDocInfo << "The locality is incorrect for the attempted operation." << endl;
        break;
        case TPM_E_READ_ONLY:
        cout << Utils::defaultOffset << "TPM_E_READ_ONLY" << endl;
        cout << Utils::defaultOffsetDocInfo << "The NV area is read-only and cannot be written to." << endl;
        break;
        case TPM_E_PER_NOWRITE:
        cout << Utils::defaultOffset << "TPM_E_PER_NOWRITE" << endl;
        cout << Utils::defaultOffsetDocInfo << "There is no protection on the write to the NV area." << endl;
        break;
        case TPM_E_FAMILYCOUNT:
        cout << Utils::defaultOffset << "TPM_E_FAMILYCOUNT" << endl;
        cout << Utils::defaultOffsetDocInfo << "The family count value does not match." << endl;
        break;
        case TPM_E_WRITE_LOCKED:
        cout << Utils::defaultOffset << "TPM_E_WRITE_LOCKED" << endl;
        cout << Utils::defaultOffsetDocInfo << "The NV area has already been written to." << endl;
        break;
        case TPM_E_BAD_ATTRIBUTES:
        cout << Utils::defaultOffset << "TPM_E_BAD_ATTRIBUTES" << endl;
        cout << Utils::defaultOffsetDocInfo << "The NV area attributes conflict." << endl;
        break;
        case TPM_E_INVALID_STRUCTURE:
        cout << Utils::defaultOffset << "TPM_E_INVALID_STRUCTURE" << endl;
        cout << Utils::defaultOffsetDocInfo << "The structure tag and version are invalid or inconsistent." << endl;
        break;
        case TPM_E_KEY_OWNER_CONTROL:
        cout << Utils::defaultOffset << "TPM_E_KEY_OWNER_CONTROL" << endl;
        cout << Utils::defaultOffsetDocInfo << "The key is under control of the TPM owner and can only be evicted by the TPM owner." << endl;
        break;
        case TPM_E_BAD_COUNTER:
        cout << Utils::defaultOffset << "TPM_E_BAD_COUNTER" << endl;
        cout << Utils::defaultOffsetDocInfo << "The counter handle is incorrect." << endl;
        break;
        case TPM_E_NOT_FULLWRITE:
        cout << Utils::defaultOffset << "TPM_E_NOT_FULLWRITE" << endl;
        cout << Utils::defaultOffsetDocInfo << "The write is not a complete write of the area." << endl;
        break;
        case TPM_E_CONTEXT_GAP:
        cout << Utils::defaultOffset << "TPM_E_CONTEXT_GAP" << endl;
        cout << Utils::defaultOffsetDocInfo << "The gap between saved context counts is too large." << endl;
        break;
        case TPM_E_MAXNVWRITES:
        cout << Utils::defaultOffset << "TPM_E_MAXNVWRITES" << endl;
        cout << Utils::defaultOffsetDocInfo << "The maximum number of NV writes without an owner has been exceeded." << endl;
        break;
        case TPM_E_NOOPERATOR:
        cout << Utils::defaultOffset << "TPM_E_NOOPERATOR" << endl;
        cout << Utils::defaultOffsetDocInfo << "No operator AuthData value is set." << endl;
        break;
        case TPM_E_RESOURCEMISSING:
        cout << Utils::defaultOffset << "TPM_E_RESOURCEMISSING" << endl;
        cout << Utils::defaultOffsetDocInfo << "The resource pointed to by context is not loaded." << endl;
        break;
        case TPM_E_DELEGATE_LOCK:
        cout << Utils::defaultOffset << "TPM_E_DELEGATE_LOCK" << endl;
        cout << Utils::defaultOffsetDocInfo << "The delegate administration is locked." << endl;
        break;
        case TPM_E_DELEGATE_FAMILY:
        cout << Utils::defaultOffset << "TPM_E_DELEGATE_FAMILY" << endl;
        cout << Utils::defaultOffsetDocInfo << "Attempt to manage a family other then the delegated family." << endl;
        break;
        case TPM_E_DELEGATE_ADMIN:
        cout << Utils::defaultOffset << "TPM_E_DELEGATE_ADMIN" << endl;
        cout << Utils::defaultOffsetDocInfo << "Delegation table management not enabled." << endl;
        break;
        case TPM_E_TRANSPORT_NOTEXCLUSIVE:
        cout << Utils::defaultOffset << "TPM_E_TRANSPORT_NOTEXCLUSIVE" << endl;
        cout << Utils::defaultOffsetDocInfo << "There was a command executed outside an exclusive transport session." << endl;
        break;
        case TPM_E_OWNER_CONTROL:
        cout << Utils::defaultOffset << "TPM_E_OWNER_CONTROL" << endl;
        cout << Utils::defaultOffsetDocInfo << "Attempt to context save an owner evict controlled key." << endl;
        break;
        case TPM_E_DAA_RESOURCES:
        cout << Utils::defaultOffset << "TPM_E_DAA_RESOURCES" << endl;
        cout << Utils::defaultOffsetDocInfo << "The DAA command has no resources available to execute the command." << endl;
        break;
        case TPM_E_DAA_INPUT_DATA0:
        cout << Utils::defaultOffset << "TPM_E_DAA_INPUT_DATA0" << endl;
        cout << Utils::defaultOffsetDocInfo << "The consistency check on DAA parameter inputData0 has failed." << endl;
        break;
        case TPM_E_DAA_INPUT_DATA1:
        cout << Utils::defaultOffset << "TPM_E_DAA_INPUT_DATA1" << endl;
        cout << Utils::defaultOffsetDocInfo << "The consistency check on DAA parameter inputData1 has failed." << endl;
        break;
        case TPM_E_DAA_ISSUER_SETTINGS:
        cout << Utils::defaultOffset << "TPM_E_DAA_ISSUER_SETTINGS" << endl;
        cout << Utils::defaultOffsetDocInfo << "The consistency check on DAA_issuerSettings has failed." << endl;
        break;
        case TPM_E_DAA_TPM_SETTINGS:
        cout << Utils::defaultOffset << "TPM_E_DAA_TPM_SETTINGS" << endl;
        cout << Utils::defaultOffsetDocInfo << "The consistency check on DAA_tpmSpecific has failed." << endl;
        break;
        case TPM_E_DAA_STAGE:
        cout << Utils::defaultOffset << "TPM_E_DAA_STAGE" << endl;
        cout << Utils::defaultOffsetDocInfo << "The atomic process indicated by the submitted DAA command is not the expected process." << endl;
        break;
        case TPM_E_DAA_ISSUER_VALIDITY:
        cout << Utils::defaultOffset << "TPM_E_DAA_ISSUER_VALIDITY" << endl;
        cout << Utils::defaultOffsetDocInfo << "The issuer's validity check has detected an inconsistency." << endl;
        break;
        case TPM_E_DAA_WRONG_W:
        cout << Utils::defaultOffset << "TPM_E_DAA_WRONG_W" << endl;
        cout << Utils::defaultOffsetDocInfo << "The consistency check on w has failed." << endl;
        break;
        case TPM_E_BAD_HANDLE:
        cout << Utils::defaultOffset << "TPM_E_BAD_HANDLE" << endl;
        cout << Utils::defaultOffsetDocInfo << "The handle is incorrect." << endl;
        break;
        case TPM_E_BAD_DELEGATE:
        cout << Utils::defaultOffset << "TPM_E_BAD_DELEGATE" << endl;
        cout << Utils::defaultOffsetDocInfo << "Delegation is not correct." << endl;
        break;
        case TPM_E_BADCONTEXT:
        cout << Utils::defaultOffset << "TPM_E_BADCONTEXT" << endl;
        cout << Utils::defaultOffsetDocInfo << "The context blob is invalid." << endl;
        break;
        case TPM_E_TOOMANYCONTEXTS:
        cout << Utils::defaultOffset << "TPM_E_TOOMANYCONTEXTS" << endl;
        cout << Utils::defaultOffsetDocInfo << "Too many contexts held by the TPM." << endl;
        break;
        case TPM_E_MA_TICKET_SIGNATURE:
        cout << Utils::defaultOffset << "TPM_E_MA_TICKET_SIGNATURE" << endl;
        cout << Utils::defaultOffsetDocInfo << "Migration authority signature validation failure." << endl;
        break;
        case TPM_E_MA_DESTINATION:
        cout << Utils::defaultOffset << "TPM_E_MA_DESTINATION" << endl;
        cout << Utils::defaultOffsetDocInfo << "Migration destination not authenticated." << endl;
        break;
        case TPM_E_MA_SOURCE:
        cout << Utils::defaultOffset << "TPM_E_MA_SOURCE" << endl;
        cout << Utils::defaultOffsetDocInfo << "Migration source incorrect." << endl;
        break;
        case TPM_E_MA_AUTHORITY:
        cout << Utils::defaultOffset << "TPM_E_MA_AUTHORITY" << endl;
        cout << Utils::defaultOffsetDocInfo << "Incorrect migration authority." << endl;
        break;
        case TPM_E_PERMANENTEK:
        cout << Utils::defaultOffset << "TPM_E_PERMANENTEK" << endl;
        cout << Utils::defaultOffsetDocInfo << "Attempt to revoke the EK and the EK is not revocable." << endl;
        break;
        case TPM_E_BAD_SIGNATURE:
        cout << Utils::defaultOffset << "TPM_E_BAD_SIGNATURE" << endl;
        cout << Utils::defaultOffsetDocInfo << "Bad signature of CMK ticket." << endl;
        break;
        case TPM_E_NOCONTEXTSPACE:
        cout << Utils::defaultOffset << "TPM_E_NOCONTEXTSPACE" << endl;
        cout << Utils::defaultOffsetDocInfo << "There is no room in the context list for additional contexts." << endl;
        break;
        case TPM_E_COMMAND_BLOCKED:
        cout << Utils::defaultOffset << "TPM_E_COMMAND_BLOCKED" << endl;
        cout << Utils::defaultOffsetDocInfo << "The command was blocked." << endl;
        break;
        case TPM_E_INVALID_HANDLE:
        cout << Utils::defaultOffset << "TPM_E_INVALID_HANDLE" << endl;
        cout << Utils::defaultOffsetDocInfo << "The specified handle was not found." << endl;
        break;
        case TPM_E_DUPLICATE_VHANDLE:
        cout << Utils::defaultOffset << "TPM_E_DUPLICATE_VHANDLE" << endl;
        cout << Utils::defaultOffsetDocInfo << "The TPM returned a duplicate handle and the command needs to be resubmitted." << endl;
        break;
        case TPM_E_EMBEDDED_COMMAND_BLOCKED:
        cout << Utils::defaultOffset << "TPM_E_EMBEDDED_COMMAND_BLOCKED" << endl;
        cout << Utils::defaultOffsetDocInfo << "The command within the transport was blocked." << endl;
        break;
        case TPM_E_EMBEDDED_COMMAND_UNSUPPORTED:
        cout << Utils::defaultOffset << "TPM_E_EMBEDDED_COMMAND_UNSUPPORTED" << endl;
        cout << Utils::defaultOffsetDocInfo << "The command within the transport is not supported." << endl;
        break;
        case TPM_E_RETRY:
        cout << Utils::defaultOffset << "TPM_E_RETRY" << endl;
        cout << Utils::defaultOffsetDocInfo << "The TPM is too busy to respond to the command immediately, but the command could be resubmitted at a later time." << endl;
        break;
        case TPM_E_NEEDS_SELFTEST:
        cout << Utils::defaultOffset << "TPM_E_NEEDS_SELFTEST" << endl;
        cout << Utils::defaultOffsetDocInfo << "SelfTestFull has not been run." << endl;
        break;
        case TPM_E_DOING_SELFTEST:
        cout << Utils::defaultOffset << "TPM_E_DOING_SELFTEST" << endl;
        cout << Utils::defaultOffsetDocInfo << "The TPM is currently executing a full self-test." << endl;
        break;
        case TPM_E_DEFEND_LOCK_RUNNING:
        cout << Utils::defaultOffset << "TPM_E_DEFEND_LOCK_RUNNING" << endl;
        cout << Utils::defaultOffsetDocInfo << "The TPM is defending against dictionary attacks and is in a time-out period." << endl;
        break;
        case TBS_E_INTERNAL_ERROR:
        cout << Utils::defaultOffset << "TBS_E_INTERNAL_ERROR" << endl;
        cout << Utils::defaultOffsetDocInfo << "An internal software error has been detected." << endl;
        break;
        case TBS_E_BAD_PARAMETER:
        cout << Utils::defaultOffset << "TBS_E_BAD_PARAMETER" << endl;
        cout << Utils::defaultOffsetDocInfo << "One or more input parameters are bad." << endl;
        break;
        case TBS_E_INVALID_OUTPUT_POINTER:
        cout << Utils::defaultOffset << "TBS_E_INVALID_OUTPUT_POINTER" << endl;
        cout << Utils::defaultOffsetDocInfo << "A specified output pointer is bad." << endl;
        break;
        case TBS_E_INVALID_CONTEXT:
        cout << Utils::defaultOffset << "TBS_E_INVALID_CONTEXT" << endl;
        cout << Utils::defaultOffsetDocInfo << "The specified context handle does not refer to a valid context." << endl;
        break;
        case TBS_E_INSUFFICIENT_BUFFER:
        cout << Utils::defaultOffset << "TBS_E_INSUFFICIENT_BUFFER" << endl;
        cout << Utils::defaultOffsetDocInfo << "A specified output buffer is too small." << endl;
        break;
        case TBS_E_IOERROR:
        cout << Utils::defaultOffset << "TBS_E_IOERROR" << endl;
        cout << Utils::defaultOffsetDocInfo << "An error occurred while communicating with the TPM." << endl;
        break;
        case TBS_E_INVALID_CONTEXT_PARAM:
        cout << Utils::defaultOffset << "TBS_E_INVALID_CONTEXT_PARAM" << endl;
        cout << Utils::defaultOffsetDocInfo << "One or more context parameters are invalid." << endl;
        break;
        case TBS_E_SERVICE_NOT_RUNNING:
        cout << Utils::defaultOffset << "TBS_E_SERVICE_NOT_RUNNING" << endl;
        cout << Utils::defaultOffsetDocInfo << "The TPM Base Services (TBS) is not running and could not be started." << endl;
        break;
        case TBS_E_TOO_MANY_TBS_CONTEXTS:
        cout << Utils::defaultOffset << "TBS_E_TOO_MANY_TBS_CONTEXTS" << endl;
        cout << Utils::defaultOffsetDocInfo << "A new context could not be created because there are too many open contexts." << endl;
        break;
        case TBS_E_TOO_MANY_RESOURCES:
        cout << Utils::defaultOffset << "TBS_E_TOO_MANY_RESOURCES" << endl;
        cout << Utils::defaultOffsetDocInfo << "A new virtual resource could not be created because there are too many open virtual resources." << endl;
        break;
        case TBS_E_SERVICE_START_PENDING:
        cout << Utils::defaultOffset << "TBS_E_SERVICE_START_PENDING" << endl;
        cout << Utils::defaultOffsetDocInfo << "The TBS service has been started but is not yet running." << endl;
        break;
        case TBS_E_PPI_NOT_SUPPORTED:
        cout << Utils::defaultOffset << "TBS_E_PPI_NOT_SUPPORTED" << endl;
        cout << Utils::defaultOffsetDocInfo << "The physical presence interface is not supported." << endl;
        break;
        case TBS_E_COMMAND_CANCELED:
        cout << Utils::defaultOffset << "TBS_E_COMMAND_CANCELED" << endl;
        cout << Utils::defaultOffsetDocInfo << "The command was canceled." << endl;
        break;
        case TBS_E_BUFFER_TOO_LARGE:
        cout << Utils::defaultOffset << "TBS_E_BUFFER_TOO_LARGE" << endl;
        cout << Utils::defaultOffsetDocInfo << "The input or output buffer is too large." << endl;
        break;
        case TPMAPI_E_INVALID_STATE:
        cout << Utils::defaultOffset << "TPMAPI_E_INVALID_STATE" << endl;
        cout << Utils::defaultOffsetDocInfo << "The command buffer is not in the correct state." << endl;
        break;
        case TPMAPI_E_NOT_ENOUGH_DATA:
        cout << Utils::defaultOffset << "TPMAPI_E_NOT_ENOUGH_DATA" << endl;
        cout << Utils::defaultOffsetDocInfo << "The command buffer does not contain enough data to satisfy the request." << endl;
        break;
        case TPMAPI_E_TOO_MUCH_DATA:
        cout << Utils::defaultOffset << "TPMAPI_E_TOO_MUCH_DATA" << endl;
        cout << Utils::defaultOffsetDocInfo << "The command buffer cannot contain any more data." << endl;
        break;
        case TPMAPI_E_INVALID_OUTPUT_POINTER:
        cout << Utils::defaultOffset << "TPMAPI_E_INVALID_OUTPUT_POINTER" << endl;
        cout << Utils::defaultOffsetDocInfo << "One or more output parameters was null or invalid." << endl;
        break;
        case TPMAPI_E_INVALID_PARAMETER:
        cout << Utils::defaultOffset << "TPMAPI_E_INVALID_PARAMETER" << endl;
        cout << Utils::defaultOffsetDocInfo << "One or more input parameters are invalid." << endl;
        break;
        case TPMAPI_E_OUT_OF_MEMORY:
        cout << Utils::defaultOffset << "TPMAPI_E_OUT_OF_MEMORY" << endl;
        cout << Utils::defaultOffsetDocInfo << "Not enough memory was available to satisfy the request." << endl;
        break;
        case TPMAPI_E_BUFFER_TOO_SMALL:
        cout << Utils::defaultOffset << "TPMAPI_E_BUFFER_TOO_SMALL" << endl;
        cout << Utils::defaultOffsetDocInfo << "The specified buffer was too small." << endl;
        break;
        case TPMAPI_E_INTERNAL_ERROR:
        cout << Utils::defaultOffset << "TPMAPI_E_INTERNAL_ERROR" << endl;
        cout << Utils::defaultOffsetDocInfo << "An internal error was detected." << endl;
        break;
        case TPMAPI_E_ACCESS_DENIED:
        cout << Utils::defaultOffset << "TPMAPI_E_ACCESS_DENIED" << endl;
        cout << Utils::defaultOffsetDocInfo << "The caller does not have the appropriate rights to perform the requested operation." << endl;
        break;
        case TPMAPI_E_AUTHORIZATION_FAILED:
        cout << Utils::defaultOffset << "TPMAPI_E_AUTHORIZATION_FAILED" << endl;
        cout << Utils::defaultOffsetDocInfo << "The specified authorization information was invalid." << endl;
        break;
        case TPMAPI_E_INVALID_CONTEXT_HANDLE:
        cout << Utils::defaultOffset << "TPMAPI_E_INVALID_CONTEXT_HANDLE" << endl;
        cout << Utils::defaultOffsetDocInfo << "The specified context handle was not valid." << endl;
        break;
        case TPMAPI_E_TBS_COMMUNICATION_ERROR:
        cout << Utils::defaultOffset << "TPMAPI_E_TBS_COMMUNICATION_ERROR" << endl;
        cout << Utils::defaultOffsetDocInfo << "An error occurred while communicating with the TBS." << endl;
        break;
        case TPMAPI_E_TPM_COMMAND_ERROR:
        cout << Utils::defaultOffset << "TPMAPI_E_TPM_COMMAND_ERROR" << endl;
        cout << Utils::defaultOffsetDocInfo << "The TPM returned an unexpected result." << endl;
        break;
        case TPMAPI_E_MESSAGE_TOO_LARGE:
        cout << Utils::defaultOffset << "TPMAPI_E_MESSAGE_TOO_LARGE" << endl;
        cout << Utils::defaultOffsetDocInfo << "The message was too large for the encoding scheme." << endl;
        break;
        case TPMAPI_E_INVALID_ENCODING:
        cout << Utils::defaultOffset << "TPMAPI_E_INVALID_ENCODING" << endl;
        cout << Utils::defaultOffsetDocInfo << "The encoding in the binary large object (BLOB) was not recognized." << endl;
        break;
        case TPMAPI_E_INVALID_KEY_SIZE:
        cout << Utils::defaultOffset << "TPMAPI_E_INVALID_KEY_SIZE" << endl;
        cout << Utils::defaultOffsetDocInfo << "The key size is not valid." << endl;
        break;
        case TPMAPI_E_ENCRYPTION_FAILED:
        cout << Utils::defaultOffset << "TPMAPI_E_ENCRYPTION_FAILED" << endl;
        cout << Utils::defaultOffsetDocInfo << "The encryption operation failed." << endl;
        break;
        case TPMAPI_E_INVALID_KEY_PARAMS:
        cout << Utils::defaultOffset << "TPMAPI_E_INVALID_KEY_PARAMS" << endl;
        cout << Utils::defaultOffsetDocInfo << "The key parameters structure was not valid." << endl;
        break;
        case TPMAPI_E_INVALID_MIGRATION_AUTHORIZATION_BLOB:
        cout << Utils::defaultOffset << "TPMAPI_E_INVALID_MIGRATION_AUTHORIZATION_BLOB" << endl;
        cout << Utils::defaultOffsetDocInfo << "The requested supplied data does not appear to be a valid migration authorization BLOB." << endl;
        break;
        case TPMAPI_E_INVALID_PCR_INDEX:
        cout << Utils::defaultOffset << "TPMAPI_E_INVALID_PCR_INDEX" << endl;
        cout << Utils::defaultOffsetDocInfo << "The specified PCR index was invalid." << endl;
        break;
        case TPMAPI_E_INVALID_DELEGATE_BLOB:
        cout << Utils::defaultOffset << "TPMAPI_E_INVALID_DELEGATE_BLOB" << endl;
        cout << Utils::defaultOffsetDocInfo << "The data given does not appear to be a valid delegate BLOB." << endl;
        break;
        case TPMAPI_E_INVALID_CONTEXT_PARAMS:
        cout << Utils::defaultOffset << "TPMAPI_E_INVALID_CONTEXT_PARAMS" << endl;
        cout << Utils::defaultOffsetDocInfo << "One or more of the specified context parameters was not valid." << endl;
        break;
        case TPMAPI_E_INVALID_KEY_BLOB:
        cout << Utils::defaultOffset << "TPMAPI_E_INVALID_KEY_BLOB" << endl;
        cout << Utils::defaultOffsetDocInfo << "The data given does not appear to be a valid key BLOB." << endl;
        break;
        case TPMAPI_E_INVALID_PCR_DATA:
        cout << Utils::defaultOffset << "TPMAPI_E_INVALID_PCR_DATA" << endl;
        cout << Utils::defaultOffsetDocInfo << "The specified PCR data was invalid." << endl;
        break;
        case TPMAPI_E_INVALID_OWNER_AUTH:
        cout << Utils::defaultOffset << "TPMAPI_E_INVALID_OWNER_AUTH" << endl;
        cout << Utils::defaultOffsetDocInfo << "The format of the owner authorization data was invalid." << endl;
        break;
        case TBSIMP_E_BUFFER_TOO_SMALL:
        cout << Utils::defaultOffset << "TBSIMP_E_BUFFER_TOO_SMALL" << endl;
        cout << Utils::defaultOffsetDocInfo << "The specified buffer was too small." << endl;
        break;
        case TBSIMP_E_CLEANUP_FAILED:
        cout << Utils::defaultOffset << "TBSIMP_E_CLEANUP_FAILED" << endl;
        cout << Utils::defaultOffsetDocInfo << "The context could not be cleaned up." << endl;
        break;
        case TBSIMP_E_INVALID_CONTEXT_HANDLE:
        cout << Utils::defaultOffset << "TBSIMP_E_INVALID_CONTEXT_HANDLE" << endl;
        cout << Utils::defaultOffsetDocInfo << "The specified context handle is invalid." << endl;
        break;
        case TBSIMP_E_INVALID_CONTEXT_PARAM:
        cout << Utils::defaultOffset << "TBSIMP_E_INVALID_CONTEXT_PARAM" << endl;
        cout << Utils::defaultOffsetDocInfo << "An invalid context parameter was specified." << endl;
        break;
        case TBSIMP_E_TPM_ERROR:
        cout << Utils::defaultOffset << "TBSIMP_E_TPM_ERROR" << endl;
        cout << Utils::defaultOffsetDocInfo << "An error occurred while communicating with the TPM." << endl;
        break;
        case TBSIMP_E_HASH_BAD_KEY:
        cout << Utils::defaultOffset << "TBSIMP_E_HASH_BAD_KEY" << endl;
        cout << Utils::defaultOffsetDocInfo << "No entry with the specified key was found." << endl;
        break;
        case TBSIMP_E_DUPLICATE_VHANDLE:
        cout << Utils::defaultOffset << "TBSIMP_E_DUPLICATE_VHANDLE" << endl;
        cout << Utils::defaultOffsetDocInfo << "The specified virtual handle matches a virtual handle already in use." << endl;
        break;
        case TBSIMP_E_INVALID_OUTPUT_POINTER:
        cout << Utils::defaultOffset << "TBSIMP_E_INVALID_OUTPUT_POINTER" << endl;
        cout << Utils::defaultOffsetDocInfo << "The pointer to the returned handle location was null or invalid." << endl;
        break;
        case TBSIMP_E_INVALID_PARAMETER:
        cout << Utils::defaultOffset << "TBSIMP_E_INVALID_PARAMETER" << endl;
        cout << Utils::defaultOffsetDocInfo << "One or more parameters are invalid." << endl;
        break;
        case TBSIMP_E_RPC_INIT_FAILED:
        cout << Utils::defaultOffset << "TBSIMP_E_RPC_INIT_FAILED" << endl;
        cout << Utils::defaultOffsetDocInfo << "The RPC subsystem could not be initialized." << endl;
        break;
        case TBSIMP_E_SCHEDULER_NOT_RUNNING:
        cout << Utils::defaultOffset << "TBSIMP_E_SCHEDULER_NOT_RUNNING" << endl;
        cout << Utils::defaultOffsetDocInfo << "The TBS scheduler is not running." << endl;
        break;
        case TBSIMP_E_COMMAND_CANCELED:
        cout << Utils::defaultOffset << "TBSIMP_E_COMMAND_CANCELED" << endl;
        cout << Utils::defaultOffsetDocInfo << "The command was canceled." << endl;
        break;
        case TBSIMP_E_OUT_OF_MEMORY:
        cout << Utils::defaultOffset << "TBSIMP_E_OUT_OF_MEMORY" << endl;
        cout << Utils::defaultOffsetDocInfo << "There was not enough memory to fulfill the request." << endl;
        break;
        case TBSIMP_E_LIST_NO_MORE_ITEMS:
        cout << Utils::defaultOffset << "TBSIMP_E_LIST_NO_MORE_ITEMS" << endl;
        cout << Utils::defaultOffsetDocInfo << "The specified list is empty, or the iteration has reached the end of the list." << endl;
        break;
        case TBSIMP_E_LIST_NOT_FOUND:
        cout << Utils::defaultOffset << "TBSIMP_E_LIST_NOT_FOUND" << endl;
        cout << Utils::defaultOffsetDocInfo << "The specified item was not found in the list." << endl;
        break;
        case TBSIMP_E_NOT_ENOUGH_SPACE:
        cout << Utils::defaultOffset << "TBSIMP_E_NOT_ENOUGH_SPACE" << endl;
        cout << Utils::defaultOffsetDocInfo << "The TPM does not have enough space to load the requested resource." << endl;
        break;
        case TBSIMP_E_NOT_ENOUGH_TPM_CONTEXTS:
        cout << Utils::defaultOffset << "TBSIMP_E_NOT_ENOUGH_TPM_CONTEXTS" << endl;
        cout << Utils::defaultOffsetDocInfo << "There are too many TPM contexts in use." << endl;
        break;
        case TBSIMP_E_COMMAND_FAILED:
        cout << Utils::defaultOffset << "TBSIMP_E_COMMAND_FAILED" << endl;
        cout << Utils::defaultOffsetDocInfo << "The TPM command failed." << endl;
        break;
        case TBSIMP_E_UNKNOWN_ORDINAL:
        cout << Utils::defaultOffset << "TBSIMP_E_UNKNOWN_ORDINAL" << endl;
        cout << Utils::defaultOffsetDocInfo << "The TBS does not recognize the specified ordinal." << endl;
        break;
        case TBSIMP_E_RESOURCE_EXPIRED:
        cout << Utils::defaultOffset << "TBSIMP_E_RESOURCE_EXPIRED" << endl;
        cout << Utils::defaultOffsetDocInfo << "The requested resource is no longer available." << endl;
        break;
        case TBSIMP_E_INVALID_RESOURCE:
        cout << Utils::defaultOffset << "TBSIMP_E_INVALID_RESOURCE" << endl;
        cout << Utils::defaultOffsetDocInfo << "The resource type did not match." << endl;
        break;
        case TBSIMP_E_NOTHING_TO_UNLOAD:
        cout << Utils::defaultOffset << "TBSIMP_E_NOTHING_TO_UNLOAD" << endl;
        cout << Utils::defaultOffsetDocInfo << "No resources can be unloaded." << endl;
        break;
        case TBSIMP_E_HASH_TABLE_FULL:
        cout << Utils::defaultOffset << "TBSIMP_E_HASH_TABLE_FULL" << endl;
        cout << Utils::defaultOffsetDocInfo << "No new entries can be added to the hash table." << endl;
        break;
        case TBSIMP_E_TOO_MANY_TBS_CONTEXTS:
        cout << Utils::defaultOffset << "TBSIMP_E_TOO_MANY_TBS_CONTEXTS" << endl;
        cout << Utils::defaultOffsetDocInfo << "A new TBS context could not be created because there are too many open contexts." << endl;
        break;
        case TBSIMP_E_TOO_MANY_RESOURCES:
        cout << Utils::defaultOffset << "TBSIMP_E_TOO_MANY_RESOURCES" << endl;
        cout << Utils::defaultOffsetDocInfo << "A new virtual resource could not be created because there are too many open virtual resources." << endl;
        break;
        case TBSIMP_E_PPI_NOT_SUPPORTED:
        cout << Utils::defaultOffset << "TBSIMP_E_PPI_NOT_SUPPORTED" << endl;
        cout << Utils::defaultOffsetDocInfo << "The physical presence interface is not supported." << endl;
        break;
        case TBSIMP_E_TPM_INCOMPATIBLE:
        cout << Utils::defaultOffset << "TBSIMP_E_TPM_INCOMPATIBLE" << endl;
        cout << Utils::defaultOffsetDocInfo << "TBS is not compatible with the version of TPM found on the system." << endl;
        break;
        case TPM_E_PPI_ACPI_FAILURE:
        cout << Utils::defaultOffset << "TPM_E_PPI_ACPI_FAILURE" << endl;
        cout << Utils::defaultOffsetDocInfo << "A general error was detected when attempting to acquire the BIOS response to a physical presence command." << endl;
        break;
        case TPM_E_PPI_USER_ABORT:
        cout << Utils::defaultOffset << "TPM_E_PPI_USER_ABORT" << endl;
        cout << Utils::defaultOffsetDocInfo << "The user failed to confirm the TPM operation request." << endl;
        break;
        case TPM_E_PPI_BIOS_FAILURE:
        cout << Utils::defaultOffset << "TPM_E_PPI_BIOS_FAILURE" << endl;
        cout << Utils::defaultOffsetDocInfo << "The BIOS failure prevented the successful execution of the requested TPM operation (for example, invalid TPM operation request, BIOS communication error with the TPM)." << endl;
        break;
        case TPM_E_PPI_NOT_SUPPORTED:
        cout << Utils::defaultOffset << "TPM_E_PPI_NOT_SUPPORTED" << endl;
        cout << Utils::defaultOffsetDocInfo << "The BIOS does not support the physical presence interface." << endl;
        break;
        case PLA_E_DCS_NOT_FOUND:
        cout << Utils::defaultOffset << "PLA_E_DCS_NOT_FOUND" << endl;
        cout << Utils::defaultOffsetDocInfo << "A Data Collector Set was not found." << endl;
        break;
        case PLA_E_TOO_MANY_FOLDERS:
        cout << Utils::defaultOffset << "PLA_E_TOO_MANY_FOLDERS" << endl;
        cout << Utils::defaultOffsetDocInfo << "Unable to start Data Collector Set because there are too many folders." << endl;
        break;
        case PLA_E_NO_MIN_DISK:
        cout << Utils::defaultOffset << "PLA_E_NO_MIN_DISK" << endl;
        cout << Utils::defaultOffsetDocInfo << "Not enough free disk space to start Data Collector Set." << endl;
        break;
        case PLA_E_DCS_IN_USE:
        cout << Utils::defaultOffset << "PLA_E_DCS_IN_USE" << endl;
        cout << Utils::defaultOffsetDocInfo << "Data Collector Set is in use." << endl;
        break;
        case PLA_E_DCS_ALREADY_EXISTS:
        cout << Utils::defaultOffset << "PLA_E_DCS_ALREADY_EXISTS" << endl;
        cout << Utils::defaultOffsetDocInfo << "Data Collector Set already exists." << endl;
        break;
        case PLA_E_PROPERTY_CONFLICT:
        cout << Utils::defaultOffset << "PLA_E_PROPERTY_CONFLICT" << endl;
        cout << Utils::defaultOffsetDocInfo << "Property value conflict." << endl;
        break;
        case PLA_E_DCS_SINGLETON_REQUIRED:
        cout << Utils::defaultOffset << "PLA_E_DCS_SINGLETON_REQUIRED" << endl;
        cout << Utils::defaultOffsetDocInfo << "The current configuration for this Data Collector Set requires that it contain exactly one Data Collector." << endl;
        break;
        case PLA_E_CREDENTIALS_REQUIRED:
        cout << Utils::defaultOffset << "PLA_E_CREDENTIALS_REQUIRED" << endl;
        cout << Utils::defaultOffsetDocInfo << "A user account is required to commit the current Data Collector Set properties." << endl;
        break;
        case PLA_E_DCS_NOT_RUNNING:
        cout << Utils::defaultOffset << "PLA_E_DCS_NOT_RUNNING" << endl;
        cout << Utils::defaultOffsetDocInfo << "Data Collector Set is not running." << endl;
        break;
        case PLA_E_CONFLICT_INCL_EXCL_API:
        cout << Utils::defaultOffset << "PLA_E_CONFLICT_INCL_EXCL_API" << endl;
        cout << Utils::defaultOffsetDocInfo << "A conflict was detected in the list of include and exclude APIs. Do not specify the same API in both the include list and the exclude list." << endl;
        break;
        case PLA_E_NETWORK_EXE_NOT_VALID:
        cout << Utils::defaultOffset << "PLA_E_NETWORK_EXE_NOT_VALID" << endl;
        cout << Utils::defaultOffsetDocInfo << "The executable path specified refers to a network share or UNC path." << endl;
        break;
        case PLA_E_EXE_ALREADY_CONFIGURED:
        cout << Utils::defaultOffset << "PLA_E_EXE_ALREADY_CONFIGURED" << endl;
        cout << Utils::defaultOffsetDocInfo << "The executable path specified is already configured for API tracing." << endl;
        break;
        case PLA_E_EXE_PATH_NOT_VALID:
        cout << Utils::defaultOffset << "PLA_E_EXE_PATH_NOT_VALID" << endl;
        cout << Utils::defaultOffsetDocInfo << "The executable path specified does not exist. Verify that the specified path is correct." << endl;
        break;
        case PLA_E_DC_ALREADY_EXISTS:
        cout << Utils::defaultOffset << "PLA_E_DC_ALREADY_EXISTS" << endl;
        cout << Utils::defaultOffsetDocInfo << "Data Collector already exists." << endl;
        break;
        case PLA_E_DCS_START_WAIT_TIMEOUT:
        cout << Utils::defaultOffset << "PLA_E_DCS_START_WAIT_TIMEOUT" << endl;
        cout << Utils::defaultOffsetDocInfo << "The wait for the Data Collector Set start notification has timed out." << endl;
        break;
        case PLA_E_DC_START_WAIT_TIMEOUT:
        cout << Utils::defaultOffset << "PLA_E_DC_START_WAIT_TIMEOUT" << endl;
        cout << Utils::defaultOffsetDocInfo << "The wait for the Data Collector to start has timed out." << endl;
        break;
        case PLA_E_REPORT_WAIT_TIMEOUT:
        cout << Utils::defaultOffset << "PLA_E_REPORT_WAIT_TIMEOUT" << endl;
        cout << Utils::defaultOffsetDocInfo << "The wait for the report generation tool to finish has timed out." << endl;
        break;
        case PLA_E_NO_DUPLICATES:
        cout << Utils::defaultOffset << "PLA_E_NO_DUPLICATES" << endl;
        cout << Utils::defaultOffsetDocInfo << "Duplicate items are not allowed." << endl;
        break;
        case PLA_E_EXE_FULL_PATH_REQUIRED:
        cout << Utils::defaultOffset << "PLA_E_EXE_FULL_PATH_REQUIRED" << endl;
        cout << Utils::defaultOffsetDocInfo << "When specifying the executable to trace, you must specify a full path to the executable and not just a file name." << endl;
        break;
        case PLA_E_INVALID_SESSION_NAME:
        cout << Utils::defaultOffset << "PLA_E_INVALID_SESSION_NAME" << endl;
        cout << Utils::defaultOffsetDocInfo << "The session name provided is invalid." << endl;
        break;
        case PLA_E_PLA_CHANNEL_NOT_ENABLED:
        cout << Utils::defaultOffset << "PLA_E_PLA_CHANNEL_NOT_ENABLED" << endl;
        cout << Utils::defaultOffsetDocInfo << "The Event Log channel Microsoft-Windows-Diagnosis-PLA/Operational must be enabled to perform this operation." << endl;
        break;
        case PLA_E_TASKSCHED_CHANNEL_NOT_ENABLED:
        cout << Utils::defaultOffset << "PLA_E_TASKSCHED_CHANNEL_NOT_ENABLED" << endl;
        cout << Utils::defaultOffsetDocInfo << "The Event Log channel Microsoft-Windows-TaskScheduler must be enabled to perform this operation." << endl;
        break;
        case FVE_E_LOCKED_VOLUME:
        cout << Utils::defaultOffset << "FVE_E_LOCKED_VOLUME" << endl;
        cout << Utils::defaultOffsetDocInfo << "The volume must be unlocked before it can be used." << endl;
        break;
        case FVE_E_NOT_ENCRYPTED:
        cout << Utils::defaultOffset << "FVE_E_NOT_ENCRYPTED" << endl;
        cout << Utils::defaultOffsetDocInfo << "The volume is fully decrypted and no key is available." << endl;
        break;
        case FVE_E_NO_TPM_BIOS:
        cout << Utils::defaultOffset << "FVE_E_NO_TPM_BIOS" << endl;
        cout << Utils::defaultOffsetDocInfo << "The firmware does not support using a TPM during boot." << endl;
        break;
        case FVE_E_NO_MBR_METRIC:
        cout << Utils::defaultOffset << "FVE_E_NO_MBR_METRIC" << endl;
        cout << Utils::defaultOffsetDocInfo << "The firmware does not use a TPM to perform initial program load (IPL) measurement." << endl;
        break;
        case FVE_E_NO_BOOTSECTOR_METRIC:
        cout << Utils::defaultOffset << "FVE_E_NO_BOOTSECTOR_METRIC" << endl;
        cout << Utils::defaultOffsetDocInfo << "The master boot record (MBR) is not TPM-aware." << endl;
        break;
        case FVE_E_NO_BOOTMGR_METRIC:
        cout << Utils::defaultOffset << "FVE_E_NO_BOOTMGR_METRIC" << endl;
        cout << Utils::defaultOffsetDocInfo << "The BOOTMGR is not being measured by the TPM." << endl;
        break;
        case FVE_E_WRONG_BOOTMGR:
        cout << Utils::defaultOffset << "FVE_E_WRONG_BOOTMGR" << endl;
        cout << Utils::defaultOffsetDocInfo << "The BOOTMGR component does not perform expected TPM measurements." << endl;
        break;
        case FVE_E_SECURE_KEY_REQUIRED:
        cout << Utils::defaultOffset << "FVE_E_SECURE_KEY_REQUIRED" << endl;
        cout << Utils::defaultOffsetDocInfo << "No secure key protection mechanism has been defined." << endl;
        break;
        case FVE_E_NOT_ACTIVATED:
        cout << Utils::defaultOffset << "FVE_E_NOT_ACTIVATED" << endl;
        cout << Utils::defaultOffsetDocInfo << "This volume has not been provisioned for encryption." << endl;
        break;
        case FVE_E_ACTION_NOT_ALLOWED:
        cout << Utils::defaultOffset << "FVE_E_ACTION_NOT_ALLOWED" << endl;
        cout << Utils::defaultOffsetDocInfo << "Requested action was denied by the full-volume encryption (FVE) control engine." << endl;
        break;
        case FVE_E_AD_SCHEMA_NOT_INSTALLED:
        cout << Utils::defaultOffset << "FVE_E_AD_SCHEMA_NOT_INSTALLED" << endl;
        cout << Utils::defaultOffsetDocInfo << "The Active Directory forest does not contain the required attributes and classes to host FVE or TPM information." << endl;
        break;
        case FVE_E_AD_INVALID_DATATYPE:
        cout << Utils::defaultOffset << "FVE_E_AD_INVALID_DATATYPE" << endl;
        cout << Utils::defaultOffsetDocInfo << "The type of data obtained from Active Directory was not expected." << endl;
        break;
        case FVE_E_AD_INVALID_DATASIZE:
        cout << Utils::defaultOffset << "FVE_E_AD_INVALID_DATASIZE" << endl;
        cout << Utils::defaultOffsetDocInfo << "The size of the data obtained from Active Directory was not expected." << endl;
        break;
        case FVE_E_AD_NO_VALUES:
        cout << Utils::defaultOffset << "FVE_E_AD_NO_VALUES" << endl;
        cout << Utils::defaultOffsetDocInfo << "The attribute read from Active Directory has no (zero) values." << endl;
        break;
        case FVE_E_AD_ATTR_NOT_SET:
        cout << Utils::defaultOffset << "FVE_E_AD_ATTR_NOT_SET" << endl;
        cout << Utils::defaultOffsetDocInfo << "The attribute was not set." << endl;
        break;
        case FVE_E_AD_GUID_NOT_FOUND:
        cout << Utils::defaultOffset << "FVE_E_AD_GUID_NOT_FOUND" << endl;
        cout << Utils::defaultOffsetDocInfo << "The specified GUID could not be found." << endl;
        break;
        case FVE_E_BAD_INFORMATION:
        cout << Utils::defaultOffset << "FVE_E_BAD_INFORMATION" << endl;
        cout << Utils::defaultOffsetDocInfo << "The control block for the encrypted volume is not valid." << endl;
        break;
        case FVE_E_TOO_SMALL:
        cout << Utils::defaultOffset << "FVE_E_TOO_SMALL" << endl;
        cout << Utils::defaultOffsetDocInfo << "Not enough free space remaining on volume to allow encryption." << endl;
        break;
        case FVE_E_SYSTEM_VOLUME:
        cout << Utils::defaultOffset << "FVE_E_SYSTEM_VOLUME" << endl;
        cout << Utils::defaultOffsetDocInfo << "The volume cannot be encrypted because it is required to boot the operating system." << endl;
        break;
        case FVE_E_FAILED_WRONG_FS:
        cout << Utils::defaultOffset << "FVE_E_FAILED_WRONG_FS" << endl;
        cout << Utils::defaultOffsetDocInfo << "The volume cannot be encrypted because the file system is not supported." << endl;
        break;
        case FVE_E_FAILED_BAD_FS:
        cout << Utils::defaultOffset << "FVE_E_FAILED_BAD_FS" << endl;
        cout << Utils::defaultOffsetDocInfo << "The file system is inconsistent. Run CHKDSK." << endl;
        break;
        case FVE_E_NOT_SUPPORTED:
        cout << Utils::defaultOffset << "FVE_E_NOT_SUPPORTED" << endl;
        cout << Utils::defaultOffsetDocInfo << "This volume cannot be encrypted." << endl;
        break;
        case FVE_E_BAD_DATA:
        cout << Utils::defaultOffset << "FVE_E_BAD_DATA" << endl;
        cout << Utils::defaultOffsetDocInfo << "Data supplied is malformed." << endl;
        break;
        case FVE_E_VOLUME_NOT_BOUND:
        cout << Utils::defaultOffset << "FVE_E_VOLUME_NOT_BOUND" << endl;
        cout << Utils::defaultOffsetDocInfo << "Volume is not bound to the system." << endl;
        break;
        case FVE_E_TPM_NOT_OWNED:
        cout << Utils::defaultOffset << "FVE_E_TPM_NOT_OWNED" << endl;
        cout << Utils::defaultOffsetDocInfo << "TPM must be owned before a volume can be bound to it." << endl;
        break;
        case FVE_E_NOT_DATA_VOLUME:
        cout << Utils::defaultOffset << "FVE_E_NOT_DATA_VOLUME" << endl;
        cout << Utils::defaultOffsetDocInfo << "The volume specified is not a data volume." << endl;
        break;
        case FVE_E_AD_INSUFFICIENT_BUFFER:
        cout << Utils::defaultOffset << "FVE_E_AD_INSUFFICIENT_BUFFER" << endl;
        cout << Utils::defaultOffsetDocInfo << "The buffer supplied to a function was insufficient to contain the returned data." << endl;
        break;
        case FVE_E_CONV_READ:
        cout << Utils::defaultOffset << "FVE_E_CONV_READ" << endl;
        cout << Utils::defaultOffsetDocInfo << "A read operation failed while converting the volume." << endl;
        break;
        case FVE_E_CONV_WRITE:
        cout << Utils::defaultOffset << "FVE_E_CONV_WRITE" << endl;
        cout << Utils::defaultOffsetDocInfo << "A write operation failed while converting the volume." << endl;
        break;
        case FVE_E_KEY_REQUIRED:
        cout << Utils::defaultOffset << "FVE_E_KEY_REQUIRED" << endl;
        cout << Utils::defaultOffsetDocInfo << "One or more key protection mechanisms are required for this volume." << endl;
        break;
        case FVE_E_CLUSTERING_NOT_SUPPORTED:
        cout << Utils::defaultOffset << "FVE_E_CLUSTERING_NOT_SUPPORTED" << endl;
        cout << Utils::defaultOffsetDocInfo << "Cluster configurations are not supported." << endl;
        break;
        case FVE_E_VOLUME_BOUND_ALREADY:
        cout << Utils::defaultOffset << "FVE_E_VOLUME_BOUND_ALREADY" << endl;
        cout << Utils::defaultOffsetDocInfo << "The volume is already bound to the system." << endl;
        break;
        case FVE_E_OS_NOT_PROTECTED:
        cout << Utils::defaultOffset << "FVE_E_OS_NOT_PROTECTED" << endl;
        cout << Utils::defaultOffsetDocInfo << "The boot OS volume is not being protected via FVE." << endl;
        break;
        case FVE_E_PROTECTION_DISABLED:
        cout << Utils::defaultOffset << "FVE_E_PROTECTION_DISABLED" << endl;
        cout << Utils::defaultOffsetDocInfo << "All protection mechanisms are effectively disabled (clear key exists)." << endl;
        break;
        case FVE_E_RECOVERY_KEY_REQUIRED:
        cout << Utils::defaultOffset << "FVE_E_RECOVERY_KEY_REQUIRED" << endl;
        cout << Utils::defaultOffsetDocInfo << "A recovery key protection mechanism is required." << endl;
        break;
        case FVE_E_FOREIGN_VOLUME:
        cout << Utils::defaultOffset << "FVE_E_FOREIGN_VOLUME" << endl;
        cout << Utils::defaultOffsetDocInfo << "This volume cannot be bound to a TPM." << endl;
        break;
        case FVE_E_OVERLAPPED_UPDATE:
        cout << Utils::defaultOffset << "FVE_E_OVERLAPPED_UPDATE" << endl;
        cout << Utils::defaultOffsetDocInfo << "The control block for the encrypted volume was updated by another thread. Try again." << endl;
        break;
        case FVE_E_TPM_SRK_AUTH_NOT_ZERO:
        cout << Utils::defaultOffset << "FVE_E_TPM_SRK_AUTH_NOT_ZERO" << endl;
        cout << Utils::defaultOffsetDocInfo << "The SRK authentication of the TPM is not zero and, therefore, is not compatible." << endl;
        break;
        case FVE_E_FAILED_SECTOR_SIZE:
        cout << Utils::defaultOffset << "FVE_E_FAILED_SECTOR_SIZE" << endl;
        cout << Utils::defaultOffsetDocInfo << "The volume encryption algorithm cannot be used on this sector size." << endl;
        break;
        case FVE_E_FAILED_AUTHENTICATION:
        cout << Utils::defaultOffset << "FVE_E_FAILED_AUTHENTICATION" << endl;
        cout << Utils::defaultOffsetDocInfo << "BitLocker recovery authentication failed." << endl;
        break;
        case FVE_E_NOT_OS_VOLUME:
        cout << Utils::defaultOffset << "FVE_E_NOT_OS_VOLUME" << endl;
        cout << Utils::defaultOffsetDocInfo << "The volume specified is not the boot OS volume." << endl;
        break;
        case FVE_E_AUTOUNLOCK_ENABLED:
        cout << Utils::defaultOffset << "FVE_E_AUTOUNLOCK_ENABLED" << endl;
        cout << Utils::defaultOffsetDocInfo << "Auto-unlock information for data volumes is present on the boot OS volume." << endl;
        break;
        case FVE_E_WRONG_BOOTSECTOR:
        cout << Utils::defaultOffset << "FVE_E_WRONG_BOOTSECTOR" << endl;
        cout << Utils::defaultOffsetDocInfo << "The system partition boot sector does not perform TPM measurements." << endl;
        break;
        case FVE_E_WRONG_SYSTEM_FS:
        cout << Utils::defaultOffset << "FVE_E_WRONG_SYSTEM_FS" << endl;
        cout << Utils::defaultOffsetDocInfo << "The system partition file system must be NTFS." << endl;
        break;
        case FVE_E_POLICY_PASSWORD_REQUIRED:
        cout << Utils::defaultOffset << "FVE_E_POLICY_PASSWORD_REQUIRED" << endl;
        cout << Utils::defaultOffsetDocInfo << "Group policy requires a recovery password before encryption can begin." << endl;
        break;
        case FVE_E_CANNOT_SET_FVEK_ENCRYPTED:
        cout << Utils::defaultOffset << "FVE_E_CANNOT_SET_FVEK_ENCRYPTED" << endl;
        cout << Utils::defaultOffsetDocInfo << "The volume encryption algorithm and key cannot be set on an encrypted volume." << endl;
        break;
        case FVE_E_CANNOT_ENCRYPT_NO_KEY:
        cout << Utils::defaultOffset << "FVE_E_CANNOT_ENCRYPT_NO_KEY" << endl;
        cout << Utils::defaultOffsetDocInfo << "A key must be specified before encryption can begin." << endl;
        break;
        case FVE_E_BOOTABLE_CDDVD:
        cout << Utils::defaultOffset << "FVE_E_BOOTABLE_CDDVD" << endl;
        cout << Utils::defaultOffsetDocInfo << "A bootable CD/DVD is in the system. Remove the CD/DVD and reboot the system." << endl;
        break;
        case FVE_E_PROTECTOR_EXISTS:
        cout << Utils::defaultOffset << "FVE_E_PROTECTOR_EXISTS" << endl;
        cout << Utils::defaultOffsetDocInfo << "An instance of this key protector already exists on the volume." << endl;
        break;
        case FVE_E_RELATIVE_PATH:
        cout << Utils::defaultOffset << "FVE_E_RELATIVE_PATH" << endl;
        cout << Utils::defaultOffsetDocInfo << "The file cannot be saved to a relative path." << endl;
        break;
        case FWP_E_CALLOUT_NOT_FOUND:
        cout << Utils::defaultOffset << "FWP_E_CALLOUT_NOT_FOUND" << endl;
        cout << Utils::defaultOffsetDocInfo << "The callout does not exist." << endl;
        break;
        case FWP_E_CONDITION_NOT_FOUND:
        cout << Utils::defaultOffset << "FWP_E_CONDITION_NOT_FOUND" << endl;
        cout << Utils::defaultOffsetDocInfo << "The filter condition does not exist." << endl;
        break;
        case FWP_E_FILTER_NOT_FOUND:
        cout << Utils::defaultOffset << "FWP_E_FILTER_NOT_FOUND" << endl;
        cout << Utils::defaultOffsetDocInfo << "The filter does not exist." << endl;
        break;
        case FWP_E_LAYER_NOT_FOUND:
        cout << Utils::defaultOffset << "FWP_E_LAYER_NOT_FOUND" << endl;
        cout << Utils::defaultOffsetDocInfo << "The layer does not exist." << endl;
        break;
        case FWP_E_PROVIDER_NOT_FOUND:
        cout << Utils::defaultOffset << "FWP_E_PROVIDER_NOT_FOUND" << endl;
        cout << Utils::defaultOffsetDocInfo << "The provider does not exist." << endl;
        break;
        case FWP_E_PROVIDER_CONTEXT_NOT_FOUND:
        cout << Utils::defaultOffset << "FWP_E_PROVIDER_CONTEXT_NOT_FOUND" << endl;
        cout << Utils::defaultOffsetDocInfo << "The provider context does not exist." << endl;
        break;
        case FWP_E_SUBLAYER_NOT_FOUND:
        cout << Utils::defaultOffset << "FWP_E_SUBLAYER_NOT_FOUND" << endl;
        cout << Utils::defaultOffsetDocInfo << "The sublayer does not exist." << endl;
        break;
        case FWP_E_NOT_FOUND:
        cout << Utils::defaultOffset << "FWP_E_NOT_FOUND" << endl;
        cout << Utils::defaultOffsetDocInfo << "The object does not exist." << endl;
        break;
        case FWP_E_ALREADY_EXISTS:
        cout << Utils::defaultOffset << "FWP_E_ALREADY_EXISTS" << endl;
        cout << Utils::defaultOffsetDocInfo << "An object with that GUID or LUID already exists." << endl;
        break;
        case FWP_E_IN_USE:
        cout << Utils::defaultOffset << "FWP_E_IN_USE" << endl;
        cout << Utils::defaultOffsetDocInfo << "The object is referenced by other objects and, therefore, cannot be deleted." << endl;
        break;
        case FWP_E_DYNAMIC_SESSION_IN_PROGRESS:
        cout << Utils::defaultOffset << "FWP_E_DYNAMIC_SESSION_IN_PROGRESS" << endl;
        cout << Utils::defaultOffsetDocInfo << "The call is not allowed from within a dynamic session." << endl;
        break;
        case FWP_E_WRONG_SESSION:
        cout << Utils::defaultOffset << "FWP_E_WRONG_SESSION" << endl;
        cout << Utils::defaultOffsetDocInfo << "The call was made from the wrong session and, therefore, cannot be completed." << endl;
        break;
        case FWP_E_NO_TXN_IN_PROGRESS:
        cout << Utils::defaultOffset << "FWP_E_NO_TXN_IN_PROGRESS" << endl;
        cout << Utils::defaultOffsetDocInfo << "The call must be made from within an explicit transaction." << endl;
        break;
        case FWP_E_TXN_IN_PROGRESS:
        cout << Utils::defaultOffset << "FWP_E_TXN_IN_PROGRESS" << endl;
        cout << Utils::defaultOffsetDocInfo << "The call is not allowed from within an explicit transaction." << endl;
        break;
        case FWP_E_TXN_ABORTED:
        cout << Utils::defaultOffset << "FWP_E_TXN_ABORTED" << endl;
        cout << Utils::defaultOffsetDocInfo << "The explicit transaction has been forcibly canceled." << endl;
        break;
        case FWP_E_SESSION_ABORTED:
        cout << Utils::defaultOffset << "FWP_E_SESSION_ABORTED" << endl;
        cout << Utils::defaultOffsetDocInfo << "The session has been canceled." << endl;
        break;
        case FWP_E_INCOMPATIBLE_TXN:
        cout << Utils::defaultOffset << "FWP_E_INCOMPATIBLE_TXN" << endl;
        cout << Utils::defaultOffsetDocInfo << "The call is not allowed from within a read-only transaction." << endl;
        break;
        case FWP_E_TIMEOUT:
        cout << Utils::defaultOffset << "FWP_E_TIMEOUT" << endl;
        cout << Utils::defaultOffsetDocInfo << "The call timed out while waiting to acquire the transaction lock." << endl;
        break;
        case FWP_E_NET_EVENTS_DISABLED:
        cout << Utils::defaultOffset << "FWP_E_NET_EVENTS_DISABLED" << endl;
        cout << Utils::defaultOffsetDocInfo << "Collection of network diagnostic events is disabled." << endl;
        break;
        case FWP_E_INCOMPATIBLE_LAYER:
        cout << Utils::defaultOffset << "FWP_E_INCOMPATIBLE_LAYER" << endl;
        cout << Utils::defaultOffsetDocInfo << "The operation is not supported by the specified layer." << endl;
        break;
        case FWP_E_KM_CLIENTS_ONLY:
        cout << Utils::defaultOffset << "FWP_E_KM_CLIENTS_ONLY" << endl;
        cout << Utils::defaultOffsetDocInfo << "The call is allowed for kernel-mode callers only." << endl;
        break;
        case FWP_E_LIFETIME_MISMATCH:
        cout << Utils::defaultOffset << "FWP_E_LIFETIME_MISMATCH" << endl;
        cout << Utils::defaultOffsetDocInfo << "The call tried to associate two objects with incompatible lifetimes." << endl;
        break;
        case FWP_E_BUILTIN_OBJECT:
        cout << Utils::defaultOffset << "FWP_E_BUILTIN_OBJECT" << endl;
        cout << Utils::defaultOffsetDocInfo << "The object is built in and, therefore, cannot be deleted." << endl;
        break;
        case FWP_E_TOO_MANY_BOOTTIME_FILTERS:
        cout << Utils::defaultOffset << "FWP_E_TOO_MANY_BOOTTIME_FILTERS" << endl;
        cout << Utils::defaultOffsetDocInfo << "The maximum number of boot-time filters has been reached." << endl;
        break;
        case FWP_E_NOTIFICATION_DROPPED:
        cout << Utils::defaultOffset << "FWP_E_NOTIFICATION_DROPPED" << endl;
        cout << Utils::defaultOffsetDocInfo << "A notification could not be delivered because a message queue is at its maximum capacity." << endl;
        break;
        case FWP_E_TRAFFIC_MISMATCH:
        cout << Utils::defaultOffset << "FWP_E_TRAFFIC_MISMATCH" << endl;
        cout << Utils::defaultOffsetDocInfo << "The traffic parameters do not match those for the security association context." << endl;
        break;
        case FWP_E_INCOMPATIBLE_SA_STATE:
        cout << Utils::defaultOffset << "FWP_E_INCOMPATIBLE_SA_STATE" << endl;
        cout << Utils::defaultOffsetDocInfo << "The call is not allowed for the current security association state." << endl;
        break;
        case FWP_E_NULL_POINTER:
        cout << Utils::defaultOffset << "FWP_E_NULL_POINTER" << endl;
        cout << Utils::defaultOffsetDocInfo << "A required pointer is null." << endl;
        break;
        case FWP_E_INVALID_ENUMERATOR:
        cout << Utils::defaultOffset << "FWP_E_INVALID_ENUMERATOR" << endl;
        cout << Utils::defaultOffsetDocInfo << "An enumerator is not valid." << endl;
        break;
        case FWP_E_INVALID_FLAGS:
        cout << Utils::defaultOffset << "FWP_E_INVALID_FLAGS" << endl;
        cout << Utils::defaultOffsetDocInfo << "The flags field contains an invalid value." << endl;
        break;
        case FWP_E_INVALID_NET_MASK:
        cout << Utils::defaultOffset << "FWP_E_INVALID_NET_MASK" << endl;
        cout << Utils::defaultOffsetDocInfo << "A network mask is not valid." << endl;
        break;
        case FWP_E_INVALID_RANGE:
        cout << Utils::defaultOffset << "FWP_E_INVALID_RANGE" << endl;
        cout << Utils::defaultOffsetDocInfo << "An FWP_RANGE is not valid." << endl;
        break;
        case FWP_E_INVALID_INTERVAL:
        cout << Utils::defaultOffset << "FWP_E_INVALID_INTERVAL" << endl;
        cout << Utils::defaultOffsetDocInfo << "The time interval is not valid." << endl;
        break;
        case FWP_E_ZERO_LENGTH_ARRAY:
        cout << Utils::defaultOffset << "FWP_E_ZERO_LENGTH_ARRAY" << endl;
        cout << Utils::defaultOffsetDocInfo << "An array that must contain at least one element that is zero-length." << endl;
        break;
        case FWP_E_NULL_DISPLAY_NAME:
        cout << Utils::defaultOffset << "FWP_E_NULL_DISPLAY_NAME" << endl;
        cout << Utils::defaultOffsetDocInfo << "The displayData.name field cannot be null." << endl;
        break;
        case FWP_E_INVALID_ACTION_TYPE:
        cout << Utils::defaultOffset << "FWP_E_INVALID_ACTION_TYPE" << endl;
        cout << Utils::defaultOffsetDocInfo << "The action type is not one of the allowed action types for a filter." << endl;
        break;
        case FWP_E_INVALID_WEIGHT:
        cout << Utils::defaultOffset << "FWP_E_INVALID_WEIGHT" << endl;
        cout << Utils::defaultOffsetDocInfo << "The filter weight is not valid." << endl;
        break;
        case FWP_E_MATCH_TYPE_MISMATCH:
        cout << Utils::defaultOffset << "FWP_E_MATCH_TYPE_MISMATCH" << endl;
        cout << Utils::defaultOffsetDocInfo << "A filter condition contains a match type that is not compatible with the operands." << endl;
        break;
        case FWP_E_TYPE_MISMATCH:
        cout << Utils::defaultOffset << "FWP_E_TYPE_MISMATCH" << endl;
        cout << Utils::defaultOffsetDocInfo << "An FWP_VALUE or FWPM_CONDITION_VALUE is of the wrong type." << endl;
        break;
        case FWP_E_OUT_OF_BOUNDS:
        cout << Utils::defaultOffset << "FWP_E_OUT_OF_BOUNDS" << endl;
        cout << Utils::defaultOffsetDocInfo << "An integer value is outside the allowed range." << endl;
        break;
        case FWP_E_RESERVED:
        cout << Utils::defaultOffset << "FWP_E_RESERVED" << endl;
        cout << Utils::defaultOffsetDocInfo << "A reserved field is nonzero." << endl;
        break;
        case FWP_E_DUPLICATE_CONDITION:
        cout << Utils::defaultOffset << "FWP_E_DUPLICATE_CONDITION" << endl;
        cout << Utils::defaultOffsetDocInfo << "A filter cannot contain multiple conditions operating on a single field." << endl;
        break;
        case FWP_E_DUPLICATE_KEYMOD:
        cout << Utils::defaultOffset << "FWP_E_DUPLICATE_KEYMOD" << endl;
        cout << Utils::defaultOffsetDocInfo << "A policy cannot contain the same keying module more than once." << endl;
        break;
        case FWP_E_ACTION_INCOMPATIBLE_WITH_LAYER:
        cout << Utils::defaultOffset << "FWP_E_ACTION_INCOMPATIBLE_WITH_LAYER" << endl;
        cout << Utils::defaultOffsetDocInfo << "The action type is not compatible with the layer." << endl;
        break;
        case FWP_E_ACTION_INCOMPATIBLE_WITH_SUBLAYER:
        cout << Utils::defaultOffset << "FWP_E_ACTION_INCOMPATIBLE_WITH_SUBLAYER" << endl;
        cout << Utils::defaultOffsetDocInfo << "The action type is not compatible with the sublayer." << endl;
        break;
        case FWP_E_CONTEXT_INCOMPATIBLE_WITH_LAYER:
        cout << Utils::defaultOffset << "FWP_E_CONTEXT_INCOMPATIBLE_WITH_LAYER" << endl;
        cout << Utils::defaultOffsetDocInfo << "The raw context or the provider context is not compatible with the layer." << endl;
        break;
        case FWP_E_CONTEXT_INCOMPATIBLE_WITH_CALLOUT:
        cout << Utils::defaultOffset << "FWP_E_CONTEXT_INCOMPATIBLE_WITH_CALLOUT" << endl;
        cout << Utils::defaultOffsetDocInfo << "The raw context or the provider context is not compatible with the callout." << endl;
        break;
        case FWP_E_INCOMPATIBLE_AUTH_METHOD:
        cout << Utils::defaultOffset << "FWP_E_INCOMPATIBLE_AUTH_METHOD" << endl;
        cout << Utils::defaultOffsetDocInfo << "The authentication method is not compatible with the policy type." << endl;
        break;
        case FWP_E_INCOMPATIBLE_DH_GROUP:
        cout << Utils::defaultOffset << "FWP_E_INCOMPATIBLE_DH_GROUP" << endl;
        cout << Utils::defaultOffsetDocInfo << "The Diffie-Hellman group is not compatible with the policy type." << endl;
        break;
        case FWP_E_EM_NOT_SUPPORTED:
        cout << Utils::defaultOffset << "FWP_E_EM_NOT_SUPPORTED" << endl;
        cout << Utils::defaultOffsetDocInfo << "An Internet Key Exchange (IKE) policy cannot contain an Extended Mode policy." << endl;
        break;
        case FWP_E_NEVER_MATCH:
        cout << Utils::defaultOffset << "FWP_E_NEVER_MATCH" << endl;
        cout << Utils::defaultOffsetDocInfo << "The enumeration template or subscription will never match any objects." << endl;
        break;
        case FWP_E_PROVIDER_CONTEXT_MISMATCH:
        cout << Utils::defaultOffset << "FWP_E_PROVIDER_CONTEXT_MISMATCH" << endl;
        cout << Utils::defaultOffsetDocInfo << "The provider context is of the wrong type." << endl;
        break;
        case FWP_E_INVALID_PARAMETER:
        cout << Utils::defaultOffset << "FWP_E_INVALID_PARAMETER" << endl;
        cout << Utils::defaultOffsetDocInfo << "The parameter is incorrect." << endl;
        break;
        case FWP_E_TOO_MANY_SUBLAYERS:
        cout << Utils::defaultOffset << "FWP_E_TOO_MANY_SUBLAYERS" << endl;
        cout << Utils::defaultOffsetDocInfo << "The maximum number of sublayers has been reached." << endl;
        break;
        case FWP_E_CALLOUT_NOTIFICATION_FAILED:
        cout << Utils::defaultOffset << "FWP_E_CALLOUT_NOTIFICATION_FAILED" << endl;
        cout << Utils::defaultOffsetDocInfo << "The notification function for a callout returned an error." << endl;
        break;
        case FWP_E_INCOMPATIBLE_AUTH_CONFIG:
        cout << Utils::defaultOffset << "FWP_E_INCOMPATIBLE_AUTH_CONFIG" << endl;
        cout << Utils::defaultOffsetDocInfo << "The IPsec authentication configuration is not compatible with the authentication type." << endl;
        break;
        case FWP_E_INCOMPATIBLE_CIPHER_CONFIG:
        cout << Utils::defaultOffset << "FWP_E_INCOMPATIBLE_CIPHER_CONFIG" << endl;
        cout << Utils::defaultOffsetDocInfo << "The IPsec cipher configuration is not compatible with the cipher type." << endl;
        break;
        case ERROR_NDIS_INTERFACE_CLOSING:
        cout << Utils::defaultOffset << "ERROR_NDIS_INTERFACE_CLOSING" << endl;
        cout << Utils::defaultOffsetDocInfo << "The binding to the network interface is being closed." << endl;
        break;
        case ERROR_NDIS_BAD_VERSION:
        cout << Utils::defaultOffset << "ERROR_NDIS_BAD_VERSION" << endl;
        cout << Utils::defaultOffsetDocInfo << "An invalid version was specified." << endl;
        break;
        case ERROR_NDIS_BAD_CHARACTERISTICS:
        cout << Utils::defaultOffset << "ERROR_NDIS_BAD_CHARACTERISTICS" << endl;
        cout << Utils::defaultOffsetDocInfo << "An invalid characteristics table was used." << endl;
        break;
        case ERROR_NDIS_ADAPTER_NOT_FOUND:
        cout << Utils::defaultOffset << "ERROR_NDIS_ADAPTER_NOT_FOUND" << endl;
        cout << Utils::defaultOffsetDocInfo << "Failed to find the network interface, or the network interface is not ready." << endl;
        break;
        case ERROR_NDIS_OPEN_FAILED:
        cout << Utils::defaultOffset << "ERROR_NDIS_OPEN_FAILED" << endl;
        cout << Utils::defaultOffsetDocInfo << "Failed to open the network interface." << endl;
        break;
        case ERROR_NDIS_DEVICE_FAILED:
        cout << Utils::defaultOffset << "ERROR_NDIS_DEVICE_FAILED" << endl;
        cout << Utils::defaultOffsetDocInfo << "The network interface has encountered an internal unrecoverable failure." << endl;
        break;
        case ERROR_NDIS_MULTICAST_FULL:
        cout << Utils::defaultOffset << "ERROR_NDIS_MULTICAST_FULL" << endl;
        cout << Utils::defaultOffsetDocInfo << "The multicast list on the network interface is full." << endl;
        break;
        case ERROR_NDIS_MULTICAST_EXISTS:
        cout << Utils::defaultOffset << "ERROR_NDIS_MULTICAST_EXISTS" << endl;
        cout << Utils::defaultOffsetDocInfo << "An attempt was made to add a duplicate multicast address to the list." << endl;
        break;
        case ERROR_NDIS_MULTICAST_NOT_FOUND:
        cout << Utils::defaultOffset << "ERROR_NDIS_MULTICAST_NOT_FOUND" << endl;
        cout << Utils::defaultOffsetDocInfo << "At attempt was made to remove a multicast address that was never added." << endl;
        break;
        case ERROR_NDIS_REQUEST_ABORTED:
        cout << Utils::defaultOffset << "ERROR_NDIS_REQUEST_ABORTED" << endl;
        cout << Utils::defaultOffsetDocInfo << "The network interface aborted the request." << endl;
        break;
        case ERROR_NDIS_RESET_IN_PROGRESS:
        cout << Utils::defaultOffset << "ERROR_NDIS_RESET_IN_PROGRESS" << endl;
        cout << Utils::defaultOffsetDocInfo << "The network interface cannot process the request because it is being reset." << endl;
        break;
        case ERROR_NDIS_INVALID_PACKET:
        cout << Utils::defaultOffset << "ERROR_NDIS_INVALID_PACKET" << endl;
        cout << Utils::defaultOffsetDocInfo << "An attempt was made to send an invalid packet on a network interface." << endl;
        break;
        case ERROR_NDIS_INVALID_DEVICE_REQUEST:
        cout << Utils::defaultOffset << "ERROR_NDIS_INVALID_DEVICE_REQUEST" << endl;
        cout << Utils::defaultOffsetDocInfo << "The specified request is not a valid operation for the target device." << endl;
        break;
        case ERROR_NDIS_ADAPTER_NOT_READY:
        cout << Utils::defaultOffset << "ERROR_NDIS_ADAPTER_NOT_READY" << endl;
        cout << Utils::defaultOffsetDocInfo << "The network interface is not ready to complete this operation." << endl;
        break;
        case ERROR_NDIS_INVALID_LENGTH:
        cout << Utils::defaultOffset << "ERROR_NDIS_INVALID_LENGTH" << endl;
        cout << Utils::defaultOffsetDocInfo << "The length of the buffer submitted for this operation is not valid." << endl;
        break;
        case ERROR_NDIS_INVALID_DATA:
        cout << Utils::defaultOffset << "ERROR_NDIS_INVALID_DATA" << endl;
        cout << Utils::defaultOffsetDocInfo << "The data used for this operation is not valid." << endl;
        break;
        case ERROR_NDIS_BUFFER_TOO_SHORT:
        cout << Utils::defaultOffset << "ERROR_NDIS_BUFFER_TOO_SHORT" << endl;
        cout << Utils::defaultOffsetDocInfo << "The length of the buffer submitted for this operation is too small." << endl;
        break;
        case ERROR_NDIS_INVALID_OID:
        cout << Utils::defaultOffset << "ERROR_NDIS_INVALID_OID" << endl;
        cout << Utils::defaultOffsetDocInfo << "The network interface does not support this OID." << endl;
        break;
        case ERROR_NDIS_ADAPTER_REMOVED:
        cout << Utils::defaultOffset << "ERROR_NDIS_ADAPTER_REMOVED" << endl;
        cout << Utils::defaultOffsetDocInfo << "The network interface has been removed." << endl;
        break;
        case ERROR_NDIS_UNSUPPORTED_MEDIA:
        cout << Utils::defaultOffset << "ERROR_NDIS_UNSUPPORTED_MEDIA" << endl;
        cout << Utils::defaultOffsetDocInfo << "The network interface does not support this media type." << endl;
        break;
        case ERROR_NDIS_GROUP_ADDRESS_IN_USE:
        cout << Utils::defaultOffset << "ERROR_NDIS_GROUP_ADDRESS_IN_USE" << endl;
        cout << Utils::defaultOffsetDocInfo << "An attempt was made to remove a token ring group address that is in use by other components." << endl;
        break;
        case ERROR_NDIS_FILE_NOT_FOUND:
        cout << Utils::defaultOffset << "ERROR_NDIS_FILE_NOT_FOUND" << endl;
        cout << Utils::defaultOffsetDocInfo << "An attempt was made to map a file that cannot be found." << endl;
        break;
        case ERROR_NDIS_ERROR_READING_FILE:
        cout << Utils::defaultOffset << "ERROR_NDIS_ERROR_READING_FILE" << endl;
        cout << Utils::defaultOffsetDocInfo << "An error occurred while the NDIS tried to map the file." << endl;
        break;
        case ERROR_NDIS_ALREADY_MAPPED:
        cout << Utils::defaultOffset << "ERROR_NDIS_ALREADY_MAPPED" << endl;
        cout << Utils::defaultOffsetDocInfo << "An attempt was made to map a file that is already mapped." << endl;
        break;
        case ERROR_NDIS_RESOURCE_CONFLICT:
        cout << Utils::defaultOffset << "ERROR_NDIS_RESOURCE_CONFLICT" << endl;
        cout << Utils::defaultOffsetDocInfo << "An attempt to allocate a hardware resource failed because the resource is used by another component." << endl;
        break;
        case ERROR_NDIS_MEDIA_DISCONNECTED:
        cout << Utils::defaultOffset << "ERROR_NDIS_MEDIA_DISCONNECTED" << endl;
        cout << Utils::defaultOffsetDocInfo << "The I/O operation failed because network media is disconnected or the wireless access point is out of range." << endl;
        break;
        case ERROR_NDIS_INVALID_ADDRESS:
        cout << Utils::defaultOffset << "ERROR_NDIS_INVALID_ADDRESS" << endl;
        cout << Utils::defaultOffsetDocInfo << "The network address used in the request is invalid." << endl;
        break;
        case ERROR_NDIS_PAUSED:
        cout << Utils::defaultOffset << "ERROR_NDIS_PAUSED" << endl;
        cout << Utils::defaultOffsetDocInfo << "The offload operation on the network interface has been paused." << endl;
        break;
        case ERROR_NDIS_INTERFACE_NOT_FOUND:
        cout << Utils::defaultOffset << "ERROR_NDIS_INTERFACE_NOT_FOUND" << endl;
        cout << Utils::defaultOffsetDocInfo << "The network interface was not found." << endl;
        break;
        case ERROR_NDIS_UNSUPPORTED_REVISION:
        cout << Utils::defaultOffset << "ERROR_NDIS_UNSUPPORTED_REVISION" << endl;
        cout << Utils::defaultOffsetDocInfo << "The revision number specified in the structure is not supported." << endl;
        break;
        case ERROR_NDIS_INVALID_PORT:
        cout << Utils::defaultOffset << "ERROR_NDIS_INVALID_PORT" << endl;
        cout << Utils::defaultOffsetDocInfo << "The specified port does not exist on this network interface." << endl;
        break;
        case ERROR_NDIS_INVALID_PORT_STATE:
        cout << Utils::defaultOffset << "ERROR_NDIS_INVALID_PORT_STATE" << endl;
        cout << Utils::defaultOffsetDocInfo << "The current state of the specified port on this network interface does not support the requested operation." << endl;
        break;
        case ERROR_NDIS_NOT_SUPPORTED:
        cout << Utils::defaultOffset << "ERROR_NDIS_NOT_SUPPORTED" << endl;
        cout << Utils::defaultOffsetDocInfo << "The network interface does not support this request." << endl;
        break;
        case ERROR_NDIS_DOT11_AUTO_CONFIG_ENABLED:
        cout << Utils::defaultOffset << "ERROR_NDIS_DOT11_AUTO_CONFIG_ENABLED" << endl;
        cout << Utils::defaultOffsetDocInfo << "The wireless local area network (LAN) interface is in auto-configuration mode and does not support the requested parameter change operation." << endl;
        break;
        case ERROR_NDIS_DOT11_MEDIA_IN_USE:
        cout << Utils::defaultOffset << "ERROR_NDIS_DOT11_MEDIA_IN_USE" << endl;
        cout << Utils::defaultOffsetDocInfo << "The wireless LAN interface is busy and cannot perform the requested operation." << endl;
        break;
        case ERROR_NDIS_DOT11_POWER_STATE_INVALID:
        cout << Utils::defaultOffset << "ERROR_NDIS_DOT11_POWER_STATE_INVALID" << endl;
        cout << Utils::defaultOffsetDocInfo << "The wireless LAN interface is shutting down and does not support the requested operation." << endl;
        break;
        case TRK_E_NOT_FOUND:
        cout << Utils::defaultOffset << "TRK_E_NOT_FOUND" << endl;
        cout << Utils::defaultOffsetDocInfo << "A requested object was not found." << endl;
        break;
        case TRK_E_VOLUME_QUOTA_EXCEEDED:
        cout << Utils::defaultOffset << "TRK_E_VOLUME_QUOTA_EXCEEDED" << endl;
        cout << Utils::defaultOffsetDocInfo << "The server received a CREATE_VOLUME subrequest of a SYNC_VOLUMES request, but the ServerVolumeTable size limit for the RequestMachine has already been reached." << endl;
        break;
        case TRK_SERVER_TOO_BUSY:
        cout << Utils::defaultOffset << "TRK_SERVER_TOO_BUSY" << endl;
        cout << Utils::defaultOffsetDocInfo << "The server is busy, and the client should retry the request at a later time." << endl;
        break;
        case ERROR_AUDITING_DISABLED:
        cout << Utils::defaultOffset << "ERROR_AUDITING_DISABLED" << endl;
        cout << Utils::defaultOffsetDocInfo << "The specified event is currently not being audited." << endl;
        break;
        case ERROR_ALL_SIDS_FILTERED:
        cout << Utils::defaultOffset << "ERROR_ALL_SIDS_FILTERED" << endl;
        cout << Utils::defaultOffsetDocInfo << "The SID filtering operation removed all SIDs." << endl;
        break;
        case ERROR_BIZRULES_NOT_ENABLED:
        cout << Utils::defaultOffset << "ERROR_BIZRULES_NOT_ENABLED" << endl;
        cout << Utils::defaultOffsetDocInfo << "Business rule scripts are disabled for the calling application." << endl;
        break;
        case NS_E_NOCONNECTION:
        cout << Utils::defaultOffset << "NS_E_NOCONNECTION" << endl;
        cout << Utils::defaultOffsetDocInfo << "There is no connection established with the Windows Media server. The operation failed." << endl;
        break;
        case NS_E_CANNOTCONNECT:
        cout << Utils::defaultOffset << "NS_E_CANNOTCONNECT" << endl;
        cout << Utils::defaultOffsetDocInfo << "Unable to establish a connection to the server." << endl;
        break;
        case NS_E_CANNOTDESTROYTITLE:
        cout << Utils::defaultOffset << "NS_E_CANNOTDESTROYTITLE" << endl;
        cout << Utils::defaultOffsetDocInfo << "Unable to destroy the title." << endl;
        break;
        case NS_E_CANNOTRENAMETITLE:
        cout << Utils::defaultOffset << "NS_E_CANNOTRENAMETITLE" << endl;
        cout << Utils::defaultOffsetDocInfo << "Unable to rename the title." << endl;
        break;
        case NS_E_CANNOTOFFLINEDISK:
        cout << Utils::defaultOffset << "NS_E_CANNOTOFFLINEDISK" << endl;
        cout << Utils::defaultOffsetDocInfo << "Unable to offline disk." << endl;
        break;
        case NS_E_CANNOTONLINEDISK:
        cout << Utils::defaultOffset << "NS_E_CANNOTONLINEDISK" << endl;
        cout << Utils::defaultOffsetDocInfo << "Unable to online disk." << endl;
        break;
        case NS_E_NOREGISTEREDWALKER:
        cout << Utils::defaultOffset << "NS_E_NOREGISTEREDWALKER" << endl;
        cout << Utils::defaultOffsetDocInfo << "There is no file parser registered for this type of file." << endl;
        break;
        case NS_E_NOFUNNEL:
        cout << Utils::defaultOffset << "NS_E_NOFUNNEL" << endl;
        cout << Utils::defaultOffsetDocInfo << "There is no data connection established." << endl;
        break;
        case NS_E_NO_LOCALPLAY:
        cout << Utils::defaultOffset << "NS_E_NO_LOCALPLAY" << endl;
        cout << Utils::defaultOffsetDocInfo << "Failed to load the local play DLL." << endl;
        break;
        case NS_E_NETWORK_BUSY:
        cout << Utils::defaultOffset << "NS_E_NETWORK_BUSY" << endl;
        cout << Utils::defaultOffsetDocInfo << "The network is busy." << endl;
        break;
        case NS_E_TOO_MANY_SESS:
        cout << Utils::defaultOffset << "NS_E_TOO_MANY_SESS" << endl;
        cout << Utils::defaultOffsetDocInfo << "The server session limit was exceeded." << endl;
        break;
        case NS_E_ALREADY_CONNECTED:
        cout << Utils::defaultOffset << "NS_E_ALREADY_CONNECTED" << endl;
        cout << Utils::defaultOffsetDocInfo << "The network connection already exists." << endl;
        break;
        case NS_E_INVALID_INDEX:
        cout << Utils::defaultOffset << "NS_E_INVALID_INDEX" << endl;
        cout << Utils::defaultOffsetDocInfo << "Index %1 is invalid." << endl;
        break;
        case NS_E_PROTOCOL_MISMATCH:
        cout << Utils::defaultOffset << "NS_E_PROTOCOL_MISMATCH" << endl;
        cout << Utils::defaultOffsetDocInfo << "There is no protocol or protocol version supported by both the client and the server." << endl;
        break;
        case NS_E_TIMEOUT:
        cout << Utils::defaultOffset << "NS_E_TIMEOUT" << endl;
        cout << Utils::defaultOffsetDocInfo << "The server, a computer set up to offer multimedia content to other computers, could not handle your request for multimedia content in a timely manner. Please try again later." << endl;
        break;
        case NS_E_NET_WRITE:
        cout << Utils::defaultOffset << "NS_E_NET_WRITE" << endl;
        cout << Utils::defaultOffsetDocInfo << "Error writing to the network." << endl;
        break;
        case NS_E_NET_READ:
        cout << Utils::defaultOffset << "NS_E_NET_READ" << endl;
        cout << Utils::defaultOffsetDocInfo << "Error reading from the network." << endl;
        break;
        case NS_E_DISK_WRITE:
        cout << Utils::defaultOffset << "NS_E_DISK_WRITE" << endl;
        cout << Utils::defaultOffsetDocInfo << "Error writing to a disk." << endl;
        break;
        case NS_E_DISK_READ:
        cout << Utils::defaultOffset << "NS_E_DISK_READ" << endl;
        cout << Utils::defaultOffsetDocInfo << "Error reading from a disk." << endl;
        break;
        case NS_E_FILE_WRITE:
        cout << Utils::defaultOffset << "NS_E_FILE_WRITE" << endl;
        cout << Utils::defaultOffsetDocInfo << "Error writing to a file." << endl;
        break;
        case NS_E_FILE_READ:
        cout << Utils::defaultOffset << "NS_E_FILE_READ" << endl;
        cout << Utils::defaultOffsetDocInfo << "Error reading from a file." << endl;
        break;
        case NS_E_FILE_NOT_FOUND:
        cout << Utils::defaultOffset << "NS_E_FILE_NOT_FOUND" << endl;
        cout << Utils::defaultOffsetDocInfo << "The system cannot find the file specified." << endl;
        break;
        case NS_E_FILE_EXISTS:
        cout << Utils::defaultOffset << "NS_E_FILE_EXISTS" << endl;
        cout << Utils::defaultOffsetDocInfo << "The file already exists." << endl;
        break;
        case NS_E_INVALID_NAME:
        cout << Utils::defaultOffset << "NS_E_INVALID_NAME" << endl;
        cout << Utils::defaultOffsetDocInfo << "The file name, directory name, or volume label syntax is incorrect." << endl;
        break;
        case NS_E_FILE_OPEN_FAILED:
        cout << Utils::defaultOffset << "NS_E_FILE_OPEN_FAILED" << endl;
        cout << Utils::defaultOffsetDocInfo << "Failed to open a file." << endl;
        break;
        case NS_E_FILE_ALLOCATION_FAILED:
        cout << Utils::defaultOffset << "NS_E_FILE_ALLOCATION_FAILED" << endl;
        cout << Utils::defaultOffsetDocInfo << "Unable to allocate a file." << endl;
        break;
        case NS_E_FILE_INIT_FAILED:
        cout << Utils::defaultOffset << "NS_E_FILE_INIT_FAILED" << endl;
        cout << Utils::defaultOffsetDocInfo << "Unable to initialize a file." << endl;
        break;
        case NS_E_FILE_PLAY_FAILED:
        cout << Utils::defaultOffset << "NS_E_FILE_PLAY_FAILED" << endl;
        cout << Utils::defaultOffsetDocInfo << "Unable to play a file." << endl;
        break;
        case NS_E_SET_DISK_UID_FAILED:
        cout << Utils::defaultOffset << "NS_E_SET_DISK_UID_FAILED" << endl;
        cout << Utils::defaultOffsetDocInfo << "Could not set the disk UID." << endl;
        break;
        case NS_E_INDUCED:
        cout << Utils::defaultOffset << "NS_E_INDUCED" << endl;
        cout << Utils::defaultOffsetDocInfo << "An error was induced for testing purposes." << endl;
        break;
        case NS_E_CCLINK_DOWN:
        cout << Utils::defaultOffset << "NS_E_CCLINK_DOWN" << endl;
        cout << Utils::defaultOffsetDocInfo << "Two Content Servers failed to communicate." << endl;
        break;
        case NS_E_INTERNAL:
        cout << Utils::defaultOffset << "NS_E_INTERNAL" << endl;
        cout << Utils::defaultOffsetDocInfo << "An unknown error occurred." << endl;
        break;
        case NS_E_BUSY:
        cout << Utils::defaultOffset << "NS_E_BUSY" << endl;
        cout << Utils::defaultOffsetDocInfo << "The requested resource is in use." << endl;
        break;
        case NS_E_UNRECOGNIZED_STREAM_TYPE:
        cout << Utils::defaultOffset << "NS_E_UNRECOGNIZED_STREAM_TYPE" << endl;
        cout << Utils::defaultOffsetDocInfo << "The specified protocol is not recognized. Be sure that the file name and syntax, such as slashes, are correct for the protocol." << endl;
        break;
        case NS_E_NETWORK_SERVICE_FAILURE:
        cout << Utils::defaultOffset << "NS_E_NETWORK_SERVICE_FAILURE" << endl;
        cout << Utils::defaultOffsetDocInfo << "The network service provider failed." << endl;
        break;
        case NS_E_NETWORK_RESOURCE_FAILURE:
        cout << Utils::defaultOffset << "NS_E_NETWORK_RESOURCE_FAILURE" << endl;
        cout << Utils::defaultOffsetDocInfo << "An attempt to acquire a network resource failed." << endl;
        break;
        case NS_E_CONNECTION_FAILURE:
        cout << Utils::defaultOffset << "NS_E_CONNECTION_FAILURE" << endl;
        cout << Utils::defaultOffsetDocInfo << "The network connection has failed." << endl;
        break;
        case NS_E_SHUTDOWN:
        cout << Utils::defaultOffset << "NS_E_SHUTDOWN" << endl;
        cout << Utils::defaultOffsetDocInfo << "The session is being terminated locally." << endl;
        break;
        case NS_E_INVALID_REQUEST:
        cout << Utils::defaultOffset << "NS_E_INVALID_REQUEST" << endl;
        cout << Utils::defaultOffsetDocInfo << "The request is invalid in the current state." << endl;
        break;
        case NS_E_INSUFFICIENT_BANDWIDTH:
        cout << Utils::defaultOffset << "NS_E_INSUFFICIENT_BANDWIDTH" << endl;
        cout << Utils::defaultOffsetDocInfo << "There is insufficient bandwidth available to fulfill the request." << endl;
        break;
        case NS_E_NOT_REBUILDING:
        cout << Utils::defaultOffset << "NS_E_NOT_REBUILDING" << endl;
        cout << Utils::defaultOffsetDocInfo << "The disk is not rebuilding." << endl;
        break;
        case NS_E_LATE_OPERATION:
        cout << Utils::defaultOffset << "NS_E_LATE_OPERATION" << endl;
        cout << Utils::defaultOffsetDocInfo << "An operation requested for a particular time could not be carried out on schedule." << endl;
        break;
        case NS_E_INVALID_DATA:
        cout << Utils::defaultOffset << "NS_E_INVALID_DATA" << endl;
        cout << Utils::defaultOffsetDocInfo << "Invalid or corrupt data was encountered." << endl;
        break;
        case NS_E_FILE_BANDWIDTH_LIMIT:
        cout << Utils::defaultOffset << "NS_E_FILE_BANDWIDTH_LIMIT" << endl;
        cout << Utils::defaultOffsetDocInfo << "The bandwidth required to stream a file is higher than the maximum file bandwidth allowed on the server." << endl;
        break;
        case NS_E_OPEN_FILE_LIMIT:
        cout << Utils::defaultOffset << "NS_E_OPEN_FILE_LIMIT" << endl;
        cout << Utils::defaultOffsetDocInfo << "The client cannot have any more files open simultaneously." << endl;
        break;
        case NS_E_BAD_CONTROL_DATA:
        cout << Utils::defaultOffset << "NS_E_BAD_CONTROL_DATA" << endl;
        cout << Utils::defaultOffsetDocInfo << "The server received invalid data from the client on the control connection." << endl;
        break;
        case NS_E_NO_STREAM:
        cout << Utils::defaultOffset << "NS_E_NO_STREAM" << endl;
        cout << Utils::defaultOffsetDocInfo << "There is no stream available." << endl;
        break;
        case NS_E_STREAM_END:
        cout << Utils::defaultOffset << "NS_E_STREAM_END" << endl;
        cout << Utils::defaultOffsetDocInfo << "There is no more data in the stream." << endl;
        break;
        case NS_E_SERVER_NOT_FOUND:
        cout << Utils::defaultOffset << "NS_E_SERVER_NOT_FOUND" << endl;
        cout << Utils::defaultOffsetDocInfo << "The specified server could not be found." << endl;
        break;
        case NS_E_DUPLICATE_NAME:
        cout << Utils::defaultOffset << "NS_E_DUPLICATE_NAME" << endl;
        cout << Utils::defaultOffsetDocInfo << "The specified name is already in use." << endl;
        break;
        case NS_E_DUPLICATE_ADDRESS:
        cout << Utils::defaultOffset << "NS_E_DUPLICATE_ADDRESS" << endl;
        cout << Utils::defaultOffsetDocInfo << "The specified address is already in use." << endl;
        break;
        case NS_E_BAD_MULTICAST_ADDRESS:
        cout << Utils::defaultOffset << "NS_E_BAD_MULTICAST_ADDRESS" << endl;
        cout << Utils::defaultOffsetDocInfo << "The specified address is not a valid multicast address." << endl;
        break;
        case NS_E_BAD_ADAPTER_ADDRESS:
        cout << Utils::defaultOffset << "NS_E_BAD_ADAPTER_ADDRESS" << endl;
        cout << Utils::defaultOffsetDocInfo << "The specified adapter address is invalid." << endl;
        break;
        case NS_E_BAD_DELIVERY_MODE:
        cout << Utils::defaultOffset << "NS_E_BAD_DELIVERY_MODE" << endl;
        cout << Utils::defaultOffsetDocInfo << "The specified delivery mode is invalid." << endl;
        break;
        case NS_E_INVALID_CHANNEL:
        cout << Utils::defaultOffset << "NS_E_INVALID_CHANNEL" << endl;
        cout << Utils::defaultOffsetDocInfo << "The specified station does not exist." << endl;
        break;
        case NS_E_INVALID_STREAM:
        cout << Utils::defaultOffset << "NS_E_INVALID_STREAM" << endl;
        cout << Utils::defaultOffsetDocInfo << "The specified stream does not exist." << endl;
        break;
        case NS_E_INVALID_ARCHIVE:
        cout << Utils::defaultOffset << "NS_E_INVALID_ARCHIVE" << endl;
        cout << Utils::defaultOffsetDocInfo << "The specified archive could not be opened." << endl;
        break;
        case NS_E_NOTITLES:
        cout << Utils::defaultOffset << "NS_E_NOTITLES" << endl;
        cout << Utils::defaultOffsetDocInfo << "The system cannot find any titles on the server." << endl;
        break;
        case NS_E_INVALID_CLIENT:
        cout << Utils::defaultOffset << "NS_E_INVALID_CLIENT" << endl;
        cout << Utils::defaultOffsetDocInfo << "The system cannot find the client specified." << endl;
        break;
        case NS_E_INVALID_BLACKHOLE_ADDRESS:
        cout << Utils::defaultOffset << "NS_E_INVALID_BLACKHOLE_ADDRESS" << endl;
        cout << Utils::defaultOffsetDocInfo << "The Blackhole Address is not initialized." << endl;
        break;
        case NS_E_INCOMPATIBLE_FORMAT:
        cout << Utils::defaultOffset << "NS_E_INCOMPATIBLE_FORMAT" << endl;
        cout << Utils::defaultOffsetDocInfo << "The station does not support the stream format." << endl;
        break;
        case NS_E_INVALID_KEY:
        cout << Utils::defaultOffset << "NS_E_INVALID_KEY" << endl;
        cout << Utils::defaultOffsetDocInfo << "The specified key is not valid." << endl;
        break;
        case NS_E_INVALID_PORT:
        cout << Utils::defaultOffset << "NS_E_INVALID_PORT" << endl;
        cout << Utils::defaultOffsetDocInfo << "The specified port is not valid." << endl;
        break;
        case NS_E_INVALID_TTL:
        cout << Utils::defaultOffset << "NS_E_INVALID_TTL" << endl;
        cout << Utils::defaultOffsetDocInfo << "The specified TTL is not valid." << endl;
        break;
        case NS_E_STRIDE_REFUSED:
        cout << Utils::defaultOffset << "NS_E_STRIDE_REFUSED" << endl;
        cout << Utils::defaultOffsetDocInfo << "The request to fast forward or rewind could not be fulfilled." << endl;
        break;
        case NS_E_MMSAUTOSERVER_CANTFINDWALKER:
        cout << Utils::defaultOffset << "NS_E_MMSAUTOSERVER_CANTFINDWALKER" << endl;
        cout << Utils::defaultOffsetDocInfo << "Unable to load the appropriate file parser." << endl;
        break;
        case NS_E_MAX_BITRATE:
        cout << Utils::defaultOffset << "NS_E_MAX_BITRATE" << endl;
        cout << Utils::defaultOffsetDocInfo << "Cannot exceed the maximum bandwidth limit." << endl;
        break;
        case NS_E_LOGFILEPERIOD:
        cout << Utils::defaultOffset << "NS_E_LOGFILEPERIOD" << endl;
        cout << Utils::defaultOffsetDocInfo << "Invalid value for LogFilePeriod." << endl;
        break;
        case NS_E_MAX_CLIENTS:
        cout << Utils::defaultOffset << "NS_E_MAX_CLIENTS" << endl;
        cout << Utils::defaultOffsetDocInfo << "Cannot exceed the maximum client limit." << endl;
        break;
        case NS_E_LOG_FILE_SIZE:
        cout << Utils::defaultOffset << "NS_E_LOG_FILE_SIZE" << endl;
        cout << Utils::defaultOffsetDocInfo << "The maximum log file size has been reached." << endl;
        break;
        case NS_E_MAX_FILERATE:
        cout << Utils::defaultOffset << "NS_E_MAX_FILERATE" << endl;
        cout << Utils::defaultOffsetDocInfo << "Cannot exceed the maximum file rate." << endl;
        break;
        case NS_E_WALKER_UNKNOWN:
        cout << Utils::defaultOffset << "NS_E_WALKER_UNKNOWN" << endl;
        cout << Utils::defaultOffsetDocInfo << "Unknown file type." << endl;
        break;
        case NS_E_WALKER_SERVER:
        cout << Utils::defaultOffset << "NS_E_WALKER_SERVER" << endl;
        cout << Utils::defaultOffsetDocInfo << "The specified file, %1, cannot be loaded onto the specified server, %2." << endl;
        break;
        case NS_E_WALKER_USAGE:
        cout << Utils::defaultOffset << "NS_E_WALKER_USAGE" << endl;
        cout << Utils::defaultOffsetDocInfo << "There was a usage error with file parser." << endl;
        break;
        case NS_E_TIGER_FAIL:
        cout << Utils::defaultOffset << "NS_E_TIGER_FAIL" << endl;
        cout << Utils::defaultOffsetDocInfo << "The Title Server %1 has failed." << endl;
        break;
        case NS_E_CUB_FAIL:
        cout << Utils::defaultOffset << "NS_E_CUB_FAIL" << endl;
        cout << Utils::defaultOffsetDocInfo << "Content Server %1 (%2) has failed." << endl;
        break;
        case NS_E_DISK_FAIL:
        cout << Utils::defaultOffset << "NS_E_DISK_FAIL" << endl;
        cout << Utils::defaultOffsetDocInfo << "Disk %1 ( %2 ) on Content Server %3, has failed." << endl;
        break;
        case NS_E_MAX_FUNNELS_ALERT:
        cout << Utils::defaultOffset << "NS_E_MAX_FUNNELS_ALERT" << endl;
        cout << Utils::defaultOffsetDocInfo << "The NetShow data stream limit of %1 streams was reached." << endl;
        break;
        case NS_E_ALLOCATE_FILE_FAIL:
        cout << Utils::defaultOffset << "NS_E_ALLOCATE_FILE_FAIL" << endl;
        cout << Utils::defaultOffsetDocInfo << "The NetShow Video Server was unable to allocate a %1 block file named %2." << endl;
        break;
        case NS_E_PAGING_ERROR:
        cout << Utils::defaultOffset << "NS_E_PAGING_ERROR" << endl;
        cout << Utils::defaultOffsetDocInfo << "A Content Server was unable to page a block." << endl;
        break;
        case NS_E_BAD_BLOCK0_VERSION:
        cout << Utils::defaultOffset << "NS_E_BAD_BLOCK0_VERSION" << endl;
        cout << Utils::defaultOffsetDocInfo << "Disk %1 has unrecognized control block version %2." << endl;
        break;
        case NS_E_BAD_DISK_UID:
        cout << Utils::defaultOffset << "NS_E_BAD_DISK_UID" << endl;
        cout << Utils::defaultOffsetDocInfo << "Disk %1 has incorrect uid %2." << endl;
        break;
        case NS_E_BAD_FSMAJOR_VERSION:
        cout << Utils::defaultOffset << "NS_E_BAD_FSMAJOR_VERSION" << endl;
        cout << Utils::defaultOffsetDocInfo << "Disk %1 has unsupported file system major version %2." << endl;
        break;
        case NS_E_BAD_STAMPNUMBER:
        cout << Utils::defaultOffset << "NS_E_BAD_STAMPNUMBER" << endl;
        cout << Utils::defaultOffsetDocInfo << "Disk %1 has bad stamp number in control block." << endl;
        break;
        case NS_E_PARTIALLY_REBUILT_DISK:
        cout << Utils::defaultOffset << "NS_E_PARTIALLY_REBUILT_DISK" << endl;
        cout << Utils::defaultOffsetDocInfo << "Disk %1 is partially reconstructed." << endl;
        break;
        case NS_E_ENACTPLAN_GIVEUP:
        cout << Utils::defaultOffset << "NS_E_ENACTPLAN_GIVEUP" << endl;
        cout << Utils::defaultOffsetDocInfo << "EnactPlan gives up." << endl;
        break;
        case MCMADM_E_REGKEY_NOT_FOUND:
        cout << Utils::defaultOffset << "MCMADM_E_REGKEY_NOT_FOUND" << endl;
        cout << Utils::defaultOffsetDocInfo << "The key was not found in the registry." << endl;
        break;
        case NS_E_NO_FORMATS:
        cout << Utils::defaultOffset << "NS_E_NO_FORMATS" << endl;
        cout << Utils::defaultOffsetDocInfo << "The publishing point cannot be started because the server does not have the appropriate stream formats. Use the Multicast Announcement Wizard to create a new announcement for this publishing point." << endl;
        break;
        case NS_E_NO_REFERENCES:
        cout << Utils::defaultOffset << "NS_E_NO_REFERENCES" << endl;
        cout << Utils::defaultOffsetDocInfo << "No reference URLs were found in an ASX file." << endl;
        break;
        case NS_E_WAVE_OPEN:
        cout << Utils::defaultOffset << "NS_E_WAVE_OPEN" << endl;
        cout << Utils::defaultOffsetDocInfo << "Error opening wave device, the device might be in use." << endl;
        break;
        case NS_E_CANNOTCONNECTEVENTS:
        cout << Utils::defaultOffset << "NS_E_CANNOTCONNECTEVENTS" << endl;
        cout << Utils::defaultOffsetDocInfo << "Unable to establish a connection to the NetShow event monitor service." << endl;
        break;
        case NS_E_NO_DEVICE:
        cout << Utils::defaultOffset << "NS_E_NO_DEVICE" << endl;
        cout << Utils::defaultOffsetDocInfo << "No device driver is present on the system." << endl;
        break;
        case NS_E_NO_SPECIFIED_DEVICE:
        cout << Utils::defaultOffset << "NS_E_NO_SPECIFIED_DEVICE" << endl;
        cout << Utils::defaultOffsetDocInfo << "No specified device driver is present." << endl;
        break;
        case NS_E_MONITOR_GIVEUP:
        cout << Utils::defaultOffset << "NS_E_MONITOR_GIVEUP" << endl;
        cout << Utils::defaultOffsetDocInfo << "Netshow Events Monitor is not operational and has been disconnected." << endl;
        break;
        case NS_E_REMIRRORED_DISK:
        cout << Utils::defaultOffset << "NS_E_REMIRRORED_DISK" << endl;
        cout << Utils::defaultOffsetDocInfo << "Disk %1 is remirrored." << endl;
        break;
        case NS_E_INSUFFICIENT_DATA:
        cout << Utils::defaultOffset << "NS_E_INSUFFICIENT_DATA" << endl;
        cout << Utils::defaultOffsetDocInfo << "Insufficient data found." << endl;
        break;
        case NS_E_ASSERT:
        cout << Utils::defaultOffset << "NS_E_ASSERT" << endl;
        cout << Utils::defaultOffsetDocInfo << "1 failed in file %2 line %3." << endl;
        break;
        case NS_E_BAD_ADAPTER_NAME:
        cout << Utils::defaultOffset << "NS_E_BAD_ADAPTER_NAME" << endl;
        cout << Utils::defaultOffsetDocInfo << "The specified adapter name is invalid." << endl;
        break;
        case NS_E_NOT_LICENSED:
        cout << Utils::defaultOffset << "NS_E_NOT_LICENSED" << endl;
        cout << Utils::defaultOffsetDocInfo << "The application is not licensed for this feature." << endl;
        break;
        case NS_E_NO_SERVER_CONTACT:
        cout << Utils::defaultOffset << "NS_E_NO_SERVER_CONTACT" << endl;
        cout << Utils::defaultOffsetDocInfo << "Unable to contact the server." << endl;
        break;
        case NS_E_TOO_MANY_TITLES:
        cout << Utils::defaultOffset << "NS_E_TOO_MANY_TITLES" << endl;
        cout << Utils::defaultOffsetDocInfo << "Maximum number of titles exceeded." << endl;
        break;
        case NS_E_TITLE_SIZE_EXCEEDED:
        cout << Utils::defaultOffset << "NS_E_TITLE_SIZE_EXCEEDED" << endl;
        cout << Utils::defaultOffsetDocInfo << "Maximum size of a title exceeded." << endl;
        break;
        case NS_E_UDP_DISABLED:
        cout << Utils::defaultOffset << "NS_E_UDP_DISABLED" << endl;
        cout << Utils::defaultOffsetDocInfo << "UDP protocol not enabled. Not trying %1!ls!." << endl;
        break;
        case NS_E_TCP_DISABLED:
        cout << Utils::defaultOffset << "NS_E_TCP_DISABLED" << endl;
        cout << Utils::defaultOffsetDocInfo << "TCP protocol not enabled. Not trying %1!ls!." << endl;
        break;
        case NS_E_HTTP_DISABLED:
        cout << Utils::defaultOffset << "NS_E_HTTP_DISABLED" << endl;
        cout << Utils::defaultOffsetDocInfo << "HTTP protocol not enabled. Not trying %1!ls!." << endl;
        break;
        case NS_E_LICENSE_EXPIRED:
        cout << Utils::defaultOffset << "NS_E_LICENSE_EXPIRED" << endl;
        cout << Utils::defaultOffsetDocInfo << "The product license has expired." << endl;
        break;
        case NS_E_TITLE_BITRATE:
        cout << Utils::defaultOffset << "NS_E_TITLE_BITRATE" << endl;
        cout << Utils::defaultOffsetDocInfo << "Source file exceeds the per title maximum bitrate. See NetShow Theater documentation for more information." << endl;
        break;
        case NS_E_EMPTY_PROGRAM_NAME:
        cout << Utils::defaultOffset << "NS_E_EMPTY_PROGRAM_NAME" << endl;
        cout << Utils::defaultOffsetDocInfo << "The program name cannot be empty." << endl;
        break;
        case NS_E_MISSING_CHANNEL:
        cout << Utils::defaultOffset << "NS_E_MISSING_CHANNEL" << endl;
        cout << Utils::defaultOffsetDocInfo << "Station %1 does not exist." << endl;
        break;
        case NS_E_NO_CHANNELS:
        cout << Utils::defaultOffset << "NS_E_NO_CHANNELS" << endl;
        cout << Utils::defaultOffsetDocInfo << "You need to define at least one station before this operation can complete." << endl;
        break;
        case NS_E_INVALID_INDEX2:
        cout << Utils::defaultOffset << "NS_E_INVALID_INDEX2" << endl;
        cout << Utils::defaultOffsetDocInfo << "The index specified is invalid." << endl;
        break;
        case NS_E_CUB_FAIL_LINK:
        cout << Utils::defaultOffset << "NS_E_CUB_FAIL_LINK" << endl;
        cout << Utils::defaultOffsetDocInfo << "Content Server %1 (%2) has failed its link to Content Server %3." << endl;
        break;
        case NS_E_BAD_CUB_UID:
        cout << Utils::defaultOffset << "NS_E_BAD_CUB_UID" << endl;
        cout << Utils::defaultOffsetDocInfo << "Content Server %1 (%2) has incorrect uid %3." << endl;
        break;
        case NS_E_GLITCH_MODE:
        cout << Utils::defaultOffset << "NS_E_GLITCH_MODE" << endl;
        cout << Utils::defaultOffsetDocInfo << "Server unreliable because multiple components failed." << endl;
        break;
        case NS_E_NO_MEDIA_PROTOCOL:
        cout << Utils::defaultOffset << "NS_E_NO_MEDIA_PROTOCOL" << endl;
        cout << Utils::defaultOffsetDocInfo << "Content Server %1 (%2) is unable to communicate with the Media System Network Protocol." << endl;
        break;
        case NS_E_NOTHING_TO_DO:
        cout << Utils::defaultOffset << "NS_E_NOTHING_TO_DO" << endl;
        cout << Utils::defaultOffsetDocInfo << "Nothing to do." << endl;
        break;
        case NS_E_NO_MULTICAST:
        cout << Utils::defaultOffset << "NS_E_NO_MULTICAST" << endl;
        cout << Utils::defaultOffsetDocInfo << "Not receiving data from the server." << endl;
        break;
        case NS_E_INVALID_INPUT_FORMAT:
        cout << Utils::defaultOffset << "NS_E_INVALID_INPUT_FORMAT" << endl;
        cout << Utils::defaultOffsetDocInfo << "The input media format is invalid." << endl;
        break;
        case NS_E_MSAUDIO_NOT_INSTALLED:
        cout << Utils::defaultOffset << "NS_E_MSAUDIO_NOT_INSTALLED" << endl;
        cout << Utils::defaultOffsetDocInfo << "The MSAudio codec is not installed on this system." << endl;
        break;
        case NS_E_UNEXPECTED_MSAUDIO_ERROR:
        cout << Utils::defaultOffset << "NS_E_UNEXPECTED_MSAUDIO_ERROR" << endl;
        cout << Utils::defaultOffsetDocInfo << "An unexpected error occurred with the MSAudio codec." << endl;
        break;
        case NS_E_INVALID_OUTPUT_FORMAT:
        cout << Utils::defaultOffset << "NS_E_INVALID_OUTPUT_FORMAT" << endl;
        cout << Utils::defaultOffsetDocInfo << "The output media format is invalid." << endl;
        break;
        case NS_E_NOT_CONFIGURED:
        cout << Utils::defaultOffset << "NS_E_NOT_CONFIGURED" << endl;
        cout << Utils::defaultOffsetDocInfo << "The object must be fully configured before audio samples can be processed." << endl;
        break;
        case NS_E_PROTECTED_CONTENT:
        cout << Utils::defaultOffset << "NS_E_PROTECTED_CONTENT" << endl;
        cout << Utils::defaultOffsetDocInfo << "You need a license to perform the requested operation on this media file." << endl;
        break;
        case NS_E_LICENSE_REQUIRED:
        cout << Utils::defaultOffset << "NS_E_LICENSE_REQUIRED" << endl;
        cout << Utils::defaultOffsetDocInfo << "You need a license to perform the requested operation on this media file." << endl;
        break;
        case NS_E_TAMPERED_CONTENT:
        cout << Utils::defaultOffset << "NS_E_TAMPERED_CONTENT" << endl;
        cout << Utils::defaultOffsetDocInfo << "This media file is corrupted or invalid. Contact the content provider for a new file." << endl;
        break;
        case NS_E_LICENSE_OUTOFDATE:
        cout << Utils::defaultOffset << "NS_E_LICENSE_OUTOFDATE" << endl;
        cout << Utils::defaultOffsetDocInfo << "The license for this media file has expired. Get a new license or contact the content provider for further assistance." << endl;
        break;
        case NS_E_LICENSE_INCORRECT_RIGHTS:
        cout << Utils::defaultOffset << "NS_E_LICENSE_INCORRECT_RIGHTS" << endl;
        cout << Utils::defaultOffsetDocInfo << "You are not allowed to open this file. Contact the content provider for further assistance." << endl;
        break;
        case NS_E_AUDIO_CODEC_NOT_INSTALLED:
        cout << Utils::defaultOffset << "NS_E_AUDIO_CODEC_NOT_INSTALLED" << endl;
        cout << Utils::defaultOffsetDocInfo << "The requested audio codec is not installed on this system." << endl;
        break;
        case NS_E_AUDIO_CODEC_ERROR:
        cout << Utils::defaultOffset << "NS_E_AUDIO_CODEC_ERROR" << endl;
        cout << Utils::defaultOffsetDocInfo << "An unexpected error occurred with the audio codec." << endl;
        break;
        case NS_E_VIDEO_CODEC_NOT_INSTALLED:
        cout << Utils::defaultOffset << "NS_E_VIDEO_CODEC_NOT_INSTALLED" << endl;
        cout << Utils::defaultOffsetDocInfo << "The requested video codec is not installed on this system." << endl;
        break;
        case NS_E_VIDEO_CODEC_ERROR:
        cout << Utils::defaultOffset << "NS_E_VIDEO_CODEC_ERROR" << endl;
        cout << Utils::defaultOffsetDocInfo << "An unexpected error occurred with the video codec." << endl;
        break;
        case NS_E_INVALIDPROFILE:
        cout << Utils::defaultOffset << "NS_E_INVALIDPROFILE" << endl;
        cout << Utils::defaultOffsetDocInfo << "The Profile is invalid." << endl;
        break;
        case NS_E_INCOMPATIBLE_VERSION:
        cout << Utils::defaultOffset << "NS_E_INCOMPATIBLE_VERSION" << endl;
        cout << Utils::defaultOffsetDocInfo << "A new version of the SDK is needed to play the requested content." << endl;
        break;
        case NS_E_OFFLINE_MODE:
        cout << Utils::defaultOffset << "NS_E_OFFLINE_MODE" << endl;
        cout << Utils::defaultOffsetDocInfo << "The requested URL is not available in offline mode." << endl;
        break;
        case NS_E_NOT_CONNECTED:
        cout << Utils::defaultOffset << "NS_E_NOT_CONNECTED" << endl;
        cout << Utils::defaultOffsetDocInfo << "The requested URL cannot be accessed because there is no network connection." << endl;
        break;
        case NS_E_TOO_MUCH_DATA:
        cout << Utils::defaultOffset << "NS_E_TOO_MUCH_DATA" << endl;
        cout << Utils::defaultOffsetDocInfo << "The encoding process was unable to keep up with the amount of supplied data." << endl;
        break;
        case NS_E_UNSUPPORTED_PROPERTY:
        cout << Utils::defaultOffset << "NS_E_UNSUPPORTED_PROPERTY" << endl;
        cout << Utils::defaultOffsetDocInfo << "The given property is not supported." << endl;
        break;
        case NS_E_8BIT_WAVE_UNSUPPORTED:
        cout << Utils::defaultOffset << "NS_E_8BIT_WAVE_UNSUPPORTED" << endl;
        cout << Utils::defaultOffsetDocInfo << "Windows Media Player cannot copy the files to the CD because they are 8-bit. Convert the files to 16-bit, 44-kHz stereo files by using Sound Recorder or another audio-processing program, and then try again." << endl;
        break;
        case NS_E_NO_MORE_SAMPLES:
        cout << Utils::defaultOffset << "NS_E_NO_MORE_SAMPLES" << endl;
        cout << Utils::defaultOffsetDocInfo << "There are no more samples in the current range." << endl;
        break;
        case NS_E_INVALID_SAMPLING_RATE:
        cout << Utils::defaultOffset << "NS_E_INVALID_SAMPLING_RATE" << endl;
        cout << Utils::defaultOffsetDocInfo << "The given sampling rate is invalid." << endl;
        break;
        case NS_E_MAX_PACKET_SIZE_TOO_SMALL:
        cout << Utils::defaultOffset << "NS_E_MAX_PACKET_SIZE_TOO_SMALL" << endl;
        cout << Utils::defaultOffsetDocInfo << "The given maximum packet size is too small to accommodate this profile.)" << endl;
        break;
        case NS_E_LATE_PACKET:
        cout << Utils::defaultOffset << "NS_E_LATE_PACKET" << endl;
        cout << Utils::defaultOffsetDocInfo << "The packet arrived too late to be of use." << endl;
        break;
        case NS_E_DUPLICATE_PACKET:
        cout << Utils::defaultOffset << "NS_E_DUPLICATE_PACKET" << endl;
        cout << Utils::defaultOffsetDocInfo << "The packet is a duplicate of one received before." << endl;
        break;
        case NS_E_SDK_BUFFERTOOSMALL:
        cout << Utils::defaultOffset << "NS_E_SDK_BUFFERTOOSMALL" << endl;
        cout << Utils::defaultOffsetDocInfo << "Supplied buffer is too small." << endl;
        break;
        case NS_E_INVALID_NUM_PASSES:
        cout << Utils::defaultOffset << "NS_E_INVALID_NUM_PASSES" << endl;
        cout << Utils::defaultOffsetDocInfo << "The wrong number of preprocessing passes was used for the stream's output type." << endl;
        break;
        case NS_E_ATTRIBUTE_READ_ONLY:
        cout << Utils::defaultOffset << "NS_E_ATTRIBUTE_READ_ONLY" << endl;
        cout << Utils::defaultOffsetDocInfo << "An attempt was made to add, modify, or delete a read only attribute." << endl;
        break;
        case NS_E_ATTRIBUTE_NOT_ALLOWED:
        cout << Utils::defaultOffset << "NS_E_ATTRIBUTE_NOT_ALLOWED" << endl;
        cout << Utils::defaultOffsetDocInfo << "An attempt was made to add attribute that is not allowed for the given media type." << endl;
        break;
        case NS_E_INVALID_EDL:
        cout << Utils::defaultOffset << "NS_E_INVALID_EDL" << endl;
        cout << Utils::defaultOffsetDocInfo << "The EDL provided is invalid." << endl;
        break;
        case NS_E_DATA_UNIT_EXTENSION_TOO_LARGE:
        cout << Utils::defaultOffset << "NS_E_DATA_UNIT_EXTENSION_TOO_LARGE" << endl;
        cout << Utils::defaultOffsetDocInfo << "The Data Unit Extension data was too large to be used." << endl;
        break;
        case NS_E_CODEC_DMO_ERROR:
        cout << Utils::defaultOffset << "NS_E_CODEC_DMO_ERROR" << endl;
        cout << Utils::defaultOffsetDocInfo << "An unexpected error occurred with a DMO codec." << endl;
        break;
        case NS_E_FEATURE_DISABLED_BY_GROUP_POLICY:
        cout << Utils::defaultOffset << "NS_E_FEATURE_DISABLED_BY_GROUP_POLICY" << endl;
        cout << Utils::defaultOffsetDocInfo << "This feature has been disabled by group policy." << endl;
        break;
        case NS_E_FEATURE_DISABLED_IN_SKU:
        cout << Utils::defaultOffset << "NS_E_FEATURE_DISABLED_IN_SKU" << endl;
        cout << Utils::defaultOffsetDocInfo << "This feature is disabled in this SKU." << endl;
        break;
        case NS_E_NO_CD:
        cout << Utils::defaultOffset << "NS_E_NO_CD" << endl;
        cout << Utils::defaultOffsetDocInfo << "There is no CD in the CD drive. Insert a CD, and then try again." << endl;
        break;
        case NS_E_CANT_READ_DIGITAL:
        cout << Utils::defaultOffset << "NS_E_CANT_READ_DIGITAL" << endl;
        cout << Utils::defaultOffsetDocInfo << "Windows Media Player could not use digital playback to play the CD. To switch to analog playback, on the Tools menu, click Options, and then click the Devices tab. Double-click the CD drive, and then in the Playback area, click Analog. For additional assistance, click Web Help." << endl;
        break;
        case NS_E_DEVICE_DISCONNECTED:
        cout << Utils::defaultOffset << "NS_E_DEVICE_DISCONNECTED" << endl;
        cout << Utils::defaultOffsetDocInfo << "Windows Media Player no longer detects a connected portable device. Reconnect your portable device, and then try synchronizing the file again." << endl;
        break;
        case NS_E_DEVICE_NOT_SUPPORT_FORMAT:
        cout << Utils::defaultOffset << "NS_E_DEVICE_NOT_SUPPORT_FORMAT" << endl;
        cout << Utils::defaultOffsetDocInfo << "Windows Media Player cannot play the file. The portable device does not support the specified file type." << endl;
        break;
        case NS_E_SLOW_READ_DIGITAL:
        cout << Utils::defaultOffset << "NS_E_SLOW_READ_DIGITAL" << endl;
        cout << Utils::defaultOffsetDocInfo << "Windows Media Player could not use digital playback to play the CD. The Player has automatically switched the CD drive to analog playback. To switch back to digital CD playback, use the Devices tab. For additional assistance, click Web Help." << endl;
        break;
        case NS_E_MIXER_INVALID_LINE:
        cout << Utils::defaultOffset << "NS_E_MIXER_INVALID_LINE" << endl;
        cout << Utils::defaultOffsetDocInfo << "An invalid line error occurred in the mixer." << endl;
        break;
        case NS_E_MIXER_INVALID_CONTROL:
        cout << Utils::defaultOffset << "NS_E_MIXER_INVALID_CONTROL" << endl;
        cout << Utils::defaultOffsetDocInfo << "An invalid control error occurred in the mixer." << endl;
        break;
        case NS_E_MIXER_INVALID_VALUE:
        cout << Utils::defaultOffset << "NS_E_MIXER_INVALID_VALUE" << endl;
        cout << Utils::defaultOffsetDocInfo << "An invalid value error occurred in the mixer." << endl;
        break;
        case NS_E_MIXER_UNKNOWN_MMRESULT:
        cout << Utils::defaultOffset << "NS_E_MIXER_UNKNOWN_MMRESULT" << endl;
        cout << Utils::defaultOffsetDocInfo << "An unrecognized MMRESULT occurred in the mixer." << endl;
        break;
        case NS_E_USER_STOP:
        cout << Utils::defaultOffset << "NS_E_USER_STOP" << endl;
        cout << Utils::defaultOffsetDocInfo << "User has stopped the operation." << endl;
        break;
        case NS_E_MP3_FORMAT_NOT_FOUND:
        cout << Utils::defaultOffset << "NS_E_MP3_FORMAT_NOT_FOUND" << endl;
        cout << Utils::defaultOffsetDocInfo << "Windows Media Player cannot rip the track because a compatible MP3 encoder is not installed on your computer. Install a compatible MP3 encoder or choose a different format to rip to (such as Windows Media Audio)." << endl;
        break;
        case NS_E_CD_READ_ERROR_NO_CORRECTION:
        cout << Utils::defaultOffset << "NS_E_CD_READ_ERROR_NO_CORRECTION" << endl;
        cout << Utils::defaultOffsetDocInfo << "Windows Media Player cannot read the CD. The disc might be dirty or damaged. Turn on error correction, and then try again." << endl;
        break;
        case NS_E_CD_READ_ERROR:
        cout << Utils::defaultOffset << "NS_E_CD_READ_ERROR" << endl;
        cout << Utils::defaultOffsetDocInfo << "Windows Media Player cannot read the CD. The disc might be dirty or damaged or the CD drive might be malfunctioning." << endl;
        break;
        case NS_E_CD_SLOW_COPY:
        cout << Utils::defaultOffset << "NS_E_CD_SLOW_COPY" << endl;
        cout << Utils::defaultOffsetDocInfo << "For best performance, do not play CD tracks while ripping them." << endl;
        break;
        case NS_E_CD_COPYTO_CD:
        cout << Utils::defaultOffset << "NS_E_CD_COPYTO_CD" << endl;
        cout << Utils::defaultOffsetDocInfo << "It is not possible to directly burn tracks from one CD to another CD. You must first rip the tracks from the CD to your computer, and then burn the files to a blank CD." << endl;
        break;
        case NS_E_MIXER_NODRIVER:
        cout << Utils::defaultOffset << "NS_E_MIXER_NODRIVER" << endl;
        cout << Utils::defaultOffsetDocInfo << "Could not open a sound mixer driver." << endl;
        break;
        case NS_E_REDBOOK_ENABLED_WHILE_COPYING:
        cout << Utils::defaultOffset << "NS_E_REDBOOK_ENABLED_WHILE_COPYING" << endl;
        cout << Utils::defaultOffsetDocInfo << "Windows Media Player cannot rip tracks from the CD correctly because the CD drive settings in Device Manager do not match the CD drive settings in the Player." << endl;
        break;
        case NS_E_CD_REFRESH:
        cout << Utils::defaultOffset << "NS_E_CD_REFRESH" << endl;
        cout << Utils::defaultOffsetDocInfo << "Windows Media Player is busy reading the CD." << endl;
        break;
        case NS_E_CD_DRIVER_PROBLEM:
        cout << Utils::defaultOffset << "NS_E_CD_DRIVER_PROBLEM" << endl;
        cout << Utils::defaultOffsetDocInfo << "Windows Media Player could not use digital playback to play the CD. The Player has automatically switched the CD drive to analog playback. To switch back to digital CD playback, use the Devices tab. For additional assistance, click Web Help." << endl;
        break;
        case NS_E_WONT_DO_DIGITAL:
        cout << Utils::defaultOffset << "NS_E_WONT_DO_DIGITAL" << endl;
        cout << Utils::defaultOffsetDocInfo << "Windows Media Player could not use digital playback to play the CD. The Player has automatically switched the CD drive to analog playback. To switch back to digital CD playback, use the Devices tab. For additional assistance, click Web Help." << endl;
        break;
        case NS_E_WMPXML_NOERROR:
        cout << Utils::defaultOffset << "NS_E_WMPXML_NOERROR" << endl;
        cout << Utils::defaultOffsetDocInfo << "A call was made to GetParseError on the XML parser but there was no error to retrieve." << endl;
        break;
        case NS_E_WMPXML_ENDOFDATA:
        cout << Utils::defaultOffset << "NS_E_WMPXML_ENDOFDATA" << endl;
        cout << Utils::defaultOffsetDocInfo << "The XML Parser ran out of data while parsing." << endl;
        break;
        case NS_E_WMPXML_PARSEERROR:
        cout << Utils::defaultOffset << "NS_E_WMPXML_PARSEERROR" << endl;
        cout << Utils::defaultOffsetDocInfo << "A generic parse error occurred in the XML parser but no information is available." << endl;
        break;
        case NS_E_WMPXML_ATTRIBUTENOTFOUND:
        cout << Utils::defaultOffset << "NS_E_WMPXML_ATTRIBUTENOTFOUND" << endl;
        cout << Utils::defaultOffsetDocInfo << "A call get GetNamedAttribute or GetNamedAttributeIndex on the XML parser resulted in the index not being found." << endl;
        break;
        case NS_E_WMPXML_PINOTFOUND:
        cout << Utils::defaultOffset << "NS_E_WMPXML_PINOTFOUND" << endl;
        cout << Utils::defaultOffsetDocInfo << "A call was made go GetNamedPI on the XML parser, but the requested Processing Instruction was not found." << endl;
        break;
        case NS_E_WMPXML_EMPTYDOC:
        cout << Utils::defaultOffset << "NS_E_WMPXML_EMPTYDOC" << endl;
        cout << Utils::defaultOffsetDocInfo << "Persist was called on the XML parser, but the parser has no data to persist." << endl;
        break;
        case NS_E_WMP_PATH_ALREADY_IN_LIBRARY:
        cout << Utils::defaultOffset << "NS_E_WMP_PATH_ALREADY_IN_LIBRARY" << endl;
        cout << Utils::defaultOffsetDocInfo << "This file path is already in the library." << endl;
        break;
        case NS_E_WMP_FILESCANALREADYSTARTED:
        cout << Utils::defaultOffset << "NS_E_WMP_FILESCANALREADYSTARTED" << endl;
        cout << Utils::defaultOffsetDocInfo << "Windows Media Player is already searching for files to add to your library. Wait for the current process to finish before attempting to search again." << endl;
        break;
        case NS_E_WMP_HME_INVALIDOBJECTID:
        cout << Utils::defaultOffset << "NS_E_WMP_HME_INVALIDOBJECTID" << endl;
        cout << Utils::defaultOffsetDocInfo << "Windows Media Player is unable to find the media you are looking for." << endl;
        break;
        case NS_E_WMP_MF_CODE_EXPIRED:
        cout << Utils::defaultOffset << "NS_E_WMP_MF_CODE_EXPIRED" << endl;
        cout << Utils::defaultOffsetDocInfo << "A component of Windows Media Player is out-of-date. If you are running a pre-release version of Windows, try upgrading to a more recent version." << endl;
        break;
        case NS_E_WMP_HME_NOTSEARCHABLEFORITEMS:
        cout << Utils::defaultOffset << "NS_E_WMP_HME_NOTSEARCHABLEFORITEMS" << endl;
        cout << Utils::defaultOffsetDocInfo << "This container does not support search on items." << endl;
        break;
        case NS_E_WMP_ADDTOLIBRARY_FAILED:
        cout << Utils::defaultOffset << "NS_E_WMP_ADDTOLIBRARY_FAILED" << endl;
        cout << Utils::defaultOffsetDocInfo << "Windows Media Player encountered a problem while adding one or more files to the library. For additional assistance, click Web Help." << endl;
        break;
        case NS_E_WMP_WINDOWSAPIFAILURE:
        cout << Utils::defaultOffset << "NS_E_WMP_WINDOWSAPIFAILURE" << endl;
        cout << Utils::defaultOffsetDocInfo << "A Windows API call failed but no error information was available." << endl;
        break;
        case NS_E_WMP_RECORDING_NOT_ALLOWED:
        cout << Utils::defaultOffset << "NS_E_WMP_RECORDING_NOT_ALLOWED" << endl;
        cout << Utils::defaultOffsetDocInfo << "This file does not have burn rights. If you obtained this file from an online store, go to the online store to get burn rights." << endl;
        break;
        case NS_E_DEVICE_NOT_READY:
        cout << Utils::defaultOffset << "NS_E_DEVICE_NOT_READY" << endl;
        cout << Utils::defaultOffsetDocInfo << "Windows Media Player no longer detects a connected portable device. Reconnect your portable device, and then try to sync the file again." << endl;
        break;
        case NS_E_DAMAGED_FILE:
        cout << Utils::defaultOffset << "NS_E_DAMAGED_FILE" << endl;
        cout << Utils::defaultOffsetDocInfo << "Windows Media Player cannot play the file because it is corrupted." << endl;
        break;
        case NS_E_MPDB_GENERIC:
        cout << Utils::defaultOffset << "NS_E_MPDB_GENERIC" << endl;
        cout << Utils::defaultOffsetDocInfo << "Windows Media Player encountered an error while attempting to access information in the library. Try restarting the Player." << endl;
        break;
        case NS_E_FILE_FAILED_CHECKS:
        cout << Utils::defaultOffset << "NS_E_FILE_FAILED_CHECKS" << endl;
        cout << Utils::defaultOffsetDocInfo << "The file cannot be added to the library because it is smaller than the \"Skip files smaller than\" setting. To add the file, change the setting on the Library tab. For additional assistance, click Web Help." << endl;
        break;
        case NS_E_MEDIA_LIBRARY_FAILED:
        cout << Utils::defaultOffset << "NS_E_MEDIA_LIBRARY_FAILED" << endl;
        cout << Utils::defaultOffsetDocInfo << "Windows Media Player cannot create the library. You must be logged on as an administrator or a member of the Administrators group to install the Player. For more information, contact your system administrator." << endl;
        break;
        case NS_E_SHARING_VIOLATION:
        cout << Utils::defaultOffset << "NS_E_SHARING_VIOLATION" << endl;
        cout << Utils::defaultOffsetDocInfo << "The file is already in use. Close other programs that might be using the file, or stop playing the file, and then try again." << endl;
        break;
        case NS_E_NO_ERROR_STRING_FOUND:
        cout << Utils::defaultOffset << "NS_E_NO_ERROR_STRING_FOUND" << endl;
        cout << Utils::defaultOffsetDocInfo << "Windows Media Player has encountered an unknown error." << endl;
        break;
        case NS_E_WMPOCX_NO_REMOTE_CORE:
        cout << Utils::defaultOffset << "NS_E_WMPOCX_NO_REMOTE_CORE" << endl;
        cout << Utils::defaultOffsetDocInfo << "The Windows Media Player ActiveX control cannot connect to remote media services, but will continue with local media services." << endl;
        break;
        case NS_E_WMPOCX_NO_ACTIVE_CORE:
        cout << Utils::defaultOffset << "NS_E_WMPOCX_NO_ACTIVE_CORE" << endl;
        cout << Utils::defaultOffsetDocInfo << "The requested method or property is not available because the Windows Media Player ActiveX control has not been properly activated." << endl;
        break;
        case NS_E_WMPOCX_NOT_RUNNING_REMOTELY:
        cout << Utils::defaultOffset << "NS_E_WMPOCX_NOT_RUNNING_REMOTELY" << endl;
        cout << Utils::defaultOffsetDocInfo << "The Windows Media Player ActiveX control is not running in remote mode." << endl;
        break;
        case NS_E_WMPOCX_NO_REMOTE_WINDOW:
        cout << Utils::defaultOffset << "NS_E_WMPOCX_NO_REMOTE_WINDOW" << endl;
        cout << Utils::defaultOffsetDocInfo << "An error occurred while trying to get the remote Windows Media Player window." << endl;
        break;
        case NS_E_WMPOCX_ERRORMANAGERNOTAVAILABLE:
        cout << Utils::defaultOffset << "NS_E_WMPOCX_ERRORMANAGERNOTAVAILABLE" << endl;
        cout << Utils::defaultOffsetDocInfo << "Windows Media Player has encountered an unknown error." << endl;
        break;
        case NS_E_PLUGIN_NOTSHUTDOWN:
        cout << Utils::defaultOffset << "NS_E_PLUGIN_NOTSHUTDOWN" << endl;
        cout << Utils::defaultOffsetDocInfo << "Windows Media Player was not closed properly. A damaged or incompatible plug-in might have caused the problem to occur. As a precaution, all optional plug-ins have been disabled." << endl;
        break;
        case NS_E_WMP_CANNOT_FIND_FOLDER:
        cout << Utils::defaultOffset << "NS_E_WMP_CANNOT_FIND_FOLDER" << endl;
        cout << Utils::defaultOffsetDocInfo << "Windows Media Player cannot find the specified path. Verify that the path is typed correctly. If it is, the path does not exist in the specified location, or the computer where the path is located is not available." << endl;
        break;
        case NS_E_WMP_STREAMING_RECORDING_NOT_ALLOWED:
        cout << Utils::defaultOffset << "NS_E_WMP_STREAMING_RECORDING_NOT_ALLOWED" << endl;
        cout << Utils::defaultOffsetDocInfo << "Windows Media Player cannot save a file that is being streamed." << endl;
        break;
        case NS_E_WMP_PLUGINDLL_NOTFOUND:
        cout << Utils::defaultOffset << "NS_E_WMP_PLUGINDLL_NOTFOUND" << endl;
        cout << Utils::defaultOffsetDocInfo << "Windows Media Player cannot find the selected plug-in. The Player will try to remove it from the menu. To use this plug-in, install it again." << endl;
        break;
        case NS_E_NEED_TO_ASK_USER:
        cout << Utils::defaultOffset << "NS_E_NEED_TO_ASK_USER" << endl;
        cout << Utils::defaultOffsetDocInfo << "Action requires input from the user." << endl;
        break;
        case NS_E_WMPOCX_PLAYER_NOT_DOCKED:
        cout << Utils::defaultOffset << "NS_E_WMPOCX_PLAYER_NOT_DOCKED" << endl;
        cout << Utils::defaultOffsetDocInfo << "The Windows Media Player ActiveX control must be in a docked state for this action to be performed." << endl;
        break;
        case NS_E_WMP_EXTERNAL_NOTREADY:
        cout << Utils::defaultOffset << "NS_E_WMP_EXTERNAL_NOTREADY" << endl;
        cout << Utils::defaultOffsetDocInfo << "The Windows Media Player external object is not ready." << endl;
        break;
        case NS_E_WMP_MLS_STALE_DATA:
        cout << Utils::defaultOffset << "NS_E_WMP_MLS_STALE_DATA" << endl;
        cout << Utils::defaultOffsetDocInfo << "Windows Media Player cannot perform the requested action. Your computer's time and date might not be set correctly." << endl;
        break;
        case NS_E_WMP_UI_SUBCONTROLSNOTSUPPORTED:
        cout << Utils::defaultOffset << "NS_E_WMP_UI_SUBCONTROLSNOTSUPPORTED" << endl;
        cout << Utils::defaultOffsetDocInfo << "The control (%s) does not support creation of sub-controls, yet (%d) sub-controls have been specified." << endl;
        break;
        case NS_E_WMP_UI_VERSIONMISMATCH:
        cout << Utils::defaultOffset << "NS_E_WMP_UI_VERSIONMISMATCH" << endl;
        cout << Utils::defaultOffsetDocInfo << "Version mismatch: (%.1f required, %.1f found)." << endl;
        break;
        case NS_E_WMP_UI_NOTATHEMEFILE:
        cout << Utils::defaultOffset << "NS_E_WMP_UI_NOTATHEMEFILE" << endl;
        cout << Utils::defaultOffsetDocInfo << "The layout manager was given valid XML that wasn't a theme file." << endl;
        break;
        case NS_E_WMP_UI_SUBELEMENTNOTFOUND:
        cout << Utils::defaultOffset << "NS_E_WMP_UI_SUBELEMENTNOTFOUND" << endl;
        cout << Utils::defaultOffsetDocInfo << "The %s subelement could not be found on the %s object." << endl;
        break;
        case NS_E_WMP_UI_VERSIONPARSE:
        cout << Utils::defaultOffset << "NS_E_WMP_UI_VERSIONPARSE" << endl;
        cout << Utils::defaultOffsetDocInfo << "An error occurred parsing the version tag. Valid version tags are of the form: <?wmp version='1.0'?>." << endl;
        break;
        case NS_E_WMP_UI_VIEWIDNOTFOUND:
        cout << Utils::defaultOffset << "NS_E_WMP_UI_VIEWIDNOTFOUND" << endl;
        cout << Utils::defaultOffsetDocInfo << "The view specified in for the 'currentViewID' property (%s) was not found in this theme file." << endl;
        break;
        case NS_E_WMP_UI_PASSTHROUGH:
        cout << Utils::defaultOffset << "NS_E_WMP_UI_PASSTHROUGH" << endl;
        cout << Utils::defaultOffsetDocInfo << "This error used internally for hit testing." << endl;
        break;
        case NS_E_WMP_UI_OBJECTNOTFOUND:
        cout << Utils::defaultOffset << "NS_E_WMP_UI_OBJECTNOTFOUND" << endl;
        cout << Utils::defaultOffsetDocInfo << "Attributes were specified for the %s object, but the object was not available to send them to." << endl;
        break;
        case NS_E_WMP_UI_SECONDHANDLER:
        cout << Utils::defaultOffset << "NS_E_WMP_UI_SECONDHANDLER" << endl;
        cout << Utils::defaultOffsetDocInfo << "The %s event already has a handler, the second handler was ignored." << endl;
        break;
        case NS_E_WMP_UI_NOSKININZIP:
        cout << Utils::defaultOffset << "NS_E_WMP_UI_NOSKININZIP" << endl;
        cout << Utils::defaultOffsetDocInfo << "No .wms file found in skin archive." << endl;
        break;
        case NS_E_WMP_URLDOWNLOADFAILED:
        cout << Utils::defaultOffset << "NS_E_WMP_URLDOWNLOADFAILED" << endl;
        cout << Utils::defaultOffsetDocInfo << "Windows Media Player encountered a problem while downloading the file. For additional assistance, click Web Help." << endl;
        break;
        case NS_E_WMPOCX_UNABLE_TO_LOAD_SKIN:
        cout << Utils::defaultOffset << "NS_E_WMPOCX_UNABLE_TO_LOAD_SKIN" << endl;
        cout << Utils::defaultOffsetDocInfo << "The Windows Media Player ActiveX control cannot load the requested uiMode and cannot roll back to the existing uiMode." << endl;
        break;
        case NS_E_WMP_INVALID_SKIN:
        cout << Utils::defaultOffset << "NS_E_WMP_INVALID_SKIN" << endl;
        cout << Utils::defaultOffsetDocInfo << "Windows Media Player encountered a problem with the skin file. The skin file might not be valid." << endl;
        break;
        case NS_E_WMP_SENDMAILFAILED:
        cout << Utils::defaultOffset << "NS_E_WMP_SENDMAILFAILED" << endl;
        cout << Utils::defaultOffsetDocInfo << "Windows Media Player cannot send the link because your email program is not responding. Verify that your email program is configured properly, and then try again. For more information about email, see Windows Help." << endl;
        break;
        case NS_E_WMP_LOCKEDINSKINMODE:
        cout << Utils::defaultOffset << "NS_E_WMP_LOCKEDINSKINMODE" << endl;
        cout << Utils::defaultOffsetDocInfo << "Windows Media Player cannot switch to full mode because your computer administrator has locked this skin." << endl;
        break;
        case NS_E_WMP_FAILED_TO_SAVE_FILE:
        cout << Utils::defaultOffset << "NS_E_WMP_FAILED_TO_SAVE_FILE" << endl;
        cout << Utils::defaultOffsetDocInfo << "Windows Media Player encountered a problem while saving the file. For additional assistance, click Web Help." << endl;
        break;
        case NS_E_WMP_SAVEAS_READONLY:
        cout << Utils::defaultOffset << "NS_E_WMP_SAVEAS_READONLY" << endl;
        cout << Utils::defaultOffsetDocInfo << "Windows Media Player cannot overwrite a read-only file. Try using a different file name." << endl;
        break;
        case NS_E_WMP_FAILED_TO_SAVE_PLAYLIST:
        cout << Utils::defaultOffset << "NS_E_WMP_FAILED_TO_SAVE_PLAYLIST" << endl;
        cout << Utils::defaultOffsetDocInfo << "Windows Media Player encountered a problem while creating or saving the playlist. For additional assistance, click Web Help." << endl;
        break;
        case NS_E_WMP_FAILED_TO_OPEN_WMD:
        cout << Utils::defaultOffset << "NS_E_WMP_FAILED_TO_OPEN_WMD" << endl;
        cout << Utils::defaultOffsetDocInfo << "Windows Media Player cannot open the Windows Media Download file. The file might be damaged." << endl;
        break;
        case NS_E_WMP_CANT_PLAY_PROTECTED:
        cout << Utils::defaultOffset << "NS_E_WMP_CANT_PLAY_PROTECTED" << endl;
        cout << Utils::defaultOffsetDocInfo << "The file cannot be added to the library because it is a protected DVR-MS file. This content cannot be played back by Windows Media Player." << endl;
        break;
        case NS_E_SHARING_STATE_OUT_OF_SYNC:
        cout << Utils::defaultOffset << "NS_E_SHARING_STATE_OUT_OF_SYNC" << endl;
        cout << Utils::defaultOffsetDocInfo << "Media sharing has been turned off because a required Windows setting or component has changed. For additional assistance, click Web Help." << endl;
        break;
        case NS_E_WMPOCX_REMOTE_PLAYER_ALREADY_RUNNING:
        cout << Utils::defaultOffset << "NS_E_WMPOCX_REMOTE_PLAYER_ALREADY_RUNNING" << endl;
        cout << Utils::defaultOffsetDocInfo << "Exclusive Services launch failed because the Windows Media Player is already running." << endl;
        break;
        case NS_E_WMP_RBC_JPGMAPPINGIMAGE:
        cout << Utils::defaultOffset << "NS_E_WMP_RBC_JPGMAPPINGIMAGE" << endl;
        cout << Utils::defaultOffsetDocInfo << "JPG Images are not recommended for use as a mappingImage." << endl;
        break;
        case NS_E_WMP_JPGTRANSPARENCY:
        cout << Utils::defaultOffset << "NS_E_WMP_JPGTRANSPARENCY" << endl;
        cout << Utils::defaultOffsetDocInfo << "JPG Images are not recommended when using a transparencyColor." << endl;
        break;
        case NS_E_WMP_INVALID_MAX_VAL:
        cout << Utils::defaultOffset << "NS_E_WMP_INVALID_MAX_VAL" << endl;
        cout << Utils::defaultOffsetDocInfo << "The Max property cannot be less than Min property." << endl;
        break;
        case NS_E_WMP_INVALID_MIN_VAL:
        cout << Utils::defaultOffset << "NS_E_WMP_INVALID_MIN_VAL" << endl;
        cout << Utils::defaultOffsetDocInfo << "The Min property cannot be greater than Max property." << endl;
        break;
        case NS_E_WMP_CS_JPGPOSITIONIMAGE:
        cout << Utils::defaultOffset << "NS_E_WMP_CS_JPGPOSITIONIMAGE" << endl;
        cout << Utils::defaultOffsetDocInfo << "JPG Images are not recommended for use as a positionImage." << endl;
        break;
        case NS_E_WMP_CS_NOTEVENLYDIVISIBLE:
        cout << Utils::defaultOffset << "NS_E_WMP_CS_NOTEVENLYDIVISIBLE" << endl;
        cout << Utils::defaultOffsetDocInfo << "The (%s) image's size is not evenly divisible by the positionImage's size." << endl;
        break;
        case NS_E_WMPZIP_NOTAZIPFILE:
        cout << Utils::defaultOffset << "NS_E_WMPZIP_NOTAZIPFILE" << endl;
        cout << Utils::defaultOffsetDocInfo << "The ZIP reader opened a file and its signature did not match that of the ZIP files." << endl;
        break;
        case NS_E_WMPZIP_CORRUPT:
        cout << Utils::defaultOffset << "NS_E_WMPZIP_CORRUPT" << endl;
        cout << Utils::defaultOffsetDocInfo << "The ZIP reader has detected that the file is corrupted." << endl;
        break;
        case NS_E_WMPZIP_FILENOTFOUND:
        cout << Utils::defaultOffset << "NS_E_WMPZIP_FILENOTFOUND" << endl;
        cout << Utils::defaultOffsetDocInfo << "GetFileStream, SaveToFile, or SaveTemp file was called on the ZIP reader with a file name that was not found in the ZIP file." << endl;
        break;
        case NS_E_WMP_IMAGE_FILETYPE_UNSUPPORTED:
        cout << Utils::defaultOffset << "NS_E_WMP_IMAGE_FILETYPE_UNSUPPORTED" << endl;
        cout << Utils::defaultOffsetDocInfo << "Image type not supported." << endl;
        break;
        case NS_E_WMP_IMAGE_INVALID_FORMAT:
        cout << Utils::defaultOffset << "NS_E_WMP_IMAGE_INVALID_FORMAT" << endl;
        cout << Utils::defaultOffsetDocInfo << "Image file might be corrupt." << endl;
        break;
        case NS_E_WMP_GIF_UNEXPECTED_ENDOFFILE:
        cout << Utils::defaultOffset << "NS_E_WMP_GIF_UNEXPECTED_ENDOFFILE" << endl;
        cout << Utils::defaultOffsetDocInfo << "Unexpected end of file. GIF file might be corrupt." << endl;
        break;
        case NS_E_WMP_GIF_INVALID_FORMAT:
        cout << Utils::defaultOffset << "NS_E_WMP_GIF_INVALID_FORMAT" << endl;
        cout << Utils::defaultOffsetDocInfo << "Invalid GIF file." << endl;
        break;
        case NS_E_WMP_GIF_BAD_VERSION_NUMBER:
        cout << Utils::defaultOffset << "NS_E_WMP_GIF_BAD_VERSION_NUMBER" << endl;
        cout << Utils::defaultOffsetDocInfo << "Invalid GIF version. Only 87a or 89a supported." << endl;
        break;
        case NS_E_WMP_GIF_NO_IMAGE_IN_FILE:
        cout << Utils::defaultOffset << "NS_E_WMP_GIF_NO_IMAGE_IN_FILE" << endl;
        cout << Utils::defaultOffsetDocInfo << "No images found in GIF file." << endl;
        break;
        case NS_E_WMP_PNG_INVALIDFORMAT:
        cout << Utils::defaultOffset << "NS_E_WMP_PNG_INVALIDFORMAT" << endl;
        cout << Utils::defaultOffsetDocInfo << "Invalid PNG image file format." << endl;
        break;
        case NS_E_WMP_PNG_UNSUPPORTED_BITDEPTH:
        cout << Utils::defaultOffset << "NS_E_WMP_PNG_UNSUPPORTED_BITDEPTH" << endl;
        cout << Utils::defaultOffsetDocInfo << "PNG bitdepth not supported." << endl;
        break;
        case NS_E_WMP_PNG_UNSUPPORTED_COMPRESSION:
        cout << Utils::defaultOffset << "NS_E_WMP_PNG_UNSUPPORTED_COMPRESSION" << endl;
        cout << Utils::defaultOffsetDocInfo << "Compression format defined in PNG file not supported," << endl;
        break;
        case NS_E_WMP_PNG_UNSUPPORTED_FILTER:
        cout << Utils::defaultOffset << "NS_E_WMP_PNG_UNSUPPORTED_FILTER" << endl;
        cout << Utils::defaultOffsetDocInfo << "Filter method defined in PNG file not supported." << endl;
        break;
        case NS_E_WMP_PNG_UNSUPPORTED_INTERLACE:
        cout << Utils::defaultOffset << "NS_E_WMP_PNG_UNSUPPORTED_INTERLACE" << endl;
        cout << Utils::defaultOffsetDocInfo << "Interlace method defined in PNG file not supported." << endl;
        break;
        case NS_E_WMP_PNG_UNSUPPORTED_BAD_CRC:
        cout << Utils::defaultOffset << "NS_E_WMP_PNG_UNSUPPORTED_BAD_CRC" << endl;
        cout << Utils::defaultOffsetDocInfo << "Bad CRC in PNG file." << endl;
        break;
        case NS_E_WMP_BMP_INVALID_BITMASK:
        cout << Utils::defaultOffset << "NS_E_WMP_BMP_INVALID_BITMASK" << endl;
        cout << Utils::defaultOffsetDocInfo << "Invalid bitmask in BMP file." << endl;
        break;
        case NS_E_WMP_BMP_TOPDOWN_DIB_UNSUPPORTED:
        cout << Utils::defaultOffset << "NS_E_WMP_BMP_TOPDOWN_DIB_UNSUPPORTED" << endl;
        cout << Utils::defaultOffsetDocInfo << "Topdown DIB not supported." << endl;
        break;
        case NS_E_WMP_BMP_BITMAP_NOT_CREATED:
        cout << Utils::defaultOffset << "NS_E_WMP_BMP_BITMAP_NOT_CREATED" << endl;
        cout << Utils::defaultOffsetDocInfo << "Bitmap could not be created." << endl;
        break;
        case NS_E_WMP_BMP_COMPRESSION_UNSUPPORTED:
        cout << Utils::defaultOffset << "NS_E_WMP_BMP_COMPRESSION_UNSUPPORTED" << endl;
        cout << Utils::defaultOffsetDocInfo << "Compression format defined in BMP not supported." << endl;
        break;
        case NS_E_WMP_BMP_INVALID_FORMAT:
        cout << Utils::defaultOffset << "NS_E_WMP_BMP_INVALID_FORMAT" << endl;
        cout << Utils::defaultOffsetDocInfo << "Invalid Bitmap format." << endl;
        break;
        case NS_E_WMP_JPG_JERR_ARITHCODING_NOTIMPL:
        cout << Utils::defaultOffset << "NS_E_WMP_JPG_JERR_ARITHCODING_NOTIMPL" << endl;
        cout << Utils::defaultOffsetDocInfo << "JPEG Arithmetic coding not supported." << endl;
        break;
        case NS_E_WMP_JPG_INVALID_FORMAT:
        cout << Utils::defaultOffset << "NS_E_WMP_JPG_INVALID_FORMAT" << endl;
        cout << Utils::defaultOffsetDocInfo << "Invalid JPEG format." << endl;
        break;
        case NS_E_WMP_JPG_BAD_DCTSIZE:
        cout << Utils::defaultOffset << "NS_E_WMP_JPG_BAD_DCTSIZE" << endl;
        cout << Utils::defaultOffsetDocInfo << "Invalid JPEG format." << endl;
        break;
        case NS_E_WMP_JPG_BAD_VERSION_NUMBER:
        cout << Utils::defaultOffset << "NS_E_WMP_JPG_BAD_VERSION_NUMBER" << endl;
        cout << Utils::defaultOffsetDocInfo << "Internal version error. Unexpected JPEG library version." << endl;
        break;
        case NS_E_WMP_JPG_BAD_PRECISION:
        cout << Utils::defaultOffset << "NS_E_WMP_JPG_BAD_PRECISION" << endl;
        cout << Utils::defaultOffsetDocInfo << "Internal JPEG Library error. Unsupported JPEG data precision." << endl;
        break;
        case NS_E_WMP_JPG_CCIR601_NOTIMPL:
        cout << Utils::defaultOffset << "NS_E_WMP_JPG_CCIR601_NOTIMPL" << endl;
        cout << Utils::defaultOffsetDocInfo << "JPEG CCIR601 not supported." << endl;
        break;
        case NS_E_WMP_JPG_NO_IMAGE_IN_FILE:
        cout << Utils::defaultOffset << "NS_E_WMP_JPG_NO_IMAGE_IN_FILE" << endl;
        cout << Utils::defaultOffsetDocInfo << "No image found in JPEG file." << endl;
        break;
        case NS_E_WMP_JPG_READ_ERROR:
        cout << Utils::defaultOffset << "NS_E_WMP_JPG_READ_ERROR" << endl;
        cout << Utils::defaultOffsetDocInfo << "Could not read JPEG file." << endl;
        break;
        case NS_E_WMP_JPG_FRACT_SAMPLE_NOTIMPL:
        cout << Utils::defaultOffset << "NS_E_WMP_JPG_FRACT_SAMPLE_NOTIMPL" << endl;
        cout << Utils::defaultOffsetDocInfo << "JPEG Fractional sampling not supported." << endl;
        break;
        case NS_E_WMP_JPG_IMAGE_TOO_BIG:
        cout << Utils::defaultOffset << "NS_E_WMP_JPG_IMAGE_TOO_BIG" << endl;
        cout << Utils::defaultOffsetDocInfo << "JPEG image too large. Maximum image size supported is 65500 X 65500." << endl;
        break;
        case NS_E_WMP_JPG_UNEXPECTED_ENDOFFILE:
        cout << Utils::defaultOffset << "NS_E_WMP_JPG_UNEXPECTED_ENDOFFILE" << endl;
        cout << Utils::defaultOffsetDocInfo << "Unexpected end of file reached in JPEG file." << endl;
        break;
        case NS_E_WMP_JPG_SOF_UNSUPPORTED:
        cout << Utils::defaultOffset << "NS_E_WMP_JPG_SOF_UNSUPPORTED" << endl;
        cout << Utils::defaultOffsetDocInfo << "Unsupported JPEG SOF marker found." << endl;
        break;
        case NS_E_WMP_JPG_UNKNOWN_MARKER:
        cout << Utils::defaultOffset << "NS_E_WMP_JPG_UNKNOWN_MARKER" << endl;
        cout << Utils::defaultOffsetDocInfo << "Unknown JPEG marker found." << endl;
        break;
        case NS_E_WMP_FAILED_TO_OPEN_IMAGE:
        cout << Utils::defaultOffset << "NS_E_WMP_FAILED_TO_OPEN_IMAGE" << endl;
        cout << Utils::defaultOffsetDocInfo << "Windows Media Player cannot display the picture file. The player either does not support the picture type or the picture is corrupted." << endl;
        break;
        case NS_E_WMP_DAI_SONGTOOSHORT:
        cout << Utils::defaultOffset << "NS_E_WMP_DAI_SONGTOOSHORT" << endl;
        cout << Utils::defaultOffsetDocInfo << "Windows Media Player cannot compute a Digital Audio Id for the song. It is too short." << endl;
        break;
        case NS_E_WMG_RATEUNAVAILABLE:
        cout << Utils::defaultOffset << "NS_E_WMG_RATEUNAVAILABLE" << endl;
        cout << Utils::defaultOffsetDocInfo << "Windows Media Player cannot play the file at the requested speed." << endl;
        break;
        case NS_E_WMG_PLUGINUNAVAILABLE:
        cout << Utils::defaultOffset << "NS_E_WMG_PLUGINUNAVAILABLE" << endl;
        cout << Utils::defaultOffsetDocInfo << "The rendering or digital signal processing plug-in cannot be instantiated." << endl;
        break;
        case NS_E_WMG_CANNOTQUEUE:
        cout << Utils::defaultOffset << "NS_E_WMG_CANNOTQUEUE" << endl;
        cout << Utils::defaultOffsetDocInfo << "The file cannot be queued for seamless playback." << endl;
        break;
        case NS_E_WMG_PREROLLLICENSEACQUISITIONNOTALLOWED:
        cout << Utils::defaultOffset << "NS_E_WMG_PREROLLLICENSEACQUISITIONNOTALLOWED" << endl;
        cout << Utils::defaultOffsetDocInfo << "Windows Media Player cannot download media usage rights for a file in the playlist." << endl;
        break;
        case NS_E_WMG_UNEXPECTEDPREROLLSTATUS:
        cout << Utils::defaultOffset << "NS_E_WMG_UNEXPECTEDPREROLLSTATUS" << endl;
        cout << Utils::defaultOffsetDocInfo << "Windows Media Player encountered an error while trying to queue a file." << endl;
        break;
        case NS_E_WMG_INVALID_COPP_CERTIFICATE:
        cout << Utils::defaultOffset << "NS_E_WMG_INVALID_COPP_CERTIFICATE" << endl;
        cout << Utils::defaultOffsetDocInfo << "Windows Media Player cannot play the protected file. The Player cannot verify that the connection to your video card is secure. Try installing an updated device driver for your video card." << endl;
        break;
        case NS_E_WMG_COPP_SECURITY_INVALID:
        cout << Utils::defaultOffset << "NS_E_WMG_COPP_SECURITY_INVALID" << endl;
        cout << Utils::defaultOffsetDocInfo << "Windows Media Player cannot play the protected file. The Player detected that the connection to your hardware might not be secure." << endl;
        break;
        case NS_E_WMG_COPP_UNSUPPORTED:
        cout << Utils::defaultOffset << "NS_E_WMG_COPP_UNSUPPORTED" << endl;
        cout << Utils::defaultOffsetDocInfo << "Windows Media Player output link protection is unsupported on this system." << endl;
        break;
        case NS_E_WMG_INVALIDSTATE:
        cout << Utils::defaultOffset << "NS_E_WMG_INVALIDSTATE" << endl;
        cout << Utils::defaultOffsetDocInfo << "Operation attempted in an invalid graph state." << endl;
        break;
        case NS_E_WMG_SINKALREADYEXISTS:
        cout << Utils::defaultOffset << "NS_E_WMG_SINKALREADYEXISTS" << endl;
        cout << Utils::defaultOffsetDocInfo << "A renderer cannot be inserted in a stream while one already exists." << endl;
        break;
        case NS_E_WMG_NOSDKINTERFACE:
        cout << Utils::defaultOffset << "NS_E_WMG_NOSDKINTERFACE" << endl;
        cout << Utils::defaultOffsetDocInfo << "The Windows Media SDK interface needed to complete the operation does not exist at this time." << endl;
        break;
        case NS_E_WMG_NOTALLOUTPUTSRENDERED:
        cout << Utils::defaultOffset << "NS_E_WMG_NOTALLOUTPUTSRENDERED" << endl;
        cout << Utils::defaultOffsetDocInfo << "Windows Media Player cannot play a portion of the file because it requires a codec that either could not be downloaded or that is not supported by the Player." << endl;
        break;
        case NS_E_WMG_FILETRANSFERNOTALLOWED:
        cout << Utils::defaultOffset << "NS_E_WMG_FILETRANSFERNOTALLOWED" << endl;
        cout << Utils::defaultOffsetDocInfo << "File transfer streams are not allowed in the standalone Player." << endl;
        break;
        case NS_E_WMR_UNSUPPORTEDSTREAM:
        cout << Utils::defaultOffset << "NS_E_WMR_UNSUPPORTEDSTREAM" << endl;
        cout << Utils::defaultOffsetDocInfo << "Windows Media Player cannot play the file. The Player does not support the format you are trying to play." << endl;
        break;
        case NS_E_WMR_PINNOTFOUND:
        cout << Utils::defaultOffset << "NS_E_WMR_PINNOTFOUND" << endl;
        cout << Utils::defaultOffsetDocInfo << "An operation was attempted on a pin that does not exist in the DirectShow filter graph." << endl;
        break;
        case NS_E_WMR_WAITINGONFORMATSWITCH:
        cout << Utils::defaultOffset << "NS_E_WMR_WAITINGONFORMATSWITCH" << endl;
        cout << Utils::defaultOffsetDocInfo << "Specified operation cannot be completed while waiting for a media format change from the SDK." << endl;
        break;
        case NS_E_WMR_NOSOURCEFILTER:
        cout << Utils::defaultOffset << "NS_E_WMR_NOSOURCEFILTER" << endl;
        cout << Utils::defaultOffsetDocInfo << "Specified operation cannot be completed because the source filter does not exist." << endl;
        break;
        case NS_E_WMR_PINTYPENOMATCH:
        cout << Utils::defaultOffset << "NS_E_WMR_PINTYPENOMATCH" << endl;
        cout << Utils::defaultOffsetDocInfo << "The specified type does not match this pin." << endl;
        break;
        case NS_E_WMR_NOCALLBACKAVAILABLE:
        cout << Utils::defaultOffset << "NS_E_WMR_NOCALLBACKAVAILABLE" << endl;
        cout << Utils::defaultOffsetDocInfo << "The WMR Source Filter does not have a callback available." << endl;
        break;
        case NS_E_WMR_SAMPLEPROPERTYNOTSET:
        cout << Utils::defaultOffset << "NS_E_WMR_SAMPLEPROPERTYNOTSET" << endl;
        cout << Utils::defaultOffsetDocInfo << "The specified property has not been set on this sample." << endl;
        break;
        case NS_E_WMR_CANNOT_RENDER_BINARY_STREAM:
        cout << Utils::defaultOffset << "NS_E_WMR_CANNOT_RENDER_BINARY_STREAM" << endl;
        cout << Utils::defaultOffsetDocInfo << "A plug-in is required to correctly play the file. To determine if the plug-in is available to download, click Web Help." << endl;
        break;
        case NS_E_WMG_LICENSE_TAMPERED:
        cout << Utils::defaultOffset << "NS_E_WMG_LICENSE_TAMPERED" << endl;
        cout << Utils::defaultOffsetDocInfo << "Windows Media Player cannot play the file because your media usage rights are corrupted. If you previously backed up your media usage rights, try restoring them." << endl;
        break;
        case NS_E_WMR_WILLNOT_RENDER_BINARY_STREAM:
        cout << Utils::defaultOffset << "NS_E_WMR_WILLNOT_RENDER_BINARY_STREAM" << endl;
        cout << Utils::defaultOffsetDocInfo << "Windows Media Player cannot play protected files that contain binary streams." << endl;
        break;
        case NS_E_WMX_UNRECOGNIZED_PLAYLIST_FORMAT:
        cout << Utils::defaultOffset << "NS_E_WMX_UNRECOGNIZED_PLAYLIST_FORMAT" << endl;
        cout << Utils::defaultOffsetDocInfo << "Windows Media Player cannot play the playlist because it is not valid." << endl;
        break;
        case NS_E_ASX_INVALIDFORMAT:
        cout << Utils::defaultOffset << "NS_E_ASX_INVALIDFORMAT" << endl;
        cout << Utils::defaultOffsetDocInfo << "Windows Media Player cannot play the playlist because it is not valid." << endl;
        break;
        case NS_E_ASX_INVALIDVERSION:
        cout << Utils::defaultOffset << "NS_E_ASX_INVALIDVERSION" << endl;
        cout << Utils::defaultOffsetDocInfo << "A later version of Windows Media Player might be required to play this playlist." << endl;
        break;
        case NS_E_ASX_INVALID_REPEAT_BLOCK:
        cout << Utils::defaultOffset << "NS_E_ASX_INVALID_REPEAT_BLOCK" << endl;
        cout << Utils::defaultOffsetDocInfo << "The format of a REPEAT loop within the current playlist file is not valid." << endl;
        break;
        case NS_E_ASX_NOTHING_TO_WRITE:
        cout << Utils::defaultOffset << "NS_E_ASX_NOTHING_TO_WRITE" << endl;
        cout << Utils::defaultOffsetDocInfo << "Windows Media Player cannot save the playlist because it does not contain any items." << endl;
        break;
        case NS_E_URLLIST_INVALIDFORMAT:
        cout << Utils::defaultOffset << "NS_E_URLLIST_INVALIDFORMAT" << endl;
        cout << Utils::defaultOffsetDocInfo << "Windows Media Player cannot play the playlist because it is not valid." << endl;
        break;
        case NS_E_WMX_ATTRIBUTE_DOES_NOT_EXIST:
        cout << Utils::defaultOffset << "NS_E_WMX_ATTRIBUTE_DOES_NOT_EXIST" << endl;
        cout << Utils::defaultOffsetDocInfo << "The specified attribute does not exist." << endl;
        break;
        case NS_E_WMX_ATTRIBUTE_ALREADY_EXISTS:
        cout << Utils::defaultOffset << "NS_E_WMX_ATTRIBUTE_ALREADY_EXISTS" << endl;
        cout << Utils::defaultOffsetDocInfo << "The specified attribute already exists." << endl;
        break;
        case NS_E_WMX_ATTRIBUTE_UNRETRIEVABLE:
        cout << Utils::defaultOffset << "NS_E_WMX_ATTRIBUTE_UNRETRIEVABLE" << endl;
        cout << Utils::defaultOffsetDocInfo << "Cannot retrieve the specified attribute." << endl;
        break;
        case NS_E_WMX_ITEM_DOES_NOT_EXIST:
        cout << Utils::defaultOffset << "NS_E_WMX_ITEM_DOES_NOT_EXIST" << endl;
        cout << Utils::defaultOffsetDocInfo << "The specified item does not exist in the current playlist." << endl;
        break;
        case NS_E_WMX_ITEM_TYPE_ILLEGAL:
        cout << Utils::defaultOffset << "NS_E_WMX_ITEM_TYPE_ILLEGAL" << endl;
        cout << Utils::defaultOffsetDocInfo << "Items of the specified type cannot be created within the current playlist." << endl;
        break;
        case NS_E_WMX_ITEM_UNSETTABLE:
        cout << Utils::defaultOffset << "NS_E_WMX_ITEM_UNSETTABLE" << endl;
        cout << Utils::defaultOffsetDocInfo << "The specified item cannot be set in the current playlist." << endl;
        break;
        case NS_E_WMX_PLAYLIST_EMPTY:
        cout << Utils::defaultOffset << "NS_E_WMX_PLAYLIST_EMPTY" << endl;
        cout << Utils::defaultOffsetDocInfo << "Windows Media Player cannot perform the requested action because the playlist does not contain any items." << endl;
        break;
        case NS_E_MLS_SMARTPLAYLIST_FILTER_NOT_REGISTERED:
        cout << Utils::defaultOffset << "NS_E_MLS_SMARTPLAYLIST_FILTER_NOT_REGISTERED" << endl;
        cout << Utils::defaultOffsetDocInfo << "The specified auto playlist contains a filter type that is either not valid or is not installed on this computer." << endl;
        break;
        case NS_E_WMX_INVALID_FORMAT_OVER_NESTING:
        cout << Utils::defaultOffset << "NS_E_WMX_INVALID_FORMAT_OVER_NESTING" << endl;
        cout << Utils::defaultOffsetDocInfo << "Windows Media Player cannot play the file because the associated playlist contains too many nested playlists." << endl;
        break;
        case NS_E_WMPCORE_NOSOURCEURLSTRING:
        cout << Utils::defaultOffset << "NS_E_WMPCORE_NOSOURCEURLSTRING" << endl;
        cout << Utils::defaultOffsetDocInfo << "Windows Media Player cannot find the file. Verify that the path is typed correctly. If it is, the file might not exist in the specified location, or the computer where the file is stored might not be available." << endl;
        break;
        case NS_E_WMPCORE_COCREATEFAILEDFORGITOBJECT:
        cout << Utils::defaultOffset << "NS_E_WMPCORE_COCREATEFAILEDFORGITOBJECT" << endl;
        cout << Utils::defaultOffsetDocInfo << "Failed to create the Global Interface Table." << endl;
        break;
        case NS_E_WMPCORE_FAILEDTOGETMARSHALLEDEVENTHANDLERINTERFACE:
        cout << Utils::defaultOffset << "NS_E_WMPCORE_FAILEDTOGETMARSHALLEDEVENTHANDLERINTERFACE" << endl;
        cout << Utils::defaultOffsetDocInfo << "Failed to get the marshaled graph event handler interface." << endl;
        break;
        case NS_E_WMPCORE_BUFFERTOOSMALL:
        cout << Utils::defaultOffset << "NS_E_WMPCORE_BUFFERTOOSMALL" << endl;
        cout << Utils::defaultOffsetDocInfo << "Buffer is too small for copying media type." << endl;
        break;
        case NS_E_WMPCORE_UNAVAILABLE:
        cout << Utils::defaultOffset << "NS_E_WMPCORE_UNAVAILABLE" << endl;
        cout << Utils::defaultOffsetDocInfo << "The current state of the Player does not allow this operation." << endl;
        break;
        case NS_E_WMPCORE_INVALIDPLAYLISTMODE:
        cout << Utils::defaultOffset << "NS_E_WMPCORE_INVALIDPLAYLISTMODE" << endl;
        cout << Utils::defaultOffsetDocInfo << "The playlist manager does not understand the current play mode (for example, shuffle or normal)." << endl;
        break;
        case NS_E_WMPCORE_ITEMNOTINPLAYLIST:
        cout << Utils::defaultOffset << "NS_E_WMPCORE_ITEMNOTINPLAYLIST" << endl;
        cout << Utils::defaultOffsetDocInfo << "Windows Media Player cannot play the file because it is not in the current playlist." << endl;
        break;
        case NS_E_WMPCORE_PLAYLISTEMPTY:
        cout << Utils::defaultOffset << "NS_E_WMPCORE_PLAYLISTEMPTY" << endl;
        cout << Utils::defaultOffsetDocInfo << "There are no items in the playlist. Add items to the playlist, and then try again." << endl;
        break;
        case NS_E_WMPCORE_NOBROWSER:
        cout << Utils::defaultOffset << "NS_E_WMPCORE_NOBROWSER" << endl;
        cout << Utils::defaultOffsetDocInfo << "The web page cannot be displayed because no web browser is installed on your computer." << endl;
        break;
        case NS_E_WMPCORE_UNRECOGNIZED_MEDIA_URL:
        cout << Utils::defaultOffset << "NS_E_WMPCORE_UNRECOGNIZED_MEDIA_URL" << endl;
        cout << Utils::defaultOffsetDocInfo << "Windows Media Player cannot find the specified file. Verify the path is typed correctly. If it is, the file does not exist in the specified location, or the computer where the file is stored is not available." << endl;
        break;
        case NS_E_WMPCORE_GRAPH_NOT_IN_LIST:
        cout << Utils::defaultOffset << "NS_E_WMPCORE_GRAPH_NOT_IN_LIST" << endl;
        cout << Utils::defaultOffsetDocInfo << "Graph with the specified URL was not found in the prerolled graph list." << endl;
        break;
        case NS_E_WMPCORE_PLAYLIST_EMPTY_OR_SINGLE_MEDIA:
        cout << Utils::defaultOffset << "NS_E_WMPCORE_PLAYLIST_EMPTY_OR_SINGLE_MEDIA" << endl;
        cout << Utils::defaultOffsetDocInfo << "Windows Media Player cannot perform the requested operation because there is only one item in the playlist." << endl;
        break;
        case NS_E_WMPCORE_ERRORSINKNOTREGISTERED:
        cout << Utils::defaultOffset << "NS_E_WMPCORE_ERRORSINKNOTREGISTERED" << endl;
        cout << Utils::defaultOffsetDocInfo << "An error sink was never registered for the calling object." << endl;
        break;
        case NS_E_WMPCORE_ERRORMANAGERNOTAVAILABLE:
        cout << Utils::defaultOffset << "NS_E_WMPCORE_ERRORMANAGERNOTAVAILABLE" << endl;
        cout << Utils::defaultOffsetDocInfo << "The error manager is not available to respond to errors." << endl;
        break;
        case NS_E_WMPCORE_WEBHELPFAILED:
        cout << Utils::defaultOffset << "NS_E_WMPCORE_WEBHELPFAILED" << endl;
        cout << Utils::defaultOffsetDocInfo << "The Web Help URL cannot be opened." << endl;
        break;
        case NS_E_WMPCORE_MEDIA_ERROR_RESUME_FAILED:
        cout << Utils::defaultOffset << "NS_E_WMPCORE_MEDIA_ERROR_RESUME_FAILED" << endl;
        cout << Utils::defaultOffsetDocInfo << "Could not resume playing next item in playlist." << endl;
        break;
        case NS_E_WMPCORE_NO_REF_IN_ENTRY:
        cout << Utils::defaultOffset << "NS_E_WMPCORE_NO_REF_IN_ENTRY" << endl;
        cout << Utils::defaultOffsetDocInfo << "Windows Media Player cannot play the file because the associated playlist does not contain any items or the playlist is not valid." << endl;
        break;
        case NS_E_WMPCORE_WMX_LIST_ATTRIBUTE_NAME_EMPTY:
        cout << Utils::defaultOffset << "NS_E_WMPCORE_WMX_LIST_ATTRIBUTE_NAME_EMPTY" << endl;
        cout << Utils::defaultOffsetDocInfo << "An empty string for playlist attribute name was found." << endl;
        break;
        case NS_E_WMPCORE_WMX_LIST_ATTRIBUTE_NAME_ILLEGAL:
        cout << Utils::defaultOffset << "NS_E_WMPCORE_WMX_LIST_ATTRIBUTE_NAME_ILLEGAL" << endl;
        cout << Utils::defaultOffsetDocInfo << "A playlist attribute name that is not valid was found." << endl;
        break;
        case NS_E_WMPCORE_WMX_LIST_ATTRIBUTE_VALUE_EMPTY:
        cout << Utils::defaultOffset << "NS_E_WMPCORE_WMX_LIST_ATTRIBUTE_VALUE_EMPTY" << endl;
        cout << Utils::defaultOffsetDocInfo << "An empty string for a playlist attribute value was found." << endl;
        break;
        case NS_E_WMPCORE_WMX_LIST_ATTRIBUTE_VALUE_ILLEGAL:
        cout << Utils::defaultOffset << "NS_E_WMPCORE_WMX_LIST_ATTRIBUTE_VALUE_ILLEGAL" << endl;
        cout << Utils::defaultOffsetDocInfo << "An illegal value for a playlist attribute was found." << endl;
        break;
        case NS_E_WMPCORE_WMX_LIST_ITEM_ATTRIBUTE_NAME_EMPTY:
        cout << Utils::defaultOffset << "NS_E_WMPCORE_WMX_LIST_ITEM_ATTRIBUTE_NAME_EMPTY" << endl;
        cout << Utils::defaultOffsetDocInfo << "An empty string for a playlist item attribute name was found." << endl;
        break;
        case NS_E_WMPCORE_WMX_LIST_ITEM_ATTRIBUTE_NAME_ILLEGAL:
        cout << Utils::defaultOffset << "NS_E_WMPCORE_WMX_LIST_ITEM_ATTRIBUTE_NAME_ILLEGAL" << endl;
        cout << Utils::defaultOffsetDocInfo << "An illegal value for a playlist item attribute name was found." << endl;
        break;
        case NS_E_WMPCORE_WMX_LIST_ITEM_ATTRIBUTE_VALUE_EMPTY:
        cout << Utils::defaultOffset << "NS_E_WMPCORE_WMX_LIST_ITEM_ATTRIBUTE_VALUE_EMPTY" << endl;
        cout << Utils::defaultOffsetDocInfo << "An illegal value for a playlist item attribute was found." << endl;
        break;
        case NS_E_WMPCORE_LIST_ENTRY_NO_REF:
        cout << Utils::defaultOffset << "NS_E_WMPCORE_LIST_ENTRY_NO_REF" << endl;
        cout << Utils::defaultOffsetDocInfo << "The playlist does not contain any items." << endl;
        break;
        case NS_E_WMPCORE_MISNAMED_FILE:
        cout << Utils::defaultOffset << "NS_E_WMPCORE_MISNAMED_FILE" << endl;
        cout << Utils::defaultOffsetDocInfo << "Windows Media Player cannot play the file. The file is either corrupted or the Player does not support the format you are trying to play." << endl;
        break;
        case NS_E_WMPCORE_CODEC_NOT_TRUSTED:
        cout << Utils::defaultOffset << "NS_E_WMPCORE_CODEC_NOT_TRUSTED" << endl;
        cout << Utils::defaultOffsetDocInfo << "The codec downloaded for this file does not appear to be properly signed, so it cannot be installed." << endl;
        break;
        case NS_E_WMPCORE_CODEC_NOT_FOUND:
        cout << Utils::defaultOffset << "NS_E_WMPCORE_CODEC_NOT_FOUND" << endl;
        cout << Utils::defaultOffsetDocInfo << "Windows Media Player cannot play the file. One or more codecs required to play the file could not be found." << endl;
        break;
        case NS_E_WMPCORE_CODEC_DOWNLOAD_NOT_ALLOWED:
        cout << Utils::defaultOffset << "NS_E_WMPCORE_CODEC_DOWNLOAD_NOT_ALLOWED" << endl;
        cout << Utils::defaultOffsetDocInfo << "Windows Media Player cannot play the file because a required codec is not installed on your computer. To try downloading the codec, turn on the \"Download codecs automatically\" option." << endl;
        break;
        case NS_E_WMPCORE_ERROR_DOWNLOADING_PLAYLIST:
        cout << Utils::defaultOffset << "NS_E_WMPCORE_ERROR_DOWNLOADING_PLAYLIST" << endl;
        cout << Utils::defaultOffsetDocInfo << "Windows Media Player encountered a problem while downloading the playlist. For additional assistance, click Web Help." << endl;
        break;
        case NS_E_WMPCORE_FAILED_TO_BUILD_PLAYLIST:
        cout << Utils::defaultOffset << "NS_E_WMPCORE_FAILED_TO_BUILD_PLAYLIST" << endl;
        cout << Utils::defaultOffsetDocInfo << "Failed to build the playlist." << endl;
        break;
        case NS_E_WMPCORE_PLAYLIST_ITEM_ALTERNATE_NONE:
        cout << Utils::defaultOffset << "NS_E_WMPCORE_PLAYLIST_ITEM_ALTERNATE_NONE" << endl;
        cout << Utils::defaultOffsetDocInfo << "Playlist has no alternates to switch into." << endl;
        break;
        case NS_E_WMPCORE_PLAYLIST_ITEM_ALTERNATE_EXHAUSTED:
        cout << Utils::defaultOffset << "NS_E_WMPCORE_PLAYLIST_ITEM_ALTERNATE_EXHAUSTED" << endl;
        cout << Utils::defaultOffsetDocInfo << "No more playlist alternates available to switch to." << endl;
        break;
        case NS_E_WMPCORE_PLAYLIST_ITEM_ALTERNATE_NAME_NOT_FOUND:
        cout << Utils::defaultOffset << "NS_E_WMPCORE_PLAYLIST_ITEM_ALTERNATE_NAME_NOT_FOUND" << endl;
        cout << Utils::defaultOffsetDocInfo << "Could not find the name of the alternate playlist to switch into." << endl;
        break;
        case NS_E_WMPCORE_PLAYLIST_ITEM_ALTERNATE_MORPH_FAILED:
        cout << Utils::defaultOffset << "NS_E_WMPCORE_PLAYLIST_ITEM_ALTERNATE_MORPH_FAILED" << endl;
        cout << Utils::defaultOffsetDocInfo << "Failed to switch to an alternate for this media." << endl;
        break;
        case NS_E_WMPCORE_PLAYLIST_ITEM_ALTERNATE_INIT_FAILED:
        cout << Utils::defaultOffset << "NS_E_WMPCORE_PLAYLIST_ITEM_ALTERNATE_INIT_FAILED" << endl;
        cout << Utils::defaultOffsetDocInfo << "Failed to initialize an alternate for the media." << endl;
        break;
        case NS_E_WMPCORE_MEDIA_ALTERNATE_REF_EMPTY:
        cout << Utils::defaultOffset << "NS_E_WMPCORE_MEDIA_ALTERNATE_REF_EMPTY" << endl;
        cout << Utils::defaultOffsetDocInfo << "No URL specified for the roll over Refs in the playlist file." << endl;
        break;
        case NS_E_WMPCORE_PLAYLIST_NO_EVENT_NAME:
        cout << Utils::defaultOffset << "NS_E_WMPCORE_PLAYLIST_NO_EVENT_NAME" << endl;
        cout << Utils::defaultOffsetDocInfo << "Encountered a playlist with no name." << endl;
        break;
        case NS_E_WMPCORE_PLAYLIST_EVENT_ATTRIBUTE_ABSENT:
        cout << Utils::defaultOffset << "NS_E_WMPCORE_PLAYLIST_EVENT_ATTRIBUTE_ABSENT" << endl;
        cout << Utils::defaultOffsetDocInfo << "A required attribute in the event block of the playlist was not found." << endl;
        break;
        case NS_E_WMPCORE_PLAYLIST_EVENT_EMPTY:
        cout << Utils::defaultOffset << "NS_E_WMPCORE_PLAYLIST_EVENT_EMPTY" << endl;
        cout << Utils::defaultOffsetDocInfo << "No items were found in the event block of the playlist." << endl;
        break;
        case NS_E_WMPCORE_PLAYLIST_STACK_EMPTY:
        cout << Utils::defaultOffset << "NS_E_WMPCORE_PLAYLIST_STACK_EMPTY" << endl;
        cout << Utils::defaultOffsetDocInfo << "No playlist was found while returning from a nested playlist." << endl;
        break;
        case NS_E_WMPCORE_CURRENT_MEDIA_NOT_ACTIVE:
        cout << Utils::defaultOffset << "NS_E_WMPCORE_CURRENT_MEDIA_NOT_ACTIVE" << endl;
        cout << Utils::defaultOffsetDocInfo << "The media item is not active currently." << endl;
        break;
        case NS_E_WMPCORE_USER_CANCEL:
        cout << Utils::defaultOffset << "NS_E_WMPCORE_USER_CANCEL" << endl;
        cout << Utils::defaultOffsetDocInfo << "Windows Media Player cannot perform the requested action because you chose to cancel it." << endl;
        break;
        case NS_E_WMPCORE_PLAYLIST_REPEAT_EMPTY:
        cout << Utils::defaultOffset << "NS_E_WMPCORE_PLAYLIST_REPEAT_EMPTY" << endl;
        cout << Utils::defaultOffsetDocInfo << "Windows Media Player encountered a problem with the playlist. The format of the playlist is not valid." << endl;
        break;
        case NS_E_WMPCORE_PLAYLIST_REPEAT_START_MEDIA_NONE:
        cout << Utils::defaultOffset << "NS_E_WMPCORE_PLAYLIST_REPEAT_START_MEDIA_NONE" << endl;
        cout << Utils::defaultOffsetDocInfo << "Media object corresponding to start of a playlist repeat block was not found." << endl;
        break;
        case NS_E_WMPCORE_PLAYLIST_REPEAT_END_MEDIA_NONE:
        cout << Utils::defaultOffset << "NS_E_WMPCORE_PLAYLIST_REPEAT_END_MEDIA_NONE" << endl;
        cout << Utils::defaultOffsetDocInfo << "Media object corresponding to the end of a playlist repeat block was not found." << endl;
        break;
        case NS_E_WMPCORE_INVALID_PLAYLIST_URL:
        cout << Utils::defaultOffset << "NS_E_WMPCORE_INVALID_PLAYLIST_URL" << endl;
        cout << Utils::defaultOffsetDocInfo << "The playlist URL supplied to the playlist manager is not valid." << endl;
        break;
        case NS_E_WMPCORE_MISMATCHED_RUNTIME:
        cout << Utils::defaultOffset << "NS_E_WMPCORE_MISMATCHED_RUNTIME" << endl;
        cout << Utils::defaultOffsetDocInfo << "Windows Media Player cannot play the file because it is corrupted." << endl;
        break;
        case NS_E_WMPCORE_PLAYLIST_IMPORT_FAILED_NO_ITEMS:
        cout << Utils::defaultOffset << "NS_E_WMPCORE_PLAYLIST_IMPORT_FAILED_NO_ITEMS" << endl;
        cout << Utils::defaultOffsetDocInfo << "Windows Media Player cannot add the playlist to the library because the playlist does not contain any items." << endl;
        break;
        case NS_E_WMPCORE_VIDEO_TRANSFORM_FILTER_INSERTION:
        cout << Utils::defaultOffset << "NS_E_WMPCORE_VIDEO_TRANSFORM_FILTER_INSERTION" << endl;
        cout << Utils::defaultOffsetDocInfo << "An error has occurred that could prevent the changing of the video contrast on this media." << endl;
        break;
        case NS_E_WMPCORE_MEDIA_UNAVAILABLE:
        cout << Utils::defaultOffset << "NS_E_WMPCORE_MEDIA_UNAVAILABLE" << endl;
        cout << Utils::defaultOffsetDocInfo << "Windows Media Player cannot play the file. If the file is located on the Internet, connect to the Internet. If the file is located on a removable storage card, insert the storage card." << endl;
        break;
        case NS_E_WMPCORE_WMX_ENTRYREF_NO_REF:
        cout << Utils::defaultOffset << "NS_E_WMPCORE_WMX_ENTRYREF_NO_REF" << endl;
        cout << Utils::defaultOffsetDocInfo << "The playlist contains an ENTRYREF for which no href was parsed. Check the syntax of playlist file." << endl;
        break;
        case NS_E_WMPCORE_NO_PLAYABLE_MEDIA_IN_PLAYLIST:
        cout << Utils::defaultOffset << "NS_E_WMPCORE_NO_PLAYABLE_MEDIA_IN_PLAYLIST" << endl;
        cout << Utils::defaultOffsetDocInfo << "Windows Media Player cannot play any items in the playlist. To find information about the problem, click the Now Playing tab, and then click the icon next to each file in the List pane." << endl;
        break;
        case NS_E_WMPCORE_PLAYLIST_EMPTY_NESTED_PLAYLIST_SKIPPED_ITEMS:
        cout << Utils::defaultOffset << "NS_E_WMPCORE_PLAYLIST_EMPTY_NESTED_PLAYLIST_SKIPPED_ITEMS" << endl;
        cout << Utils::defaultOffsetDocInfo << "Windows Media Player cannot play some or all of the items in the playlist because the playlist is nested." << endl;
        break;
        case NS_E_WMPCORE_BUSY:
        cout << Utils::defaultOffset << "NS_E_WMPCORE_BUSY" << endl;
        cout << Utils::defaultOffsetDocInfo << "Windows Media Player cannot play the file at this time. Try again later." << endl;
        break;
        case NS_E_WMPCORE_MEDIA_CHILD_PLAYLIST_UNAVAILABLE:
        cout << Utils::defaultOffset << "NS_E_WMPCORE_MEDIA_CHILD_PLAYLIST_UNAVAILABLE" << endl;
        cout << Utils::defaultOffsetDocInfo << "There is no child playlist available for this media item at this time." << endl;
        break;
        case NS_E_WMPCORE_MEDIA_NO_CHILD_PLAYLIST:
        cout << Utils::defaultOffset << "NS_E_WMPCORE_MEDIA_NO_CHILD_PLAYLIST" << endl;
        cout << Utils::defaultOffsetDocInfo << "There is no child playlist for this media item." << endl;
        break;
        case NS_E_WMPCORE_FILE_NOT_FOUND:
        cout << Utils::defaultOffset << "NS_E_WMPCORE_FILE_NOT_FOUND" << endl;
        cout << Utils::defaultOffsetDocInfo << "Windows Media Player cannot find the file. The link from the item in the library to its associated digital media file might be broken. To fix the problem, try repairing the link or removing the item from the library." << endl;
        break;
        case NS_E_WMPCORE_TEMP_FILE_NOT_FOUND:
        cout << Utils::defaultOffset << "NS_E_WMPCORE_TEMP_FILE_NOT_FOUND" << endl;
        cout << Utils::defaultOffsetDocInfo << "The temporary file was not found." << endl;
        break;
        case NS_E_WMDM_REVOKED:
        cout << Utils::defaultOffset << "NS_E_WMDM_REVOKED" << endl;
        cout << Utils::defaultOffsetDocInfo << "Windows Media Player cannot sync the file because the device needs to be updated." << endl;
        break;
        case NS_E_DDRAW_GENERIC:
        cout << Utils::defaultOffset << "NS_E_DDRAW_GENERIC" << endl;
        cout << Utils::defaultOffsetDocInfo << "Windows Media Player cannot play the video because there is a problem with your video card." << endl;
        break;
        case NS_E_DISPLAY_MODE_CHANGE_FAILED:
        cout << Utils::defaultOffset << "NS_E_DISPLAY_MODE_CHANGE_FAILED" << endl;
        cout << Utils::defaultOffsetDocInfo << "Windows Media Player failed to change the screen mode for full-screen video playback." << endl;
        break;
        case NS_E_PLAYLIST_CONTAINS_ERRORS:
        cout << Utils::defaultOffset << "NS_E_PLAYLIST_CONTAINS_ERRORS" << endl;
        cout << Utils::defaultOffsetDocInfo << "Windows Media Player cannot play one or more files. For additional information, right-click an item that cannot be played, and then click Error Details." << endl;
        break;
        case NS_E_CHANGING_PROXY_NAME:
        cout << Utils::defaultOffset << "NS_E_CHANGING_PROXY_NAME" << endl;
        cout << Utils::defaultOffsetDocInfo << "Cannot change the proxy name if the proxy setting is not set to custom." << endl;
        break;
        case NS_E_CHANGING_PROXY_PORT:
        cout << Utils::defaultOffset << "NS_E_CHANGING_PROXY_PORT" << endl;
        cout << Utils::defaultOffsetDocInfo << "Cannot change the proxy port if the proxy setting is not set to custom." << endl;
        break;
        case NS_E_CHANGING_PROXY_EXCEPTIONLIST:
        cout << Utils::defaultOffset << "NS_E_CHANGING_PROXY_EXCEPTIONLIST" << endl;
        cout << Utils::defaultOffsetDocInfo << "Cannot change the proxy exception list if the proxy setting is not set to custom." << endl;
        break;
        case NS_E_CHANGING_PROXYBYPASS:
        cout << Utils::defaultOffset << "NS_E_CHANGING_PROXYBYPASS" << endl;
        cout << Utils::defaultOffsetDocInfo << "Cannot change the proxy bypass flag if the proxy setting is not set to custom." << endl;
        break;
        case NS_E_CHANGING_PROXY_PROTOCOL_NOT_FOUND:
        cout << Utils::defaultOffset << "NS_E_CHANGING_PROXY_PROTOCOL_NOT_FOUND" << endl;
        cout << Utils::defaultOffsetDocInfo << "Cannot find the specified protocol." << endl;
        break;
        case NS_E_GRAPH_NOAUDIOLANGUAGE:
        cout << Utils::defaultOffset << "NS_E_GRAPH_NOAUDIOLANGUAGE" << endl;
        cout << Utils::defaultOffsetDocInfo << "Cannot change the language settings. Either the graph has no audio or the audio only supports one language." << endl;
        break;
        case NS_E_GRAPH_NOAUDIOLANGUAGESELECTED:
        cout << Utils::defaultOffset << "NS_E_GRAPH_NOAUDIOLANGUAGESELECTED" << endl;
        cout << Utils::defaultOffsetDocInfo << "The graph has no audio language selected." << endl;
        break;
        case NS_E_CORECD_NOTAMEDIACD:
        cout << Utils::defaultOffset << "NS_E_CORECD_NOTAMEDIACD" << endl;
        cout << Utils::defaultOffsetDocInfo << "This is not a media CD." << endl;
        break;
        case NS_E_WMPCORE_MEDIA_URL_TOO_LONG:
        cout << Utils::defaultOffset << "NS_E_WMPCORE_MEDIA_URL_TOO_LONG" << endl;
        cout << Utils::defaultOffsetDocInfo << "Windows Media Player cannot play the file because the URL is too long." << endl;
        break;
        case NS_E_WMPFLASH_CANT_FIND_COM_SERVER:
        cout << Utils::defaultOffset << "NS_E_WMPFLASH_CANT_FIND_COM_SERVER" << endl;
        cout << Utils::defaultOffsetDocInfo << "To play the selected item, you must install the Macromedia Flash Player. To download the Macromedia Flash Player, go to the Adobe website." << endl;
        break;
        case NS_E_WMPFLASH_INCOMPATIBLEVERSION:
        cout << Utils::defaultOffset << "NS_E_WMPFLASH_INCOMPATIBLEVERSION" << endl;
        cout << Utils::defaultOffsetDocInfo << "To play the selected item, you must install a later version of the Macromedia Flash Player. To download the Macromedia Flash Player, go to the Adobe website." << endl;
        break;
        case NS_E_WMPOCXGRAPH_IE_DISALLOWS_ACTIVEX_CONTROLS:
        cout << Utils::defaultOffset << "NS_E_WMPOCXGRAPH_IE_DISALLOWS_ACTIVEX_CONTROLS" << endl;
        cout << Utils::defaultOffsetDocInfo << "Windows Media Player cannot play the file because your Internet security settings prohibit the use of ActiveX controls." << endl;
        break;
        case NS_E_NEED_CORE_REFERENCE:
        cout << Utils::defaultOffset << "NS_E_NEED_CORE_REFERENCE" << endl;
        cout << Utils::defaultOffsetDocInfo << "The use of this method requires an existing reference to the Player object." << endl;
        break;
        case NS_E_MEDIACD_READ_ERROR:
        cout << Utils::defaultOffset << "NS_E_MEDIACD_READ_ERROR" << endl;
        cout << Utils::defaultOffsetDocInfo << "Windows Media Player cannot play the CD. The disc might be dirty or damaged." << endl;
        break;
        case NS_E_IE_DISALLOWS_ACTIVEX_CONTROLS:
        cout << Utils::defaultOffset << "NS_E_IE_DISALLOWS_ACTIVEX_CONTROLS" << endl;
        cout << Utils::defaultOffsetDocInfo << "Windows Media Player cannot play the file because your Internet security settings prohibit the use of ActiveX controls." << endl;
        break;
        case NS_E_FLASH_PLAYBACK_NOT_ALLOWED:
        cout << Utils::defaultOffset << "NS_E_FLASH_PLAYBACK_NOT_ALLOWED" << endl;
        cout << Utils::defaultOffsetDocInfo << "Flash playback has been turned off in Windows Media Player." << endl;
        break;
        case NS_E_UNABLE_TO_CREATE_RIP_LOCATION:
        cout << Utils::defaultOffset << "NS_E_UNABLE_TO_CREATE_RIP_LOCATION" << endl;
        cout << Utils::defaultOffsetDocInfo << "Windows Media Player cannot rip the CD because a valid rip location cannot be created." << endl;
        break;
        case NS_E_WMPCORE_SOME_CODECS_MISSING:
        cout << Utils::defaultOffset << "NS_E_WMPCORE_SOME_CODECS_MISSING" << endl;
        cout << Utils::defaultOffsetDocInfo << "Windows Media Player cannot play the file because a required codec is not installed on your computer." << endl;
        break;
        case NS_E_WMP_RIP_FAILED:
        cout << Utils::defaultOffset << "NS_E_WMP_RIP_FAILED" << endl;
        cout << Utils::defaultOffsetDocInfo << "Windows Media Player cannot rip one or more tracks from the CD." << endl;
        break;
        case NS_E_WMP_FAILED_TO_RIP_TRACK:
        cout << Utils::defaultOffset << "NS_E_WMP_FAILED_TO_RIP_TRACK" << endl;
        cout << Utils::defaultOffsetDocInfo << "Windows Media Player encountered a problem while ripping the track from the CD. For additional assistance, click Web Help." << endl;
        break;
        case NS_E_WMP_ERASE_FAILED:
        cout << Utils::defaultOffset << "NS_E_WMP_ERASE_FAILED" << endl;
        cout << Utils::defaultOffsetDocInfo << "Windows Media Player encountered a problem while erasing the disc. For additional assistance, click Web Help." << endl;
        break;
        case NS_E_WMP_FORMAT_FAILED:
        cout << Utils::defaultOffset << "NS_E_WMP_FORMAT_FAILED" << endl;
        cout << Utils::defaultOffsetDocInfo << "Windows Media Player encountered a problem while formatting the device. For additional assistance, click Web Help." << endl;
        break;
        case NS_E_WMP_CANNOT_BURN_NON_LOCAL_FILE:
        cout << Utils::defaultOffset << "NS_E_WMP_CANNOT_BURN_NON_LOCAL_FILE" << endl;
        cout << Utils::defaultOffsetDocInfo << "This file cannot be burned to a CD because it is not located on your computer." << endl;
        break;
        case NS_E_WMP_FILE_TYPE_CANNOT_BURN_TO_AUDIO_CD:
        cout << Utils::defaultOffset << "NS_E_WMP_FILE_TYPE_CANNOT_BURN_TO_AUDIO_CD" << endl;
        cout << Utils::defaultOffsetDocInfo << "It is not possible to burn this file type to an audio CD. Windows Media Player can burn the following file types to an audio CD: WMA, MP3, or WAV." << endl;
        break;
        case NS_E_WMP_FILE_DOES_NOT_FIT_ON_CD:
        cout << Utils::defaultOffset << "NS_E_WMP_FILE_DOES_NOT_FIT_ON_CD" << endl;
        cout << Utils::defaultOffsetDocInfo << "This file is too large to fit on a disc." << endl;
        break;
        case NS_E_WMP_FILE_NO_DURATION:
        cout << Utils::defaultOffset << "NS_E_WMP_FILE_NO_DURATION" << endl;
        cout << Utils::defaultOffsetDocInfo << "It is not possible to determine if this file can fit on a disc because Windows Media Player cannot detect the length of the file. Playing the file before burning might enable the Player to detect the file length." << endl;
        break;
        case NS_E_PDA_FAILED_TO_BURN:
        cout << Utils::defaultOffset << "NS_E_PDA_FAILED_TO_BURN" << endl;
        cout << Utils::defaultOffsetDocInfo << "Windows Media Player encountered a problem while burning the file to the disc. For additional assistance, click Web Help." << endl;
        break;
        case NS_E_FAILED_DOWNLOAD_ABORT_BURN:
        cout << Utils::defaultOffset << "NS_E_FAILED_DOWNLOAD_ABORT_BURN" << endl;
        cout << Utils::defaultOffsetDocInfo << "Windows Media Player cannot burn the audio CD because some items in the list that you chose to buy could not be downloaded from the online store." << endl;
        break;
        case NS_E_WMPCORE_DEVICE_DRIVERS_MISSING:
        cout << Utils::defaultOffset << "NS_E_WMPCORE_DEVICE_DRIVERS_MISSING" << endl;
        cout << Utils::defaultOffsetDocInfo << "Windows Media Player cannot play the file. Try using Windows Update or Device Manager to update the device drivers for your audio and video cards. For information about using Windows Update or Device Manager, see Windows Help." << endl;
        break;
        case NS_E_WMPIM_USEROFFLINE:
        cout << Utils::defaultOffset << "NS_E_WMPIM_USEROFFLINE" << endl;
        cout << Utils::defaultOffsetDocInfo << "Windows Media Player has detected that you are not connected to the Internet. Connect to the Internet, and then try again." << endl;
        break;
        case NS_E_WMPIM_USERCANCELED:
        cout << Utils::defaultOffset << "NS_E_WMPIM_USERCANCELED" << endl;
        cout << Utils::defaultOffsetDocInfo << "The attempt to connect to the Internet was canceled." << endl;
        break;
        case NS_E_WMPIM_DIALUPFAILED:
        cout << Utils::defaultOffset << "NS_E_WMPIM_DIALUPFAILED" << endl;
        cout << Utils::defaultOffsetDocInfo << "The attempt to connect to the Internet failed." << endl;
        break;
        case NS_E_WINSOCK_ERROR_STRING:
        cout << Utils::defaultOffset << "NS_E_WINSOCK_ERROR_STRING" << endl;
        cout << Utils::defaultOffsetDocInfo << "Windows Media Player has encountered an unknown network error." << endl;
        break;
        case NS_E_WMPBR_NOLISTENER:
        cout << Utils::defaultOffset << "NS_E_WMPBR_NOLISTENER" << endl;
        cout << Utils::defaultOffsetDocInfo << "No window is currently listening to Backup and Restore events." << endl;
        break;
        case NS_E_WMPBR_BACKUPCANCEL:
        cout << Utils::defaultOffset << "NS_E_WMPBR_BACKUPCANCEL" << endl;
        cout << Utils::defaultOffsetDocInfo << "Your media usage rights were not backed up because the backup was canceled." << endl;
        break;
        case NS_E_WMPBR_RESTORECANCEL:
        cout << Utils::defaultOffset << "NS_E_WMPBR_RESTORECANCEL" << endl;
        cout << Utils::defaultOffsetDocInfo << "Your media usage rights were not restored because the restoration was canceled." << endl;
        break;
        case NS_E_WMPBR_ERRORWITHURL:
        cout << Utils::defaultOffset << "NS_E_WMPBR_ERRORWITHURL" << endl;
        cout << Utils::defaultOffsetDocInfo << "An error occurred while backing up or restoring your media usage rights. A required web page cannot be displayed." << endl;
        break;
        case NS_E_WMPBR_NAMECOLLISION:
        cout << Utils::defaultOffset << "NS_E_WMPBR_NAMECOLLISION" << endl;
        cout << Utils::defaultOffsetDocInfo << "Your media usage rights were not backed up because the backup was canceled." << endl;
        break;
        case NS_E_WMPBR_DRIVE_INVALID:
        cout << Utils::defaultOffset << "NS_E_WMPBR_DRIVE_INVALID" << endl;
        cout << Utils::defaultOffsetDocInfo << "Windows Media Player cannot restore your media usage rights from the specified location. Choose another location, and then try again." << endl;
        break;
        case NS_E_WMPBR_BACKUPRESTOREFAILED:
        cout << Utils::defaultOffset << "NS_E_WMPBR_BACKUPRESTOREFAILED" << endl;
        cout << Utils::defaultOffsetDocInfo << "Windows Media Player cannot backup or restore your media usage rights." << endl;
        break;
        case NS_E_WMP_CONVERT_FILE_FAILED:
        cout << Utils::defaultOffset << "NS_E_WMP_CONVERT_FILE_FAILED" << endl;
        cout << Utils::defaultOffsetDocInfo << "Windows Media Player cannot add the file to the library." << endl;
        break;
        case NS_E_WMP_CONVERT_NO_RIGHTS_ERRORURL:
        cout << Utils::defaultOffset << "NS_E_WMP_CONVERT_NO_RIGHTS_ERRORURL" << endl;
        cout << Utils::defaultOffsetDocInfo << "Windows Media Player cannot add the file to the library because the content provider prohibits it. For assistance, contact the company that provided the file." << endl;
        break;
        case NS_E_WMP_CONVERT_NO_RIGHTS_NOERRORURL:
        cout << Utils::defaultOffset << "NS_E_WMP_CONVERT_NO_RIGHTS_NOERRORURL" << endl;
        cout << Utils::defaultOffsetDocInfo << "Windows Media Player cannot add the file to the library because the content provider prohibits it. For assistance, contact the company that provided the file." << endl;
        break;
        case NS_E_WMP_CONVERT_FILE_CORRUPT:
        cout << Utils::defaultOffset << "NS_E_WMP_CONVERT_FILE_CORRUPT" << endl;
        cout << Utils::defaultOffsetDocInfo << "Windows Media Player cannot add the file to the library. The file might not be valid." << endl;
        break;
        case NS_E_WMP_CONVERT_PLUGIN_UNAVAILABLE_ERRORURL:
        cout << Utils::defaultOffset << "NS_E_WMP_CONVERT_PLUGIN_UNAVAILABLE_ERRORURL" << endl;
        cout << Utils::defaultOffsetDocInfo << "Windows Media Player cannot add the file to the library. The plug-in required to add the file is not installed properly. For assistance, click Web Help to display the website of the company that provided the file." << endl;
        break;
        case NS_E_WMP_CONVERT_PLUGIN_UNAVAILABLE_NOERRORURL:
        cout << Utils::defaultOffset << "NS_E_WMP_CONVERT_PLUGIN_UNAVAILABLE_NOERRORURL" << endl;
        cout << Utils::defaultOffsetDocInfo << "Windows Media Player cannot add the file to the library. The plug-in required to add the file is not installed properly. For assistance, contact the company that provided the file." << endl;
        break;
        case NS_E_WMP_CONVERT_PLUGIN_UNKNOWN_FILE_OWNER:
        cout << Utils::defaultOffset << "NS_E_WMP_CONVERT_PLUGIN_UNKNOWN_FILE_OWNER" << endl;
        cout << Utils::defaultOffsetDocInfo << "Windows Media Player cannot add the file to the library. The plug-in required to add the file is not installed properly. For assistance, contact the company that provided the file." << endl;
        break;
        case NS_E_DVD_DISC_COPY_PROTECT_OUTPUT_NS:
        cout << Utils::defaultOffset << "NS_E_DVD_DISC_COPY_PROTECT_OUTPUT_NS" << endl;
        cout << Utils::defaultOffsetDocInfo << "Windows Media Player cannot play this DVD. Try installing an updated driver for your video card or obtaining a newer video card." << endl;
        break;
        case NS_E_DVD_DISC_COPY_PROTECT_OUTPUT_FAILED:
        cout << Utils::defaultOffset << "NS_E_DVD_DISC_COPY_PROTECT_OUTPUT_FAILED" << endl;
        cout << Utils::defaultOffsetDocInfo << "This DVD's resolution exceeds the maximum allowed by your component video outputs. Try reducing your screen resolution to 640 x 480, or turn off analog component outputs and use a VGA connection to your monitor." << endl;
        break;
        case NS_E_DVD_NO_SUBPICTURE_STREAM:
        cout << Utils::defaultOffset << "NS_E_DVD_NO_SUBPICTURE_STREAM" << endl;
        cout << Utils::defaultOffsetDocInfo << "Windows Media Player cannot display subtitles or highlights in DVD menus. Reinstall the DVD decoder or contact the DVD drive manufacturer to obtain an updated decoder." << endl;
        break;
        case NS_E_DVD_COPY_PROTECT:
        cout << Utils::defaultOffset << "NS_E_DVD_COPY_PROTECT" << endl;
        cout << Utils::defaultOffsetDocInfo << "Windows Media Player cannot play this DVD because there is a problem with digital copy protection between your DVD drive, decoder, and video card. Try installing an updated driver for your video card." << endl;
        break;
        case NS_E_DVD_AUTHORING_PROBLEM:
        cout << Utils::defaultOffset << "NS_E_DVD_AUTHORING_PROBLEM" << endl;
        cout << Utils::defaultOffsetDocInfo << "Windows Media Player cannot play the DVD. The disc was created in a manner that the Player does not support." << endl;
        break;
        case NS_E_DVD_INVALID_DISC_REGION:
        cout << Utils::defaultOffset << "NS_E_DVD_INVALID_DISC_REGION" << endl;
        cout << Utils::defaultOffsetDocInfo << "Windows Media Player cannot play the DVD because the disc prohibits playback in your region of the world. You must obtain a disc that is intended for your geographic region." << endl;
        break;
        case NS_E_DVD_COMPATIBLE_VIDEO_CARD:
        cout << Utils::defaultOffset << "NS_E_DVD_COMPATIBLE_VIDEO_CARD" << endl;
        cout << Utils::defaultOffsetDocInfo << "Windows Media Player cannot play the DVD because your video card does not support DVD playback." << endl;
        break;
        case NS_E_DVD_MACROVISION:
        cout << Utils::defaultOffset << "NS_E_DVD_MACROVISION" << endl;
        cout << Utils::defaultOffsetDocInfo << "Windows Media Player cannot play this DVD because it is not possible to turn on analog copy protection on the output display. Try installing an updated driver for your video card." << endl;
        break;
        case NS_E_DVD_SYSTEM_DECODER_REGION:
        cout << Utils::defaultOffset << "NS_E_DVD_SYSTEM_DECODER_REGION" << endl;
        cout << Utils::defaultOffsetDocInfo << "Windows Media Player cannot play the DVD because the region assigned to your DVD drive does not match the region assigned to your DVD decoder." << endl;
        break;
        case NS_E_DVD_DISC_DECODER_REGION:
        cout << Utils::defaultOffset << "NS_E_DVD_DISC_DECODER_REGION" << endl;
        cout << Utils::defaultOffsetDocInfo << "Windows Media Player cannot play the DVD because the disc prohibits playback in your region of the world. You must obtain a disc that is intended for your geographic region." << endl;
        break;
        case NS_E_DVD_NO_VIDEO_STREAM:
        cout << Utils::defaultOffset << "NS_E_DVD_NO_VIDEO_STREAM" << endl;
        cout << Utils::defaultOffsetDocInfo << "Windows Media Player cannot play DVD video. You might need to adjust your Windows display settings. Open display settings in Control Panel, and then try lowering your screen resolution and color quality settings." << endl;
        break;
        case NS_E_DVD_NO_AUDIO_STREAM:
        cout << Utils::defaultOffset << "NS_E_DVD_NO_AUDIO_STREAM" << endl;
        cout << Utils::defaultOffsetDocInfo << "Windows Media Player cannot play DVD audio. Verify that your sound card is set up correctly, and then try again." << endl;
        break;
        case NS_E_DVD_GRAPH_BUILDING:
        cout << Utils::defaultOffset << "NS_E_DVD_GRAPH_BUILDING" << endl;
        cout << Utils::defaultOffsetDocInfo << "Windows Media Player cannot play DVD video. Close any open files and quit any other programs, and then try again. If the problem persists, restart your computer." << endl;
        break;
        case NS_E_DVD_NO_DECODER:
        cout << Utils::defaultOffset << "NS_E_DVD_NO_DECODER" << endl;
        cout << Utils::defaultOffsetDocInfo << "Windows Media Player cannot play the DVD because a compatible DVD decoder is not installed on your computer." << endl;
        break;
        case NS_E_DVD_PARENTAL:
        cout << Utils::defaultOffset << "NS_E_DVD_PARENTAL" << endl;
        cout << Utils::defaultOffsetDocInfo << "Windows Media Player cannot play the scene because it has a parental rating higher than the rating that you are authorized to view." << endl;
        break;
        case NS_E_DVD_CANNOT_JUMP:
        cout << Utils::defaultOffset << "NS_E_DVD_CANNOT_JUMP" << endl;
        cout << Utils::defaultOffsetDocInfo << "Windows Media Player cannot skip to the requested location on the DVD." << endl;
        break;
        case NS_E_DVD_DEVICE_CONTENTION:
        cout << Utils::defaultOffset << "NS_E_DVD_DEVICE_CONTENTION" << endl;
        cout << Utils::defaultOffsetDocInfo << "Windows Media Player cannot play the DVD because it is currently in use by another program. Quit the other program that is using the DVD, and then try again." << endl;
        break;
        case NS_E_DVD_NO_VIDEO_MEMORY:
        cout << Utils::defaultOffset << "NS_E_DVD_NO_VIDEO_MEMORY" << endl;
        cout << Utils::defaultOffsetDocInfo << "Windows Media Player cannot play DVD video. You might need to adjust your Windows display settings. Open display settings in Control Panel, and then try lowering your screen resolution and color quality settings." << endl;
        break;
        case NS_E_DVD_CANNOT_COPY_PROTECTED:
        cout << Utils::defaultOffset << "NS_E_DVD_CANNOT_COPY_PROTECTED" << endl;
        cout << Utils::defaultOffsetDocInfo << "Windows Media Player cannot rip the DVD because it is copy protected." << endl;
        break;
        case NS_E_DVD_REQUIRED_PROPERTY_NOT_SET:
        cout << Utils::defaultOffset << "NS_E_DVD_REQUIRED_PROPERTY_NOT_SET" << endl;
        cout << Utils::defaultOffsetDocInfo << "One of more of the required properties has not been set." << endl;
        break;
        case NS_E_DVD_INVALID_TITLE_CHAPTER:
        cout << Utils::defaultOffset << "NS_E_DVD_INVALID_TITLE_CHAPTER" << endl;
        cout << Utils::defaultOffsetDocInfo << "The specified title and/or chapter number does not exist on this DVD." << endl;
        break;
        case NS_E_NO_CD_BURNER:
        cout << Utils::defaultOffset << "NS_E_NO_CD_BURNER" << endl;
        cout << Utils::defaultOffsetDocInfo << "Windows Media Player cannot burn the files because the Player cannot find a burner. If the burner is connected properly, try using Windows Update to install the latest device driver." << endl;
        break;
        case NS_E_DEVICE_IS_NOT_READY:
        cout << Utils::defaultOffset << "NS_E_DEVICE_IS_NOT_READY" << endl;
        cout << Utils::defaultOffsetDocInfo << "Windows Media Player does not detect storage media in the selected device. Insert storage media into the device, and then try again." << endl;
        break;
        case NS_E_PDA_UNSUPPORTED_FORMAT:
        cout << Utils::defaultOffset << "NS_E_PDA_UNSUPPORTED_FORMAT" << endl;
        cout << Utils::defaultOffsetDocInfo << "Windows Media Player cannot sync this file. The Player might not support the file type." << endl;
        break;
        case NS_E_NO_PDA:
        cout << Utils::defaultOffset << "NS_E_NO_PDA" << endl;
        cout << Utils::defaultOffsetDocInfo << "Windows Media Player does not detect a portable device. Connect your portable device, and then try again." << endl;
        break;
        case NS_E_PDA_UNSPECIFIED_ERROR:
        cout << Utils::defaultOffset << "NS_E_PDA_UNSPECIFIED_ERROR" << endl;
        cout << Utils::defaultOffsetDocInfo << "Windows Media Player encountered an error while communicating with the device. The storage card on the device might be full, the device might be turned off, or the device might not allow playlists or folders to be created on it." << endl;
        break;
        case NS_E_MEMSTORAGE_BAD_DATA:
        cout << Utils::defaultOffset << "NS_E_MEMSTORAGE_BAD_DATA" << endl;
        cout << Utils::defaultOffsetDocInfo << "Windows Media Player encountered an error while burning a CD." << endl;
        break;
        case NS_E_PDA_FAIL_SELECT_DEVICE:
        cout << Utils::defaultOffset << "NS_E_PDA_FAIL_SELECT_DEVICE" << endl;
        cout << Utils::defaultOffsetDocInfo << "Windows Media Player encountered an error while communicating with a portable device or CD drive." << endl;
        break;
        case NS_E_PDA_FAIL_READ_WAVE_FILE:
        cout << Utils::defaultOffset << "NS_E_PDA_FAIL_READ_WAVE_FILE" << endl;
        cout << Utils::defaultOffsetDocInfo << "Windows Media Player cannot open the WAV file." << endl;
        break;
        case NS_E_IMAPI_LOSSOFSTREAMING:
        cout << Utils::defaultOffset << "NS_E_IMAPI_LOSSOFSTREAMING" << endl;
        cout << Utils::defaultOffsetDocInfo << "Windows Media Player failed to burn all the files to the CD. Select a slower recording speed, and then try again." << endl;
        break;
        case NS_E_PDA_DEVICE_FULL:
        cout << Utils::defaultOffset << "NS_E_PDA_DEVICE_FULL" << endl;
        cout << Utils::defaultOffsetDocInfo << "There is not enough storage space on the portable device to complete this operation. Delete some unneeded files on the portable device, and then try again." << endl;
        break;
        case NS_E_FAIL_LAUNCH_ROXIO_PLUGIN:
        cout << Utils::defaultOffset << "NS_E_FAIL_LAUNCH_ROXIO_PLUGIN" << endl;
        cout << Utils::defaultOffsetDocInfo << "Windows Media Player cannot burn the files. Verify that your burner is connected properly, and then try again. If the problem persists, reinstall the Player." << endl;
        break;
        case NS_E_PDA_DEVICE_FULL_IN_SESSION:
        cout << Utils::defaultOffset << "NS_E_PDA_DEVICE_FULL_IN_SESSION" << endl;
        cout << Utils::defaultOffsetDocInfo << "Windows Media Player did not sync some files to the device because there is not enough storage space on the device." << endl;
        break;
        case NS_E_IMAPI_MEDIUM_INVALIDTYPE:
        cout << Utils::defaultOffset << "NS_E_IMAPI_MEDIUM_INVALIDTYPE" << endl;
        cout << Utils::defaultOffsetDocInfo << "The disc in the burner is not valid. Insert a blank disc into the burner, and then try again." << endl;
        break;
        case NS_E_PDA_MANUALDEVICE:
        cout << Utils::defaultOffset << "NS_E_PDA_MANUALDEVICE" << endl;
        cout << Utils::defaultOffsetDocInfo << "Windows Media Player cannot perform the requested action because the device does not support sync." << endl;
        break;
        case NS_E_PDA_PARTNERSHIPNOTEXIST:
        cout << Utils::defaultOffset << "NS_E_PDA_PARTNERSHIPNOTEXIST" << endl;
        cout << Utils::defaultOffsetDocInfo << "To perform the requested action, you must first set up sync with the device." << endl;
        break;
        case NS_E_PDA_CANNOT_CREATE_ADDITIONAL_SYNC_RELATIONSHIP:
        cout << Utils::defaultOffset << "NS_E_PDA_CANNOT_CREATE_ADDITIONAL_SYNC_RELATIONSHIP" << endl;
        cout << Utils::defaultOffsetDocInfo << "You have already created sync partnerships with 16 devices. To create a new sync partnership, you must first end an existing partnership." << endl;
        break;
        case NS_E_PDA_NO_TRANSCODE_OF_DRM:
        cout << Utils::defaultOffset << "NS_E_PDA_NO_TRANSCODE_OF_DRM" << endl;
        cout << Utils::defaultOffsetDocInfo << "Windows Media Player cannot sync the file because protected files cannot be converted to the required quality level or file format." << endl;
        break;
        case NS_E_PDA_TRANSCODECACHEFULL:
        cout << Utils::defaultOffset << "NS_E_PDA_TRANSCODECACHEFULL" << endl;
        cout << Utils::defaultOffsetDocInfo << "The folder that stores converted files is full. Either empty the folder or increase its size, and then try again." << endl;
        break;
        case NS_E_PDA_TOO_MANY_FILE_COLLISIONS:
        cout << Utils::defaultOffset << "NS_E_PDA_TOO_MANY_FILE_COLLISIONS" << endl;
        cout << Utils::defaultOffsetDocInfo << "There are too many files with the same name in the folder on the device. Change the file name or sync to a different folder." << endl;
        break;
        case NS_E_PDA_CANNOT_TRANSCODE:
        cout << Utils::defaultOffset << "NS_E_PDA_CANNOT_TRANSCODE" << endl;
        cout << Utils::defaultOffsetDocInfo << "Windows Media Player cannot convert the file to the format required by the device." << endl;
        break;
        case NS_E_PDA_TOO_MANY_FILES_IN_DIRECTORY:
        cout << Utils::defaultOffset << "NS_E_PDA_TOO_MANY_FILES_IN_DIRECTORY" << endl;
        cout << Utils::defaultOffsetDocInfo << "You have reached the maximum number of files your device allows in a folder. If your device supports playback from subfolders, try creating subfolders on the device and storing some files in them." << endl;
        break;
        case NS_E_PROCESSINGSHOWSYNCWIZARD:
        cout << Utils::defaultOffset << "NS_E_PROCESSINGSHOWSYNCWIZARD" << endl;
        cout << Utils::defaultOffsetDocInfo << "Windows Media Player is already trying to start the Device Setup Wizard." << endl;
        break;
        case NS_E_PDA_TRANSCODE_NOT_PERMITTED:
        cout << Utils::defaultOffset << "NS_E_PDA_TRANSCODE_NOT_PERMITTED" << endl;
        cout << Utils::defaultOffsetDocInfo << "Windows Media Player cannot convert this file format. If an updated version of the codec used to compress this file is available, install it and then try to sync the file again." << endl;
        break;
        case NS_E_PDA_INITIALIZINGDEVICES:
        cout << Utils::defaultOffset << "NS_E_PDA_INITIALIZINGDEVICES" << endl;
        cout << Utils::defaultOffsetDocInfo << "Windows Media Player is busy setting up devices. Try again later." << endl;
        break;
        case NS_E_PDA_OBSOLETE_SP:
        cout << Utils::defaultOffset << "NS_E_PDA_OBSOLETE_SP" << endl;
        cout << Utils::defaultOffsetDocInfo << "Your device is using an outdated driver that is no longer supported by Windows Media Player. For additional assistance, click Web Help." << endl;
        break;
        case NS_E_PDA_TITLE_COLLISION:
        cout << Utils::defaultOffset << "NS_E_PDA_TITLE_COLLISION" << endl;
        cout << Utils::defaultOffsetDocInfo << "Windows Media Player cannot sync the file because a file with the same name already exists on the device. Change the file name or try to sync the file to a different folder." << endl;
        break;
        case NS_E_PDA_DEVICESUPPORTDISABLED:
        cout << Utils::defaultOffset << "NS_E_PDA_DEVICESUPPORTDISABLED" << endl;
        cout << Utils::defaultOffsetDocInfo << "Automatic and manual sync have been turned off temporarily. To sync to a device, restart Windows Media Player." << endl;
        break;
        case NS_E_PDA_NO_LONGER_AVAILABLE:
        cout << Utils::defaultOffset << "NS_E_PDA_NO_LONGER_AVAILABLE" << endl;
        cout << Utils::defaultOffsetDocInfo << "This device is not available. Connect the device to the computer, and then try again." << endl;
        break;
        case NS_E_PDA_ENCODER_NOT_RESPONDING:
        cout << Utils::defaultOffset << "NS_E_PDA_ENCODER_NOT_RESPONDING" << endl;
        cout << Utils::defaultOffsetDocInfo << "Windows Media Player cannot sync the file because an error occurred while converting the file to another quality level or format. If the problem persists, remove the file from the list of files to sync." << endl;
        break;
        case NS_E_PDA_CANNOT_SYNC_FROM_LOCATION:
        cout << Utils::defaultOffset << "NS_E_PDA_CANNOT_SYNC_FROM_LOCATION" << endl;
        cout << Utils::defaultOffsetDocInfo << "Windows Media Player cannot sync the file to your device. The file might be stored in a location that is not supported. Copy the file from its current location to your hard disk, add it to your library, and then try to sync the file again." << endl;
        break;
        case NS_E_WMP_PROTOCOL_PROBLEM:
        cout << Utils::defaultOffset << "NS_E_WMP_PROTOCOL_PROBLEM" << endl;
        cout << Utils::defaultOffsetDocInfo << "Windows Media Player cannot open the specified URL. Verify that the Player is configured to use all available protocols, and then try again." << endl;
        break;
        case NS_E_WMP_NO_DISK_SPACE:
        cout << Utils::defaultOffset << "NS_E_WMP_NO_DISK_SPACE" << endl;
        cout << Utils::defaultOffsetDocInfo << "Windows Media Player cannot perform the requested action because there is not enough storage space on your computer. Delete some unneeded files on your hard disk, and then try again." << endl;
        break;
        case NS_E_WMP_LOGON_FAILURE:
        cout << Utils::defaultOffset << "NS_E_WMP_LOGON_FAILURE" << endl;
        cout << Utils::defaultOffsetDocInfo << "The server denied access to the file. Verify that you are using the correct user name and password." << endl;
        break;
        case NS_E_WMP_CANNOT_FIND_FILE:
        cout << Utils::defaultOffset << "NS_E_WMP_CANNOT_FIND_FILE" << endl;
        cout << Utils::defaultOffsetDocInfo << "Windows Media Player cannot find the file. If you are trying to play, burn, or sync an item that is in your library, the item might point to a file that has been moved, renamed, or deleted." << endl;
        break;
        case NS_E_WMP_SERVER_INACCESSIBLE:
        cout << Utils::defaultOffset << "NS_E_WMP_SERVER_INACCESSIBLE" << endl;
        cout << Utils::defaultOffsetDocInfo << "Windows Media Player cannot connect to the server. The server name might not be correct, the server might not be available, or your proxy settings might not be correct." << endl;
        break;
        case NS_E_WMP_UNSUPPORTED_FORMAT:
        cout << Utils::defaultOffset << "NS_E_WMP_UNSUPPORTED_FORMAT" << endl;
        cout << Utils::defaultOffsetDocInfo << "Windows Media Player cannot play the file. The Player might not support the file type or might not support the codec that was used to compress the file." << endl;
        break;
        case NS_E_WMP_DSHOW_UNSUPPORTED_FORMAT:
        cout << Utils::defaultOffset << "NS_E_WMP_DSHOW_UNSUPPORTED_FORMAT" << endl;
        cout << Utils::defaultOffsetDocInfo << "Windows Media Player cannot play the file. The Player might not support the file type or a required codec might not be installed on your computer." << endl;
        break;
        case NS_E_WMP_PLAYLIST_EXISTS:
        cout << Utils::defaultOffset << "NS_E_WMP_PLAYLIST_EXISTS" << endl;
        cout << Utils::defaultOffsetDocInfo << "Windows Media Player cannot create the playlist because the name already exists. Type a different playlist name." << endl;
        break;
        case NS_E_WMP_NONMEDIA_FILES:
        cout << Utils::defaultOffset << "NS_E_WMP_NONMEDIA_FILES" << endl;
        cout << Utils::defaultOffsetDocInfo << "Windows Media Player cannot delete the playlist because it contains items that are not digital media files. Any digital media files in the playlist were deleted." << endl;
        break;
        case NS_E_WMP_INVALID_ASX:
        cout << Utils::defaultOffset << "NS_E_WMP_INVALID_ASX" << endl;
        cout << Utils::defaultOffsetDocInfo << "The playlist cannot be opened because it is stored in a shared folder on another computer. If possible, move the playlist to the playlists folder on your computer." << endl;
        break;
        case NS_E_WMP_ALREADY_IN_USE:
        cout << Utils::defaultOffset << "NS_E_WMP_ALREADY_IN_USE" << endl;
        cout << Utils::defaultOffsetDocInfo << "Windows Media Player is already in use. Stop playing any items, close all Player dialog boxes, and then try again." << endl;
        break;
        case NS_E_WMP_IMAPI_FAILURE:
        cout << Utils::defaultOffset << "NS_E_WMP_IMAPI_FAILURE" << endl;
        cout << Utils::defaultOffsetDocInfo << "Windows Media Player encountered an error while burning. Verify that the burner is connected properly and that the disc is clean and not damaged." << endl;
        break;
        case NS_E_WMP_WMDM_FAILURE:
        cout << Utils::defaultOffset << "NS_E_WMP_WMDM_FAILURE" << endl;
        cout << Utils::defaultOffsetDocInfo << "Windows Media Player has encountered an unknown error with your portable device. Reconnect your portable device, and then try again." << endl;
        break;
        case NS_E_WMP_CODEC_NEEDED_WITH_4CC:
        cout << Utils::defaultOffset << "NS_E_WMP_CODEC_NEEDED_WITH_4CC" << endl;
        cout << Utils::defaultOffsetDocInfo << "A codec is required to play this file. To determine if this codec is available to download from the web, click Web Help." << endl;
        break;
        case NS_E_WMP_CODEC_NEEDED_WITH_FORMATTAG:
        cout << Utils::defaultOffset << "NS_E_WMP_CODEC_NEEDED_WITH_FORMATTAG" << endl;
        cout << Utils::defaultOffsetDocInfo << "An audio codec is needed to play this file. To determine if this codec is available to download from the web, click Web Help." << endl;
        break;
        case NS_E_WMP_MSSAP_NOT_AVAILABLE:
        cout << Utils::defaultOffset << "NS_E_WMP_MSSAP_NOT_AVAILABLE" << endl;
        cout << Utils::defaultOffsetDocInfo << "To play the file, you must install the latest Windows service pack. To install the service pack from the Windows Update website, click Web Help." << endl;
        break;
        case NS_E_WMP_WMDM_INTERFACEDEAD:
        cout << Utils::defaultOffset << "NS_E_WMP_WMDM_INTERFACEDEAD" << endl;
        cout << Utils::defaultOffsetDocInfo << "Windows Media Player no longer detects a portable device. Reconnect your portable device, and then try again." << endl;
        break;
        case NS_E_WMP_WMDM_NOTCERTIFIED:
        cout << Utils::defaultOffset << "NS_E_WMP_WMDM_NOTCERTIFIED" << endl;
        cout << Utils::defaultOffsetDocInfo << "Windows Media Player cannot sync the file because the portable device does not support protected files." << endl;
        break;
        case NS_E_WMP_WMDM_LICENSE_NOTEXIST:
        cout << Utils::defaultOffset << "NS_E_WMP_WMDM_LICENSE_NOTEXIST" << endl;
        cout << Utils::defaultOffsetDocInfo << "This file does not have sync rights. If you obtained this file from an online store, go to the online store to get sync rights." << endl;
        break;
        case NS_E_WMP_WMDM_LICENSE_EXPIRED:
        cout << Utils::defaultOffset << "NS_E_WMP_WMDM_LICENSE_EXPIRED" << endl;
        cout << Utils::defaultOffsetDocInfo << "Windows Media Player cannot sync the file because the sync rights have expired. Go to the content provider's online store to get new sync rights." << endl;
        break;
        case NS_E_WMP_WMDM_BUSY:
        cout << Utils::defaultOffset << "NS_E_WMP_WMDM_BUSY" << endl;
        cout << Utils::defaultOffsetDocInfo << "The portable device is already in use. Wait until the current task finishes or quit other programs that might be using the portable device, and then try again." << endl;
        break;
        case NS_E_WMP_WMDM_NORIGHTS:
        cout << Utils::defaultOffset << "NS_E_WMP_WMDM_NORIGHTS" << endl;
        cout << Utils::defaultOffsetDocInfo << "Windows Media Player cannot sync the file because the content provider or device prohibits it. You might be able to resolve this problem by going to the content provider's online store to get sync rights." << endl;
        break;
        case NS_E_WMP_WMDM_INCORRECT_RIGHTS:
        cout << Utils::defaultOffset << "NS_E_WMP_WMDM_INCORRECT_RIGHTS" << endl;
        cout << Utils::defaultOffsetDocInfo << "The content provider has not granted you the right to sync this file. Go to the content provider's online store to get sync rights." << endl;
        break;
        case NS_E_WMP_IMAPI_GENERIC:
        cout << Utils::defaultOffset << "NS_E_WMP_IMAPI_GENERIC" << endl;
        cout << Utils::defaultOffsetDocInfo << "Windows Media Player cannot burn the files to the CD. Verify that the disc is clean and not damaged. If necessary, select a slower recording speed or try a different brand of blank discs." << endl;
        break;
        case NS_E_WMP_IMAPI_DEVICE_NOTPRESENT:
        cout << Utils::defaultOffset << "NS_E_WMP_IMAPI_DEVICE_NOTPRESENT" << endl;
        cout << Utils::defaultOffsetDocInfo << "Windows Media Player cannot burn the files. Verify that the burner is connected properly, and then try again." << endl;
        break;
        case NS_E_WMP_IMAPI_DEVICE_BUSY:
        cout << Utils::defaultOffset << "NS_E_WMP_IMAPI_DEVICE_BUSY" << endl;
        cout << Utils::defaultOffsetDocInfo << "Windows Media Player cannot burn the files. Verify that the burner is connected properly and that the disc is clean and not damaged. If the burner is already in use, wait until the current task finishes or quit other programs that might be using the burner." << endl;
        break;
        case NS_E_WMP_IMAPI_LOSS_OF_STREAMING:
        cout << Utils::defaultOffset << "NS_E_WMP_IMAPI_LOSS_OF_STREAMING" << endl;
        cout << Utils::defaultOffsetDocInfo << "Windows Media Player cannot burn the files to the CD." << endl;
        break;
        case NS_E_WMP_SERVER_UNAVAILABLE:
        cout << Utils::defaultOffset << "NS_E_WMP_SERVER_UNAVAILABLE" << endl;
        cout << Utils::defaultOffsetDocInfo << "Windows Media Player cannot play the file. The server might not be available or there might be a problem with your network or firewall settings." << endl;
        break;
        case NS_E_WMP_FILE_OPEN_FAILED:
        cout << Utils::defaultOffset << "NS_E_WMP_FILE_OPEN_FAILED" << endl;
        cout << Utils::defaultOffsetDocInfo << "Windows Media Player encountered a problem while playing the file. For additional assistance, click Web Help." << endl;
        break;
        case NS_E_WMP_VERIFY_ONLINE:
        cout << Utils::defaultOffset << "NS_E_WMP_VERIFY_ONLINE" << endl;
        cout << Utils::defaultOffsetDocInfo << "Windows Media Player must connect to the Internet to verify the file's media usage rights. Connect to the Internet, and then try again." << endl;
        break;
        case NS_E_WMP_SERVER_NOT_RESPONDING:
        cout << Utils::defaultOffset << "NS_E_WMP_SERVER_NOT_RESPONDING" << endl;
        cout << Utils::defaultOffsetDocInfo << "Windows Media Player cannot play the file because a network error occurred. The server might not be available. Verify that you are connected to the network and that your proxy settings are correct." << endl;
        break;
        case NS_E_WMP_DRM_CORRUPT_BACKUP:
        cout << Utils::defaultOffset << "NS_E_WMP_DRM_CORRUPT_BACKUP" << endl;
        cout << Utils::defaultOffsetDocInfo << "Windows Media Player cannot restore your media usage rights because it could not find any backed up rights on your computer." << endl;
        break;
        case NS_E_WMP_DRM_LICENSE_SERVER_UNAVAILABLE:
        cout << Utils::defaultOffset << "NS_E_WMP_DRM_LICENSE_SERVER_UNAVAILABLE" << endl;
        cout << Utils::defaultOffsetDocInfo << "Windows Media Player cannot download media usage rights because the server is not available (for example, the server might be busy or not online)." << endl;
        break;
        case NS_E_WMP_NETWORK_FIREWALL:
        cout << Utils::defaultOffset << "NS_E_WMP_NETWORK_FIREWALL" << endl;
        cout << Utils::defaultOffsetDocInfo << "Windows Media Player cannot play the file. A network firewall might be preventing the Player from opening the file by using the UDP transport protocol. If you typed a URL in the Open URL dialog box, try using a different transport protocol (for example, \"http:\")." << endl;
        break;
        case NS_E_WMP_NO_REMOVABLE_MEDIA:
        cout << Utils::defaultOffset << "NS_E_WMP_NO_REMOVABLE_MEDIA" << endl;
        cout << Utils::defaultOffsetDocInfo << "Insert the removable media, and then try again." << endl;
        break;
        case NS_E_WMP_PROXY_CONNECT_TIMEOUT:
        cout << Utils::defaultOffset << "NS_E_WMP_PROXY_CONNECT_TIMEOUT" << endl;
        cout << Utils::defaultOffsetDocInfo << "Windows Media Player cannot play the file because the proxy server is not responding. The proxy server might be temporarily unavailable or your Player proxy settings might not be valid." << endl;
        break;
        case NS_E_WMP_NEED_UPGRADE:
        cout << Utils::defaultOffset << "NS_E_WMP_NEED_UPGRADE" << endl;
        cout << Utils::defaultOffsetDocInfo << "To play the file, you might need to install a later version of Windows Media Player. On the Help menu, click Check for Updates, and then follow the instructions. For additional assistance, click Web Help." << endl;
        break;
        case NS_E_WMP_AUDIO_HW_PROBLEM:
        cout << Utils::defaultOffset << "NS_E_WMP_AUDIO_HW_PROBLEM" << endl;
        cout << Utils::defaultOffsetDocInfo << "Windows Media Player cannot play the file because there is a problem with your sound device. There might not be a sound device installed on your computer, it might be in use by another program, or it might not be functioning properly." << endl;
        break;
        case NS_E_WMP_INVALID_PROTOCOL:
        cout << Utils::defaultOffset << "NS_E_WMP_INVALID_PROTOCOL" << endl;
        cout << Utils::defaultOffsetDocInfo << "Windows Media Player cannot play the file because the specified protocol is not supported. If you typed a URL in the Open URL dialog box, try using a different transport protocol (for example, \"http:\" or \"rtsp:\")." << endl;
        break;
        case NS_E_WMP_INVALID_LIBRARY_ADD:
        cout << Utils::defaultOffset << "NS_E_WMP_INVALID_LIBRARY_ADD" << endl;
        cout << Utils::defaultOffsetDocInfo << "Windows Media Player cannot add the file to the library because the file format is not supported." << endl;
        break;
        case NS_E_WMP_MMS_NOT_SUPPORTED:
        cout << Utils::defaultOffset << "NS_E_WMP_MMS_NOT_SUPPORTED" << endl;
        cout << Utils::defaultOffsetDocInfo << "Windows Media Player cannot play the file because the specified protocol is not supported. If you typed a URL in the Open URL dialog box, try using a different transport protocol (for example, \"mms:\")." << endl;
        break;
        case NS_E_WMP_NO_PROTOCOLS_SELECTED:
        cout << Utils::defaultOffset << "NS_E_WMP_NO_PROTOCOLS_SELECTED" << endl;
        cout << Utils::defaultOffsetDocInfo << "Windows Media Player cannot play the file because there are no streaming protocols selected. Select one or more protocols, and then try again." << endl;
        break;
        case NS_E_WMP_GOFULLSCREEN_FAILED:
        cout << Utils::defaultOffset << "NS_E_WMP_GOFULLSCREEN_FAILED" << endl;
        cout << Utils::defaultOffsetDocInfo << "Windows Media Player cannot switch to Full Screen. You might need to adjust your Windows display settings. Open display settings in Control Panel, and then try setting Hardware acceleration to Full." << endl;
        break;
        case NS_E_WMP_NETWORK_ERROR:
        cout << Utils::defaultOffset << "NS_E_WMP_NETWORK_ERROR" << endl;
        cout << Utils::defaultOffsetDocInfo << "Windows Media Player cannot play the file because a network error occurred. The server might not be available (for example, the server is busy or not online) or you might not be connected to the network." << endl;
        break;
        case NS_E_WMP_CONNECT_TIMEOUT:
        cout << Utils::defaultOffset << "NS_E_WMP_CONNECT_TIMEOUT" << endl;
        cout << Utils::defaultOffsetDocInfo << "Windows Media Player cannot play the file because the server is not responding. Verify that you are connected to the network, and then try again later." << endl;
        break;
        case NS_E_WMP_MULTICAST_DISABLED:
        cout << Utils::defaultOffset << "NS_E_WMP_MULTICAST_DISABLED" << endl;
        cout << Utils::defaultOffsetDocInfo << "Windows Media Player cannot play the file because the multicast protocol is not enabled. On the Tools menu, click Options, click the Network tab, and then select the Multicast check box. For additional assistance, click Web Help." << endl;
        break;
        case NS_E_WMP_SERVER_DNS_TIMEOUT:
        cout << Utils::defaultOffset << "NS_E_WMP_SERVER_DNS_TIMEOUT" << endl;
        cout << Utils::defaultOffsetDocInfo << "Windows Media Player cannot play the file because a network problem occurred. Verify that you are connected to the network, and then try again later." << endl;
        break;
        case NS_E_WMP_PROXY_NOT_FOUND:
        cout << Utils::defaultOffset << "NS_E_WMP_PROXY_NOT_FOUND" << endl;
        cout << Utils::defaultOffsetDocInfo << "Windows Media Player cannot play the file because the network proxy server cannot be found. Verify that your proxy settings are correct, and then try again." << endl;
        break;
        case NS_E_WMP_TAMPERED_CONTENT:
        cout << Utils::defaultOffset << "NS_E_WMP_TAMPERED_CONTENT" << endl;
        cout << Utils::defaultOffsetDocInfo << "Windows Media Player cannot play the file because it is corrupted." << endl;
        break;
        case NS_E_WMP_OUTOFMEMORY:
        cout << Utils::defaultOffset << "NS_E_WMP_OUTOFMEMORY" << endl;
        cout << Utils::defaultOffsetDocInfo << "Your computer is running low on memory. Quit other programs, and then try again." << endl;
        break;
        case NS_E_WMP_AUDIO_CODEC_NOT_INSTALLED:
        cout << Utils::defaultOffset << "NS_E_WMP_AUDIO_CODEC_NOT_INSTALLED" << endl;
        cout << Utils::defaultOffsetDocInfo << "Windows Media Player cannot play, burn, rip, or sync the file because a required audio codec is not installed on your computer." << endl;
        break;
        case NS_E_WMP_VIDEO_CODEC_NOT_INSTALLED:
        cout << Utils::defaultOffset << "NS_E_WMP_VIDEO_CODEC_NOT_INSTALLED" << endl;
        cout << Utils::defaultOffsetDocInfo << "Windows Media Player cannot play the file because the required video codec is not installed on your computer." << endl;
        break;
        case NS_E_WMP_IMAPI_DEVICE_INVALIDTYPE:
        cout << Utils::defaultOffset << "NS_E_WMP_IMAPI_DEVICE_INVALIDTYPE" << endl;
        cout << Utils::defaultOffsetDocInfo << "Windows Media Player cannot burn the files. If the burner is busy, wait for the current task to finish. If necessary, verify that the burner is connected properly and that you have installed the latest device driver." << endl;
        break;
        case NS_E_WMP_DRM_DRIVER_AUTH_FAILURE:
        cout << Utils::defaultOffset << "NS_E_WMP_DRM_DRIVER_AUTH_FAILURE" << endl;
        cout << Utils::defaultOffsetDocInfo << "Windows Media Player cannot play the protected file because there is a problem with your sound device. Try installing a new device driver or use a different sound device." << endl;
        break;
        case NS_E_WMP_NETWORK_RESOURCE_FAILURE:
        cout << Utils::defaultOffset << "NS_E_WMP_NETWORK_RESOURCE_FAILURE" << endl;
        cout << Utils::defaultOffsetDocInfo << "Windows Media Player encountered a network error. Restart the Player." << endl;
        break;
        case NS_E_WMP_UPGRADE_APPLICATION:
        cout << Utils::defaultOffset << "NS_E_WMP_UPGRADE_APPLICATION" << endl;
        cout << Utils::defaultOffsetDocInfo << "Windows Media Player is not installed properly. Reinstall the Player." << endl;
        break;
        case NS_E_WMP_UNKNOWN_ERROR:
        cout << Utils::defaultOffset << "NS_E_WMP_UNKNOWN_ERROR" << endl;
        cout << Utils::defaultOffsetDocInfo << "Windows Media Player encountered an unknown error. For additional assistance, click Web Help." << endl;
        break;
        case NS_E_WMP_INVALID_KEY:
        cout << Utils::defaultOffset << "NS_E_WMP_INVALID_KEY" << endl;
        cout << Utils::defaultOffsetDocInfo << "Windows Media Player cannot play the file because the required codec is not valid." << endl;
        break;
        case NS_E_WMP_CD_ANOTHER_USER:
        cout << Utils::defaultOffset << "NS_E_WMP_CD_ANOTHER_USER" << endl;
        cout << Utils::defaultOffsetDocInfo << "The CD drive is in use by another user. Wait for the task to complete, and then try again." << endl;
        break;
        case NS_E_WMP_DRM_NEEDS_AUTHORIZATION:
        cout << Utils::defaultOffset << "NS_E_WMP_DRM_NEEDS_AUTHORIZATION" << endl;
        cout << Utils::defaultOffsetDocInfo << "Windows Media Player cannot play, sync, or burn the protected file because a problem occurred with the Windows Media Digital Rights Management (DRM) system. You might need to connect to the Internet to update your DRM components. For additional assistance, click Web Help." << endl;
        break;
        case NS_E_WMP_BAD_DRIVER:
        cout << Utils::defaultOffset << "NS_E_WMP_BAD_DRIVER" << endl;
        cout << Utils::defaultOffsetDocInfo << "Windows Media Player cannot play the file because there might be a problem with your sound or video device. Try installing an updated device driver." << endl;
        break;
        case NS_E_WMP_ACCESS_DENIED:
        cout << Utils::defaultOffset << "NS_E_WMP_ACCESS_DENIED" << endl;
        cout << Utils::defaultOffsetDocInfo << "Windows Media Player cannot access the file. The file might be in use, you might not have access to the computer where the file is stored, or your proxy settings might not be correct." << endl;
        break;
        case NS_E_WMP_LICENSE_RESTRICTS:
        cout << Utils::defaultOffset << "NS_E_WMP_LICENSE_RESTRICTS" << endl;
        cout << Utils::defaultOffsetDocInfo << "The content provider prohibits this action. Go to the content provider's online store to get new media usage rights." << endl;
        break;
        case NS_E_WMP_INVALID_REQUEST:
        cout << Utils::defaultOffset << "NS_E_WMP_INVALID_REQUEST" << endl;
        cout << Utils::defaultOffsetDocInfo << "Windows Media Player cannot perform the requested action at this time." << endl;
        break;
        case NS_E_WMP_CD_STASH_NO_SPACE:
        cout << Utils::defaultOffset << "NS_E_WMP_CD_STASH_NO_SPACE" << endl;
        cout << Utils::defaultOffsetDocInfo << "Windows Media Player cannot burn the files because there is not enough free disk space to store the temporary files. Delete some unneeded files on your hard disk, and then try again." << endl;
        break;
        case NS_E_WMP_DRM_NEW_HARDWARE:
        cout << Utils::defaultOffset << "NS_E_WMP_DRM_NEW_HARDWARE" << endl;
        cout << Utils::defaultOffsetDocInfo << "Your media usage rights have become corrupted or are no longer valid. This might happen if you have replaced hardware components in your computer." << endl;
        break;
        case NS_E_WMP_DRM_INVALID_SIG:
        cout << Utils::defaultOffset << "NS_E_WMP_DRM_INVALID_SIG" << endl;
        cout << Utils::defaultOffsetDocInfo << "The required Windows Media Digital Rights Management (DRM) component cannot be validated. You might be able resolve the problem by reinstalling the Player." << endl;
        break;
        case NS_E_WMP_DRM_CANNOT_RESTORE:
        cout << Utils::defaultOffset << "NS_E_WMP_DRM_CANNOT_RESTORE" << endl;
        cout << Utils::defaultOffsetDocInfo << "You have exceeded your restore limit for the day. Try restoring your media usage rights tomorrow." << endl;
        break;
        case NS_E_WMP_BURN_DISC_OVERFLOW:
        cout << Utils::defaultOffset << "NS_E_WMP_BURN_DISC_OVERFLOW" << endl;
        cout << Utils::defaultOffsetDocInfo << "Some files might not fit on the CD. The required space cannot be calculated accurately because some files might be missing duration information. To ensure the calculation is accurate, play the files that are missing duration information." << endl;
        break;
        case NS_E_WMP_DRM_GENERIC_LICENSE_FAILURE:
        cout << Utils::defaultOffset << "NS_E_WMP_DRM_GENERIC_LICENSE_FAILURE" << endl;
        cout << Utils::defaultOffsetDocInfo << "Windows Media Player cannot verify the file's media usage rights. If you obtained this file from an online store, go to the online store to get the necessary rights." << endl;
        break;
        case NS_E_WMP_DRM_NO_SECURE_CLOCK:
        cout << Utils::defaultOffset << "NS_E_WMP_DRM_NO_SECURE_CLOCK" << endl;
        cout << Utils::defaultOffsetDocInfo << "It is not possible to sync because this device's internal clock is not set correctly. To set the clock, select the option to set the device clock on the Privacy tab of the Options dialog box, connect to the Internet, and then sync the device again. For additional assistance, click Web Help." << endl;
        break;
        case NS_E_WMP_DRM_NO_RIGHTS:
        cout << Utils::defaultOffset << "NS_E_WMP_DRM_NO_RIGHTS" << endl;
        cout << Utils::defaultOffsetDocInfo << "Windows Media Player cannot play, burn, rip, or sync the protected file because you do not have the appropriate rights." << endl;
        break;
        case NS_E_WMP_DRM_INDIV_FAILED:
        cout << Utils::defaultOffset << "NS_E_WMP_DRM_INDIV_FAILED" << endl;
        cout << Utils::defaultOffsetDocInfo << "Windows Media Player encountered an error during upgrade." << endl;
        break;
        case NS_E_WMP_SERVER_NONEWCONNECTIONS:
        cout << Utils::defaultOffset << "NS_E_WMP_SERVER_NONEWCONNECTIONS" << endl;
        cout << Utils::defaultOffsetDocInfo << "Windows Media Player cannot connect to the server because it is not accepting any new connections. This could be because it has reached its maximum connection limit. Please try again later." << endl;
        break;
        case NS_E_WMP_MULTIPLE_ERROR_IN_PLAYLIST:
        cout << Utils::defaultOffset << "NS_E_WMP_MULTIPLE_ERROR_IN_PLAYLIST" << endl;
        cout << Utils::defaultOffsetDocInfo << "A number of queued files cannot be played. To find information about the problem, click the Now Playing tab, and then click the icon next to each file in the List pane." << endl;
        break;
        case NS_E_WMP_IMAPI2_ERASE_FAIL:
        cout << Utils::defaultOffset << "NS_E_WMP_IMAPI2_ERASE_FAIL" << endl;
        cout << Utils::defaultOffsetDocInfo << "Windows Media Player encountered an error while erasing the rewritable CD or DVD. Verify that the CD or DVD burner is connected properly and that the disc is clean and not damaged." << endl;
        break;
        case NS_E_WMP_IMAPI2_ERASE_DEVICE_BUSY:
        cout << Utils::defaultOffset << "NS_E_WMP_IMAPI2_ERASE_DEVICE_BUSY" << endl;
        cout << Utils::defaultOffsetDocInfo << "Windows Media Player cannot erase the rewritable CD or DVD. Verify that the CD or DVD burner is connected properly and that the disc is clean and not damaged. If the burner is already in use, wait until the current task finishes or quit other programs that might be using the burner." << endl;
        break;
        case NS_E_WMP_DRM_COMPONENT_FAILURE:
        cout << Utils::defaultOffset << "NS_E_WMP_DRM_COMPONENT_FAILURE" << endl;
        cout << Utils::defaultOffsetDocInfo << "A Windows Media Digital Rights Management (DRM) component encountered a problem. If you are trying to use a file that you obtained from an online store, try going to the online store and getting the appropriate usage rights." << endl;
        break;
        case NS_E_WMP_DRM_NO_DEVICE_CERT:
        cout << Utils::defaultOffset << "NS_E_WMP_DRM_NO_DEVICE_CERT" << endl;
        cout << Utils::defaultOffsetDocInfo << "It is not possible to obtain device's certificate. Please contact the device manufacturer for a firmware update or for other steps to resolve this problem." << endl;
        break;
        case NS_E_WMP_SERVER_SECURITY_ERROR:
        cout << Utils::defaultOffset << "NS_E_WMP_SERVER_SECURITY_ERROR" << endl;
        cout << Utils::defaultOffsetDocInfo << "Windows Media Player encountered an error when connecting to the server. The security information from the server could not be validated." << endl;
        break;
        case NS_E_WMP_AUDIO_DEVICE_LOST:
        cout << Utils::defaultOffset << "NS_E_WMP_AUDIO_DEVICE_LOST" << endl;
        cout << Utils::defaultOffsetDocInfo << "An audio device was disconnected or reconfigured. Verify that the audio device is connected, and then try to play the item again." << endl;
        break;
        case NS_E_WMP_IMAPI_MEDIA_INCOMPATIBLE:
        cout << Utils::defaultOffset << "NS_E_WMP_IMAPI_MEDIA_INCOMPATIBLE" << endl;
        cout << Utils::defaultOffsetDocInfo << "Windows Media Player could not complete burning because the disc is not compatible with your drive. Try inserting a different kind of recordable media or use a disc that supports a write speed that is compatible with your drive." << endl;
        break;
        case NS_E_SYNCWIZ_DEVICE_FULL:
        cout << Utils::defaultOffset << "NS_E_SYNCWIZ_DEVICE_FULL" << endl;
        cout << Utils::defaultOffsetDocInfo << "Windows Media Player cannot save the sync settings because your device is full. Delete some unneeded files on your device and then try again." << endl;
        break;
        case NS_E_SYNCWIZ_CANNOT_CHANGE_SETTINGS:
        cout << Utils::defaultOffset << "NS_E_SYNCWIZ_CANNOT_CHANGE_SETTINGS" << endl;
        cout << Utils::defaultOffsetDocInfo << "It is not possible to change sync settings at this time. Try again later." << endl;
        break;
        case NS_E_TRANSCODE_DELETECACHEERROR:
        cout << Utils::defaultOffset << "NS_E_TRANSCODE_DELETECACHEERROR" << endl;
        cout << Utils::defaultOffsetDocInfo << "Windows Media Player cannot delete these files currently. If the Player is synchronizing, wait until it is complete and then try again." << endl;
        break;
        case NS_E_CD_NO_BUFFERS_READ:
        cout << Utils::defaultOffset << "NS_E_CD_NO_BUFFERS_READ" << endl;
        cout << Utils::defaultOffsetDocInfo << "Windows Media Player could not use digital mode to read the CD. The Player has automatically switched the CD drive to analog mode. To switch back to digital mode, use the Devices tab. For additional assistance, click Web Help." << endl;
        break;
        case NS_E_CD_EMPTY_TRACK_QUEUE:
        cout << Utils::defaultOffset << "NS_E_CD_EMPTY_TRACK_QUEUE" << endl;
        cout << Utils::defaultOffsetDocInfo << "No CD track was specified for playback." << endl;
        break;
        case NS_E_CD_NO_READER:
        cout << Utils::defaultOffset << "NS_E_CD_NO_READER" << endl;
        cout << Utils::defaultOffsetDocInfo << "The CD filter was not able to create the CD reader." << endl;
        break;
        case NS_E_CD_ISRC_INVALID:
        cout << Utils::defaultOffset << "NS_E_CD_ISRC_INVALID" << endl;
        cout << Utils::defaultOffsetDocInfo << "Invalid ISRC code." << endl;
        break;
        case NS_E_CD_MEDIA_CATALOG_NUMBER_INVALID:
        cout << Utils::defaultOffset << "NS_E_CD_MEDIA_CATALOG_NUMBER_INVALID" << endl;
        cout << Utils::defaultOffsetDocInfo << "Invalid Media Catalog Number." << endl;
        break;
        case NS_E_SLOW_READ_DIGITAL_WITH_ERRORCORRECTION:
        cout << Utils::defaultOffset << "NS_E_SLOW_READ_DIGITAL_WITH_ERRORCORRECTION" << endl;
        cout << Utils::defaultOffsetDocInfo << "Windows Media Player cannot play audio CDs correctly because the CD drive is slow and error correction is turned on. To increase performance, turn off playback error correction for this drive." << endl;
        break;
        case NS_E_CD_SPEEDDETECT_NOT_ENOUGH_READS:
        cout << Utils::defaultOffset << "NS_E_CD_SPEEDDETECT_NOT_ENOUGH_READS" << endl;
        cout << Utils::defaultOffsetDocInfo << "Windows Media Player cannot estimate the CD drive's playback speed because the CD track is too short." << endl;
        break;
        case NS_E_CD_QUEUEING_DISABLED:
        cout << Utils::defaultOffset << "NS_E_CD_QUEUEING_DISABLED" << endl;
        cout << Utils::defaultOffsetDocInfo << "Cannot queue the CD track because queuing is not enabled." << endl;
        break;
        case NS_E_WMP_DRM_ACQUIRING_LICENSE:
        cout << Utils::defaultOffset << "NS_E_WMP_DRM_ACQUIRING_LICENSE" << endl;
        cout << Utils::defaultOffsetDocInfo << "Windows Media Player cannot download additional media usage rights until the current download is complete." << endl;
        break;
        case NS_E_WMP_DRM_LICENSE_EXPIRED:
        cout << Utils::defaultOffset << "NS_E_WMP_DRM_LICENSE_EXPIRED" << endl;
        cout << Utils::defaultOffsetDocInfo << "The media usage rights for this file have expired or are no longer valid. If you obtained the file from an online store, sign in to the store, and then try again." << endl;
        break;
        case NS_E_WMP_DRM_LICENSE_NOTACQUIRED:
        cout << Utils::defaultOffset << "NS_E_WMP_DRM_LICENSE_NOTACQUIRED" << endl;
        cout << Utils::defaultOffsetDocInfo << "Windows Media Player cannot download the media usage rights for the file. If you obtained the file from an online store, sign in to the store, and then try again." << endl;
        break;
        case NS_E_WMP_DRM_LICENSE_NOTENABLED:
        cout << Utils::defaultOffset << "NS_E_WMP_DRM_LICENSE_NOTENABLED" << endl;
        cout << Utils::defaultOffsetDocInfo << "The media usage rights for this file are not yet valid. To see when they will become valid, right-click the file in the library, click Properties, and then click the Media Usage Rights tab." << endl;
        break;
        case NS_E_WMP_DRM_LICENSE_UNUSABLE:
        cout << Utils::defaultOffset << "NS_E_WMP_DRM_LICENSE_UNUSABLE" << endl;
        cout << Utils::defaultOffsetDocInfo << "The media usage rights for this file are not valid. If you obtained this file from an online store, contact the store for assistance." << endl;
        break;
        case NS_E_WMP_DRM_LICENSE_CONTENT_REVOKED:
        cout << Utils::defaultOffset << "NS_E_WMP_DRM_LICENSE_CONTENT_REVOKED" << endl;
        cout << Utils::defaultOffsetDocInfo << "The content provider has revoked the media usage rights for this file. If you obtained this file from an online store, ask the store if a new version of the file is available." << endl;
        break;
        case NS_E_WMP_DRM_LICENSE_NOSAP:
        cout << Utils::defaultOffset << "NS_E_WMP_DRM_LICENSE_NOSAP" << endl;
        cout << Utils::defaultOffsetDocInfo << "The media usage rights for this file require a feature that is not supported in your current version of Windows Media Player or your current version of Windows. Try installing the latest version of the Player. If you obtained this file from an online store, contact the store for further assistance." << endl;
        break;
        case NS_E_WMP_DRM_UNABLE_TO_ACQUIRE_LICENSE:
        cout << Utils::defaultOffset << "NS_E_WMP_DRM_UNABLE_TO_ACQUIRE_LICENSE" << endl;
        cout << Utils::defaultOffsetDocInfo << "Windows Media Player cannot download media usage rights at this time. Try again later." << endl;
        break;
        case NS_E_WMP_LICENSE_REQUIRED:
        cout << Utils::defaultOffset << "NS_E_WMP_LICENSE_REQUIRED" << endl;
        cout << Utils::defaultOffsetDocInfo << "Windows Media Player cannot play, burn, or sync the file because the media usage rights are missing. If you obtained the file from an online store, sign in to the store, and then try again." << endl;
        break;
        case NS_E_WMP_PROTECTED_CONTENT:
        cout << Utils::defaultOffset << "NS_E_WMP_PROTECTED_CONTENT" << endl;
        cout << Utils::defaultOffsetDocInfo << "Windows Media Player cannot play, burn, or sync the file because the media usage rights are missing. If you obtained the file from an online store, sign in to the store, and then try again." << endl;
        break;
        case NS_E_WMP_POLICY_VALUE_NOT_CONFIGURED:
        cout << Utils::defaultOffset << "NS_E_WMP_POLICY_VALUE_NOT_CONFIGURED" << endl;
        cout << Utils::defaultOffsetDocInfo << "Windows Media Player cannot read a policy. This can occur when the policy does not exist in the registry or when the registry cannot be read." << endl;
        break;
        case NS_E_PDA_CANNOT_SYNC_FROM_INTERNET:
        cout << Utils::defaultOffset << "NS_E_PDA_CANNOT_SYNC_FROM_INTERNET" << endl;
        cout << Utils::defaultOffsetDocInfo << "Windows Media Player cannot sync content streamed directly from the Internet. If possible, download the file to your computer, and then try to sync the file." << endl;
        break;
        case NS_E_PDA_CANNOT_SYNC_INVALID_PLAYLIST:
        cout << Utils::defaultOffset << "NS_E_PDA_CANNOT_SYNC_INVALID_PLAYLIST" << endl;
        cout << Utils::defaultOffsetDocInfo << "This playlist is not valid or is corrupted. Create a new playlist using Windows Media Player, then sync the new playlist instead." << endl;
        break;
        case NS_E_PDA_FAILED_TO_SYNCHRONIZE_FILE:
        cout << Utils::defaultOffset << "NS_E_PDA_FAILED_TO_SYNCHRONIZE_FILE" << endl;
        cout << Utils::defaultOffsetDocInfo << "Windows Media Player encountered a problem while synchronizing the file to the device. For additional assistance, click Web Help." << endl;
        break;
        case NS_E_PDA_SYNC_FAILED:
        cout << Utils::defaultOffset << "NS_E_PDA_SYNC_FAILED" << endl;
        cout << Utils::defaultOffsetDocInfo << "Windows Media Player encountered an error while synchronizing to the device." << endl;
        break;
        case NS_E_PDA_DELETE_FAILED:
        cout << Utils::defaultOffset << "NS_E_PDA_DELETE_FAILED" << endl;
        cout << Utils::defaultOffsetDocInfo << "Windows Media Player cannot delete a file from the device." << endl;
        break;
        case NS_E_PDA_FAILED_TO_RETRIEVE_FILE:
        cout << Utils::defaultOffset << "NS_E_PDA_FAILED_TO_RETRIEVE_FILE" << endl;
        cout << Utils::defaultOffsetDocInfo << "Windows Media Player cannot copy a file from the device to your library." << endl;
        break;
        case NS_E_PDA_DEVICE_NOT_RESPONDING:
        cout << Utils::defaultOffset << "NS_E_PDA_DEVICE_NOT_RESPONDING" << endl;
        cout << Utils::defaultOffsetDocInfo << "Windows Media Player cannot communicate with the device because the device is not responding. Try reconnecting the device, resetting the device, or contacting the device manufacturer for updated firmware." << endl;
        break;
        case NS_E_PDA_FAILED_TO_TRANSCODE_PHOTO:
        cout << Utils::defaultOffset << "NS_E_PDA_FAILED_TO_TRANSCODE_PHOTO" << endl;
        cout << Utils::defaultOffsetDocInfo << "Windows Media Player cannot sync the picture to the device because a problem occurred while converting the file to another quality level or format. The original file might be damaged or corrupted." << endl;
        break;
        case NS_E_PDA_FAILED_TO_ENCRYPT_TRANSCODED_FILE:
        cout << Utils::defaultOffset << "NS_E_PDA_FAILED_TO_ENCRYPT_TRANSCODED_FILE" << endl;
        cout << Utils::defaultOffsetDocInfo << "Windows Media Player cannot convert the file. The file might have been encrypted by the Encrypted File System (EFS). Try decrypting the file first and then synchronizing it. For information about how to decrypt a file, see Windows Help and Support." << endl;
        break;
        case NS_E_PDA_CANNOT_TRANSCODE_TO_AUDIO:
        cout << Utils::defaultOffset << "NS_E_PDA_CANNOT_TRANSCODE_TO_AUDIO" << endl;
        cout << Utils::defaultOffsetDocInfo << "Your device requires that this file be converted in order to play on the device. However, the device either does not support playing audio, or Windows Media Player cannot convert the file to an audio format that is supported by the device." << endl;
        break;
        case NS_E_PDA_CANNOT_TRANSCODE_TO_VIDEO:
        cout << Utils::defaultOffset << "NS_E_PDA_CANNOT_TRANSCODE_TO_VIDEO" << endl;
        cout << Utils::defaultOffsetDocInfo << "Your device requires that this file be converted in order to play on the device. However, the device either does not support playing video, or Windows Media Player cannot convert the file to a video format that is supported by the device." << endl;
        break;
        case NS_E_PDA_CANNOT_TRANSCODE_TO_IMAGE:
        cout << Utils::defaultOffset << "NS_E_PDA_CANNOT_TRANSCODE_TO_IMAGE" << endl;
        cout << Utils::defaultOffsetDocInfo << "Your device requires that this file be converted in order to play on the device. However, the device either does not support displaying pictures, or Windows Media Player cannot convert the file to a picture format that is supported by the device." << endl;
        break;
        case NS_E_PDA_RETRIEVED_FILE_FILENAME_TOO_LONG:
        cout << Utils::defaultOffset << "NS_E_PDA_RETRIEVED_FILE_FILENAME_TOO_LONG" << endl;
        cout << Utils::defaultOffsetDocInfo << "Windows Media Player cannot sync the file to your computer because the file name is too long. Try renaming the file on the device." << endl;
        break;
        case NS_E_PDA_CEWMDM_DRM_ERROR:
        cout << Utils::defaultOffset << "NS_E_PDA_CEWMDM_DRM_ERROR" << endl;
        cout << Utils::defaultOffsetDocInfo << "Windows Media Player cannot sync the file because the device is not responding. This typically occurs when there is a problem with the device firmware. For additional assistance, click Web Help." << endl;
        break;
        case NS_E_INCOMPLETE_PLAYLIST:
        cout << Utils::defaultOffset << "NS_E_INCOMPLETE_PLAYLIST" << endl;
        cout << Utils::defaultOffsetDocInfo << "Incomplete playlist." << endl;
        break;
        case NS_E_PDA_SYNC_RUNNING:
        cout << Utils::defaultOffset << "NS_E_PDA_SYNC_RUNNING" << endl;
        cout << Utils::defaultOffsetDocInfo << "It is not possible to perform the requested action because sync is in progress. You can either stop sync or wait for it to complete, and then try again." << endl;
        break;
        case NS_E_PDA_SYNC_LOGIN_ERROR:
        cout << Utils::defaultOffset << "NS_E_PDA_SYNC_LOGIN_ERROR" << endl;
        cout << Utils::defaultOffsetDocInfo << "Windows Media Player cannot sync the subscription content because you are not signed in to the online store that provided it. Sign in to the online store, and then try again." << endl;
        break;
        case NS_E_PDA_TRANSCODE_CODEC_NOT_FOUND:
        cout << Utils::defaultOffset << "NS_E_PDA_TRANSCODE_CODEC_NOT_FOUND" << endl;
        cout << Utils::defaultOffsetDocInfo << "Windows Media Player cannot convert the file to the format required by the device. One or more codecs required to convert the file could not be found." << endl;
        break;
        case NS_E_CANNOT_SYNC_DRM_TO_NON_JANUS_DEVICE:
        cout << Utils::defaultOffset << "NS_E_CANNOT_SYNC_DRM_TO_NON_JANUS_DEVICE" << endl;
        cout << Utils::defaultOffsetDocInfo << "It is not possible to sync subscription files to this device." << endl;
        break;
        case NS_E_CANNOT_SYNC_PREVIOUS_SYNC_RUNNING:
        cout << Utils::defaultOffset << "NS_E_CANNOT_SYNC_PREVIOUS_SYNC_RUNNING" << endl;
        cout << Utils::defaultOffsetDocInfo << "Your device is operating slowly or is not responding. Until the device responds, it is not possible to sync again. To return the device to normal operation, try disconnecting it from the computer or resetting it." << endl;
        break;
        case NS_E_WMP_HWND_NOTFOUND:
        cout << Utils::defaultOffset << "NS_E_WMP_HWND_NOTFOUND" << endl;
        cout << Utils::defaultOffsetDocInfo << "The Windows Media Player download manager cannot function properly because the Player main window cannot be found. Try restarting the Player." << endl;
        break;
        case NS_E_BKGDOWNLOAD_WRONG_NO_FILES:
        cout << Utils::defaultOffset << "NS_E_BKGDOWNLOAD_WRONG_NO_FILES" << endl;
        cout << Utils::defaultOffsetDocInfo << "Windows Media Player encountered a download that has the wrong number of files. This might occur if another program is trying to create jobs with the same signature as the Player." << endl;
        break;
        case NS_E_BKGDOWNLOAD_COMPLETECANCELLEDJOB:
        cout << Utils::defaultOffset << "NS_E_BKGDOWNLOAD_COMPLETECANCELLEDJOB" << endl;
        cout << Utils::defaultOffsetDocInfo << "Windows Media Player tried to complete a download that was already canceled. The file will not be available." << endl;
        break;
        case NS_E_BKGDOWNLOAD_CANCELCOMPLETEDJOB:
        cout << Utils::defaultOffset << "NS_E_BKGDOWNLOAD_CANCELCOMPLETEDJOB" << endl;
        cout << Utils::defaultOffsetDocInfo << "Windows Media Player tried to cancel a download that was already completed. The file will not be removed." << endl;
        break;
        case NS_E_BKGDOWNLOAD_NOJOBPOINTER:
        cout << Utils::defaultOffset << "NS_E_BKGDOWNLOAD_NOJOBPOINTER" << endl;
        cout << Utils::defaultOffsetDocInfo << "Windows Media Player is trying to access a download that is not valid." << endl;
        break;
        case NS_E_BKGDOWNLOAD_INVALIDJOBSIGNATURE:
        cout << Utils::defaultOffset << "NS_E_BKGDOWNLOAD_INVALIDJOBSIGNATURE" << endl;
        cout << Utils::defaultOffsetDocInfo << "This download was not created by Windows Media Player." << endl;
        break;
        case NS_E_BKGDOWNLOAD_FAILED_TO_CREATE_TEMPFILE:
        cout << Utils::defaultOffset << "NS_E_BKGDOWNLOAD_FAILED_TO_CREATE_TEMPFILE" << endl;
        cout << Utils::defaultOffsetDocInfo << "The Windows Media Player download manager cannot create a temporary file name. This might occur if the path is not valid or if the disk is full." << endl;
        break;
        case NS_E_BKGDOWNLOAD_PLUGIN_FAILEDINITIALIZE:
        cout << Utils::defaultOffset << "NS_E_BKGDOWNLOAD_PLUGIN_FAILEDINITIALIZE" << endl;
        cout << Utils::defaultOffsetDocInfo << "The Windows Media Player download manager plug-in cannot start. This might occur if the system is out of resources." << endl;
        break;
        case NS_E_BKGDOWNLOAD_PLUGIN_FAILEDTOMOVEFILE:
        cout << Utils::defaultOffset << "NS_E_BKGDOWNLOAD_PLUGIN_FAILEDTOMOVEFILE" << endl;
        cout << Utils::defaultOffsetDocInfo << "The Windows Media Player download manager cannot move the file." << endl;
        break;
        case NS_E_BKGDOWNLOAD_CALLFUNCFAILED:
        cout << Utils::defaultOffset << "NS_E_BKGDOWNLOAD_CALLFUNCFAILED" << endl;
        cout << Utils::defaultOffsetDocInfo << "The Windows Media Player download manager cannot perform a task because the system has no resources to allocate." << endl;
        break;
        case NS_E_BKGDOWNLOAD_CALLFUNCTIMEOUT:
        cout << Utils::defaultOffset << "NS_E_BKGDOWNLOAD_CALLFUNCTIMEOUT" << endl;
        cout << Utils::defaultOffsetDocInfo << "The Windows Media Player download manager cannot perform a task because the task took too long to run." << endl;
        break;
        case NS_E_BKGDOWNLOAD_CALLFUNCENDED:
        cout << Utils::defaultOffset << "NS_E_BKGDOWNLOAD_CALLFUNCENDED" << endl;
        cout << Utils::defaultOffsetDocInfo << "The Windows Media Player download manager cannot perform a task because the Player is terminating the service. The task will be recovered when the Player restarts." << endl;
        break;
        case NS_E_BKGDOWNLOAD_WMDUNPACKFAILED:
        cout << Utils::defaultOffset << "NS_E_BKGDOWNLOAD_WMDUNPACKFAILED" << endl;
        cout << Utils::defaultOffsetDocInfo << "The Windows Media Player download manager cannot expand a WMD file. The file will be deleted and the operation will not be completed successfully." << endl;
        break;
        case NS_E_BKGDOWNLOAD_FAILEDINITIALIZE:
        cout << Utils::defaultOffset << "NS_E_BKGDOWNLOAD_FAILEDINITIALIZE" << endl;
        cout << Utils::defaultOffsetDocInfo << "The Windows Media Player download manager cannot start. This might occur if the system is out of resources." << endl;
        break;
        case NS_E_INTERFACE_NOT_REGISTERED_IN_GIT:
        cout << Utils::defaultOffset << "NS_E_INTERFACE_NOT_REGISTERED_IN_GIT" << endl;
        cout << Utils::defaultOffsetDocInfo << "Windows Media Player cannot access a required functionality. This might occur if the wrong system files or Player DLLs are loaded." << endl;
        break;
        case NS_E_BKGDOWNLOAD_INVALID_FILE_NAME:
        cout << Utils::defaultOffset << "NS_E_BKGDOWNLOAD_INVALID_FILE_NAME" << endl;
        cout << Utils::defaultOffsetDocInfo << "Windows Media Player cannot get the file name of the requested download. The requested download will be canceled." << endl;
        break;
        case NS_E_IMAGE_DOWNLOAD_FAILED:
        cout << Utils::defaultOffset << "NS_E_IMAGE_DOWNLOAD_FAILED" << endl;
        cout << Utils::defaultOffsetDocInfo << "Windows Media Player encountered an error while downloading an image." << endl;
        break;
        case NS_E_WMP_UDRM_NOUSERLIST:
        cout << Utils::defaultOffset << "NS_E_WMP_UDRM_NOUSERLIST" << endl;
        cout << Utils::defaultOffsetDocInfo << "Windows Media Player cannot update your media usage rights because the Player cannot verify the list of activated users of this computer." << endl;
        break;
        case NS_E_WMP_DRM_NOT_ACQUIRING:
        cout << Utils::defaultOffset << "NS_E_WMP_DRM_NOT_ACQUIRING" << endl;
        cout << Utils::defaultOffsetDocInfo << "Windows Media Player is trying to acquire media usage rights for a file that is no longer being used. Rights acquisition will stop." << endl;
        break;
        case NS_E_WMP_BSTR_TOO_LONG:
        cout << Utils::defaultOffset << "NS_E_WMP_BSTR_TOO_LONG" << endl;
        cout << Utils::defaultOffsetDocInfo << "The parameter is not valid." << endl;
        break;
        case NS_E_WMP_AUTOPLAY_INVALID_STATE:
        cout << Utils::defaultOffset << "NS_E_WMP_AUTOPLAY_INVALID_STATE" << endl;
        cout << Utils::defaultOffsetDocInfo << "The state is not valid for this request." << endl;
        break;
        case NS_E_WMP_COMPONENT_REVOKED:
        cout << Utils::defaultOffset << "NS_E_WMP_COMPONENT_REVOKED" << endl;
        cout << Utils::defaultOffsetDocInfo << "Windows Media Player cannot play this file until you complete the software component upgrade. After the component has been upgraded, try to play the file again." << endl;
        break;
        case NS_E_CURL_NOTSAFE:
        cout << Utils::defaultOffset << "NS_E_CURL_NOTSAFE" << endl;
        cout << Utils::defaultOffsetDocInfo << "The URL is not safe for the operation specified." << endl;
        break;
        case NS_E_CURL_INVALIDCHAR:
        cout << Utils::defaultOffset << "NS_E_CURL_INVALIDCHAR" << endl;
        cout << Utils::defaultOffsetDocInfo << "The URL contains one or more characters that are not valid." << endl;
        break;
        case NS_E_CURL_INVALIDHOSTNAME:
        cout << Utils::defaultOffset << "NS_E_CURL_INVALIDHOSTNAME" << endl;
        cout << Utils::defaultOffsetDocInfo << "The URL contains a host name that is not valid." << endl;
        break;
        case NS_E_CURL_INVALIDPATH:
        cout << Utils::defaultOffset << "NS_E_CURL_INVALIDPATH" << endl;
        cout << Utils::defaultOffsetDocInfo << "The URL contains a path that is not valid." << endl;
        break;
        case NS_E_CURL_INVALIDSCHEME:
        cout << Utils::defaultOffset << "NS_E_CURL_INVALIDSCHEME" << endl;
        cout << Utils::defaultOffsetDocInfo << "The URL contains a scheme that is not valid." << endl;
        break;
        case NS_E_CURL_INVALIDURL:
        cout << Utils::defaultOffset << "NS_E_CURL_INVALIDURL" << endl;
        cout << Utils::defaultOffsetDocInfo << "The URL is not valid." << endl;
        break;
        case NS_E_CURL_CANTWALK:
        cout << Utils::defaultOffset << "NS_E_CURL_CANTWALK" << endl;
        cout << Utils::defaultOffsetDocInfo << "Windows Media Player cannot play the file. If you clicked a link on a web page, the link might not be valid." << endl;
        break;
        case NS_E_CURL_INVALIDPORT:
        cout << Utils::defaultOffset << "NS_E_CURL_INVALIDPORT" << endl;
        cout << Utils::defaultOffsetDocInfo << "The URL port is not valid." << endl;
        break;
        case NS_E_CURLHELPER_NOTADIRECTORY:
        cout << Utils::defaultOffset << "NS_E_CURLHELPER_NOTADIRECTORY" << endl;
        cout << Utils::defaultOffsetDocInfo << "The URL is not a directory." << endl;
        break;
        case NS_E_CURLHELPER_NOTAFILE:
        cout << Utils::defaultOffset << "NS_E_CURLHELPER_NOTAFILE" << endl;
        cout << Utils::defaultOffsetDocInfo << "The URL is not a file." << endl;
        break;
        case NS_E_CURL_CANTDECODE:
        cout << Utils::defaultOffset << "NS_E_CURL_CANTDECODE" << endl;
        cout << Utils::defaultOffsetDocInfo << "The URL contains characters that cannot be decoded. The URL might be truncated or incomplete." << endl;
        break;
        case NS_E_CURLHELPER_NOTRELATIVE:
        cout << Utils::defaultOffset << "NS_E_CURLHELPER_NOTRELATIVE" << endl;
        cout << Utils::defaultOffsetDocInfo << "The specified URL is not a relative URL." << endl;
        break;
        case NS_E_CURL_INVALIDBUFFERSIZE:
        cout << Utils::defaultOffset << "NS_E_CURL_INVALIDBUFFERSIZE" << endl;
        cout << Utils::defaultOffsetDocInfo << "The buffer is smaller than the size specified." << endl;
        break;
        case NS_E_SUBSCRIPTIONSERVICE_PLAYBACK_DISALLOWED:
        cout << Utils::defaultOffset << "NS_E_SUBSCRIPTIONSERVICE_PLAYBACK_DISALLOWED" << endl;
        cout << Utils::defaultOffsetDocInfo << "The content provider has not granted you the right to play this file. Go to the content provider's online store to get play rights." << endl;
        break;
        case NS_E_CANNOT_BUY_OR_DOWNLOAD_FROM_MULTIPLE_SERVICES:
        cout << Utils::defaultOffset << "NS_E_CANNOT_BUY_OR_DOWNLOAD_FROM_MULTIPLE_SERVICES" << endl;
        cout << Utils::defaultOffsetDocInfo << "Windows Media Player cannot purchase or download content from multiple online stores." << endl;
        break;
        case NS_E_CANNOT_BUY_OR_DOWNLOAD_CONTENT:
        cout << Utils::defaultOffset << "NS_E_CANNOT_BUY_OR_DOWNLOAD_CONTENT" << endl;
        cout << Utils::defaultOffsetDocInfo << "The file cannot be purchased or downloaded. The file might not be available from the online store." << endl;
        break;
        case NS_E_NOT_CONTENT_PARTNER_TRACK:
        cout << Utils::defaultOffset << "NS_E_NOT_CONTENT_PARTNER_TRACK" << endl;
        cout << Utils::defaultOffsetDocInfo << "The provider of this file cannot be identified." << endl;
        break;
        case NS_E_TRACK_DOWNLOAD_REQUIRES_ALBUM_PURCHASE:
        cout << Utils::defaultOffset << "NS_E_TRACK_DOWNLOAD_REQUIRES_ALBUM_PURCHASE" << endl;
        cout << Utils::defaultOffsetDocInfo << "The file is only available for download when you buy the entire album." << endl;
        break;
        case NS_E_TRACK_DOWNLOAD_REQUIRES_PURCHASE:
        cout << Utils::defaultOffset << "NS_E_TRACK_DOWNLOAD_REQUIRES_PURCHASE" << endl;
        cout << Utils::defaultOffsetDocInfo << "You must buy the file before you can download it." << endl;
        break;
        case NS_E_TRACK_PURCHASE_MAXIMUM_EXCEEDED:
        cout << Utils::defaultOffset << "NS_E_TRACK_PURCHASE_MAXIMUM_EXCEEDED" << endl;
        cout << Utils::defaultOffsetDocInfo << "You have exceeded the maximum number of files that can be purchased in a single transaction." << endl;
        break;
        case NS_E_SUBSCRIPTIONSERVICE_LOGIN_FAILED:
        cout << Utils::defaultOffset << "NS_E_SUBSCRIPTIONSERVICE_LOGIN_FAILED" << endl;
        cout << Utils::defaultOffsetDocInfo << "Windows Media Player cannot sign in to the online store. Verify that you are using the correct user name and password. If the problem persists, the store might be temporarily unavailable." << endl;
        break;
        case NS_E_SUBSCRIPTIONSERVICE_DOWNLOAD_TIMEOUT:
        cout << Utils::defaultOffset << "NS_E_SUBSCRIPTIONSERVICE_DOWNLOAD_TIMEOUT" << endl;
        cout << Utils::defaultOffsetDocInfo << "Windows Media Player cannot download this item because the server is not responding. The server might be temporarily unavailable or the Internet connection might be lost." << endl;
        break;
        case NS_E_CONTENT_PARTNER_STILL_INITIALIZING:
        cout << Utils::defaultOffset << "NS_E_CONTENT_PARTNER_STILL_INITIALIZING" << endl;
        cout << Utils::defaultOffsetDocInfo << "Content Partner still initializing." << endl;
        break;
        case NS_E_OPEN_CONTAINING_FOLDER_FAILED:
        cout << Utils::defaultOffset << "NS_E_OPEN_CONTAINING_FOLDER_FAILED" << endl;
        cout << Utils::defaultOffsetDocInfo << "The folder could not be opened. The folder might have been moved or deleted." << endl;
        break;
        case NS_E_ADVANCEDEDIT_TOO_MANY_PICTURES:
        cout << Utils::defaultOffset << "NS_E_ADVANCEDEDIT_TOO_MANY_PICTURES" << endl;
        cout << Utils::defaultOffsetDocInfo << "Windows Media Player could not add all of the images to the file because the images exceeded the 7 megabyte (MB) limit." << endl;
        break;
        case NS_E_REDIRECT:
        cout << Utils::defaultOffset << "NS_E_REDIRECT" << endl;
        cout << Utils::defaultOffsetDocInfo << "The client redirected to another server." << endl;
        break;
        case NS_E_STALE_PRESENTATION:
        cout << Utils::defaultOffset << "NS_E_STALE_PRESENTATION" << endl;
        cout << Utils::defaultOffsetDocInfo << "The streaming media description is no longer current." << endl;
        break;
        case NS_E_NAMESPACE_WRONG_PERSIST:
        cout << Utils::defaultOffset << "NS_E_NAMESPACE_WRONG_PERSIST" << endl;
        cout << Utils::defaultOffsetDocInfo << "It is not possible to create a persistent namespace node under a transient parent node." << endl;
        break;
        case NS_E_NAMESPACE_WRONG_TYPE:
        cout << Utils::defaultOffset << "NS_E_NAMESPACE_WRONG_TYPE" << endl;
        cout << Utils::defaultOffsetDocInfo << "It is not possible to store a value in a namespace node that has a different value type." << endl;
        break;
        case NS_E_NAMESPACE_NODE_CONFLICT:
        cout << Utils::defaultOffset << "NS_E_NAMESPACE_NODE_CONFLICT" << endl;
        cout << Utils::defaultOffsetDocInfo << "It is not possible to remove the root namespace node." << endl;
        break;
        case NS_E_NAMESPACE_NODE_NOT_FOUND:
        cout << Utils::defaultOffset << "NS_E_NAMESPACE_NODE_NOT_FOUND" << endl;
        cout << Utils::defaultOffsetDocInfo << "The specified namespace node could not be found." << endl;
        break;
        case NS_E_NAMESPACE_BUFFER_TOO_SMALL:
        cout << Utils::defaultOffset << "NS_E_NAMESPACE_BUFFER_TOO_SMALL" << endl;
        cout << Utils::defaultOffsetDocInfo << "The buffer supplied to hold namespace node string is too small." << endl;
        break;
        case NS_E_NAMESPACE_TOO_MANY_CALLBACKS:
        cout << Utils::defaultOffset << "NS_E_NAMESPACE_TOO_MANY_CALLBACKS" << endl;
        cout << Utils::defaultOffsetDocInfo << "The callback list on a namespace node is at the maximum size." << endl;
        break;
        case NS_E_NAMESPACE_DUPLICATE_CALLBACK:
        cout << Utils::defaultOffset << "NS_E_NAMESPACE_DUPLICATE_CALLBACK" << endl;
        cout << Utils::defaultOffsetDocInfo << "It is not possible to register an already-registered callback on a namespace node." << endl;
        break;
        case NS_E_NAMESPACE_CALLBACK_NOT_FOUND:
        cout << Utils::defaultOffset << "NS_E_NAMESPACE_CALLBACK_NOT_FOUND" << endl;
        cout << Utils::defaultOffsetDocInfo << "Cannot find the callback in the namespace when attempting to remove the callback." << endl;
        break;
        case NS_E_NAMESPACE_NAME_TOO_LONG:
        cout << Utils::defaultOffset << "NS_E_NAMESPACE_NAME_TOO_LONG" << endl;
        cout << Utils::defaultOffsetDocInfo << "The namespace node name exceeds the allowed maximum length." << endl;
        break;
        case NS_E_NAMESPACE_DUPLICATE_NAME:
        cout << Utils::defaultOffset << "NS_E_NAMESPACE_DUPLICATE_NAME" << endl;
        cout << Utils::defaultOffsetDocInfo << "Cannot create a namespace node that already exists." << endl;
        break;
        case NS_E_NAMESPACE_EMPTY_NAME:
        cout << Utils::defaultOffset << "NS_E_NAMESPACE_EMPTY_NAME" << endl;
        cout << Utils::defaultOffsetDocInfo << "The namespace node name cannot be a null string." << endl;
        break;
        case NS_E_NAMESPACE_INDEX_TOO_LARGE:
        cout << Utils::defaultOffset << "NS_E_NAMESPACE_INDEX_TOO_LARGE" << endl;
        cout << Utils::defaultOffsetDocInfo << "Finding a child namespace node by index failed because the index exceeded the number of children." << endl;
        break;
        case NS_E_NAMESPACE_BAD_NAME:
        cout << Utils::defaultOffset << "NS_E_NAMESPACE_BAD_NAME" << endl;
        cout << Utils::defaultOffsetDocInfo << "The namespace node name is invalid." << endl;
        break;
        case NS_E_NAMESPACE_WRONG_SECURITY:
        cout << Utils::defaultOffset << "NS_E_NAMESPACE_WRONG_SECURITY" << endl;
        cout << Utils::defaultOffsetDocInfo << "It is not possible to store a value in a namespace node that has a different security type." << endl;
        break;
        case NS_E_CACHE_ARCHIVE_CONFLICT:
        cout << Utils::defaultOffset << "NS_E_CACHE_ARCHIVE_CONFLICT" << endl;
        cout << Utils::defaultOffsetDocInfo << "The archive request conflicts with other requests in progress." << endl;
        break;
        case NS_E_CACHE_ORIGIN_SERVER_NOT_FOUND:
        cout << Utils::defaultOffset << "NS_E_CACHE_ORIGIN_SERVER_NOT_FOUND" << endl;
        cout << Utils::defaultOffsetDocInfo << "The specified origin server cannot be found." << endl;
        break;
        case NS_E_CACHE_ORIGIN_SERVER_TIMEOUT:
        cout << Utils::defaultOffset << "NS_E_CACHE_ORIGIN_SERVER_TIMEOUT" << endl;
        cout << Utils::defaultOffsetDocInfo << "The specified origin server is not responding." << endl;
        break;
        case NS_E_CACHE_NOT_BROADCAST:
        cout << Utils::defaultOffset << "NS_E_CACHE_NOT_BROADCAST" << endl;
        cout << Utils::defaultOffsetDocInfo << "The internal code for HTTP status code 412 Precondition Failed due to not broadcast type." << endl;
        break;
        case NS_E_CACHE_CANNOT_BE_CACHED:
        cout << Utils::defaultOffset << "NS_E_CACHE_CANNOT_BE_CACHED" << endl;
        cout << Utils::defaultOffsetDocInfo << "The internal code for HTTP status code 403 Forbidden due to not cacheable." << endl;
        break;
        case NS_E_CACHE_NOT_MODIFIED:
        cout << Utils::defaultOffset << "NS_E_CACHE_NOT_MODIFIED" << endl;
        cout << Utils::defaultOffsetDocInfo << "The internal code for HTTP status code 304 Not Modified." << endl;
        break;
        case NS_E_CANNOT_REMOVE_PUBLISHING_POINT:
        cout << Utils::defaultOffset << "NS_E_CANNOT_REMOVE_PUBLISHING_POINT" << endl;
        cout << Utils::defaultOffsetDocInfo << "It is not possible to remove a cache or proxy publishing point." << endl;
        break;
        case NS_E_CANNOT_REMOVE_PLUGIN:
        cout << Utils::defaultOffset << "NS_E_CANNOT_REMOVE_PLUGIN" << endl;
        cout << Utils::defaultOffsetDocInfo << "It is not possible to remove the last instance of a type of plug-in." << endl;
        break;
        case NS_E_WRONG_PUBLISHING_POINT_TYPE:
        cout << Utils::defaultOffset << "NS_E_WRONG_PUBLISHING_POINT_TYPE" << endl;
        cout << Utils::defaultOffsetDocInfo << "Cache and proxy publishing points do not support this property or method." << endl;
        break;
        case NS_E_UNSUPPORTED_LOAD_TYPE:
        cout << Utils::defaultOffset << "NS_E_UNSUPPORTED_LOAD_TYPE" << endl;
        cout << Utils::defaultOffsetDocInfo << "The plug-in does not support the specified load type." << endl;
        break;
        case NS_E_INVALID_PLUGIN_LOAD_TYPE_CONFIGURATION:
        cout << Utils::defaultOffset << "NS_E_INVALID_PLUGIN_LOAD_TYPE_CONFIGURATION" << endl;
        cout << Utils::defaultOffsetDocInfo << "The plug-in does not support any load types. The plug-in must support at least one load type." << endl;
        break;
        case NS_E_INVALID_PUBLISHING_POINT_NAME:
        cout << Utils::defaultOffset << "NS_E_INVALID_PUBLISHING_POINT_NAME" << endl;
        cout << Utils::defaultOffsetDocInfo << "The publishing point name is invalid." << endl;
        break;
        case NS_E_TOO_MANY_MULTICAST_SINKS:
        cout << Utils::defaultOffset << "NS_E_TOO_MANY_MULTICAST_SINKS" << endl;
        cout << Utils::defaultOffsetDocInfo << "Only one multicast data writer plug-in can be enabled for a publishing point." << endl;
        break;
        case NS_E_PUBLISHING_POINT_INVALID_REQUEST_WHILE_STARTED:
        cout << Utils::defaultOffset << "NS_E_PUBLISHING_POINT_INVALID_REQUEST_WHILE_STARTED" << endl;
        cout << Utils::defaultOffsetDocInfo << "The requested operation cannot be completed while the publishing point is started." << endl;
        break;
        case NS_E_MULTICAST_PLUGIN_NOT_ENABLED:
        cout << Utils::defaultOffset << "NS_E_MULTICAST_PLUGIN_NOT_ENABLED" << endl;
        cout << Utils::defaultOffsetDocInfo << "A multicast data writer plug-in must be enabled in order for this operation to be completed." << endl;
        break;
        case NS_E_INVALID_OPERATING_SYSTEM_VERSION:
        cout << Utils::defaultOffset << "NS_E_INVALID_OPERATING_SYSTEM_VERSION" << endl;
        cout << Utils::defaultOffsetDocInfo << "This feature requires Windows Server 2003, Enterprise Edition." << endl;
        break;
        case NS_E_PUBLISHING_POINT_REMOVED:
        cout << Utils::defaultOffset << "NS_E_PUBLISHING_POINT_REMOVED" << endl;
        cout << Utils::defaultOffsetDocInfo << "The requested operation cannot be completed because the specified publishing point has been removed." << endl;
        break;
        case NS_E_INVALID_PUSH_PUBLISHING_POINT_START_REQUEST:
        cout << Utils::defaultOffset << "NS_E_INVALID_PUSH_PUBLISHING_POINT_START_REQUEST" << endl;
        cout << Utils::defaultOffsetDocInfo << "Push publishing points are started when the encoder starts pushing the stream. This publishing point cannot be started by the server administrator." << endl;
        break;
        case NS_E_UNSUPPORTED_LANGUAGE:
        cout << Utils::defaultOffset << "NS_E_UNSUPPORTED_LANGUAGE" << endl;
        cout << Utils::defaultOffsetDocInfo << "The specified language is not supported." << endl;
        break;
        case NS_E_WRONG_OS_VERSION:
        cout << Utils::defaultOffset << "NS_E_WRONG_OS_VERSION" << endl;
        cout << Utils::defaultOffsetDocInfo << "Windows Media Services will only run on Windows Server 2003, Standard Edition and Windows Server 2003, Enterprise Edition." << endl;
        break;
        case NS_E_PUBLISHING_POINT_STOPPED:
        cout << Utils::defaultOffset << "NS_E_PUBLISHING_POINT_STOPPED" << endl;
        cout << Utils::defaultOffsetDocInfo << "The operation cannot be completed because the publishing point has been stopped." << endl;
        break;
        case NS_E_PLAYLIST_ENTRY_ALREADY_PLAYING:
        cout << Utils::defaultOffset << "NS_E_PLAYLIST_ENTRY_ALREADY_PLAYING" << endl;
        cout << Utils::defaultOffsetDocInfo << "The playlist entry is already playing." << endl;
        break;
        case NS_E_EMPTY_PLAYLIST:
        cout << Utils::defaultOffset << "NS_E_EMPTY_PLAYLIST" << endl;
        cout << Utils::defaultOffsetDocInfo << "The playlist or directory you are requesting does not contain content." << endl;
        break;
        case NS_E_PLAYLIST_PARSE_FAILURE:
        cout << Utils::defaultOffset << "NS_E_PLAYLIST_PARSE_FAILURE" << endl;
        cout << Utils::defaultOffsetDocInfo << "The server was unable to parse the requested playlist file." << endl;
        break;
        case NS_E_PLAYLIST_UNSUPPORTED_ENTRY:
        cout << Utils::defaultOffset << "NS_E_PLAYLIST_UNSUPPORTED_ENTRY" << endl;
        cout << Utils::defaultOffsetDocInfo << "The requested operation is not supported for this type of playlist entry." << endl;
        break;
        case NS_E_PLAYLIST_ENTRY_NOT_IN_PLAYLIST:
        cout << Utils::defaultOffset << "NS_E_PLAYLIST_ENTRY_NOT_IN_PLAYLIST" << endl;
        cout << Utils::defaultOffsetDocInfo << "Cannot jump to a playlist entry that is not inserted in the playlist." << endl;
        break;
        case NS_E_PLAYLIST_ENTRY_SEEK:
        cout << Utils::defaultOffset << "NS_E_PLAYLIST_ENTRY_SEEK" << endl;
        cout << Utils::defaultOffsetDocInfo << "Cannot seek to the desired playlist entry." << endl;
        break;
        case NS_E_PLAYLIST_RECURSIVE_PLAYLISTS:
        cout << Utils::defaultOffset << "NS_E_PLAYLIST_RECURSIVE_PLAYLISTS" << endl;
        cout << Utils::defaultOffsetDocInfo << "Cannot play recursive playlist." << endl;
        break;
        case NS_E_PLAYLIST_TOO_MANY_NESTED_PLAYLISTS:
        cout << Utils::defaultOffset << "NS_E_PLAYLIST_TOO_MANY_NESTED_PLAYLISTS" << endl;
        cout << Utils::defaultOffsetDocInfo << "The number of nested playlists exceeded the limit the server can handle." << endl;
        break;
        case NS_E_PLAYLIST_SHUTDOWN:
        cout << Utils::defaultOffset << "NS_E_PLAYLIST_SHUTDOWN" << endl;
        cout << Utils::defaultOffsetDocInfo << "Cannot execute the requested operation because the playlist has been shut down by the Media Server." << endl;
        break;
        case NS_E_PLAYLIST_END_RECEDING:
        cout << Utils::defaultOffset << "NS_E_PLAYLIST_END_RECEDING" << endl;
        cout << Utils::defaultOffsetDocInfo << "The playlist has ended while receding." << endl;
        break;
        case NS_E_DATAPATH_NO_SINK:
        cout << Utils::defaultOffset << "NS_E_DATAPATH_NO_SINK" << endl;
        cout << Utils::defaultOffsetDocInfo << "The data path does not have an associated data writer plug-in." << endl;
        break;
        case NS_E_INVALID_PUSH_TEMPLATE:
        cout << Utils::defaultOffset << "NS_E_INVALID_PUSH_TEMPLATE" << endl;
        cout << Utils::defaultOffsetDocInfo << "The specified push template is invalid." << endl;
        break;
        case NS_E_INVALID_PUSH_PUBLISHING_POINT:
        cout << Utils::defaultOffset << "NS_E_INVALID_PUSH_PUBLISHING_POINT" << endl;
        cout << Utils::defaultOffsetDocInfo << "The specified push publishing point is invalid." << endl;
        break;
        case NS_E_CRITICAL_ERROR:
        cout << Utils::defaultOffset << "NS_E_CRITICAL_ERROR" << endl;
        cout << Utils::defaultOffsetDocInfo << "The requested operation cannot be performed because the server or publishing point is in a critical error state." << endl;
        break;
        case NS_E_NO_NEW_CONNECTIONS:
        cout << Utils::defaultOffset << "NS_E_NO_NEW_CONNECTIONS" << endl;
        cout << Utils::defaultOffsetDocInfo << "The content cannot be played because the server is not currently accepting connections. Try connecting at a later time." << endl;
        break;
        case NS_E_WSX_INVALID_VERSION:
        cout << Utils::defaultOffset << "NS_E_WSX_INVALID_VERSION" << endl;
        cout << Utils::defaultOffsetDocInfo << "The version of this playlist is not supported by the server." << endl;
        break;
        case NS_E_HEADER_MISMATCH:
        cout << Utils::defaultOffset << "NS_E_HEADER_MISMATCH" << endl;
        cout << Utils::defaultOffsetDocInfo << "The command does not apply to the current media header user by a server component." << endl;
        break;
        case NS_E_PUSH_DUPLICATE_PUBLISHING_POINT_NAME:
        cout << Utils::defaultOffset << "NS_E_PUSH_DUPLICATE_PUBLISHING_POINT_NAME" << endl;
        cout << Utils::defaultOffsetDocInfo << "The specified publishing point name is already in use." << endl;
        break;
        case NS_E_NO_SCRIPT_ENGINE:
        cout << Utils::defaultOffset << "NS_E_NO_SCRIPT_ENGINE" << endl;
        cout << Utils::defaultOffsetDocInfo << "There is no script engine available for this file." << endl;
        break;
        case NS_E_PLUGIN_ERROR_REPORTED:
        cout << Utils::defaultOffset << "NS_E_PLUGIN_ERROR_REPORTED" << endl;
        cout << Utils::defaultOffsetDocInfo << "The plug-in has reported an error. See the Troubleshooting tab or the NT Application Event Log for details." << endl;
        break;
        case NS_E_SOURCE_PLUGIN_NOT_FOUND:
        cout << Utils::defaultOffset << "NS_E_SOURCE_PLUGIN_NOT_FOUND" << endl;
        cout << Utils::defaultOffsetDocInfo << "No enabled data source plug-in is available to access the requested content." << endl;
        break;
        case NS_E_PLAYLIST_PLUGIN_NOT_FOUND:
        cout << Utils::defaultOffset << "NS_E_PLAYLIST_PLUGIN_NOT_FOUND" << endl;
        cout << Utils::defaultOffsetDocInfo << "No enabled playlist parser plug-in is available to access the requested content." << endl;
        break;
        case NS_E_DATA_SOURCE_ENUMERATION_NOT_SUPPORTED:
        cout << Utils::defaultOffset << "NS_E_DATA_SOURCE_ENUMERATION_NOT_SUPPORTED" << endl;
        cout << Utils::defaultOffsetDocInfo << "The data source plug-in does not support enumeration." << endl;
        break;
        case NS_E_MEDIA_PARSER_INVALID_FORMAT:
        cout << Utils::defaultOffset << "NS_E_MEDIA_PARSER_INVALID_FORMAT" << endl;
        cout << Utils::defaultOffsetDocInfo << "The server cannot stream the selected file because it is either damaged or corrupt. Select a different file." << endl;
        break;
        case NS_E_SCRIPT_DEBUGGER_NOT_INSTALLED:
        cout << Utils::defaultOffset << "NS_E_SCRIPT_DEBUGGER_NOT_INSTALLED" << endl;
        cout << Utils::defaultOffsetDocInfo << "The plug-in cannot be enabled because a compatible script debugger is not installed on this system. Install a script debugger, or disable the script debugger option on the general tab of the plug-in's properties page and try again." << endl;
        break;
        case NS_E_FEATURE_REQUIRES_ENTERPRISE_SERVER:
        cout << Utils::defaultOffset << "NS_E_FEATURE_REQUIRES_ENTERPRISE_SERVER" << endl;
        cout << Utils::defaultOffsetDocInfo << "The plug-in cannot be loaded because it requires Windows Server 2003, Enterprise Edition." << endl;
        break;
        case NS_E_WIZARD_RUNNING:
        cout << Utils::defaultOffset << "NS_E_WIZARD_RUNNING" << endl;
        cout << Utils::defaultOffsetDocInfo << "Another wizard is currently running. Please close the other wizard or wait until it finishes before attempting to run this wizard again." << endl;
        break;
        case NS_E_INVALID_LOG_URL:
        cout << Utils::defaultOffset << "NS_E_INVALID_LOG_URL" << endl;
        cout << Utils::defaultOffsetDocInfo << "Invalid log URL. Multicast logging URL must look like \"http://servername/isapibackend.dll\"." << endl;
        break;
        case NS_E_INVALID_MTU_RANGE:
        cout << Utils::defaultOffset << "NS_E_INVALID_MTU_RANGE" << endl;
        cout << Utils::defaultOffsetDocInfo << "Invalid MTU specified. The valid range for maximum packet size is between 36 and 65507 bytes." << endl;
        break;
        case NS_E_INVALID_PLAY_STATISTICS:
        cout << Utils::defaultOffset << "NS_E_INVALID_PLAY_STATISTICS" << endl;
        cout << Utils::defaultOffsetDocInfo << "Invalid play statistics for logging." << endl;
        break;
        case NS_E_LOG_NEED_TO_BE_SKIPPED:
        cout << Utils::defaultOffset << "NS_E_LOG_NEED_TO_BE_SKIPPED" << endl;
        cout << Utils::defaultOffsetDocInfo << "The log needs to be skipped." << endl;
        break;
        case NS_E_HTTP_TEXT_DATACONTAINER_SIZE_LIMIT_EXCEEDED:
        cout << Utils::defaultOffset << "NS_E_HTTP_TEXT_DATACONTAINER_SIZE_LIMIT_EXCEEDED" << endl;
        cout << Utils::defaultOffsetDocInfo << "The size of the data exceeded the limit the WMS HTTP Download Data Source plugin can handle." << endl;
        break;
        case NS_E_PORT_IN_USE:
        cout << Utils::defaultOffset << "NS_E_PORT_IN_USE" << endl;
        cout << Utils::defaultOffsetDocInfo << "One usage of each socket address (protocol/network address/port) is permitted. Verify that other services or applications are not attempting to use the same port and then try to enable the plug-in again." << endl;
        break;
        case NS_E_PORT_IN_USE_HTTP:
        cout << Utils::defaultOffset << "NS_E_PORT_IN_USE_HTTP" << endl;
        cout << Utils::defaultOffsetDocInfo << "One usage of each socket address (protocol/network address/port) is permitted. Verify that other services (such as IIS) or applications are not attempting to use the same port and then try to enable the plug-in again." << endl;
        break;
        case NS_E_HTTP_TEXT_DATACONTAINER_INVALID_SERVER_RESPONSE:
        cout << Utils::defaultOffset << "NS_E_HTTP_TEXT_DATACONTAINER_INVALID_SERVER_RESPONSE" << endl;
        cout << Utils::defaultOffsetDocInfo << "The WMS HTTP Download Data Source plugin was unable to receive the remote server's response." << endl;
        break;
        case NS_E_ARCHIVE_REACH_QUOTA:
        cout << Utils::defaultOffset << "NS_E_ARCHIVE_REACH_QUOTA" << endl;
        cout << Utils::defaultOffsetDocInfo << "The archive plug-in has reached its quota." << endl;
        break;
        case NS_E_ARCHIVE_ABORT_DUE_TO_BCAST:
        cout << Utils::defaultOffset << "NS_E_ARCHIVE_ABORT_DUE_TO_BCAST" << endl;
        cout << Utils::defaultOffsetDocInfo << "The archive plug-in aborted because the source was from broadcast." << endl;
        break;
        case NS_E_ARCHIVE_GAP_DETECTED:
        cout << Utils::defaultOffset << "NS_E_ARCHIVE_GAP_DETECTED" << endl;
        cout << Utils::defaultOffsetDocInfo << "The archive plug-in detected an interrupt in the source." << endl;
        break;
        case NS_E_AUTHORIZATION_FILE_NOT_FOUND:
        cout << Utils::defaultOffset << "NS_E_AUTHORIZATION_FILE_NOT_FOUND" << endl;
        cout << Utils::defaultOffsetDocInfo << "The system cannot find the file specified." << endl;
        break;
        case NS_E_BAD_MARKIN:
        cout << Utils::defaultOffset << "NS_E_BAD_MARKIN" << endl;
        cout << Utils::defaultOffsetDocInfo << "The mark-in time should be greater than 0 and less than the mark-out time." << endl;
        break;
        case NS_E_BAD_MARKOUT:
        cout << Utils::defaultOffset << "NS_E_BAD_MARKOUT" << endl;
        cout << Utils::defaultOffsetDocInfo << "The mark-out time should be greater than the mark-in time and less than the file duration." << endl;
        break;
        case NS_E_NOMATCHING_MEDIASOURCE:
        cout << Utils::defaultOffset << "NS_E_NOMATCHING_MEDIASOURCE" << endl;
        cout << Utils::defaultOffsetDocInfo << "No matching media type is found in the source %1." << endl;
        break;
        case NS_E_UNSUPPORTED_SOURCETYPE:
        cout << Utils::defaultOffset << "NS_E_UNSUPPORTED_SOURCETYPE" << endl;
        cout << Utils::defaultOffsetDocInfo << "The specified source type is not supported." << endl;
        break;
        case NS_E_TOO_MANY_AUDIO:
        cout << Utils::defaultOffset << "NS_E_TOO_MANY_AUDIO" << endl;
        cout << Utils::defaultOffsetDocInfo << "It is not possible to specify more than one audio input." << endl;
        break;
        case NS_E_TOO_MANY_VIDEO:
        cout << Utils::defaultOffset << "NS_E_TOO_MANY_VIDEO" << endl;
        cout << Utils::defaultOffsetDocInfo << "It is not possible to specify more than two video inputs." << endl;
        break;
        case NS_E_NOMATCHING_ELEMENT:
        cout << Utils::defaultOffset << "NS_E_NOMATCHING_ELEMENT" << endl;
        cout << Utils::defaultOffsetDocInfo << "No matching element is found in the list." << endl;
        break;
        case NS_E_MISMATCHED_MEDIACONTENT:
        cout << Utils::defaultOffset << "NS_E_MISMATCHED_MEDIACONTENT" << endl;
        cout << Utils::defaultOffsetDocInfo << "The profile's media types must match the media types defined for the session." << endl;
        break;
        case NS_E_CANNOT_DELETE_ACTIVE_SOURCEGROUP:
        cout << Utils::defaultOffset << "NS_E_CANNOT_DELETE_ACTIVE_SOURCEGROUP" << endl;
        cout << Utils::defaultOffsetDocInfo << "It is not possible to remove an active source while encoding." << endl;
        break;
        case NS_E_AUDIODEVICE_BUSY:
        cout << Utils::defaultOffset << "NS_E_AUDIODEVICE_BUSY" << endl;
        cout << Utils::defaultOffsetDocInfo << "It is not possible to open the specified audio capture device because it is currently in use." << endl;
        break;
        case NS_E_AUDIODEVICE_UNEXPECTED:
        cout << Utils::defaultOffset << "NS_E_AUDIODEVICE_UNEXPECTED" << endl;
        cout << Utils::defaultOffsetDocInfo << "It is not possible to open the specified audio capture device because an unexpected error has occurred." << endl;
        break;
        case NS_E_AUDIODEVICE_BADFORMAT:
        cout << Utils::defaultOffset << "NS_E_AUDIODEVICE_BADFORMAT" << endl;
        cout << Utils::defaultOffsetDocInfo << "The audio capture device does not support the specified audio format." << endl;
        break;
        case NS_E_VIDEODEVICE_BUSY:
        cout << Utils::defaultOffset << "NS_E_VIDEODEVICE_BUSY" << endl;
        cout << Utils::defaultOffsetDocInfo << "It is not possible to open the specified video capture device because it is currently in use." << endl;
        break;
        case NS_E_VIDEODEVICE_UNEXPECTED:
        cout << Utils::defaultOffset << "NS_E_VIDEODEVICE_UNEXPECTED" << endl;
        cout << Utils::defaultOffsetDocInfo << "It is not possible to open the specified video capture device because an unexpected error has occurred." << endl;
        break;
        case NS_E_INVALIDCALL_WHILE_ENCODER_RUNNING:
        cout << Utils::defaultOffset << "NS_E_INVALIDCALL_WHILE_ENCODER_RUNNING" << endl;
        cout << Utils::defaultOffsetDocInfo << "This operation is not allowed while encoding." << endl;
        break;
        case NS_E_NO_PROFILE_IN_SOURCEGROUP:
        cout << Utils::defaultOffset << "NS_E_NO_PROFILE_IN_SOURCEGROUP" << endl;
        cout << Utils::defaultOffsetDocInfo << "No profile is set for the source." << endl;
        break;
        case NS_E_VIDEODRIVER_UNSTABLE:
        cout << Utils::defaultOffset << "NS_E_VIDEODRIVER_UNSTABLE" << endl;
        cout << Utils::defaultOffsetDocInfo << "The video capture driver returned an unrecoverable error. It is now in an unstable state." << endl;
        break;
        case NS_E_VIDCAPSTARTFAILED:
        cout << Utils::defaultOffset << "NS_E_VIDCAPSTARTFAILED" << endl;
        cout << Utils::defaultOffsetDocInfo << "It was not possible to start the video device." << endl;
        break;
        case NS_E_VIDSOURCECOMPRESSION:
        cout << Utils::defaultOffset << "NS_E_VIDSOURCECOMPRESSION" << endl;
        cout << Utils::defaultOffsetDocInfo << "The video source does not support the requested output format or color depth." << endl;
        break;
        case NS_E_VIDSOURCESIZE:
        cout << Utils::defaultOffset << "NS_E_VIDSOURCESIZE" << endl;
        cout << Utils::defaultOffsetDocInfo << "The video source does not support the requested capture size." << endl;
        break;
        case NS_E_ICMQUERYFORMAT:
        cout << Utils::defaultOffset << "NS_E_ICMQUERYFORMAT" << endl;
        cout << Utils::defaultOffsetDocInfo << "It was not possible to obtain output information from the video compressor." << endl;
        break;
        case NS_E_VIDCAPCREATEWINDOW:
        cout << Utils::defaultOffset << "NS_E_VIDCAPCREATEWINDOW" << endl;
        cout << Utils::defaultOffsetDocInfo << "It was not possible to create a video capture window." << endl;
        break;
        case NS_E_VIDCAPDRVINUSE:
        cout << Utils::defaultOffset << "NS_E_VIDCAPDRVINUSE" << endl;
        cout << Utils::defaultOffsetDocInfo << "There is already a stream active on this video device." << endl;
        break;
        case NS_E_NO_MEDIAFORMAT_IN_SOURCE:
        cout << Utils::defaultOffset << "NS_E_NO_MEDIAFORMAT_IN_SOURCE" << endl;
        cout << Utils::defaultOffsetDocInfo << "No media format is set in source." << endl;
        break;
        case NS_E_NO_VALID_OUTPUT_STREAM:
        cout << Utils::defaultOffset << "NS_E_NO_VALID_OUTPUT_STREAM" << endl;
        cout << Utils::defaultOffsetDocInfo << "Cannot find a valid output stream from the source." << endl;
        break;
        case NS_E_NO_VALID_SOURCE_PLUGIN:
        cout << Utils::defaultOffset << "NS_E_NO_VALID_SOURCE_PLUGIN" << endl;
        cout << Utils::defaultOffsetDocInfo << "It was not possible to find a valid source plug-in for the specified source." << endl;
        break;
        case NS_E_NO_ACTIVE_SOURCEGROUP:
        cout << Utils::defaultOffset << "NS_E_NO_ACTIVE_SOURCEGROUP" << endl;
        cout << Utils::defaultOffsetDocInfo << "No source is currently active." << endl;
        break;
        case NS_E_NO_SCRIPT_STREAM:
        cout << Utils::defaultOffset << "NS_E_NO_SCRIPT_STREAM" << endl;
        cout << Utils::defaultOffsetDocInfo << "No script stream is set in the current source." << endl;
        break;
        case NS_E_INVALIDCALL_WHILE_ARCHIVAL_RUNNING:
        cout << Utils::defaultOffset << "NS_E_INVALIDCALL_WHILE_ARCHIVAL_RUNNING" << endl;
        cout << Utils::defaultOffsetDocInfo << "This operation is not allowed while archiving." << endl;
        break;
        case NS_E_INVALIDPACKETSIZE:
        cout << Utils::defaultOffset << "NS_E_INVALIDPACKETSIZE" << endl;
        cout << Utils::defaultOffsetDocInfo << "The setting for the maximum packet size is not valid." << endl;
        break;
        case NS_E_PLUGIN_CLSID_INVALID:
        cout << Utils::defaultOffset << "NS_E_PLUGIN_CLSID_INVALID" << endl;
        cout << Utils::defaultOffsetDocInfo << "The plug-in CLSID specified is not valid." << endl;
        break;
        case NS_E_UNSUPPORTED_ARCHIVETYPE:
        cout << Utils::defaultOffset << "NS_E_UNSUPPORTED_ARCHIVETYPE" << endl;
        cout << Utils::defaultOffsetDocInfo << "This archive type is not supported." << endl;
        break;
        case NS_E_UNSUPPORTED_ARCHIVEOPERATION:
        cout << Utils::defaultOffset << "NS_E_UNSUPPORTED_ARCHIVEOPERATION" << endl;
        cout << Utils::defaultOffsetDocInfo << "This archive operation is not supported." << endl;
        break;
        case NS_E_ARCHIVE_FILENAME_NOTSET:
        cout << Utils::defaultOffset << "NS_E_ARCHIVE_FILENAME_NOTSET" << endl;
        cout << Utils::defaultOffsetDocInfo << "The local archive file name was not set." << endl;
        break;
        case NS_E_SOURCEGROUP_NOTPREPARED:
        cout << Utils::defaultOffset << "NS_E_SOURCEGROUP_NOTPREPARED" << endl;
        cout << Utils::defaultOffsetDocInfo << "The source is not yet prepared." << endl;
        break;
        case NS_E_PROFILE_MISMATCH:
        cout << Utils::defaultOffset << "NS_E_PROFILE_MISMATCH" << endl;
        cout << Utils::defaultOffsetDocInfo << "Profiles on the sources do not match." << endl;
        break;
        case NS_E_INCORRECTCLIPSETTINGS:
        cout << Utils::defaultOffset << "NS_E_INCORRECTCLIPSETTINGS" << endl;
        cout << Utils::defaultOffsetDocInfo << "The specified crop values are not valid." << endl;
        break;
        case NS_E_NOSTATSAVAILABLE:
        cout << Utils::defaultOffset << "NS_E_NOSTATSAVAILABLE" << endl;
        cout << Utils::defaultOffsetDocInfo << "No statistics are available at this time." << endl;
        break;
        case NS_E_NOTARCHIVING:
        cout << Utils::defaultOffset << "NS_E_NOTARCHIVING" << endl;
        cout << Utils::defaultOffsetDocInfo << "The encoder is not archiving." << endl;
        break;
        case NS_E_INVALIDCALL_WHILE_ENCODER_STOPPED:
        cout << Utils::defaultOffset << "NS_E_INVALIDCALL_WHILE_ENCODER_STOPPED" << endl;
        cout << Utils::defaultOffsetDocInfo << "This operation is only allowed during encoding." << endl;
        break;
        case NS_E_NOSOURCEGROUPS:
        cout << Utils::defaultOffset << "NS_E_NOSOURCEGROUPS" << endl;
        cout << Utils::defaultOffsetDocInfo << "This SourceGroupCollection doesn't contain any SourceGroups." << endl;
        break;
        case NS_E_INVALIDINPUTFPS:
        cout << Utils::defaultOffset << "NS_E_INVALIDINPUTFPS" << endl;
        cout << Utils::defaultOffsetDocInfo << "This source does not have a frame rate of 30 fps. Therefore, it is not possible to apply the inverse telecine filter to the source." << endl;
        break;
        case NS_E_NO_DATAVIEW_SUPPORT:
        cout << Utils::defaultOffset << "NS_E_NO_DATAVIEW_SUPPORT" << endl;
        cout << Utils::defaultOffsetDocInfo << "It is not possible to display your source or output video in the Video panel." << endl;
        break;
        case NS_E_CODEC_UNAVAILABLE:
        cout << Utils::defaultOffset << "NS_E_CODEC_UNAVAILABLE" << endl;
        cout << Utils::defaultOffsetDocInfo << "One or more codecs required to open this content could not be found." << endl;
        break;
        case NS_E_ARCHIVE_SAME_AS_INPUT:
        cout << Utils::defaultOffset << "NS_E_ARCHIVE_SAME_AS_INPUT" << endl;
        cout << Utils::defaultOffsetDocInfo << "The archive file has the same name as an input file. Change one of the names before continuing." << endl;
        break;
        case NS_E_SOURCE_NOTSPECIFIED:
        cout << Utils::defaultOffset << "NS_E_SOURCE_NOTSPECIFIED" << endl;
        cout << Utils::defaultOffsetDocInfo << "The source has not been set up completely." << endl;
        break;
        case NS_E_NO_REALTIME_TIMECOMPRESSION:
        cout << Utils::defaultOffset << "NS_E_NO_REALTIME_TIMECOMPRESSION" << endl;
        cout << Utils::defaultOffsetDocInfo << "It is not possible to apply time compression to a broadcast session." << endl;
        break;
        case NS_E_UNSUPPORTED_ENCODER_DEVICE:
        cout << Utils::defaultOffset << "NS_E_UNSUPPORTED_ENCODER_DEVICE" << endl;
        cout << Utils::defaultOffsetDocInfo << "It is not possible to open this device." << endl;
        break;
        case NS_E_UNEXPECTED_DISPLAY_SETTINGS:
        cout << Utils::defaultOffset << "NS_E_UNEXPECTED_DISPLAY_SETTINGS" << endl;
        cout << Utils::defaultOffsetDocInfo << "It is not possible to start encoding because the display size or color has changed since the current session was defined. Restore the previous settings or create a new session." << endl;
        break;
        case NS_E_NO_AUDIODATA:
        cout << Utils::defaultOffset << "NS_E_NO_AUDIODATA" << endl;
        cout << Utils::defaultOffsetDocInfo << "No audio data has been received for several seconds. Check the audio source and restart the encoder." << endl;
        break;
        case NS_E_INPUTSOURCE_PROBLEM:
        cout << Utils::defaultOffset << "NS_E_INPUTSOURCE_PROBLEM" << endl;
        cout << Utils::defaultOffsetDocInfo << "One or all of the specified sources are not working properly. Check that the sources are configured correctly." << endl;
        break;
        case NS_E_WME_VERSION_MISMATCH:
        cout << Utils::defaultOffset << "NS_E_WME_VERSION_MISMATCH" << endl;
        cout << Utils::defaultOffsetDocInfo << "The supplied configuration file is not supported by this version of the encoder." << endl;
        break;
        case NS_E_NO_REALTIME_PREPROCESS:
        cout << Utils::defaultOffset << "NS_E_NO_REALTIME_PREPROCESS" << endl;
        cout << Utils::defaultOffsetDocInfo << "It is not possible to use image preprocessing with live encoding." << endl;
        break;
        case NS_E_NO_REPEAT_PREPROCESS:
        cout << Utils::defaultOffset << "NS_E_NO_REPEAT_PREPROCESS" << endl;
        cout << Utils::defaultOffsetDocInfo << "It is not possible to use two-pass encoding when the source is set to loop." << endl;
        break;
        case NS_E_CANNOT_PAUSE_LIVEBROADCAST:
        cout << Utils::defaultOffset << "NS_E_CANNOT_PAUSE_LIVEBROADCAST" << endl;
        cout << Utils::defaultOffsetDocInfo << "It is not possible to pause encoding during a broadcast." << endl;
        break;
        case NS_E_DRM_PROFILE_NOT_SET:
        cout << Utils::defaultOffset << "NS_E_DRM_PROFILE_NOT_SET" << endl;
        cout << Utils::defaultOffsetDocInfo << "A DRM profile has not been set for the current session." << endl;
        break;
        case NS_E_DUPLICATE_DRMPROFILE:
        cout << Utils::defaultOffset << "NS_E_DUPLICATE_DRMPROFILE" << endl;
        cout << Utils::defaultOffsetDocInfo << "The profile ID is already used by a DRM profile. Specify a different profile ID." << endl;
        break;
        case NS_E_INVALID_DEVICE:
        cout << Utils::defaultOffset << "NS_E_INVALID_DEVICE" << endl;
        cout << Utils::defaultOffsetDocInfo << "The setting of the selected device does not support control for playing back tapes." << endl;
        break;
        case NS_E_SPEECHEDL_ON_NON_MIXEDMODE:
        cout << Utils::defaultOffset << "NS_E_SPEECHEDL_ON_NON_MIXEDMODE" << endl;
        cout << Utils::defaultOffsetDocInfo << "You must specify a mixed voice and audio mode in order to use an optimization definition file." << endl;
        break;
        case NS_E_DRM_PASSWORD_TOO_LONG:
        cout << Utils::defaultOffset << "NS_E_DRM_PASSWORD_TOO_LONG" << endl;
        cout << Utils::defaultOffsetDocInfo << "The specified password is too long. Type a password with fewer than 8 characters." << endl;
        break;
        case NS_E_DEVCONTROL_FAILED_SEEK:
        cout << Utils::defaultOffset << "NS_E_DEVCONTROL_FAILED_SEEK" << endl;
        cout << Utils::defaultOffsetDocInfo << "It is not possible to seek to the specified mark-in point." << endl;
        break;
        case NS_E_INTERLACE_REQUIRE_SAMESIZE:
        cout << Utils::defaultOffset << "NS_E_INTERLACE_REQUIRE_SAMESIZE" << endl;
        cout << Utils::defaultOffsetDocInfo << "When you choose to maintain the interlacing in your video, the output video size must match the input video size." << endl;
        break;
        case NS_E_TOO_MANY_DEVICECONTROL:
        cout << Utils::defaultOffset << "NS_E_TOO_MANY_DEVICECONTROL" << endl;
        cout << Utils::defaultOffsetDocInfo << "Only one device control plug-in can control a device." << endl;
        break;
        case NS_E_NO_MULTIPASS_FOR_LIVEDEVICE:
        cout << Utils::defaultOffset << "NS_E_NO_MULTIPASS_FOR_LIVEDEVICE" << endl;
        cout << Utils::defaultOffsetDocInfo << "You must also enable storing content to hard disk temporarily in order to use two-pass encoding with the input device." << endl;
        break;
        case NS_E_MISSING_AUDIENCE:
        cout << Utils::defaultOffset << "NS_E_MISSING_AUDIENCE" << endl;
        cout << Utils::defaultOffsetDocInfo << "An audience is missing from the output stream configuration." << endl;
        break;
        case NS_E_AUDIENCE_CONTENTTYPE_MISMATCH:
        cout << Utils::defaultOffset << "NS_E_AUDIENCE_CONTENTTYPE_MISMATCH" << endl;
        cout << Utils::defaultOffsetDocInfo << "All audiences in the output tree must have the same content type." << endl;
        break;
        case NS_E_MISSING_SOURCE_INDEX:
        cout << Utils::defaultOffset << "NS_E_MISSING_SOURCE_INDEX" << endl;
        cout << Utils::defaultOffsetDocInfo << "A source index is missing from the output stream configuration." << endl;
        break;
        case NS_E_NUM_LANGUAGE_MISMATCH:
        cout << Utils::defaultOffset << "NS_E_NUM_LANGUAGE_MISMATCH" << endl;
        cout << Utils::defaultOffsetDocInfo << "The same source index in different audiences should have the same number of languages." << endl;
        break;
        case NS_E_LANGUAGE_MISMATCH:
        cout << Utils::defaultOffset << "NS_E_LANGUAGE_MISMATCH" << endl;
        cout << Utils::defaultOffsetDocInfo << "The same source index in different audiences should have the same languages." << endl;
        break;
        case NS_E_VBRMODE_MISMATCH:
        cout << Utils::defaultOffset << "NS_E_VBRMODE_MISMATCH" << endl;
        cout << Utils::defaultOffsetDocInfo << "The same source index in different audiences should use the same VBR encoding mode." << endl;
        break;
        case NS_E_INVALID_INPUT_AUDIENCE_INDEX:
        cout << Utils::defaultOffset << "NS_E_INVALID_INPUT_AUDIENCE_INDEX" << endl;
        cout << Utils::defaultOffsetDocInfo << "The bit rate index specified is not valid." << endl;
        break;
        case NS_E_INVALID_INPUT_LANGUAGE:
        cout << Utils::defaultOffset << "NS_E_INVALID_INPUT_LANGUAGE" << endl;
        cout << Utils::defaultOffsetDocInfo << "The specified language is not valid." << endl;
        break;
        case NS_E_INVALID_INPUT_STREAM:
        cout << Utils::defaultOffset << "NS_E_INVALID_INPUT_STREAM" << endl;
        cout << Utils::defaultOffsetDocInfo << "The specified source type is not valid." << endl;
        break;
        case NS_E_EXPECT_MONO_WAV_INPUT:
        cout << Utils::defaultOffset << "NS_E_EXPECT_MONO_WAV_INPUT" << endl;
        cout << Utils::defaultOffsetDocInfo << "The source must be a mono channel .wav file." << endl;
        break;
        case NS_E_INPUT_WAVFORMAT_MISMATCH:
        cout << Utils::defaultOffset << "NS_E_INPUT_WAVFORMAT_MISMATCH" << endl;
        cout << Utils::defaultOffsetDocInfo << "All the source .wav files must have the same format." << endl;
        break;
        case NS_E_RECORDQ_DISK_FULL:
        cout << Utils::defaultOffset << "NS_E_RECORDQ_DISK_FULL" << endl;
        cout << Utils::defaultOffsetDocInfo << "The hard disk being used for temporary storage of content has reached the minimum allowed disk space. Create more space on the hard disk and restart encoding." << endl;
        break;
        case NS_E_NO_PAL_INVERSE_TELECINE:
        cout << Utils::defaultOffset << "NS_E_NO_PAL_INVERSE_TELECINE" << endl;
        cout << Utils::defaultOffsetDocInfo << "It is not possible to apply the inverse telecine feature to PAL content." << endl;
        break;
        case NS_E_ACTIVE_SG_DEVICE_DISCONNECTED:
        cout << Utils::defaultOffset << "NS_E_ACTIVE_SG_DEVICE_DISCONNECTED" << endl;
        cout << Utils::defaultOffsetDocInfo << "A capture device in the current active source is no longer available." << endl;
        break;
        case NS_E_ACTIVE_SG_DEVICE_CONTROL_DISCONNECTED:
        cout << Utils::defaultOffset << "NS_E_ACTIVE_SG_DEVICE_CONTROL_DISCONNECTED" << endl;
        cout << Utils::defaultOffsetDocInfo << "A device used in the current active source for device control is no longer available." << endl;
        break;
        case NS_E_NO_FRAMES_SUBMITTED_TO_ANALYZER:
        cout << Utils::defaultOffset << "NS_E_NO_FRAMES_SUBMITTED_TO_ANALYZER" << endl;
        cout << Utils::defaultOffsetDocInfo << "No frames have been submitted to the analyzer for analysis." << endl;
        break;
        case NS_E_INPUT_DOESNOT_SUPPORT_SMPTE:
        cout << Utils::defaultOffset << "NS_E_INPUT_DOESNOT_SUPPORT_SMPTE" << endl;
        cout << Utils::defaultOffsetDocInfo << "The source video does not support time codes." << endl;
        break;
        case NS_E_NO_SMPTE_WITH_MULTIPLE_SOURCEGROUPS:
        cout << Utils::defaultOffset << "NS_E_NO_SMPTE_WITH_MULTIPLE_SOURCEGROUPS" << endl;
        cout << Utils::defaultOffsetDocInfo << "It is not possible to generate a time code when there are multiple sources in a session." << endl;
        break;
        case NS_E_BAD_CONTENTEDL:
        cout << Utils::defaultOffset << "NS_E_BAD_CONTENTEDL" << endl;
        cout << Utils::defaultOffsetDocInfo << "The voice codec optimization definition file cannot be found or is corrupted." << endl;
        break;
        case NS_E_INTERLACEMODE_MISMATCH:
        cout << Utils::defaultOffset << "NS_E_INTERLACEMODE_MISMATCH" << endl;
        cout << Utils::defaultOffsetDocInfo << "The same source index in different audiences should have the same interlace mode." << endl;
        break;
        case NS_E_NONSQUAREPIXELMODE_MISMATCH:
        cout << Utils::defaultOffset << "NS_E_NONSQUAREPIXELMODE_MISMATCH" << endl;
        cout << Utils::defaultOffsetDocInfo << "The same source index in different audiences should have the same nonsquare pixel mode." << endl;
        break;
        case NS_E_SMPTEMODE_MISMATCH:
        cout << Utils::defaultOffset << "NS_E_SMPTEMODE_MISMATCH" << endl;
        cout << Utils::defaultOffsetDocInfo << "The same source index in different audiences should have the same time code mode." << endl;
        break;
        case NS_E_END_OF_TAPE:
        cout << Utils::defaultOffset << "NS_E_END_OF_TAPE" << endl;
        cout << Utils::defaultOffsetDocInfo << "Either the end of the tape has been reached or there is no tape. Check the device and tape." << endl;
        break;
        case NS_E_NO_MEDIA_IN_AUDIENCE:
        cout << Utils::defaultOffset << "NS_E_NO_MEDIA_IN_AUDIENCE" << endl;
        cout << Utils::defaultOffsetDocInfo << "No audio or video input has been specified." << endl;
        break;
        case NS_E_NO_AUDIENCES:
        cout << Utils::defaultOffset << "NS_E_NO_AUDIENCES" << endl;
        cout << Utils::defaultOffsetDocInfo << "The profile must contain a bit rate." << endl;
        break;
        case NS_E_NO_AUDIO_COMPAT:
        cout << Utils::defaultOffset << "NS_E_NO_AUDIO_COMPAT" << endl;
        cout << Utils::defaultOffsetDocInfo << "You must specify at least one audio stream to be compatible with Windows Media Player 7.1." << endl;
        break;
        case NS_E_INVALID_VBR_COMPAT:
        cout << Utils::defaultOffset << "NS_E_INVALID_VBR_COMPAT" << endl;
        cout << Utils::defaultOffsetDocInfo << "Using a VBR encoding mode is not compatible with Windows Media Player 7.1." << endl;
        break;
        case NS_E_NO_PROFILE_NAME:
        cout << Utils::defaultOffset << "NS_E_NO_PROFILE_NAME" << endl;
        cout << Utils::defaultOffsetDocInfo << "You must specify a profile name." << endl;
        break;
        case NS_E_INVALID_VBR_WITH_UNCOMP:
        cout << Utils::defaultOffset << "NS_E_INVALID_VBR_WITH_UNCOMP" << endl;
        cout << Utils::defaultOffsetDocInfo << "It is not possible to use a VBR encoding mode with uncompressed audio or video." << endl;
        break;
        case NS_E_MULTIPLE_VBR_AUDIENCES:
        cout << Utils::defaultOffset << "NS_E_MULTIPLE_VBR_AUDIENCES" << endl;
        cout << Utils::defaultOffsetDocInfo << "It is not possible to use MBR encoding with VBR encoding." << endl;
        break;
        case NS_E_UNCOMP_COMP_COMBINATION:
        cout << Utils::defaultOffset << "NS_E_UNCOMP_COMP_COMBINATION" << endl;
        cout << Utils::defaultOffsetDocInfo << "It is not possible to mix uncompressed and compressed content in a session." << endl;
        break;
        case NS_E_MULTIPLE_AUDIO_CODECS:
        cout << Utils::defaultOffset << "NS_E_MULTIPLE_AUDIO_CODECS" << endl;
        cout << Utils::defaultOffsetDocInfo << "All audiences must use the same audio codec." << endl;
        break;
        case NS_E_MULTIPLE_AUDIO_FORMATS:
        cout << Utils::defaultOffset << "NS_E_MULTIPLE_AUDIO_FORMATS" << endl;
        cout << Utils::defaultOffsetDocInfo << "All audiences should use the same audio format to be compatible with Windows Media Player 7.1." << endl;
        break;
        case NS_E_AUDIO_BITRATE_STEPDOWN:
        cout << Utils::defaultOffset << "NS_E_AUDIO_BITRATE_STEPDOWN" << endl;
        cout << Utils::defaultOffsetDocInfo << "The audio bit rate for an audience with a higher total bit rate must be greater than one with a lower total bit rate." << endl;
        break;
        case NS_E_INVALID_AUDIO_PEAKRATE:
        cout << Utils::defaultOffset << "NS_E_INVALID_AUDIO_PEAKRATE" << endl;
        cout << Utils::defaultOffsetDocInfo << "The audio peak bit rate setting is not valid." << endl;
        break;
        case NS_E_INVALID_AUDIO_PEAKRATE_2:
        cout << Utils::defaultOffset << "NS_E_INVALID_AUDIO_PEAKRATE_2" << endl;
        cout << Utils::defaultOffsetDocInfo << "The audio peak bit rate setting must be greater than the audio bit rate setting." << endl;
        break;
        case NS_E_INVALID_AUDIO_BUFFERMAX:
        cout << Utils::defaultOffset << "NS_E_INVALID_AUDIO_BUFFERMAX" << endl;
        cout << Utils::defaultOffsetDocInfo << "The setting for the maximum buffer size for audio is not valid." << endl;
        break;
        case NS_E_MULTIPLE_VIDEO_CODECS:
        cout << Utils::defaultOffset << "NS_E_MULTIPLE_VIDEO_CODECS" << endl;
        cout << Utils::defaultOffsetDocInfo << "All audiences must use the same video codec." << endl;
        break;
        case NS_E_MULTIPLE_VIDEO_SIZES:
        cout << Utils::defaultOffset << "NS_E_MULTIPLE_VIDEO_SIZES" << endl;
        cout << Utils::defaultOffsetDocInfo << "All audiences should use the same video size to be compatible with Windows Media Player 7.1." << endl;
        break;
        case NS_E_INVALID_VIDEO_BITRATE:
        cout << Utils::defaultOffset << "NS_E_INVALID_VIDEO_BITRATE" << endl;
        cout << Utils::defaultOffsetDocInfo << "The video bit rate setting is not valid." << endl;
        break;
        case NS_E_VIDEO_BITRATE_STEPDOWN:
        cout << Utils::defaultOffset << "NS_E_VIDEO_BITRATE_STEPDOWN" << endl;
        cout << Utils::defaultOffsetDocInfo << "The video bit rate for an audience with a higher total bit rate must be greater than one with a lower total bit rate." << endl;
        break;
        case NS_E_INVALID_VIDEO_PEAKRATE:
        cout << Utils::defaultOffset << "NS_E_INVALID_VIDEO_PEAKRATE" << endl;
        cout << Utils::defaultOffsetDocInfo << "The video peak bit rate setting is not valid." << endl;
        break;
        case NS_E_INVALID_VIDEO_PEAKRATE_2:
        cout << Utils::defaultOffset << "NS_E_INVALID_VIDEO_PEAKRATE_2" << endl;
        cout << Utils::defaultOffsetDocInfo << "The video peak bit rate setting must be greater than the video bit rate setting." << endl;
        break;
        case NS_E_INVALID_VIDEO_WIDTH:
        cout << Utils::defaultOffset << "NS_E_INVALID_VIDEO_WIDTH" << endl;
        cout << Utils::defaultOffsetDocInfo << "The video width setting is not valid." << endl;
        break;
        case NS_E_INVALID_VIDEO_HEIGHT:
        cout << Utils::defaultOffset << "NS_E_INVALID_VIDEO_HEIGHT" << endl;
        cout << Utils::defaultOffsetDocInfo << "The video height setting is not valid." << endl;
        break;
        case NS_E_INVALID_VIDEO_FPS:
        cout << Utils::defaultOffset << "NS_E_INVALID_VIDEO_FPS" << endl;
        cout << Utils::defaultOffsetDocInfo << "The video frame rate setting is not valid." << endl;
        break;
        case NS_E_INVALID_VIDEO_KEYFRAME:
        cout << Utils::defaultOffset << "NS_E_INVALID_VIDEO_KEYFRAME" << endl;
        cout << Utils::defaultOffsetDocInfo << "The video key frame setting is not valid." << endl;
        break;
        case NS_E_INVALID_VIDEO_IQUALITY:
        cout << Utils::defaultOffset << "NS_E_INVALID_VIDEO_IQUALITY" << endl;
        cout << Utils::defaultOffsetDocInfo << "The video image quality setting is not valid." << endl;
        break;
        case NS_E_INVALID_VIDEO_CQUALITY:
        cout << Utils::defaultOffset << "NS_E_INVALID_VIDEO_CQUALITY" << endl;
        cout << Utils::defaultOffsetDocInfo << "The video codec quality setting is not valid." << endl;
        break;
        case NS_E_INVALID_VIDEO_BUFFER:
        cout << Utils::defaultOffset << "NS_E_INVALID_VIDEO_BUFFER" << endl;
        cout << Utils::defaultOffsetDocInfo << "The video buffer setting is not valid." << endl;
        break;
        case NS_E_INVALID_VIDEO_BUFFERMAX:
        cout << Utils::defaultOffset << "NS_E_INVALID_VIDEO_BUFFERMAX" << endl;
        cout << Utils::defaultOffsetDocInfo << "The setting for the maximum buffer size for video is not valid." << endl;
        break;
        case NS_E_INVALID_VIDEO_BUFFERMAX_2:
        cout << Utils::defaultOffset << "NS_E_INVALID_VIDEO_BUFFERMAX_2" << endl;
        cout << Utils::defaultOffsetDocInfo << "The value of the video maximum buffer size setting must be greater than the video buffer size setting." << endl;
        break;
        case NS_E_INVALID_VIDEO_WIDTH_ALIGN:
        cout << Utils::defaultOffset << "NS_E_INVALID_VIDEO_WIDTH_ALIGN" << endl;
        cout << Utils::defaultOffsetDocInfo << "The alignment of the video width is not valid." << endl;
        break;
        case NS_E_INVALID_VIDEO_HEIGHT_ALIGN:
        cout << Utils::defaultOffset << "NS_E_INVALID_VIDEO_HEIGHT_ALIGN" << endl;
        cout << Utils::defaultOffsetDocInfo << "The alignment of the video height is not valid." << endl;
        break;
        case NS_E_MULTIPLE_SCRIPT_BITRATES:
        cout << Utils::defaultOffset << "NS_E_MULTIPLE_SCRIPT_BITRATES" << endl;
        cout << Utils::defaultOffsetDocInfo << "All bit rates must have the same script bit rate." << endl;
        break;
        case NS_E_INVALID_SCRIPT_BITRATE:
        cout << Utils::defaultOffset << "NS_E_INVALID_SCRIPT_BITRATE" << endl;
        cout << Utils::defaultOffsetDocInfo << "The script bit rate specified is not valid." << endl;
        break;
        case NS_E_MULTIPLE_FILE_BITRATES:
        cout << Utils::defaultOffset << "NS_E_MULTIPLE_FILE_BITRATES" << endl;
        cout << Utils::defaultOffsetDocInfo << "All bit rates must have the same file transfer bit rate." << endl;
        break;
        case NS_E_INVALID_FILE_BITRATE:
        cout << Utils::defaultOffset << "NS_E_INVALID_FILE_BITRATE" << endl;
        cout << Utils::defaultOffsetDocInfo << "The file transfer bit rate is not valid." << endl;
        break;
        case NS_E_SAME_AS_INPUT_COMBINATION:
        cout << Utils::defaultOffset << "NS_E_SAME_AS_INPUT_COMBINATION" << endl;
        cout << Utils::defaultOffsetDocInfo << "All audiences in a profile should either be same as input or have video width and height specified." << endl;
        break;
        case NS_E_SOURCE_CANNOT_LOOP:
        cout << Utils::defaultOffset << "NS_E_SOURCE_CANNOT_LOOP" << endl;
        cout << Utils::defaultOffsetDocInfo << "This source type does not support looping." << endl;
        break;
        case NS_E_INVALID_FOLDDOWN_COEFFICIENTS:
        cout << Utils::defaultOffset << "NS_E_INVALID_FOLDDOWN_COEFFICIENTS" << endl;
        cout << Utils::defaultOffsetDocInfo << "The fold-down value needs to be between -144 and 0." << endl;
        break;
        case NS_E_DRMPROFILE_NOTFOUND:
        cout << Utils::defaultOffset << "NS_E_DRMPROFILE_NOTFOUND" << endl;
        cout << Utils::defaultOffsetDocInfo << "The specified DRM profile does not exist in the system." << endl;
        break;
        case NS_E_INVALID_TIMECODE:
        cout << Utils::defaultOffset << "NS_E_INVALID_TIMECODE" << endl;
        cout << Utils::defaultOffsetDocInfo << "The specified time code is not valid." << endl;
        break;
        case NS_E_NO_AUDIO_TIMECOMPRESSION:
        cout << Utils::defaultOffset << "NS_E_NO_AUDIO_TIMECOMPRESSION" << endl;
        cout << Utils::defaultOffsetDocInfo << "It is not possible to apply time compression to a video-only session." << endl;
        break;
        case NS_E_NO_TWOPASS_TIMECOMPRESSION:
        cout << Utils::defaultOffset << "NS_E_NO_TWOPASS_TIMECOMPRESSION" << endl;
        cout << Utils::defaultOffsetDocInfo << "It is not possible to apply time compression to a session that is using two-pass encoding." << endl;
        break;
        case NS_E_TIMECODE_REQUIRES_VIDEOSTREAM:
        cout << Utils::defaultOffset << "NS_E_TIMECODE_REQUIRES_VIDEOSTREAM" << endl;
        cout << Utils::defaultOffsetDocInfo << "It is not possible to generate a time code for an audio-only session." << endl;
        break;
        case NS_E_NO_MBR_WITH_TIMECODE:
        cout << Utils::defaultOffset << "NS_E_NO_MBR_WITH_TIMECODE" << endl;
        cout << Utils::defaultOffsetDocInfo << "It is not possible to generate a time code when you are encoding content at multiple bit rates." << endl;
        break;
        case NS_E_INVALID_INTERLACEMODE:
        cout << Utils::defaultOffset << "NS_E_INVALID_INTERLACEMODE" << endl;
        cout << Utils::defaultOffsetDocInfo << "The video codec selected does not support maintaining interlacing in video." << endl;
        break;
        case NS_E_INVALID_INTERLACE_COMPAT:
        cout << Utils::defaultOffset << "NS_E_INVALID_INTERLACE_COMPAT" << endl;
        cout << Utils::defaultOffsetDocInfo << "Maintaining interlacing in video is not compatible with Windows Media Player 7.1." << endl;
        break;
        case NS_E_INVALID_NONSQUAREPIXEL_COMPAT:
        cout << Utils::defaultOffset << "NS_E_INVALID_NONSQUAREPIXEL_COMPAT" << endl;
        cout << Utils::defaultOffsetDocInfo << "Allowing nonsquare pixel output is not compatible with Windows Media Player 7.1." << endl;
        break;
        case NS_E_INVALID_SOURCE_WITH_DEVICE_CONTROL:
        cout << Utils::defaultOffset << "NS_E_INVALID_SOURCE_WITH_DEVICE_CONTROL" << endl;
        cout << Utils::defaultOffsetDocInfo << "Only capture devices can be used with device control." << endl;
        break;
        case NS_E_CANNOT_GENERATE_BROADCAST_INFO_FOR_QUALITYVBR:
        cout << Utils::defaultOffset << "NS_E_CANNOT_GENERATE_BROADCAST_INFO_FOR_QUALITYVBR" << endl;
        cout << Utils::defaultOffsetDocInfo << "It is not possible to generate the stream format file if you are using quality-based VBR encoding for the audio or video stream. Instead use the Windows Media file generated after encoding to create the announcement file." << endl;
        break;
        case NS_E_EXCEED_MAX_DRM_PROFILE_LIMIT:
        cout << Utils::defaultOffset << "NS_E_EXCEED_MAX_DRM_PROFILE_LIMIT" << endl;
        cout << Utils::defaultOffsetDocInfo << "It is not possible to create a DRM profile because the maximum number of profiles has been reached. You must delete some DRM profiles before creating new ones." << endl;
        break;
        case NS_E_DEVICECONTROL_UNSTABLE:
        cout << Utils::defaultOffset << "NS_E_DEVICECONTROL_UNSTABLE" << endl;
        cout << Utils::defaultOffsetDocInfo << "The device is in an unstable state. Check that the device is functioning properly and a tape is in place." << endl;
        break;
        case NS_E_INVALID_PIXEL_ASPECT_RATIO:
        cout << Utils::defaultOffset << "NS_E_INVALID_PIXEL_ASPECT_RATIO" << endl;
        cout << Utils::defaultOffsetDocInfo << "The pixel aspect ratio value must be between 1 and 255." << endl;
        break;
        case NS_E_AUDIENCE__LANGUAGE_CONTENTTYPE_MISMATCH:
        cout << Utils::defaultOffset << "NS_E_AUDIENCE__LANGUAGE_CONTENTTYPE_MISMATCH" << endl;
        cout << Utils::defaultOffsetDocInfo << "All streams with different languages in the same audience must have same properties." << endl;
        break;
        case NS_E_INVALID_PROFILE_CONTENTTYPE:
        cout << Utils::defaultOffset << "NS_E_INVALID_PROFILE_CONTENTTYPE" << endl;
        cout << Utils::defaultOffsetDocInfo << "The profile must contain at least one audio or video stream." << endl;
        break;
        case NS_E_TRANSFORM_PLUGIN_NOT_FOUND:
        cout << Utils::defaultOffset << "NS_E_TRANSFORM_PLUGIN_NOT_FOUND" << endl;
        cout << Utils::defaultOffsetDocInfo << "The transform plug-in could not be found." << endl;
        break;
        case NS_E_TRANSFORM_PLUGIN_INVALID:
        cout << Utils::defaultOffset << "NS_E_TRANSFORM_PLUGIN_INVALID" << endl;
        cout << Utils::defaultOffsetDocInfo << "The transform plug-in is not valid. It might be damaged or you might not have the required permissions to access the plug-in." << endl;
        break;
        case NS_E_EDL_REQUIRED_FOR_DEVICE_MULTIPASS:
        cout << Utils::defaultOffset << "NS_E_EDL_REQUIRED_FOR_DEVICE_MULTIPASS" << endl;
        cout << Utils::defaultOffsetDocInfo << "To use two-pass encoding, you must enable device control and setup an edit decision list (EDL) that has at least one entry." << endl;
        break;
        case NS_E_INVALID_VIDEO_WIDTH_FOR_INTERLACED_ENCODING:
        cout << Utils::defaultOffset << "NS_E_INVALID_VIDEO_WIDTH_FOR_INTERLACED_ENCODING" << endl;
        cout << Utils::defaultOffsetDocInfo << "When you choose to maintain the interlacing in your video, the output video size must be a multiple of 4." << endl;
        break;
        case NS_E_MARKIN_UNSUPPORTED:
        cout << Utils::defaultOffset << "NS_E_MARKIN_UNSUPPORTED" << endl;
        cout << Utils::defaultOffsetDocInfo << "Markin/Markout is unsupported with this source type." << endl;
        break;
        case NS_E_DRM_INVALID_APPLICATION:
        cout << Utils::defaultOffset << "NS_E_DRM_INVALID_APPLICATION" << endl;
        cout << Utils::defaultOffsetDocInfo << "A problem has occurred in the Digital Rights Management component. Contact product support for this application." << endl;
        break;
        case NS_E_DRM_LICENSE_STORE_ERROR:
        cout << Utils::defaultOffset << "NS_E_DRM_LICENSE_STORE_ERROR" << endl;
        cout << Utils::defaultOffsetDocInfo << "License storage is not working. Contact Microsoft product support." << endl;
        break;
        case NS_E_DRM_SECURE_STORE_ERROR:
        cout << Utils::defaultOffset << "NS_E_DRM_SECURE_STORE_ERROR" << endl;
        cout << Utils::defaultOffsetDocInfo << "Secure storage is not working. Contact Microsoft product support." << endl;
        break;
        case NS_E_DRM_LICENSE_STORE_SAVE_ERROR:
        cout << Utils::defaultOffset << "NS_E_DRM_LICENSE_STORE_SAVE_ERROR" << endl;
        cout << Utils::defaultOffsetDocInfo << "License acquisition did not work. Acquire a new license or contact the content provider for further assistance." << endl;
        break;
        case NS_E_DRM_SECURE_STORE_UNLOCK_ERROR:
        cout << Utils::defaultOffset << "NS_E_DRM_SECURE_STORE_UNLOCK_ERROR" << endl;
        cout << Utils::defaultOffsetDocInfo << "A problem has occurred in the Digital Rights Management component. Contact Microsoft product support." << endl;
        break;
        case NS_E_DRM_INVALID_CONTENT:
        cout << Utils::defaultOffset << "NS_E_DRM_INVALID_CONTENT" << endl;
        cout << Utils::defaultOffsetDocInfo << "The media file is corrupted. Contact the content provider to get a new file." << endl;
        break;
        case NS_E_DRM_UNABLE_TO_OPEN_LICENSE:
        cout << Utils::defaultOffset << "NS_E_DRM_UNABLE_TO_OPEN_LICENSE" << endl;
        cout << Utils::defaultOffsetDocInfo << "The license is corrupted. Acquire a new license." << endl;
        break;
        case NS_E_DRM_INVALID_LICENSE:
        cout << Utils::defaultOffset << "NS_E_DRM_INVALID_LICENSE" << endl;
        cout << Utils::defaultOffsetDocInfo << "The license is corrupted or invalid. Acquire a new license" << endl;
        break;
        case NS_E_DRM_INVALID_MACHINE:
        cout << Utils::defaultOffset << "NS_E_DRM_INVALID_MACHINE" << endl;
        cout << Utils::defaultOffsetDocInfo << "Licenses cannot be copied from one computer to another. Use License Management to transfer licenses, or get a new license for the media file." << endl;
        break;
        case NS_E_DRM_ENUM_LICENSE_FAILED:
        cout << Utils::defaultOffset << "NS_E_DRM_ENUM_LICENSE_FAILED" << endl;
        cout << Utils::defaultOffsetDocInfo << "License storage is not working. Contact Microsoft product support." << endl;
        break;
        case NS_E_DRM_INVALID_LICENSE_REQUEST:
        cout << Utils::defaultOffset << "NS_E_DRM_INVALID_LICENSE_REQUEST" << endl;
        cout << Utils::defaultOffsetDocInfo << "The media file is corrupted. Contact the content provider to get a new file." << endl;
        break;
        case NS_E_DRM_UNABLE_TO_INITIALIZE:
        cout << Utils::defaultOffset << "NS_E_DRM_UNABLE_TO_INITIALIZE" << endl;
        cout << Utils::defaultOffsetDocInfo << "A problem has occurred in the Digital Rights Management component. Contact Microsoft product support." << endl;
        break;
        case NS_E_DRM_UNABLE_TO_ACQUIRE_LICENSE:
        cout << Utils::defaultOffset << "NS_E_DRM_UNABLE_TO_ACQUIRE_LICENSE" << endl;
        cout << Utils::defaultOffsetDocInfo << "The license could not be acquired. Try again later." << endl;
        break;
        case NS_E_DRM_INVALID_LICENSE_ACQUIRED:
        cout << Utils::defaultOffset << "NS_E_DRM_INVALID_LICENSE_ACQUIRED" << endl;
        cout << Utils::defaultOffsetDocInfo << "License acquisition did not work. Acquire a new license or contact the content provider for further assistance." << endl;
        break;
        case NS_E_DRM_NO_RIGHTS:
        cout << Utils::defaultOffset << "NS_E_DRM_NO_RIGHTS" << endl;
        cout << Utils::defaultOffsetDocInfo << "The requested operation cannot be performed on this file." << endl;
        break;
        case NS_E_DRM_KEY_ERROR:
        cout << Utils::defaultOffset << "NS_E_DRM_KEY_ERROR" << endl;
        cout << Utils::defaultOffsetDocInfo << "The requested action cannot be performed because a problem occurred with the Windows Media Digital Rights Management (DRM) components on your computer." << endl;
        break;
        case NS_E_DRM_ENCRYPT_ERROR:
        cout << Utils::defaultOffset << "NS_E_DRM_ENCRYPT_ERROR" << endl;
        cout << Utils::defaultOffsetDocInfo << "A problem has occurred in the Digital Rights Management component. Contact Microsoft product support." << endl;
        break;
        case NS_E_DRM_DECRYPT_ERROR:
        cout << Utils::defaultOffset << "NS_E_DRM_DECRYPT_ERROR" << endl;
        cout << Utils::defaultOffsetDocInfo << "The media file is corrupted. Contact the content provider to get a new file." << endl;
        break;
        case NS_E_DRM_LICENSE_INVALID_XML:
        cout << Utils::defaultOffset << "NS_E_DRM_LICENSE_INVALID_XML" << endl;
        cout << Utils::defaultOffsetDocInfo << "The license is corrupted. Acquire a new license." << endl;
        break;
        case NS_E_DRM_NEEDS_INDIVIDUALIZATION:
        cout << Utils::defaultOffset << "NS_E_DRM_NEEDS_INDIVIDUALIZATION" << endl;
        cout << Utils::defaultOffsetDocInfo << "A security upgrade is required to perform the operation on this media file." << endl;
        break;
        case NS_E_DRM_ALREADY_INDIVIDUALIZED:
        cout << Utils::defaultOffset << "NS_E_DRM_ALREADY_INDIVIDUALIZED" << endl;
        cout << Utils::defaultOffsetDocInfo << "You already have the latest security components. No upgrade is necessary at this time." << endl;
        break;
        case NS_E_DRM_ACTION_NOT_QUERIED:
        cout << Utils::defaultOffset << "NS_E_DRM_ACTION_NOT_QUERIED" << endl;
        cout << Utils::defaultOffsetDocInfo << "The application cannot perform this action. Contact product support for this application." << endl;
        break;
        case NS_E_DRM_ACQUIRING_LICENSE:
        cout << Utils::defaultOffset << "NS_E_DRM_ACQUIRING_LICENSE" << endl;
        cout << Utils::defaultOffsetDocInfo << "You cannot begin a new license acquisition process until the current one has been completed." << endl;
        break;
        case NS_E_DRM_INDIVIDUALIZING:
        cout << Utils::defaultOffset << "NS_E_DRM_INDIVIDUALIZING" << endl;
        cout << Utils::defaultOffsetDocInfo << "You cannot begin a new security upgrade until the current one has been completed." << endl;
        break;
        case NS_E_BACKUP_RESTORE_FAILURE:
        cout << Utils::defaultOffset << "NS_E_BACKUP_RESTORE_FAILURE" << endl;
        cout << Utils::defaultOffsetDocInfo << "Failure in Backup-Restore." << endl;
        break;
        case NS_E_BACKUP_RESTORE_BAD_REQUEST_ID:
        cout << Utils::defaultOffset << "NS_E_BACKUP_RESTORE_BAD_REQUEST_ID" << endl;
        cout << Utils::defaultOffsetDocInfo << "Bad Request ID in Backup-Restore." << endl;
        break;
        case NS_E_DRM_PARAMETERS_MISMATCHED:
        cout << Utils::defaultOffset << "NS_E_DRM_PARAMETERS_MISMATCHED" << endl;
        cout << Utils::defaultOffsetDocInfo << "A problem has occurred in the Digital Rights Management component. Contact Microsoft product support." << endl;
        break;
        case NS_E_DRM_UNABLE_TO_CREATE_LICENSE_OBJECT:
        cout << Utils::defaultOffset << "NS_E_DRM_UNABLE_TO_CREATE_LICENSE_OBJECT" << endl;
        cout << Utils::defaultOffsetDocInfo << "A license cannot be created for this media file. Reinstall the application." << endl;
        break;
        case NS_E_DRM_UNABLE_TO_CREATE_INDI_OBJECT:
        cout << Utils::defaultOffset << "NS_E_DRM_UNABLE_TO_CREATE_INDI_OBJECT" << endl;
        cout << Utils::defaultOffsetDocInfo << "A problem has occurred in the Digital Rights Management component. Contact Microsoft product support." << endl;
        break;
        case NS_E_DRM_UNABLE_TO_CREATE_ENCRYPT_OBJECT:
        cout << Utils::defaultOffset << "NS_E_DRM_UNABLE_TO_CREATE_ENCRYPT_OBJECT" << endl;
        cout << Utils::defaultOffsetDocInfo << "A problem has occurred in the Digital Rights Management component. Contact Microsoft product support." << endl;
        break;
        case NS_E_DRM_UNABLE_TO_CREATE_DECRYPT_OBJECT:
        cout << Utils::defaultOffset << "NS_E_DRM_UNABLE_TO_CREATE_DECRYPT_OBJECT" << endl;
        cout << Utils::defaultOffsetDocInfo << "A problem has occurred in the Digital Rights Management component. Contact Microsoft product support." << endl;
        break;
        case NS_E_DRM_UNABLE_TO_CREATE_PROPERTIES_OBJECT:
        cout << Utils::defaultOffset << "NS_E_DRM_UNABLE_TO_CREATE_PROPERTIES_OBJECT" << endl;
        cout << Utils::defaultOffsetDocInfo << "A problem has occurred in the Digital Rights Management component. Contact Microsoft product support." << endl;
        break;
        case NS_E_DRM_UNABLE_TO_CREATE_BACKUP_OBJECT:
        cout << Utils::defaultOffset << "NS_E_DRM_UNABLE_TO_CREATE_BACKUP_OBJECT" << endl;
        cout << Utils::defaultOffsetDocInfo << "A problem has occurred in the Digital Rights Management component. Contact Microsoft product support." << endl;
        break;
        case NS_E_DRM_INDIVIDUALIZE_ERROR:
        cout << Utils::defaultOffset << "NS_E_DRM_INDIVIDUALIZE_ERROR" << endl;
        cout << Utils::defaultOffsetDocInfo << "The security upgrade failed. Try again later." << endl;
        break;
        case NS_E_DRM_LICENSE_OPEN_ERROR:
        cout << Utils::defaultOffset << "NS_E_DRM_LICENSE_OPEN_ERROR" << endl;
        cout << Utils::defaultOffsetDocInfo << "License storage is not working. Contact Microsoft product support." << endl;
        break;
        case NS_E_DRM_LICENSE_CLOSE_ERROR:
        cout << Utils::defaultOffset << "NS_E_DRM_LICENSE_CLOSE_ERROR" << endl;
        cout << Utils::defaultOffsetDocInfo << "License storage is not working. Contact Microsoft product support." << endl;
        break;
        case NS_E_DRM_GET_LICENSE_ERROR:
        cout << Utils::defaultOffset << "NS_E_DRM_GET_LICENSE_ERROR" << endl;
        cout << Utils::defaultOffsetDocInfo << "License storage is not working. Contact Microsoft product support." << endl;
        break;
        case NS_E_DRM_QUERY_ERROR:
        cout << Utils::defaultOffset << "NS_E_DRM_QUERY_ERROR" << endl;
        cout << Utils::defaultOffsetDocInfo << "A problem has occurred in the Digital Rights Management component. Contact Microsoft product support." << endl;
        break;
        case NS_E_DRM_REPORT_ERROR:
        cout << Utils::defaultOffset << "NS_E_DRM_REPORT_ERROR" << endl;
        cout << Utils::defaultOffsetDocInfo << "A problem has occurred in the Digital Rights Management component. Contact product support for this application." << endl;
        break;
        case NS_E_DRM_GET_LICENSESTRING_ERROR:
        cout << Utils::defaultOffset << "NS_E_DRM_GET_LICENSESTRING_ERROR" << endl;
        cout << Utils::defaultOffsetDocInfo << "License storage is not working. Contact Microsoft product support." << endl;
        break;
        case NS_E_DRM_GET_CONTENTSTRING_ERROR:
        cout << Utils::defaultOffset << "NS_E_DRM_GET_CONTENTSTRING_ERROR" << endl;
        cout << Utils::defaultOffsetDocInfo << "The media file is corrupted. Contact the content provider to get a new file." << endl;
        break;
        case NS_E_DRM_MONITOR_ERROR:
        cout << Utils::defaultOffset << "NS_E_DRM_MONITOR_ERROR" << endl;
        cout << Utils::defaultOffsetDocInfo << "A problem has occurred in the Digital Rights Management component. Try again later." << endl;
        break;
        case NS_E_DRM_UNABLE_TO_SET_PARAMETER:
        cout << Utils::defaultOffset << "NS_E_DRM_UNABLE_TO_SET_PARAMETER" << endl;
        cout << Utils::defaultOffsetDocInfo << "The application has made an invalid call to the Digital Rights Management component. Contact product support for this application." << endl;
        break;
        case NS_E_DRM_INVALID_APPDATA:
        cout << Utils::defaultOffset << "NS_E_DRM_INVALID_APPDATA" << endl;
        cout << Utils::defaultOffsetDocInfo << "A problem has occurred in the Digital Rights Management component. Contact Microsoft product support." << endl;
        break;
        case NS_E_DRM_INVALID_APPDATA_VERSION:
        cout << Utils::defaultOffset << "NS_E_DRM_INVALID_APPDATA_VERSION" << endl;
        cout << Utils::defaultOffsetDocInfo << "A problem has occurred in the Digital Rights Management component. Contact product support for this application." << endl;
        break;
        case NS_E_DRM_BACKUP_EXISTS:
        cout << Utils::defaultOffset << "NS_E_DRM_BACKUP_EXISTS" << endl;
        cout << Utils::defaultOffsetDocInfo << "Licenses are already backed up in this location." << endl;
        break;
        case NS_E_DRM_BACKUP_CORRUPT:
        cout << Utils::defaultOffset << "NS_E_DRM_BACKUP_CORRUPT" << endl;
        cout << Utils::defaultOffsetDocInfo << "One or more backed-up licenses are missing or corrupt." << endl;
        break;
        case NS_E_DRM_BACKUPRESTORE_BUSY:
        cout << Utils::defaultOffset << "NS_E_DRM_BACKUPRESTORE_BUSY" << endl;
        cout << Utils::defaultOffsetDocInfo << "You cannot begin a new backup process until the current process has been completed." << endl;
        break;
        case NS_E_BACKUP_RESTORE_BAD_DATA:
        cout << Utils::defaultOffset << "NS_E_BACKUP_RESTORE_BAD_DATA" << endl;
        cout << Utils::defaultOffsetDocInfo << "Bad Data sent to Backup-Restore." << endl;
        break;
        case NS_E_DRM_LICENSE_UNUSABLE:
        cout << Utils::defaultOffset << "NS_E_DRM_LICENSE_UNUSABLE" << endl;
        cout << Utils::defaultOffsetDocInfo << "The license is invalid. Contact the content provider for further assistance." << endl;
        break;
        case NS_E_DRM_INVALID_PROPERTY:
        cout << Utils::defaultOffset << "NS_E_DRM_INVALID_PROPERTY" << endl;
        cout << Utils::defaultOffsetDocInfo << "A required property was not set by the application. Contact product support for this application." << endl;
        break;
        case NS_E_DRM_SECURE_STORE_NOT_FOUND:
        cout << Utils::defaultOffset << "NS_E_DRM_SECURE_STORE_NOT_FOUND" << endl;
        cout << Utils::defaultOffsetDocInfo << "A problem has occurred in the Digital Rights Management component of this application. Try to acquire a license again." << endl;
        break;
        case NS_E_DRM_CACHED_CONTENT_ERROR:
        cout << Utils::defaultOffset << "NS_E_DRM_CACHED_CONTENT_ERROR" << endl;
        cout << Utils::defaultOffsetDocInfo << "A license cannot be found for this media file. Use License Management to transfer a license for this file from the original computer, or acquire a new license." << endl;
        break;
        case NS_E_DRM_INDIVIDUALIZATION_INCOMPLETE:
        cout << Utils::defaultOffset << "NS_E_DRM_INDIVIDUALIZATION_INCOMPLETE" << endl;
        cout << Utils::defaultOffsetDocInfo << "A problem occurred during the security upgrade. Try again later." << endl;
        break;
        case NS_E_DRM_DRIVER_AUTH_FAILURE:
        cout << Utils::defaultOffset << "NS_E_DRM_DRIVER_AUTH_FAILURE" << endl;
        cout << Utils::defaultOffsetDocInfo << "Certified driver components are required to play this media file. Contact Windows Update to see whether updated drivers are available for your hardware." << endl;
        break;
        case NS_E_DRM_NEED_UPGRADE_MSSAP:
        cout << Utils::defaultOffset << "NS_E_DRM_NEED_UPGRADE_MSSAP" << endl;
        cout << Utils::defaultOffsetDocInfo << "One or more of the Secure Audio Path components were not found or an entry point in those components was not found." << endl;
        break;
        case NS_E_DRM_REOPEN_CONTENT:
        cout << Utils::defaultOffset << "NS_E_DRM_REOPEN_CONTENT" << endl;
        cout << Utils::defaultOffsetDocInfo << "Status message: Reopen the file." << endl;
        break;
        case NS_E_DRM_DRIVER_DIGIOUT_FAILURE:
        cout << Utils::defaultOffset << "NS_E_DRM_DRIVER_DIGIOUT_FAILURE" << endl;
        cout << Utils::defaultOffsetDocInfo << "Certain driver functionality is required to play this media file. Contact Windows Update to see whether updated drivers are available for your hardware." << endl;
        break;
        case NS_E_DRM_INVALID_SECURESTORE_PASSWORD:
        cout << Utils::defaultOffset << "NS_E_DRM_INVALID_SECURESTORE_PASSWORD" << endl;
        cout << Utils::defaultOffsetDocInfo << "A problem has occurred in the Digital Rights Management component. Contact Microsoft product support." << endl;
        break;
        case NS_E_DRM_APPCERT_REVOKED:
        cout << Utils::defaultOffset << "NS_E_DRM_APPCERT_REVOKED" << endl;
        cout << Utils::defaultOffsetDocInfo << "A problem has occurred in the Digital Rights Management component. Contact Microsoft product support." << endl;
        break;
        case NS_E_DRM_RESTORE_FRAUD:
        cout << Utils::defaultOffset << "NS_E_DRM_RESTORE_FRAUD" << endl;
        cout << Utils::defaultOffsetDocInfo << "You cannot restore your license(s)." << endl;
        break;
        case NS_E_DRM_HARDWARE_INCONSISTENT:
        cout << Utils::defaultOffset << "NS_E_DRM_HARDWARE_INCONSISTENT" << endl;
        cout << Utils::defaultOffsetDocInfo << "The licenses for your media files are corrupted. Contact Microsoft product support." << endl;
        break;
        case NS_E_DRM_SDMI_TRIGGER:
        cout << Utils::defaultOffset << "NS_E_DRM_SDMI_TRIGGER" << endl;
        cout << Utils::defaultOffsetDocInfo << "To transfer this media file, you must upgrade the application." << endl;
        break;
        case NS_E_DRM_SDMI_NOMORECOPIES:
        cout << Utils::defaultOffset << "NS_E_DRM_SDMI_NOMORECOPIES" << endl;
        cout << Utils::defaultOffsetDocInfo << "You cannot make any more copies of this media file." << endl;
        break;
        case NS_E_DRM_UNABLE_TO_CREATE_HEADER_OBJECT:
        cout << Utils::defaultOffset << "NS_E_DRM_UNABLE_TO_CREATE_HEADER_OBJECT" << endl;
        cout << Utils::defaultOffsetDocInfo << "A problem has occurred in the Digital Rights Management component. Contact Microsoft product support." << endl;
        break;
        case NS_E_DRM_UNABLE_TO_CREATE_KEYS_OBJECT:
        cout << Utils::defaultOffset << "NS_E_DRM_UNABLE_TO_CREATE_KEYS_OBJECT" << endl;
        cout << Utils::defaultOffsetDocInfo << "A problem has occurred in the Digital Rights Management component. Contact Microsoft product support." << endl;
        break;
        case NS_E_DRM_LICENSE_NOTACQUIRED:
        cout << Utils::defaultOffset << "NS_E_DRM_LICENSE_NOTACQUIRED" << endl;
        cout << Utils::defaultOffsetDocInfo << "Unable to obtain license." << endl;
        break;
        case NS_E_DRM_UNABLE_TO_CREATE_CODING_OBJECT:
        cout << Utils::defaultOffset << "NS_E_DRM_UNABLE_TO_CREATE_CODING_OBJECT" << endl;
        cout << Utils::defaultOffsetDocInfo << "A problem has occurred in the Digital Rights Management component. Contact Microsoft product support." << endl;
        break;
        case NS_E_DRM_UNABLE_TO_CREATE_STATE_DATA_OBJECT:
        cout << Utils::defaultOffset << "NS_E_DRM_UNABLE_TO_CREATE_STATE_DATA_OBJECT" << endl;
        cout << Utils::defaultOffsetDocInfo << "A problem has occurred in the Digital Rights Management component. Contact Microsoft product support." << endl;
        break;
        case NS_E_DRM_BUFFER_TOO_SMALL:
        cout << Utils::defaultOffset << "NS_E_DRM_BUFFER_TOO_SMALL" << endl;
        cout << Utils::defaultOffsetDocInfo << "The buffer supplied is not sufficient." << endl;
        break;
        case NS_E_DRM_UNSUPPORTED_PROPERTY:
        cout << Utils::defaultOffset << "NS_E_DRM_UNSUPPORTED_PROPERTY" << endl;
        cout << Utils::defaultOffsetDocInfo << "The property requested is not supported." << endl;
        break;
        case NS_E_DRM_ERROR_BAD_NET_RESP:
        cout << Utils::defaultOffset << "NS_E_DRM_ERROR_BAD_NET_RESP" << endl;
        cout << Utils::defaultOffsetDocInfo << "The specified server cannot perform the requested operation." << endl;
        break;
        case NS_E_DRM_STORE_NOTALLSTORED:
        cout << Utils::defaultOffset << "NS_E_DRM_STORE_NOTALLSTORED" << endl;
        cout << Utils::defaultOffsetDocInfo << "Some of the licenses could not be stored." << endl;
        break;
        case NS_E_DRM_SECURITY_COMPONENT_SIGNATURE_INVALID:
        cout << Utils::defaultOffset << "NS_E_DRM_SECURITY_COMPONENT_SIGNATURE_INVALID" << endl;
        cout << Utils::defaultOffsetDocInfo << "The Digital Rights Management security upgrade component could not be validated. Contact Microsoft product support." << endl;
        break;
        case NS_E_DRM_INVALID_DATA:
        cout << Utils::defaultOffset << "NS_E_DRM_INVALID_DATA" << endl;
        cout << Utils::defaultOffsetDocInfo << "Invalid or corrupt data was encountered." << endl;
        break;
        case NS_E_DRM_POLICY_DISABLE_ONLINE:
        cout << Utils::defaultOffset << "NS_E_DRM_POLICY_DISABLE_ONLINE" << endl;
        cout << Utils::defaultOffsetDocInfo << "The Windows Media Digital Rights Management system cannot perform the requested action because your computer or network administrator has enabled the group policy Prevent Windows Media DRM Internet Access. For assistance, contact your administrator." << endl;
        break;
        case NS_E_DRM_UNABLE_TO_CREATE_AUTHENTICATION_OBJECT:
        cout << Utils::defaultOffset << "NS_E_DRM_UNABLE_TO_CREATE_AUTHENTICATION_OBJECT" << endl;
        cout << Utils::defaultOffsetDocInfo << "A problem has occurred in the Digital Rights Management component. Contact Microsoft product support." << endl;
        break;
        case NS_E_DRM_NOT_CONFIGURED:
        cout << Utils::defaultOffset << "NS_E_DRM_NOT_CONFIGURED" << endl;
        cout << Utils::defaultOffsetDocInfo << "Not all of the necessary properties for DRM have been set." << endl;
        break;
        case NS_E_DRM_DEVICE_ACTIVATION_CANCELED:
        cout << Utils::defaultOffset << "NS_E_DRM_DEVICE_ACTIVATION_CANCELED" << endl;
        cout << Utils::defaultOffsetDocInfo << "The portable device does not have the security required to copy protected files to it. To obtain the additional security, try to copy the file to your portable device again. When a message appears, click OK." << endl;
        break;
        case NS_E_BACKUP_RESTORE_TOO_MANY_RESETS:
        cout << Utils::defaultOffset << "NS_E_BACKUP_RESTORE_TOO_MANY_RESETS" << endl;
        cout << Utils::defaultOffsetDocInfo << "Too many resets in Backup-Restore." << endl;
        break;
        case NS_E_DRM_DEBUGGING_NOT_ALLOWED:
        cout << Utils::defaultOffset << "NS_E_DRM_DEBUGGING_NOT_ALLOWED" << endl;
        cout << Utils::defaultOffsetDocInfo << "Running this process under a debugger while using DRM content is not allowed." << endl;
        break;
        case NS_E_DRM_OPERATION_CANCELED:
        cout << Utils::defaultOffset << "NS_E_DRM_OPERATION_CANCELED" << endl;
        cout << Utils::defaultOffsetDocInfo << "The user canceled the DRM operation." << endl;
        break;
        case NS_E_DRM_RESTRICTIONS_NOT_RETRIEVED:
        cout << Utils::defaultOffset << "NS_E_DRM_RESTRICTIONS_NOT_RETRIEVED" << endl;
        cout << Utils::defaultOffsetDocInfo << "The license you are using has assocaited output restrictions. This license is unusable until these restrictions are queried." << endl;
        break;
        case NS_E_DRM_UNABLE_TO_CREATE_PLAYLIST_OBJECT:
        cout << Utils::defaultOffset << "NS_E_DRM_UNABLE_TO_CREATE_PLAYLIST_OBJECT" << endl;
        cout << Utils::defaultOffsetDocInfo << "A problem has occurred in the Digital Rights Management component. Contact Microsoft product support." << endl;
        break;
        case NS_E_DRM_UNABLE_TO_CREATE_PLAYLIST_BURN_OBJECT:
        cout << Utils::defaultOffset << "NS_E_DRM_UNABLE_TO_CREATE_PLAYLIST_BURN_OBJECT" << endl;
        cout << Utils::defaultOffsetDocInfo << "A problem has occurred in the Digital Rights Management component. Contact Microsoft product support." << endl;
        break;
        case NS_E_DRM_UNABLE_TO_CREATE_DEVICE_REGISTRATION_OBJECT:
        cout << Utils::defaultOffset << "NS_E_DRM_UNABLE_TO_CREATE_DEVICE_REGISTRATION_OBJECT" << endl;
        cout << Utils::defaultOffsetDocInfo << "A problem has occurred in the Digital Rights Management component. Contact Microsoft product support." << endl;
        break;
        case NS_E_DRM_UNABLE_TO_CREATE_METERING_OBJECT:
        cout << Utils::defaultOffset << "NS_E_DRM_UNABLE_TO_CREATE_METERING_OBJECT" << endl;
        cout << Utils::defaultOffsetDocInfo << "A problem has occurred in the Digital Rights Management component. Contact Microsoft product support." << endl;
        break;
        case NS_E_DRM_TRACK_EXCEEDED_PLAYLIST_RESTICTION:
        cout << Utils::defaultOffset << "NS_E_DRM_TRACK_EXCEEDED_PLAYLIST_RESTICTION" << endl;
        cout << Utils::defaultOffsetDocInfo << "The specified track has exceeded it's specified playlist burn limit in this playlist." << endl;
        break;
        case NS_E_DRM_TRACK_EXCEEDED_TRACKBURN_RESTRICTION:
        cout << Utils::defaultOffset << "NS_E_DRM_TRACK_EXCEEDED_TRACKBURN_RESTRICTION" << endl;
        cout << Utils::defaultOffsetDocInfo << "The specified track has exceeded it's track burn limit." << endl;
        break;
        case NS_E_DRM_UNABLE_TO_GET_DEVICE_CERT:
        cout << Utils::defaultOffset << "NS_E_DRM_UNABLE_TO_GET_DEVICE_CERT" << endl;
        cout << Utils::defaultOffsetDocInfo << "A problem has occurred in obtaining the device's certificate. Contact Microsoft product support." << endl;
        break;
        case NS_E_DRM_UNABLE_TO_GET_SECURE_CLOCK:
        cout << Utils::defaultOffset << "NS_E_DRM_UNABLE_TO_GET_SECURE_CLOCK" << endl;
        cout << Utils::defaultOffsetDocInfo << "A problem has occurred in obtaining the device's secure clock. Contact Microsoft product support." << endl;
        break;
        case NS_E_DRM_UNABLE_TO_SET_SECURE_CLOCK:
        cout << Utils::defaultOffset << "NS_E_DRM_UNABLE_TO_SET_SECURE_CLOCK" << endl;
        cout << Utils::defaultOffsetDocInfo << "A problem has occurred in setting the device's secure clock. Contact Microsoft product support." << endl;
        break;
        case NS_E_DRM_UNABLE_TO_GET_SECURE_CLOCK_FROM_SERVER:
        cout << Utils::defaultOffset << "NS_E_DRM_UNABLE_TO_GET_SECURE_CLOCK_FROM_SERVER" << endl;
        cout << Utils::defaultOffsetDocInfo << "A problem has occurred in obtaining the secure clock from server. Contact Microsoft product support." << endl;
        break;
        case NS_E_DRM_POLICY_METERING_DISABLED:
        cout << Utils::defaultOffset << "NS_E_DRM_POLICY_METERING_DISABLED" << endl;
        cout << Utils::defaultOffsetDocInfo << "This content requires the metering policy to be enabled." << endl;
        break;
        case NS_E_DRM_TRANSFER_CHAINED_LICENSES_UNSUPPORTED:
        cout << Utils::defaultOffset << "NS_E_DRM_TRANSFER_CHAINED_LICENSES_UNSUPPORTED" << endl;
        cout << Utils::defaultOffsetDocInfo << "Transfer of chained licenses unsupported." << endl;
        break;
        case NS_E_DRM_SDK_VERSIONMISMATCH:
        cout << Utils::defaultOffset << "NS_E_DRM_SDK_VERSIONMISMATCH" << endl;
        cout << Utils::defaultOffsetDocInfo << "The Digital Rights Management component is not installed properly. Reinstall the Player." << endl;
        break;
        case NS_E_DRM_LIC_NEEDS_DEVICE_CLOCK_SET:
        cout << Utils::defaultOffset << "NS_E_DRM_LIC_NEEDS_DEVICE_CLOCK_SET" << endl;
        cout << Utils::defaultOffsetDocInfo << "The file could not be transferred because the device clock is not set." << endl;
        break;
        case NS_E_LICENSE_HEADER_MISSING_URL:
        cout << Utils::defaultOffset << "NS_E_LICENSE_HEADER_MISSING_URL" << endl;
        cout << Utils::defaultOffsetDocInfo << "The content header is missing an acquisition URL." << endl;
        break;
        case NS_E_DEVICE_NOT_WMDRM_DEVICE:
        cout << Utils::defaultOffset << "NS_E_DEVICE_NOT_WMDRM_DEVICE" << endl;
        cout << Utils::defaultOffsetDocInfo << "The current attached device does not support WMDRM." << endl;
        break;
        case NS_E_DRM_INVALID_APPCERT:
        cout << Utils::defaultOffset << "NS_E_DRM_INVALID_APPCERT" << endl;
        cout << Utils::defaultOffsetDocInfo << "A problem has occurred in the Digital Rights Management component. Contact Microsoft product support." << endl;
        break;
        case NS_E_DRM_PROTOCOL_FORCEFUL_TERMINATION_ON_PETITION:
        cout << Utils::defaultOffset << "NS_E_DRM_PROTOCOL_FORCEFUL_TERMINATION_ON_PETITION" << endl;
        cout << Utils::defaultOffsetDocInfo << "The client application has been forcefully terminated during a DRM petition." << endl;
        break;
        case NS_E_DRM_PROTOCOL_FORCEFUL_TERMINATION_ON_CHALLENGE:
        cout << Utils::defaultOffset << "NS_E_DRM_PROTOCOL_FORCEFUL_TERMINATION_ON_CHALLENGE" << endl;
        cout << Utils::defaultOffsetDocInfo << "The client application has been forcefully terminated during a DRM challenge." << endl;
        break;
        case NS_E_DRM_CHECKPOINT_FAILED:
        cout << Utils::defaultOffset << "NS_E_DRM_CHECKPOINT_FAILED" << endl;
        cout << Utils::defaultOffsetDocInfo << "Secure storage protection error. Restore your licenses from a previous backup and try again." << endl;
        break;
        case NS_E_DRM_BB_UNABLE_TO_INITIALIZE:
        cout << Utils::defaultOffset << "NS_E_DRM_BB_UNABLE_TO_INITIALIZE" << endl;
        cout << Utils::defaultOffsetDocInfo << "A problem has occurred in the Digital Rights Management root of trust. Contact Microsoft product support." << endl;
        break;
        case NS_E_DRM_UNABLE_TO_LOAD_HARDWARE_ID:
        cout << Utils::defaultOffset << "NS_E_DRM_UNABLE_TO_LOAD_HARDWARE_ID" << endl;
        cout << Utils::defaultOffsetDocInfo << "A problem has occurred in retrieving the Digital Rights Management machine identification. Contact Microsoft product support." << endl;
        break;
        case NS_E_DRM_UNABLE_TO_OPEN_DATA_STORE:
        cout << Utils::defaultOffset << "NS_E_DRM_UNABLE_TO_OPEN_DATA_STORE" << endl;
        cout << Utils::defaultOffsetDocInfo << "A problem has occurred in opening the Digital Rights Management data storage file. Contact Microsoft product." << endl;
        break;
        case NS_E_DRM_DATASTORE_CORRUPT:
        cout << Utils::defaultOffset << "NS_E_DRM_DATASTORE_CORRUPT" << endl;
        cout << Utils::defaultOffsetDocInfo << "The Digital Rights Management data storage is not functioning properly. Contact Microsoft product support." << endl;
        break;
        case NS_E_DRM_UNABLE_TO_CREATE_INMEMORYSTORE_OBJECT:
        cout << Utils::defaultOffset << "NS_E_DRM_UNABLE_TO_CREATE_INMEMORYSTORE_OBJECT" << endl;
        cout << Utils::defaultOffsetDocInfo << "A problem has occurred in the Digital Rights Management component. Contact Microsoft product support." << endl;
        break;
        case NS_E_DRM_STUBLIB_REQUIRED:
        cout << Utils::defaultOffset << "NS_E_DRM_STUBLIB_REQUIRED" << endl;
        cout << Utils::defaultOffsetDocInfo << "A secured library is required to access the requested functionality." << endl;
        break;
        case NS_E_DRM_UNABLE_TO_CREATE_CERTIFICATE_OBJECT:
        cout << Utils::defaultOffset << "NS_E_DRM_UNABLE_TO_CREATE_CERTIFICATE_OBJECT" << endl;
        cout << Utils::defaultOffsetDocInfo << "A problem has occurred in the Digital Rights Management component. Contact Microsoft product support." << endl;
        break;
        case NS_E_DRM_MIGRATION_TARGET_NOT_ONLINE:
        cout << Utils::defaultOffset << "NS_E_DRM_MIGRATION_TARGET_NOT_ONLINE" << endl;
        cout << Utils::defaultOffsetDocInfo << "A problem has occurred in the Digital Rights Management component during license migration. Contact Microsoft product support." << endl;
        break;
        case NS_E_DRM_INVALID_MIGRATION_IMAGE:
        cout << Utils::defaultOffset << "NS_E_DRM_INVALID_MIGRATION_IMAGE" << endl;
        cout << Utils::defaultOffsetDocInfo << "A problem has occurred in the Digital Rights Management component during license migration. Contact Microsoft product support." << endl;
        break;
        case NS_E_DRM_MIGRATION_TARGET_STATES_CORRUPTED:
        cout << Utils::defaultOffset << "NS_E_DRM_MIGRATION_TARGET_STATES_CORRUPTED" << endl;
        cout << Utils::defaultOffsetDocInfo << "A problem has occurred in the Digital Rights Management component during license migration. Contact Microsoft product support." << endl;
        break;
        case NS_E_DRM_MIGRATION_IMPORTER_NOT_AVAILABLE:
        cout << Utils::defaultOffset << "NS_E_DRM_MIGRATION_IMPORTER_NOT_AVAILABLE" << endl;
        cout << Utils::defaultOffsetDocInfo << "A problem has occurred in the Digital Rights Management component during license migration. Contact Microsoft product support." << endl;
        break;
        case NS_DRM_E_MIGRATION_UPGRADE_WITH_DIFF_SID:
        cout << Utils::defaultOffset << "NS_DRM_E_MIGRATION_UPGRADE_WITH_DIFF_SID" << endl;
        cout << Utils::defaultOffsetDocInfo << "A problem has occurred in the Digital Rights Management component during license migration. Contact Microsoft product support." << endl;
        break;
        case NS_DRM_E_MIGRATION_SOURCE_MACHINE_IN_USE:
        cout << Utils::defaultOffset << "NS_DRM_E_MIGRATION_SOURCE_MACHINE_IN_USE" << endl;
        cout << Utils::defaultOffsetDocInfo << "The Digital Rights Management component is in use during license migration. Contact Microsoft product support." << endl;
        break;
        case NS_DRM_E_MIGRATION_TARGET_MACHINE_LESS_THAN_LH:
        cout << Utils::defaultOffset << "NS_DRM_E_MIGRATION_TARGET_MACHINE_LESS_THAN_LH" << endl;
        cout << Utils::defaultOffsetDocInfo << "Licenses are being migrated to a machine running XP or downlevel OS. This operation can only be performed on Windows Vista or a later OS. Contact Microsoft product support." << endl;
        break;
        case NS_DRM_E_MIGRATION_IMAGE_ALREADY_EXISTS:
        cout << Utils::defaultOffset << "NS_DRM_E_MIGRATION_IMAGE_ALREADY_EXISTS" << endl;
        cout << Utils::defaultOffsetDocInfo << "Migration Image already exists. Contact Microsoft product support." << endl;
        break;
        case NS_E_DRM_HARDWAREID_MISMATCH:
        cout << Utils::defaultOffset << "NS_E_DRM_HARDWAREID_MISMATCH" << endl;
        cout << Utils::defaultOffsetDocInfo << "The requested action cannot be performed because a hardware configuration change has been detected by the Windows Media Digital Rights Management (DRM) components on your computer." << endl;
        break;
        case NS_E_INVALID_DRMV2CLT_STUBLIB:
        cout << Utils::defaultOffset << "NS_E_INVALID_DRMV2CLT_STUBLIB" << endl;
        cout << Utils::defaultOffsetDocInfo << "The wrong stublib has been linked to an application or DLL using drmv2clt.dll." << endl;
        break;
        case NS_E_DRM_MIGRATION_INVALID_LEGACYV2_DATA:
        cout << Utils::defaultOffset << "NS_E_DRM_MIGRATION_INVALID_LEGACYV2_DATA" << endl;
        cout << Utils::defaultOffsetDocInfo << "The legacy V2 data being imported is invalid." << endl;
        break;
        case NS_E_DRM_MIGRATION_LICENSE_ALREADY_EXISTS:
        cout << Utils::defaultOffset << "NS_E_DRM_MIGRATION_LICENSE_ALREADY_EXISTS" << endl;
        cout << Utils::defaultOffsetDocInfo << "The license being imported already exists." << endl;
        break;
        case NS_E_DRM_MIGRATION_INVALID_LEGACYV2_SST_PASSWORD:
        cout << Utils::defaultOffset << "NS_E_DRM_MIGRATION_INVALID_LEGACYV2_SST_PASSWORD" << endl;
        cout << Utils::defaultOffsetDocInfo << "The password of the Legacy V2 SST entry being imported is incorrect." << endl;
        break;
        case NS_E_DRM_MIGRATION_NOT_SUPPORTED:
        cout << Utils::defaultOffset << "NS_E_DRM_MIGRATION_NOT_SUPPORTED" << endl;
        cout << Utils::defaultOffsetDocInfo << "Migration is not supported by the plugin." << endl;
        break;
        case NS_E_DRM_UNABLE_TO_CREATE_MIGRATION_IMPORTER_OBJECT:
        cout << Utils::defaultOffset << "NS_E_DRM_UNABLE_TO_CREATE_MIGRATION_IMPORTER_OBJECT" << endl;
        cout << Utils::defaultOffsetDocInfo << "A migration importer cannot be created for this media file. Reinstall the application." << endl;
        break;
        case NS_E_DRM_CHECKPOINT_MISMATCH:
        cout << Utils::defaultOffset << "NS_E_DRM_CHECKPOINT_MISMATCH" << endl;
        cout << Utils::defaultOffsetDocInfo << "The requested action cannot be performed because a problem occurred with the Windows Media Digital Rights Management (DRM) components on your computer." << endl;
        break;
        case NS_E_DRM_CHECKPOINT_CORRUPT:
        cout << Utils::defaultOffset << "NS_E_DRM_CHECKPOINT_CORRUPT" << endl;
        cout << Utils::defaultOffsetDocInfo << "The requested action cannot be performed because a problem occurred with the Windows Media Digital Rights Management (DRM) components on your computer." << endl;
        break;
        case NS_E_REG_FLUSH_FAILURE:
        cout << Utils::defaultOffset << "NS_E_REG_FLUSH_FAILURE" << endl;
        cout << Utils::defaultOffsetDocInfo << "The requested action cannot be performed because a problem occurred with the Windows Media Digital Rights Management (DRM) components on your computer." << endl;
        break;
        case NS_E_HDS_KEY_MISMATCH:
        cout << Utils::defaultOffset << "NS_E_HDS_KEY_MISMATCH" << endl;
        cout << Utils::defaultOffsetDocInfo << "The requested action cannot be performed because a problem occurred with the Windows Media Digital Rights Management (DRM) components on your computer." << endl;
        break;
        case NS_E_DRM_MIGRATION_OPERATION_CANCELLED:
        cout << Utils::defaultOffset << "NS_E_DRM_MIGRATION_OPERATION_CANCELLED" << endl;
        cout << Utils::defaultOffsetDocInfo << "Migration was canceled by the user." << endl;
        break;
        case NS_E_DRM_MIGRATION_OBJECT_IN_USE:
        cout << Utils::defaultOffset << "NS_E_DRM_MIGRATION_OBJECT_IN_USE" << endl;
        cout << Utils::defaultOffsetDocInfo << "Migration object is already in use and cannot be called until the current operation completes." << endl;
        break;
        case NS_E_DRM_MALFORMED_CONTENT_HEADER:
        cout << Utils::defaultOffset << "NS_E_DRM_MALFORMED_CONTENT_HEADER" << endl;
        cout << Utils::defaultOffsetDocInfo << "The content header does not comply with DRM requirements and cannot be used." << endl;
        break;
        case NS_E_DRM_LICENSE_EXPIRED:
        cout << Utils::defaultOffset << "NS_E_DRM_LICENSE_EXPIRED" << endl;
        cout << Utils::defaultOffsetDocInfo << "The license for this file has expired and is no longer valid. Contact your content provider for further assistance." << endl;
        break;
        case NS_E_DRM_LICENSE_NOTENABLED:
        cout << Utils::defaultOffset << "NS_E_DRM_LICENSE_NOTENABLED" << endl;
        cout << Utils::defaultOffsetDocInfo << "The license for this file is not valid yet, but will be at a future date." << endl;
        break;
        case NS_E_DRM_LICENSE_APPSECLOW:
        cout << Utils::defaultOffset << "NS_E_DRM_LICENSE_APPSECLOW" << endl;
        cout << Utils::defaultOffsetDocInfo << "The license for this file requires a higher level of security than the player you are currently using has. Try using a different player or download a newer version of your current player." << endl;
        break;
        case NS_E_DRM_STORE_NEEDINDI:
        cout << Utils::defaultOffset << "NS_E_DRM_STORE_NEEDINDI" << endl;
        cout << Utils::defaultOffsetDocInfo << "The license cannot be stored as it requires security upgrade of Digital Rights Management component." << endl;
        break;
        case NS_E_DRM_STORE_NOTALLOWED:
        cout << Utils::defaultOffset << "NS_E_DRM_STORE_NOTALLOWED" << endl;
        cout << Utils::defaultOffsetDocInfo << "Your machine does not meet the requirements for storing the license." << endl;
        break;
        case NS_E_DRM_LICENSE_APP_NOTALLOWED:
        cout << Utils::defaultOffset << "NS_E_DRM_LICENSE_APP_NOTALLOWED" << endl;
        cout << Utils::defaultOffsetDocInfo << "The license for this file requires an upgraded version of your player or a different player." << endl;
        break;
        case NS_E_DRM_LICENSE_CERT_EXPIRED:
        cout << Utils::defaultOffset << "NS_E_DRM_LICENSE_CERT_EXPIRED" << endl;
        cout << Utils::defaultOffsetDocInfo << "The license server's certificate expired. Make sure your system clock is set correctly. Contact your content provider for further assistance." << endl;
        break;
        case NS_E_DRM_LICENSE_SECLOW:
        cout << Utils::defaultOffset << "NS_E_DRM_LICENSE_SECLOW" << endl;
        cout << Utils::defaultOffsetDocInfo << "The license for this file requires a higher level of security than the player you are currently using has. Try using a different player or download a newer version of your current player." << endl;
        break;
        case NS_E_DRM_LICENSE_CONTENT_REVOKED:
        cout << Utils::defaultOffset << "NS_E_DRM_LICENSE_CONTENT_REVOKED" << endl;
        cout << Utils::defaultOffsetDocInfo << "The content owner for the license you just acquired is no longer supporting their content. Contact the content owner for a newer version of the content." << endl;
        break;
        case NS_E_DRM_DEVICE_NOT_REGISTERED:
        cout << Utils::defaultOffset << "NS_E_DRM_DEVICE_NOT_REGISTERED" << endl;
        cout << Utils::defaultOffsetDocInfo << "The content owner for the license you just acquired requires your device to register to the current machine." << endl;
        break;
        case NS_E_DRM_LICENSE_NOSAP:
        cout << Utils::defaultOffset << "NS_E_DRM_LICENSE_NOSAP" << endl;
        cout << Utils::defaultOffsetDocInfo << "The license for this file requires a feature that is not supported in your current player or operating system. You can try with newer version of your current player or contact your content provider for further assistance." << endl;
        break;
        case NS_E_DRM_LICENSE_NOSVP:
        cout << Utils::defaultOffset << "NS_E_DRM_LICENSE_NOSVP" << endl;
        cout << Utils::defaultOffsetDocInfo << "The license for this file requires a feature that is not supported in your current player or operating system. You can try with newer version of your current player or contact your content provider for further assistance." << endl;
        break;
        case NS_E_DRM_LICENSE_NOWDM:
        cout << Utils::defaultOffset << "NS_E_DRM_LICENSE_NOWDM" << endl;
        cout << Utils::defaultOffsetDocInfo << "The license for this file requires Windows Driver Model (WDM) audio drivers. Contact your sound card manufacturer for further assistance." << endl;
        break;
        case NS_E_DRM_LICENSE_NOTRUSTEDCODEC:
        cout << Utils::defaultOffset << "NS_E_DRM_LICENSE_NOTRUSTEDCODEC" << endl;
        cout << Utils::defaultOffsetDocInfo << "The license for this file requires a higher level of security than the player you are currently using has. Try using a different player or download a newer version of your current player." << endl;
        break;
        case NS_E_DRM_SOURCEID_NOT_SUPPORTED:
        cout << Utils::defaultOffset << "NS_E_DRM_SOURCEID_NOT_SUPPORTED" << endl;
        cout << Utils::defaultOffsetDocInfo << "The license for this file is not supported by your current player. You can try with newer version of your current player or contact your content provider for further assistance." << endl;
        break;
        case NS_E_DRM_NEEDS_UPGRADE_TEMPFILE:
        cout << Utils::defaultOffset << "NS_E_DRM_NEEDS_UPGRADE_TEMPFILE" << endl;
        cout << Utils::defaultOffsetDocInfo << "An updated version of your media player is required to play the selected content." << endl;
        break;
        case NS_E_DRM_NEED_UPGRADE_PD:
        cout << Utils::defaultOffset << "NS_E_DRM_NEED_UPGRADE_PD" << endl;
        cout << Utils::defaultOffsetDocInfo << "A new version of the Digital Rights Management component is required. Contact product support for this application to get the latest version." << endl;
        break;
        case NS_E_DRM_SIGNATURE_FAILURE:
        cout << Utils::defaultOffset << "NS_E_DRM_SIGNATURE_FAILURE" << endl;
        cout << Utils::defaultOffsetDocInfo << "Failed to either create or verify the content header." << endl;
        break;
        case NS_E_DRM_LICENSE_SERVER_INFO_MISSING:
        cout << Utils::defaultOffset << "NS_E_DRM_LICENSE_SERVER_INFO_MISSING" << endl;
        cout << Utils::defaultOffsetDocInfo << "Could not read the necessary information from the system registry." << endl;
        break;
        case NS_E_DRM_BUSY:
        cout << Utils::defaultOffset << "NS_E_DRM_BUSY" << endl;
        cout << Utils::defaultOffsetDocInfo << "The DRM subsystem is currently locked by another application or user. Try again later." << endl;
        break;
        case NS_E_DRM_PD_TOO_MANY_DEVICES:
        cout << Utils::defaultOffset << "NS_E_DRM_PD_TOO_MANY_DEVICES" << endl;
        cout << Utils::defaultOffsetDocInfo << "There are too many target devices registered on the portable media." << endl;
        break;
        case NS_E_DRM_INDIV_FRAUD:
        cout << Utils::defaultOffset << "NS_E_DRM_INDIV_FRAUD" << endl;
        cout << Utils::defaultOffsetDocInfo << "The security upgrade cannot be completed because the allowed number of daily upgrades has been exceeded. Try again tomorrow." << endl;
        break;
        case NS_E_DRM_INDIV_NO_CABS:
        cout << Utils::defaultOffset << "NS_E_DRM_INDIV_NO_CABS" << endl;
        cout << Utils::defaultOffsetDocInfo << "The security upgrade cannot be completed because the server is unable to perform the operation. Try again later." << endl;
        break;
        case NS_E_DRM_INDIV_SERVICE_UNAVAILABLE:
        cout << Utils::defaultOffset << "NS_E_DRM_INDIV_SERVICE_UNAVAILABLE" << endl;
        cout << Utils::defaultOffsetDocInfo << "The security upgrade cannot be performed because the server is not available. Try again later." << endl;
        break;
        case NS_E_DRM_RESTORE_SERVICE_UNAVAILABLE:
        cout << Utils::defaultOffset << "NS_E_DRM_RESTORE_SERVICE_UNAVAILABLE" << endl;
        cout << Utils::defaultOffsetDocInfo << "Windows Media Player cannot restore your licenses because the server is not available. Try again later." << endl;
        break;
        case NS_E_DRM_CLIENT_CODE_EXPIRED:
        cout << Utils::defaultOffset << "NS_E_DRM_CLIENT_CODE_EXPIRED" << endl;
        cout << Utils::defaultOffsetDocInfo << "Windows Media Player cannot play the protected file. Verify that your computer's date is set correctly. If it is correct, on the Help menu, click Check for Player Updates to install the latest version of the Player." << endl;
        break;
        case NS_E_DRM_NO_UPLINK_LICENSE:
        cout << Utils::defaultOffset << "NS_E_DRM_NO_UPLINK_LICENSE" << endl;
        cout << Utils::defaultOffsetDocInfo << "The chained license cannot be created because the referenced uplink license does not exist." << endl;
        break;
        case NS_E_DRM_INVALID_KID:
        cout << Utils::defaultOffset << "NS_E_DRM_INVALID_KID" << endl;
        cout << Utils::defaultOffsetDocInfo << "The specified KID is invalid." << endl;
        break;
        case NS_E_DRM_LICENSE_INITIALIZATION_ERROR:
        cout << Utils::defaultOffset << "NS_E_DRM_LICENSE_INITIALIZATION_ERROR" << endl;
        cout << Utils::defaultOffsetDocInfo << "License initialization did not work. Contact Microsoft product support." << endl;
        break;
        case NS_E_DRM_CHAIN_TOO_LONG:
        cout << Utils::defaultOffset << "NS_E_DRM_CHAIN_TOO_LONG" << endl;
        cout << Utils::defaultOffsetDocInfo << "The uplink license of a chained license cannot itself be a chained license." << endl;
        break;
        case NS_E_DRM_UNSUPPORTED_ALGORITHM:
        cout << Utils::defaultOffset << "NS_E_DRM_UNSUPPORTED_ALGORITHM" << endl;
        cout << Utils::defaultOffsetDocInfo << "The specified encryption algorithm is unsupported." << endl;
        break;
        case NS_E_DRM_LICENSE_DELETION_ERROR:
        cout << Utils::defaultOffset << "NS_E_DRM_LICENSE_DELETION_ERROR" << endl;
        cout << Utils::defaultOffsetDocInfo << "License deletion did not work. Contact Microsoft product support." << endl;
        break;
        case NS_E_DRM_INVALID_CERTIFICATE:
        cout << Utils::defaultOffset << "NS_E_DRM_INVALID_CERTIFICATE" << endl;
        cout << Utils::defaultOffsetDocInfo << "The client's certificate is corrupted or the signature cannot be verified." << endl;
        break;
        case NS_E_DRM_CERTIFICATE_REVOKED:
        cout << Utils::defaultOffset << "NS_E_DRM_CERTIFICATE_REVOKED" << endl;
        cout << Utils::defaultOffsetDocInfo << "The client's certificate has been revoked." << endl;
        break;
        case NS_E_DRM_LICENSE_UNAVAILABLE:
        cout << Utils::defaultOffset << "NS_E_DRM_LICENSE_UNAVAILABLE" << endl;
        cout << Utils::defaultOffsetDocInfo << "There is no license available for the requested action." << endl;
        break;
        case NS_E_DRM_DEVICE_LIMIT_REACHED:
        cout << Utils::defaultOffset << "NS_E_DRM_DEVICE_LIMIT_REACHED" << endl;
        cout << Utils::defaultOffsetDocInfo << "The maximum number of devices in use has been reached. Unable to open additional devices." << endl;
        break;
        case NS_E_DRM_UNABLE_TO_VERIFY_PROXIMITY:
        cout << Utils::defaultOffset << "NS_E_DRM_UNABLE_TO_VERIFY_PROXIMITY" << endl;
        cout << Utils::defaultOffsetDocInfo << "The proximity detection procedure could not confirm that the receiver is near the transmitter in the network." << endl;
        break;
        case NS_E_DRM_MUST_REGISTER:
        cout << Utils::defaultOffset << "NS_E_DRM_MUST_REGISTER" << endl;
        cout << Utils::defaultOffsetDocInfo << "The client must be registered before executing the intended operation." << endl;
        break;
        case NS_E_DRM_MUST_APPROVE:
        cout << Utils::defaultOffset << "NS_E_DRM_MUST_APPROVE" << endl;
        cout << Utils::defaultOffsetDocInfo << "The client must be approved before executing the intended operation." << endl;
        break;
        case NS_E_DRM_MUST_REVALIDATE:
        cout << Utils::defaultOffset << "NS_E_DRM_MUST_REVALIDATE" << endl;
        cout << Utils::defaultOffsetDocInfo << "The client must be revalidated before executing the intended operation." << endl;
        break;
        case NS_E_DRM_INVALID_PROXIMITY_RESPONSE:
        cout << Utils::defaultOffset << "NS_E_DRM_INVALID_PROXIMITY_RESPONSE" << endl;
        cout << Utils::defaultOffsetDocInfo << "The response to the proximity detection challenge is invalid." << endl;
        break;
        case NS_E_DRM_INVALID_SESSION:
        cout << Utils::defaultOffset << "NS_E_DRM_INVALID_SESSION" << endl;
        cout << Utils::defaultOffsetDocInfo << "The requested session is invalid." << endl;
        break;
        case NS_E_DRM_DEVICE_NOT_OPEN:
        cout << Utils::defaultOffset << "NS_E_DRM_DEVICE_NOT_OPEN" << endl;
        cout << Utils::defaultOffsetDocInfo << "The device must be opened before it can be used to receive content." << endl;
        break;
        case NS_E_DRM_DEVICE_ALREADY_REGISTERED:
        cout << Utils::defaultOffset << "NS_E_DRM_DEVICE_ALREADY_REGISTERED" << endl;
        cout << Utils::defaultOffsetDocInfo << "Device registration failed because the device is already registered." << endl;
        break;
        case NS_E_DRM_UNSUPPORTED_PROTOCOL_VERSION:
        cout << Utils::defaultOffset << "NS_E_DRM_UNSUPPORTED_PROTOCOL_VERSION" << endl;
        cout << Utils::defaultOffsetDocInfo << "Unsupported WMDRM-ND protocol version." << endl;
        break;
        case NS_E_DRM_UNSUPPORTED_ACTION:
        cout << Utils::defaultOffset << "NS_E_DRM_UNSUPPORTED_ACTION" << endl;
        cout << Utils::defaultOffsetDocInfo << "The requested action is not supported." << endl;
        break;
        case NS_E_DRM_CERTIFICATE_SECURITY_LEVEL_INADEQUATE:
        cout << Utils::defaultOffset << "NS_E_DRM_CERTIFICATE_SECURITY_LEVEL_INADEQUATE" << endl;
        cout << Utils::defaultOffsetDocInfo << "The certificate does not have an adequate security level for the requested action." << endl;
        break;
        case NS_E_DRM_UNABLE_TO_OPEN_PORT:
        cout << Utils::defaultOffset << "NS_E_DRM_UNABLE_TO_OPEN_PORT" << endl;
        cout << Utils::defaultOffsetDocInfo << "Unable to open the specified port for receiving Proximity messages." << endl;
        break;
        case NS_E_DRM_BAD_REQUEST:
        cout << Utils::defaultOffset << "NS_E_DRM_BAD_REQUEST" << endl;
        cout << Utils::defaultOffsetDocInfo << "The message format is invalid." << endl;
        break;
        case NS_E_DRM_INVALID_CRL:
        cout << Utils::defaultOffset << "NS_E_DRM_INVALID_CRL" << endl;
        cout << Utils::defaultOffsetDocInfo << "The Certificate Revocation List is invalid or corrupted." << endl;
        break;
        case NS_E_DRM_ATTRIBUTE_TOO_LONG:
        cout << Utils::defaultOffset << "NS_E_DRM_ATTRIBUTE_TOO_LONG" << endl;
        cout << Utils::defaultOffsetDocInfo << "The length of the attribute name or value is too long." << endl;
        break;
        case NS_E_DRM_EXPIRED_LICENSEBLOB:
        cout << Utils::defaultOffset << "NS_E_DRM_EXPIRED_LICENSEBLOB" << endl;
        cout << Utils::defaultOffsetDocInfo << "The license blob passed in the cardea request is expired." << endl;
        break;
        case NS_E_DRM_INVALID_LICENSEBLOB:
        cout << Utils::defaultOffset << "NS_E_DRM_INVALID_LICENSEBLOB" << endl;
        cout << Utils::defaultOffsetDocInfo << "The license blob passed in the cardea request is invalid. Contact Microsoft product support." << endl;
        break;
        case NS_E_DRM_INCLUSION_LIST_REQUIRED:
        cout << Utils::defaultOffset << "NS_E_DRM_INCLUSION_LIST_REQUIRED" << endl;
        cout << Utils::defaultOffsetDocInfo << "The requested operation cannot be performed because the license does not contain an inclusion list." << endl;
        break;
        case NS_E_DRM_DRMV2CLT_REVOKED:
        cout << Utils::defaultOffset << "NS_E_DRM_DRMV2CLT_REVOKED" << endl;
        cout << Utils::defaultOffsetDocInfo << "A problem has occurred in the Digital Rights Management component. Contact Microsoft product support." << endl;
        break;
        case NS_E_DRM_RIV_TOO_SMALL:
        cout << Utils::defaultOffset << "NS_E_DRM_RIV_TOO_SMALL" << endl;
        cout << Utils::defaultOffsetDocInfo << "A problem has occurred in the Digital Rights Management component. Contact Microsoft product support." << endl;
        break;
        case NS_E_OUTPUT_PROTECTION_LEVEL_UNSUPPORTED:
        cout << Utils::defaultOffset << "NS_E_OUTPUT_PROTECTION_LEVEL_UNSUPPORTED" << endl;
        cout << Utils::defaultOffsetDocInfo << "Windows Media Player does not support the level of output protection required by the content." << endl;
        break;
        case NS_E_COMPRESSED_DIGITAL_VIDEO_PROTECTION_LEVEL_UNSUPPORTED:
        cout << Utils::defaultOffset << "NS_E_COMPRESSED_DIGITAL_VIDEO_PROTECTION_LEVEL_UNSUPPORTED" << endl;
        cout << Utils::defaultOffsetDocInfo << "Windows Media Player does not support the level of protection required for compressed digital video." << endl;
        break;
        case NS_E_UNCOMPRESSED_DIGITAL_VIDEO_PROTECTION_LEVEL_UNSUPPORTED:
        cout << Utils::defaultOffset << "NS_E_UNCOMPRESSED_DIGITAL_VIDEO_PROTECTION_LEVEL_UNSUPPORTED" << endl;
        cout << Utils::defaultOffsetDocInfo << "Windows Media Player does not support the level of protection required for uncompressed digital video." << endl;
        break;
        case NS_E_ANALOG_VIDEO_PROTECTION_LEVEL_UNSUPPORTED:
        cout << Utils::defaultOffset << "NS_E_ANALOG_VIDEO_PROTECTION_LEVEL_UNSUPPORTED" << endl;
        cout << Utils::defaultOffsetDocInfo << "Windows Media Player does not support the level of protection required for analog video." << endl;
        break;
        case NS_E_COMPRESSED_DIGITAL_AUDIO_PROTECTION_LEVEL_UNSUPPORTED:
        cout << Utils::defaultOffset << "NS_E_COMPRESSED_DIGITAL_AUDIO_PROTECTION_LEVEL_UNSUPPORTED" << endl;
        cout << Utils::defaultOffsetDocInfo << "Windows Media Player does not support the level of protection required for compressed digital audio." << endl;
        break;
        case NS_E_UNCOMPRESSED_DIGITAL_AUDIO_PROTECTION_LEVEL_UNSUPPORTED:
        cout << Utils::defaultOffset << "NS_E_UNCOMPRESSED_DIGITAL_AUDIO_PROTECTION_LEVEL_UNSUPPORTED" << endl;
        cout << Utils::defaultOffsetDocInfo << "Windows Media Player does not support the level of protection required for uncompressed digital audio." << endl;
        break;
        case NS_E_OUTPUT_PROTECTION_SCHEME_UNSUPPORTED:
        cout << Utils::defaultOffset << "NS_E_OUTPUT_PROTECTION_SCHEME_UNSUPPORTED" << endl;
        cout << Utils::defaultOffsetDocInfo << "Windows Media Player does not support the scheme of output protection required by the content." << endl;
        break;
        case NS_E_REBOOT_RECOMMENDED:
        cout << Utils::defaultOffset << "NS_E_REBOOT_RECOMMENDED" << endl;
        cout << Utils::defaultOffsetDocInfo << "Installation was not successful and some file cleanup is not complete. For best results, restart your computer." << endl;
        break;
        case NS_E_REBOOT_REQUIRED:
        cout << Utils::defaultOffset << "NS_E_REBOOT_REQUIRED" << endl;
        cout << Utils::defaultOffsetDocInfo << "Installation was not successful. To continue, you must restart your computer." << endl;
        break;
        case NS_E_SETUP_INCOMPLETE:
        cout << Utils::defaultOffset << "NS_E_SETUP_INCOMPLETE" << endl;
        cout << Utils::defaultOffsetDocInfo << "Installation was not successful." << endl;
        break;
        case NS_E_SETUP_DRM_MIGRATION_FAILED:
        cout << Utils::defaultOffset << "NS_E_SETUP_DRM_MIGRATION_FAILED" << endl;
        cout << Utils::defaultOffsetDocInfo << "Setup cannot migrate the Windows Media Digital Rights Management (DRM) components." << endl;
        break;
        case NS_E_SETUP_IGNORABLE_FAILURE:
        cout << Utils::defaultOffset << "NS_E_SETUP_IGNORABLE_FAILURE" << endl;
        cout << Utils::defaultOffsetDocInfo << "Some skin or playlist components cannot be installed." << endl;
        break;
        case NS_E_SETUP_DRM_MIGRATION_FAILED_AND_IGNORABLE_FAILURE:
        cout << Utils::defaultOffset << "NS_E_SETUP_DRM_MIGRATION_FAILED_AND_IGNORABLE_FAILURE" << endl;
        cout << Utils::defaultOffsetDocInfo << "Setup cannot migrate the Windows Media Digital Rights Management (DRM) components. In addition, some skin or playlist components cannot be installed." << endl;
        break;
        case NS_E_SETUP_BLOCKED:
        cout << Utils::defaultOffset << "NS_E_SETUP_BLOCKED" << endl;
        cout << Utils::defaultOffsetDocInfo << "Installation is blocked because your computer does not meet one or more of the setup requirements." << endl;
        break;
        case NS_E_UNKNOWN_PROTOCOL:
        cout << Utils::defaultOffset << "NS_E_UNKNOWN_PROTOCOL" << endl;
        cout << Utils::defaultOffsetDocInfo << "The specified protocol is not supported." << endl;
        break;
        case NS_E_REDIRECT_TO_PROXY:
        cout << Utils::defaultOffset << "NS_E_REDIRECT_TO_PROXY" << endl;
        cout << Utils::defaultOffsetDocInfo << "The client is redirected to a proxy server." << endl;
        break;
        case NS_E_INTERNAL_SERVER_ERROR:
        cout << Utils::defaultOffset << "NS_E_INTERNAL_SERVER_ERROR" << endl;
        cout << Utils::defaultOffsetDocInfo << "The server encountered an unexpected condition which prevented it from fulfilling the request." << endl;
        break;
        case NS_E_BAD_REQUEST:
        cout << Utils::defaultOffset << "NS_E_BAD_REQUEST" << endl;
        cout << Utils::defaultOffsetDocInfo << "The request could not be understood by the server." << endl;
        break;
        case NS_E_ERROR_FROM_PROXY:
        cout << Utils::defaultOffset << "NS_E_ERROR_FROM_PROXY" << endl;
        cout << Utils::defaultOffsetDocInfo << "The proxy experienced an error while attempting to contact the media server." << endl;
        break;
        case NS_E_PROXY_TIMEOUT:
        cout << Utils::defaultOffset << "NS_E_PROXY_TIMEOUT" << endl;
        cout << Utils::defaultOffsetDocInfo << "The proxy did not receive a timely response while attempting to contact the media server." << endl;
        break;
        case NS_E_SERVER_UNAVAILABLE:
        cout << Utils::defaultOffset << "NS_E_SERVER_UNAVAILABLE" << endl;
        cout << Utils::defaultOffsetDocInfo << "The server is currently unable to handle the request due to a temporary overloading or maintenance of the server." << endl;
        break;
        case NS_E_REFUSED_BY_SERVER:
        cout << Utils::defaultOffset << "NS_E_REFUSED_BY_SERVER" << endl;
        cout << Utils::defaultOffsetDocInfo << "The server is refusing to fulfill the requested operation." << endl;
        break;
        case NS_E_INCOMPATIBLE_SERVER:
        cout << Utils::defaultOffset << "NS_E_INCOMPATIBLE_SERVER" << endl;
        cout << Utils::defaultOffsetDocInfo << "The server is not a compatible streaming media server." << endl;
        break;
        case NS_E_MULTICAST_DISABLED:
        cout << Utils::defaultOffset << "NS_E_MULTICAST_DISABLED" << endl;
        cout << Utils::defaultOffsetDocInfo << "The content cannot be streamed because the Multicast protocol has been disabled." << endl;
        break;
        case NS_E_INVALID_REDIRECT:
        cout << Utils::defaultOffset << "NS_E_INVALID_REDIRECT" << endl;
        cout << Utils::defaultOffsetDocInfo << "The server redirected the player to an invalid location." << endl;
        break;
        case NS_E_ALL_PROTOCOLS_DISABLED:
        cout << Utils::defaultOffset << "NS_E_ALL_PROTOCOLS_DISABLED" << endl;
        cout << Utils::defaultOffsetDocInfo << "The content cannot be streamed because all protocols have been disabled." << endl;
        break;
        case NS_E_MSBD_NO_LONGER_SUPPORTED:
        cout << Utils::defaultOffset << "NS_E_MSBD_NO_LONGER_SUPPORTED" << endl;
        cout << Utils::defaultOffsetDocInfo << "The MSBD protocol is no longer supported. Please use HTTP to connect to the Windows Media stream." << endl;
        break;
        case NS_E_PROXY_NOT_FOUND:
        cout << Utils::defaultOffset << "NS_E_PROXY_NOT_FOUND" << endl;
        cout << Utils::defaultOffsetDocInfo << "The proxy server could not be located. Please check your proxy server configuration." << endl;
        break;
        case NS_E_CANNOT_CONNECT_TO_PROXY:
        cout << Utils::defaultOffset << "NS_E_CANNOT_CONNECT_TO_PROXY" << endl;
        cout << Utils::defaultOffsetDocInfo << "Unable to establish a connection to the proxy server. Please check your proxy server configuration." << endl;
        break;
        case NS_E_SERVER_DNS_TIMEOUT:
        cout << Utils::defaultOffset << "NS_E_SERVER_DNS_TIMEOUT" << endl;
        cout << Utils::defaultOffsetDocInfo << "Unable to locate the media server. The operation timed out." << endl;
        break;
        case NS_E_PROXY_DNS_TIMEOUT:
        cout << Utils::defaultOffset << "NS_E_PROXY_DNS_TIMEOUT" << endl;
        cout << Utils::defaultOffsetDocInfo << "Unable to locate the proxy server. The operation timed out." << endl;
        break;
        case NS_E_CLOSED_ON_SUSPEND:
        cout << Utils::defaultOffset << "NS_E_CLOSED_ON_SUSPEND" << endl;
        cout << Utils::defaultOffsetDocInfo << "Media closed because Windows was shut down." << endl;
        break;
        case NS_E_CANNOT_READ_PLAYLIST_FROM_MEDIASERVER:
        cout << Utils::defaultOffset << "NS_E_CANNOT_READ_PLAYLIST_FROM_MEDIASERVER" << endl;
        cout << Utils::defaultOffsetDocInfo << "Unable to read the contents of a playlist file from a media server." << endl;
        break;
        case NS_E_SESSION_NOT_FOUND:
        cout << Utils::defaultOffset << "NS_E_SESSION_NOT_FOUND" << endl;
        cout << Utils::defaultOffsetDocInfo << "Session not found." << endl;
        break;
        case NS_E_REQUIRE_STREAMING_CLIENT:
        cout << Utils::defaultOffset << "NS_E_REQUIRE_STREAMING_CLIENT" << endl;
        cout << Utils::defaultOffsetDocInfo << "Content requires a streaming media client." << endl;
        break;
        case NS_E_PLAYLIST_ENTRY_HAS_CHANGED:
        cout << Utils::defaultOffset << "NS_E_PLAYLIST_ENTRY_HAS_CHANGED" << endl;
        cout << Utils::defaultOffsetDocInfo << "A command applies to a previous playlist entry." << endl;
        break;
        case NS_E_PROXY_ACCESSDENIED:
        cout << Utils::defaultOffset << "NS_E_PROXY_ACCESSDENIED" << endl;
        cout << Utils::defaultOffsetDocInfo << "The proxy server is denying access. The username and/or password might be incorrect." << endl;
        break;
        case NS_E_PROXY_SOURCE_ACCESSDENIED:
        cout << Utils::defaultOffset << "NS_E_PROXY_SOURCE_ACCESSDENIED" << endl;
        cout << Utils::defaultOffsetDocInfo << "The proxy could not provide valid authentication credentials to the media server." << endl;
        break;
        case NS_E_NETWORK_SINK_WRITE:
        cout << Utils::defaultOffset << "NS_E_NETWORK_SINK_WRITE" << endl;
        cout << Utils::defaultOffsetDocInfo << "The network sink failed to write data to the network." << endl;
        break;
        case NS_E_FIREWALL:
        cout << Utils::defaultOffset << "NS_E_FIREWALL" << endl;
        cout << Utils::defaultOffsetDocInfo << "Packets are not being received from the server. The packets might be blocked by a filtering device, such as a network firewall." << endl;
        break;
        case NS_E_MMS_NOT_SUPPORTED:
        cout << Utils::defaultOffset << "NS_E_MMS_NOT_SUPPORTED" << endl;
        cout << Utils::defaultOffsetDocInfo << "The MMS protocol is not supported. Please use HTTP or RTSP to connect to the Windows Media stream." << endl;
        break;
        case NS_E_SERVER_ACCESSDENIED:
        cout << Utils::defaultOffset << "NS_E_SERVER_ACCESSDENIED" << endl;
        cout << Utils::defaultOffsetDocInfo << "The Windows Media server is denying access. The username and/or password might be incorrect." << endl;
        break;
        case NS_E_RESOURCE_GONE:
        cout << Utils::defaultOffset << "NS_E_RESOURCE_GONE" << endl;
        cout << Utils::defaultOffsetDocInfo << "The Publishing Point or file on the Windows Media Server is no longer available." << endl;
        break;
        case NS_E_NO_EXISTING_PACKETIZER:
        cout << Utils::defaultOffset << "NS_E_NO_EXISTING_PACKETIZER" << endl;
        cout << Utils::defaultOffsetDocInfo << "There is no existing packetizer plugin for a stream." << endl;
        break;
        case NS_E_BAD_SYNTAX_IN_SERVER_RESPONSE:
        cout << Utils::defaultOffset << "NS_E_BAD_SYNTAX_IN_SERVER_RESPONSE" << endl;
        cout << Utils::defaultOffsetDocInfo << "The response from the media server could not be understood. This might be caused by an incompatible proxy server or media server." << endl;
        break;
        case NS_E_RESET_SOCKET_CONNECTION:
        cout << Utils::defaultOffset << "NS_E_RESET_SOCKET_CONNECTION" << endl;
        cout << Utils::defaultOffsetDocInfo << "The Windows Media Server reset the network connection." << endl;
        break;
        case NS_E_TOO_MANY_HOPS:
        cout << Utils::defaultOffset << "NS_E_TOO_MANY_HOPS" << endl;
        cout << Utils::defaultOffsetDocInfo << "The request could not reach the media server (too many hops)." << endl;
        break;
        case NS_E_TOO_MUCH_DATA_FROM_SERVER:
        cout << Utils::defaultOffset << "NS_E_TOO_MUCH_DATA_FROM_SERVER" << endl;
        cout << Utils::defaultOffsetDocInfo << "The server is sending too much data. The connection has been terminated." << endl;
        break;
        case NS_E_CONNECT_TIMEOUT:
        cout << Utils::defaultOffset << "NS_E_CONNECT_TIMEOUT" << endl;
        cout << Utils::defaultOffsetDocInfo << "It was not possible to establish a connection to the media server in a timely manner. The media server might be down for maintenance, or it might be necessary to use a proxy server to access this media server." << endl;
        break;
        case NS_E_PROXY_CONNECT_TIMEOUT:
        cout << Utils::defaultOffset << "NS_E_PROXY_CONNECT_TIMEOUT" << endl;
        cout << Utils::defaultOffsetDocInfo << "It was not possible to establish a connection to the proxy server in a timely manner. Please check your proxy server configuration." << endl;
        break;
        case NS_E_SESSION_INVALID:
        cout << Utils::defaultOffset << "NS_E_SESSION_INVALID" << endl;
        cout << Utils::defaultOffsetDocInfo << "Session not found." << endl;
        break;
        case NS_E_PACKETSINK_UNKNOWN_FEC_STREAM:
        cout << Utils::defaultOffset << "NS_E_PACKETSINK_UNKNOWN_FEC_STREAM" << endl;
        cout << Utils::defaultOffsetDocInfo << "Unknown packet sink stream." << endl;
        break;
        case NS_E_PUSH_CANNOTCONNECT:
        cout << Utils::defaultOffset << "NS_E_PUSH_CANNOTCONNECT" << endl;
        cout << Utils::defaultOffsetDocInfo << "Unable to establish a connection to the server. Ensure Windows Media Services is started and the HTTP Server control protocol is properly enabled." << endl;
        break;
        case NS_E_INCOMPATIBLE_PUSH_SERVER:
        cout << Utils::defaultOffset << "NS_E_INCOMPATIBLE_PUSH_SERVER" << endl;
        cout << Utils::defaultOffsetDocInfo << "The Server service that received the HTTP push request is not a compatible version of Windows Media Services (WMS). This error might indicate the push request was received by IIS instead of WMS. Ensure WMS is started and has the HTTP Server control protocol properly enabled and try again." << endl;
        break;
        case NS_E_END_OF_PLAYLIST:
        cout << Utils::defaultOffset << "NS_E_END_OF_PLAYLIST" << endl;
        cout << Utils::defaultOffsetDocInfo << "The playlist has reached its end." << endl;
        break;
        case NS_E_USE_FILE_SOURCE:
        cout << Utils::defaultOffset << "NS_E_USE_FILE_SOURCE" << endl;
        cout << Utils::defaultOffsetDocInfo << "Use file source." << endl;
        break;
        case NS_E_PROPERTY_NOT_FOUND:
        cout << Utils::defaultOffset << "NS_E_PROPERTY_NOT_FOUND" << endl;
        cout << Utils::defaultOffsetDocInfo << "The property was not found." << endl;
        break;
        case NS_E_PROPERTY_READ_ONLY:
        cout << Utils::defaultOffset << "NS_E_PROPERTY_READ_ONLY" << endl;
        cout << Utils::defaultOffsetDocInfo << "The property is read only." << endl;
        break;
        case NS_E_TABLE_KEY_NOT_FOUND:
        cout << Utils::defaultOffset << "NS_E_TABLE_KEY_NOT_FOUND" << endl;
        cout << Utils::defaultOffsetDocInfo << "The table key was not found." << endl;
        break;
        case NS_E_INVALID_QUERY_OPERATOR:
        cout << Utils::defaultOffset << "NS_E_INVALID_QUERY_OPERATOR" << endl;
        cout << Utils::defaultOffsetDocInfo << "Invalid query operator." << endl;
        break;
        case NS_E_INVALID_QUERY_PROPERTY:
        cout << Utils::defaultOffset << "NS_E_INVALID_QUERY_PROPERTY" << endl;
        cout << Utils::defaultOffsetDocInfo << "Invalid query property." << endl;
        break;
        case NS_E_PROPERTY_NOT_SUPPORTED:
        cout << Utils::defaultOffset << "NS_E_PROPERTY_NOT_SUPPORTED" << endl;
        cout << Utils::defaultOffsetDocInfo << "The property is not supported." << endl;
        break;
        case NS_E_SCHEMA_CLASSIFY_FAILURE:
        cout << Utils::defaultOffset << "NS_E_SCHEMA_CLASSIFY_FAILURE" << endl;
        cout << Utils::defaultOffsetDocInfo << "Schema classification failure." << endl;
        break;
        case NS_E_METADATA_FORMAT_NOT_SUPPORTED:
        cout << Utils::defaultOffset << "NS_E_METADATA_FORMAT_NOT_SUPPORTED" << endl;
        cout << Utils::defaultOffsetDocInfo << "The metadata format is not supported." << endl;
        break;
        case NS_E_METADATA_NO_EDITING_CAPABILITY:
        cout << Utils::defaultOffset << "NS_E_METADATA_NO_EDITING_CAPABILITY" << endl;
        cout << Utils::defaultOffsetDocInfo << "Cannot edit the metadata." << endl;
        break;
        case NS_E_METADATA_CANNOT_SET_LOCALE:
        cout << Utils::defaultOffset << "NS_E_METADATA_CANNOT_SET_LOCALE" << endl;
        cout << Utils::defaultOffsetDocInfo << "Cannot set the locale id." << endl;
        break;
        case NS_E_METADATA_LANGUAGE_NOT_SUPORTED:
        cout << Utils::defaultOffset << "NS_E_METADATA_LANGUAGE_NOT_SUPORTED" << endl;
        cout << Utils::defaultOffsetDocInfo << "The language is not supported in the format." << endl;
        break;
        case NS_E_METADATA_NO_RFC1766_NAME_FOR_LOCALE:
        cout << Utils::defaultOffset << "NS_E_METADATA_NO_RFC1766_NAME_FOR_LOCALE" << endl;
        cout << Utils::defaultOffsetDocInfo << "There is no RFC1766 name translation for the supplied locale id." << endl;
        break;
        case NS_E_METADATA_NOT_AVAILABLE:
        cout << Utils::defaultOffset << "NS_E_METADATA_NOT_AVAILABLE" << endl;
        cout << Utils::defaultOffsetDocInfo << "The metadata (or metadata item) is not available." << endl;
        break;
        case NS_E_METADATA_CACHE_DATA_NOT_AVAILABLE:
        cout << Utils::defaultOffset << "NS_E_METADATA_CACHE_DATA_NOT_AVAILABLE" << endl;
        cout << Utils::defaultOffsetDocInfo << "The cached metadata (or metadata item) is not available." << endl;
        break;
        case NS_E_METADATA_INVALID_DOCUMENT_TYPE:
        cout << Utils::defaultOffset << "NS_E_METADATA_INVALID_DOCUMENT_TYPE" << endl;
        cout << Utils::defaultOffsetDocInfo << "The metadata document is invalid." << endl;
        break;
        case NS_E_METADATA_IDENTIFIER_NOT_AVAILABLE:
        cout << Utils::defaultOffset << "NS_E_METADATA_IDENTIFIER_NOT_AVAILABLE" << endl;
        cout << Utils::defaultOffsetDocInfo << "The metadata content identifier is not available." << endl;
        break;
        case NS_E_METADATA_CANNOT_RETRIEVE_FROM_OFFLINE_CACHE:
        cout << Utils::defaultOffset << "NS_E_METADATA_CANNOT_RETRIEVE_FROM_OFFLINE_CACHE" << endl;
        cout << Utils::defaultOffsetDocInfo << "Cannot retrieve metadata from the offline metadata cache." << endl;
        break;
        case ERROR_MONITOR_INVALID_DESCRIPTOR_CHECKSUM:
        cout << Utils::defaultOffset << "ERROR_MONITOR_INVALID_DESCRIPTOR_CHECKSUM" << endl;
        cout << Utils::defaultOffsetDocInfo << "Checksum of the obtained monitor descriptor is invalid." << endl;
        break;
        case ERROR_MONITOR_INVALID_STANDARD_TIMING_BLOCK:
        cout << Utils::defaultOffset << "ERROR_MONITOR_INVALID_STANDARD_TIMING_BLOCK" << endl;
        cout << Utils::defaultOffsetDocInfo << "Monitor descriptor contains an invalid standard timing block." << endl;
        break;
        case ERROR_MONITOR_WMI_DATABLOCK_REGISTRATION_FAILED:
        cout << Utils::defaultOffset << "ERROR_MONITOR_WMI_DATABLOCK_REGISTRATION_FAILED" << endl;
        cout << Utils::defaultOffsetDocInfo << "Windows Management Instrumentation (WMI) data block registration failed for one of the MSMonitorClass WMI subclasses." << endl;
        break;
        case ERROR_MONITOR_INVALID_SERIAL_NUMBER_MONDSC_BLOCK:
        cout << Utils::defaultOffset << "ERROR_MONITOR_INVALID_SERIAL_NUMBER_MONDSC_BLOCK" << endl;
        cout << Utils::defaultOffsetDocInfo << "Provided monitor descriptor block is either corrupted or does not contain the monitor's detailed serial number." << endl;
        break;
        case ERROR_MONITOR_INVALID_USER_FRIENDLY_MONDSC_BLOCK:
        cout << Utils::defaultOffset << "ERROR_MONITOR_INVALID_USER_FRIENDLY_MONDSC_BLOCK" << endl;
        cout << Utils::defaultOffsetDocInfo << "Provided monitor descriptor block is either corrupted or does not contain the monitor's user-friendly name." << endl;
        break;
        case ERROR_MONITOR_NO_MORE_DESCRIPTOR_DATA:
        cout << Utils::defaultOffset << "ERROR_MONITOR_NO_MORE_DESCRIPTOR_DATA" << endl;
        cout << Utils::defaultOffsetDocInfo << "There is no monitor descriptor data at the specified (offset, size) region." << endl;
        break;
        case ERROR_MONITOR_INVALID_DETAILED_TIMING_BLOCK:
        cout << Utils::defaultOffset << "ERROR_MONITOR_INVALID_DETAILED_TIMING_BLOCK" << endl;
        cout << Utils::defaultOffsetDocInfo << "Monitor descriptor contains an invalid detailed timing block." << endl;
        break;
        case ERROR_GRAPHICS_NOT_EXCLUSIVE_MODE_OWNER:
        cout << Utils::defaultOffset << "ERROR_GRAPHICS_NOT_EXCLUSIVE_MODE_OWNER" << endl;
        cout << Utils::defaultOffsetDocInfo << "Exclusive mode ownership is needed to create unmanaged primary allocation." << endl;
        break;
        case ERROR_GRAPHICS_INSUFFICIENT_DMA_BUFFER:
        cout << Utils::defaultOffset << "ERROR_GRAPHICS_INSUFFICIENT_DMA_BUFFER" << endl;
        cout << Utils::defaultOffsetDocInfo << "The driver needs more direct memory access (DMA) buffer space to complete the requested operation." << endl;
        break;
        case ERROR_GRAPHICS_INVALID_DISPLAY_ADAPTER:
        cout << Utils::defaultOffset << "ERROR_GRAPHICS_INVALID_DISPLAY_ADAPTER" << endl;
        cout << Utils::defaultOffsetDocInfo << "Specified display adapter handle is invalid." << endl;
        break;
        case ERROR_GRAPHICS_ADAPTER_WAS_RESET:
        cout << Utils::defaultOffset << "ERROR_GRAPHICS_ADAPTER_WAS_RESET" << endl;
        cout << Utils::defaultOffsetDocInfo << "Specified display adapter and all of its state has been reset." << endl;
        break;
        case ERROR_GRAPHICS_INVALID_DRIVER_MODEL:
        cout << Utils::defaultOffset << "ERROR_GRAPHICS_INVALID_DRIVER_MODEL" << endl;
        cout << Utils::defaultOffsetDocInfo << "The driver stack does not match the expected driver model." << endl;
        break;
        case ERROR_GRAPHICS_PRESENT_MODE_CHANGED:
        cout << Utils::defaultOffset << "ERROR_GRAPHICS_PRESENT_MODE_CHANGED" << endl;
        cout << Utils::defaultOffsetDocInfo << "Present happened but ended up into the changed desktop mode." << endl;
        break;
        case ERROR_GRAPHICS_PRESENT_OCCLUDED:
        cout << Utils::defaultOffset << "ERROR_GRAPHICS_PRESENT_OCCLUDED" << endl;
        cout << Utils::defaultOffsetDocInfo << "Nothing to present due to desktop occlusion." << endl;
        break;
        case ERROR_GRAPHICS_PRESENT_DENIED:
        cout << Utils::defaultOffset << "ERROR_GRAPHICS_PRESENT_DENIED" << endl;
        cout << Utils::defaultOffsetDocInfo << "Not able to present due to denial of desktop access." << endl;
        break;
        case ERROR_GRAPHICS_CANNOTCOLORCONVERT:
        cout << Utils::defaultOffset << "ERROR_GRAPHICS_CANNOTCOLORCONVERT" << endl;
        cout << Utils::defaultOffsetDocInfo << "Not able to present with color conversion." << endl;
        break;
        case ERROR_GRAPHICS_NO_VIDEO_MEMORY:
        cout << Utils::defaultOffset << "ERROR_GRAPHICS_NO_VIDEO_MEMORY" << endl;
        cout << Utils::defaultOffsetDocInfo << "Not enough video memory available to complete the operation." << endl;
        break;
        case ERROR_GRAPHICS_CANT_LOCK_MEMORY:
        cout << Utils::defaultOffset << "ERROR_GRAPHICS_CANT_LOCK_MEMORY" << endl;
        cout << Utils::defaultOffsetDocInfo << "Could not probe and lock the underlying memory of an allocation." << endl;
        break;
        case ERROR_GRAPHICS_ALLOCATION_BUSY:
        cout << Utils::defaultOffset << "ERROR_GRAPHICS_ALLOCATION_BUSY" << endl;
        cout << Utils::defaultOffsetDocInfo << "The allocation is currently busy." << endl;
        break;
        case ERROR_GRAPHICS_TOO_MANY_REFERENCES:
        cout << Utils::defaultOffset << "ERROR_GRAPHICS_TOO_MANY_REFERENCES" << endl;
        cout << Utils::defaultOffsetDocInfo << "An object being referenced has reach the maximum reference count already and cannot be referenced further." << endl;
        break;
        case ERROR_GRAPHICS_TRY_AGAIN_LATER:
        cout << Utils::defaultOffset << "ERROR_GRAPHICS_TRY_AGAIN_LATER" << endl;
        cout << Utils::defaultOffsetDocInfo << "A problem could not be solved due to some currently existing condition. The problem should be tried again later." << endl;
        break;
        case ERROR_GRAPHICS_TRY_AGAIN_NOW:
        cout << Utils::defaultOffset << "ERROR_GRAPHICS_TRY_AGAIN_NOW" << endl;
        cout << Utils::defaultOffsetDocInfo << "A problem could not be solved due to some currently existing condition. The problem should be tried again immediately." << endl;
        break;
        case ERROR_GRAPHICS_ALLOCATION_INVALID:
        cout << Utils::defaultOffset << "ERROR_GRAPHICS_ALLOCATION_INVALID" << endl;
        cout << Utils::defaultOffsetDocInfo << "The allocation is invalid." << endl;
        break;
        case ERROR_GRAPHICS_UNSWIZZLING_APERTURE_UNAVAILABLE:
        cout << Utils::defaultOffset << "ERROR_GRAPHICS_UNSWIZZLING_APERTURE_UNAVAILABLE" << endl;
        cout << Utils::defaultOffsetDocInfo << "No more unswizzling apertures are currently available." << endl;
        break;
        case ERROR_GRAPHICS_UNSWIZZLING_APERTURE_UNSUPPORTED:
        cout << Utils::defaultOffset << "ERROR_GRAPHICS_UNSWIZZLING_APERTURE_UNSUPPORTED" << endl;
        cout << Utils::defaultOffsetDocInfo << "The current allocation cannot be unswizzled by an aperture." << endl;
        break;
        case ERROR_GRAPHICS_CANT_EVICT_PINNED_ALLOCATION:
        cout << Utils::defaultOffset << "ERROR_GRAPHICS_CANT_EVICT_PINNED_ALLOCATION" << endl;
        cout << Utils::defaultOffsetDocInfo << "The request failed because a pinned allocation cannot be evicted." << endl;
        break;
        case ERROR_GRAPHICS_INVALID_ALLOCATION_USAGE:
        cout << Utils::defaultOffset << "ERROR_GRAPHICS_INVALID_ALLOCATION_USAGE" << endl;
        cout << Utils::defaultOffsetDocInfo << "The allocation cannot be used from its current segment location for the specified operation." << endl;
        break;
        case ERROR_GRAPHICS_CANT_RENDER_LOCKED_ALLOCATION:
        cout << Utils::defaultOffset << "ERROR_GRAPHICS_CANT_RENDER_LOCKED_ALLOCATION" << endl;
        cout << Utils::defaultOffsetDocInfo << "A locked allocation cannot be used in the current command buffer." << endl;
        break;
        case ERROR_GRAPHICS_ALLOCATION_CLOSED:
        cout << Utils::defaultOffset << "ERROR_GRAPHICS_ALLOCATION_CLOSED" << endl;
        cout << Utils::defaultOffsetDocInfo << "The allocation being referenced has been closed permanently." << endl;
        break;
        case ERROR_GRAPHICS_INVALID_ALLOCATION_INSTANCE:
        cout << Utils::defaultOffset << "ERROR_GRAPHICS_INVALID_ALLOCATION_INSTANCE" << endl;
        cout << Utils::defaultOffsetDocInfo << "An invalid allocation instance is being referenced." << endl;
        break;
        case ERROR_GRAPHICS_INVALID_ALLOCATION_HANDLE:
        cout << Utils::defaultOffset << "ERROR_GRAPHICS_INVALID_ALLOCATION_HANDLE" << endl;
        cout << Utils::defaultOffsetDocInfo << "An invalid allocation handle is being referenced." << endl;
        break;
        case ERROR_GRAPHICS_WRONG_ALLOCATION_DEVICE:
        cout << Utils::defaultOffset << "ERROR_GRAPHICS_WRONG_ALLOCATION_DEVICE" << endl;
        cout << Utils::defaultOffsetDocInfo << "The allocation being referenced does not belong to the current device." << endl;
        break;
        case ERROR_GRAPHICS_ALLOCATION_CONTENT_LOST:
        cout << Utils::defaultOffset << "ERROR_GRAPHICS_ALLOCATION_CONTENT_LOST" << endl;
        cout << Utils::defaultOffsetDocInfo << "The specified allocation lost its content." << endl;
        break;
        case ERROR_GRAPHICS_GPU_EXCEPTION_ON_DEVICE:
        cout << Utils::defaultOffset << "ERROR_GRAPHICS_GPU_EXCEPTION_ON_DEVICE" << endl;
        cout << Utils::defaultOffsetDocInfo << "Graphics processing unit (GPU) exception is detected on the given device. The device is not able to be scheduled." << endl;
        break;
        case ERROR_GRAPHICS_INVALID_VIDPN_TOPOLOGY:
        cout << Utils::defaultOffset << "ERROR_GRAPHICS_INVALID_VIDPN_TOPOLOGY" << endl;
        cout << Utils::defaultOffsetDocInfo << "Specified video present network (VidPN) topology is invalid." << endl;
        break;
        case ERROR_GRAPHICS_VIDPN_TOPOLOGY_NOT_SUPPORTED:
        cout << Utils::defaultOffset << "ERROR_GRAPHICS_VIDPN_TOPOLOGY_NOT_SUPPORTED" << endl;
        cout << Utils::defaultOffsetDocInfo << "Specified VidPN topology is valid but is not supported by this model of the display adapter." << endl;
        break;
        case ERROR_GRAPHICS_VIDPN_TOPOLOGY_CURRENTLY_NOT_SUPPORTED:
        cout << Utils::defaultOffset << "ERROR_GRAPHICS_VIDPN_TOPOLOGY_CURRENTLY_NOT_SUPPORTED" << endl;
        cout << Utils::defaultOffsetDocInfo << "Specified VidPN topology is valid but is not supported by the display adapter at this time, due to current allocation of its resources." << endl;
        break;
        case ERROR_GRAPHICS_INVALID_VIDPN:
        cout << Utils::defaultOffset << "ERROR_GRAPHICS_INVALID_VIDPN" << endl;
        cout << Utils::defaultOffsetDocInfo << "Specified VidPN handle is invalid." << endl;
        break;
        case ERROR_GRAPHICS_INVALID_VIDEO_PRESENT_SOURCE:
        cout << Utils::defaultOffset << "ERROR_GRAPHICS_INVALID_VIDEO_PRESENT_SOURCE" << endl;
        cout << Utils::defaultOffsetDocInfo << "Specified video present source is invalid." << endl;
        break;
        case ERROR_GRAPHICS_INVALID_VIDEO_PRESENT_TARGET:
        cout << Utils::defaultOffset << "ERROR_GRAPHICS_INVALID_VIDEO_PRESENT_TARGET" << endl;
        cout << Utils::defaultOffsetDocInfo << "Specified video present target is invalid." << endl;
        break;
        case ERROR_GRAPHICS_VIDPN_MODALITY_NOT_SUPPORTED:
        cout << Utils::defaultOffset << "ERROR_GRAPHICS_VIDPN_MODALITY_NOT_SUPPORTED" << endl;
        cout << Utils::defaultOffsetDocInfo << "Specified VidPN modality is not supported (for example, at least two of the pinned modes are not cofunctional)." << endl;
        break;
        case ERROR_GRAPHICS_INVALID_VIDPN_SOURCEMODESET:
        cout << Utils::defaultOffset << "ERROR_GRAPHICS_INVALID_VIDPN_SOURCEMODESET" << endl;
        cout << Utils::defaultOffsetDocInfo << "Specified VidPN source mode set is invalid." << endl;
        break;
        case ERROR_GRAPHICS_INVALID_VIDPN_TARGETMODESET:
        cout << Utils::defaultOffset << "ERROR_GRAPHICS_INVALID_VIDPN_TARGETMODESET" << endl;
        cout << Utils::defaultOffsetDocInfo << "Specified VidPN target mode set is invalid." << endl;
        break;
        case ERROR_GRAPHICS_INVALID_FREQUENCY:
        cout << Utils::defaultOffset << "ERROR_GRAPHICS_INVALID_FREQUENCY" << endl;
        cout << Utils::defaultOffsetDocInfo << "Specified video signal frequency is invalid." << endl;
        break;
        case ERROR_GRAPHICS_INVALID_ACTIVE_REGION:
        cout << Utils::defaultOffset << "ERROR_GRAPHICS_INVALID_ACTIVE_REGION" << endl;
        cout << Utils::defaultOffsetDocInfo << "Specified video signal active region is invalid." << endl;
        break;
        case ERROR_GRAPHICS_INVALID_TOTAL_REGION:
        cout << Utils::defaultOffset << "ERROR_GRAPHICS_INVALID_TOTAL_REGION" << endl;
        cout << Utils::defaultOffsetDocInfo << "Specified video signal total region is invalid." << endl;
        break;
        case ERROR_GRAPHICS_INVALID_VIDEO_PRESENT_SOURCE_MODE:
        cout << Utils::defaultOffset << "ERROR_GRAPHICS_INVALID_VIDEO_PRESENT_SOURCE_MODE" << endl;
        cout << Utils::defaultOffsetDocInfo << "Specified video present source mode is invalid." << endl;
        break;
        case ERROR_GRAPHICS_INVALID_VIDEO_PRESENT_TARGET_MODE:
        cout << Utils::defaultOffset << "ERROR_GRAPHICS_INVALID_VIDEO_PRESENT_TARGET_MODE" << endl;
        cout << Utils::defaultOffsetDocInfo << "Specified video present target mode is invalid." << endl;
        break;
        case ERROR_GRAPHICS_PINNED_MODE_MUST_REMAIN_IN_SET:
        cout << Utils::defaultOffset << "ERROR_GRAPHICS_PINNED_MODE_MUST_REMAIN_IN_SET" << endl;
        cout << Utils::defaultOffsetDocInfo << "Pinned mode must remain in the set on VidPN's cofunctional modality enumeration." << endl;
        break;
        case ERROR_GRAPHICS_PATH_ALREADY_IN_TOPOLOGY:
        cout << Utils::defaultOffset << "ERROR_GRAPHICS_PATH_ALREADY_IN_TOPOLOGY" << endl;
        cout << Utils::defaultOffsetDocInfo << "Specified video present path is already in the VidPN topology." << endl;
        break;
        case ERROR_GRAPHICS_MODE_ALREADY_IN_MODESET:
        cout << Utils::defaultOffset << "ERROR_GRAPHICS_MODE_ALREADY_IN_MODESET" << endl;
        cout << Utils::defaultOffsetDocInfo << "Specified mode is already in the mode set." << endl;
        break;
        case ERROR_GRAPHICS_INVALID_VIDEOPRESENTSOURCESET:
        cout << Utils::defaultOffset << "ERROR_GRAPHICS_INVALID_VIDEOPRESENTSOURCESET" << endl;
        cout << Utils::defaultOffsetDocInfo << "Specified video present source set is invalid." << endl;
        break;
        case ERROR_GRAPHICS_INVALID_VIDEOPRESENTTARGETSET:
        cout << Utils::defaultOffset << "ERROR_GRAPHICS_INVALID_VIDEOPRESENTTARGETSET" << endl;
        cout << Utils::defaultOffsetDocInfo << "Specified video present target set is invalid." << endl;
        break;
        case ERROR_GRAPHICS_SOURCE_ALREADY_IN_SET:
        cout << Utils::defaultOffset << "ERROR_GRAPHICS_SOURCE_ALREADY_IN_SET" << endl;
        cout << Utils::defaultOffsetDocInfo << "Specified video present source is already in the video present source set." << endl;
        break;
        case ERROR_GRAPHICS_TARGET_ALREADY_IN_SET:
        cout << Utils::defaultOffset << "ERROR_GRAPHICS_TARGET_ALREADY_IN_SET" << endl;
        cout << Utils::defaultOffsetDocInfo << "Specified video present target is already in the video present target set." << endl;
        break;
        case ERROR_GRAPHICS_INVALID_VIDPN_PRESENT_PATH:
        cout << Utils::defaultOffset << "ERROR_GRAPHICS_INVALID_VIDPN_PRESENT_PATH" << endl;
        cout << Utils::defaultOffsetDocInfo << "Specified VidPN present path is invalid." << endl;
        break;
        case ERROR_GRAPHICS_NO_RECOMMENDED_VIDPN_TOPOLOGY:
        cout << Utils::defaultOffset << "ERROR_GRAPHICS_NO_RECOMMENDED_VIDPN_TOPOLOGY" << endl;
        cout << Utils::defaultOffsetDocInfo << "Miniport has no recommendation for augmentation of the specified VidPN topology." << endl;
        break;
        case ERROR_GRAPHICS_INVALID_MONITOR_FREQUENCYRANGESET:
        cout << Utils::defaultOffset << "ERROR_GRAPHICS_INVALID_MONITOR_FREQUENCYRANGESET" << endl;
        cout << Utils::defaultOffsetDocInfo << "Specified monitor frequency range set is invalid." << endl;
        break;
        case ERROR_GRAPHICS_INVALID_MONITOR_FREQUENCYRANGE:
        cout << Utils::defaultOffset << "ERROR_GRAPHICS_INVALID_MONITOR_FREQUENCYRANGE" << endl;
        cout << Utils::defaultOffsetDocInfo << "Specified monitor frequency range is invalid." << endl;
        break;
        case ERROR_GRAPHICS_FREQUENCYRANGE_NOT_IN_SET:
        cout << Utils::defaultOffset << "ERROR_GRAPHICS_FREQUENCYRANGE_NOT_IN_SET" << endl;
        cout << Utils::defaultOffsetDocInfo << "Specified frequency range is not in the specified monitor frequency range set." << endl;
        break;
        case ERROR_GRAPHICS_FREQUENCYRANGE_ALREADY_IN_SET:
        cout << Utils::defaultOffset << "ERROR_GRAPHICS_FREQUENCYRANGE_ALREADY_IN_SET" << endl;
        cout << Utils::defaultOffsetDocInfo << "Specified frequency range is already in the specified monitor frequency range set." << endl;
        break;
        case ERROR_GRAPHICS_STALE_MODESET:
        cout << Utils::defaultOffset << "ERROR_GRAPHICS_STALE_MODESET" << endl;
        cout << Utils::defaultOffsetDocInfo << "Specified mode set is stale. Reacquire the new mode set." << endl;
        break;
        case ERROR_GRAPHICS_INVALID_MONITOR_SOURCEMODESET:
        cout << Utils::defaultOffset << "ERROR_GRAPHICS_INVALID_MONITOR_SOURCEMODESET" << endl;
        cout << Utils::defaultOffsetDocInfo << "Specified monitor source mode set is invalid." << endl;
        break;
        case ERROR_GRAPHICS_INVALID_MONITOR_SOURCE_MODE:
        cout << Utils::defaultOffset << "ERROR_GRAPHICS_INVALID_MONITOR_SOURCE_MODE" << endl;
        cout << Utils::defaultOffsetDocInfo << "Specified monitor source mode is invalid." << endl;
        break;
        case ERROR_GRAPHICS_NO_RECOMMENDED_FUNCTIONAL_VIDPN:
        cout << Utils::defaultOffset << "ERROR_GRAPHICS_NO_RECOMMENDED_FUNCTIONAL_VIDPN" << endl;
        cout << Utils::defaultOffsetDocInfo << "Miniport does not have any recommendation regarding the request to provide a functional VidPN given the current display adapter configuration." << endl;
        break;
        case ERROR_GRAPHICS_MODE_ID_MUST_BE_UNIQUE:
        cout << Utils::defaultOffset << "ERROR_GRAPHICS_MODE_ID_MUST_BE_UNIQUE" << endl;
        cout << Utils::defaultOffsetDocInfo << "ID of the specified mode is already used by another mode in the set." << endl;
        break;
        case ERROR_GRAPHICS_EMPTY_ADAPTER_MONITOR_MODE_SUPPORT_INTERSECTION:
        cout << Utils::defaultOffset << "ERROR_GRAPHICS_EMPTY_ADAPTER_MONITOR_MODE_SUPPORT_INTERSECTION" << endl;
        cout << Utils::defaultOffsetDocInfo << "System failed to determine a mode that is supported by both the display adapter and the monitor connected to it." << endl;
        break;
        case ERROR_GRAPHICS_VIDEO_PRESENT_TARGETS_LESS_THAN_SOURCES:
        cout << Utils::defaultOffset << "ERROR_GRAPHICS_VIDEO_PRESENT_TARGETS_LESS_THAN_SOURCES" << endl;
        cout << Utils::defaultOffsetDocInfo << "Number of video present targets must be greater than or equal to the number of video present sources." << endl;
        break;
        case ERROR_GRAPHICS_PATH_NOT_IN_TOPOLOGY:
        cout << Utils::defaultOffset << "ERROR_GRAPHICS_PATH_NOT_IN_TOPOLOGY" << endl;
        cout << Utils::defaultOffsetDocInfo << "Specified present path is not in the VidPN topology." << endl;
        break;
        case ERROR_GRAPHICS_ADAPTER_MUST_HAVE_AT_LEAST_ONE_SOURCE:
        cout << Utils::defaultOffset << "ERROR_GRAPHICS_ADAPTER_MUST_HAVE_AT_LEAST_ONE_SOURCE" << endl;
        cout << Utils::defaultOffsetDocInfo << "Display adapter must have at least one video present source." << endl;
        break;
        case ERROR_GRAPHICS_ADAPTER_MUST_HAVE_AT_LEAST_ONE_TARGET:
        cout << Utils::defaultOffset << "ERROR_GRAPHICS_ADAPTER_MUST_HAVE_AT_LEAST_ONE_TARGET" << endl;
        cout << Utils::defaultOffsetDocInfo << "Display adapter must have at least one video present target." << endl;
        break;
        case ERROR_GRAPHICS_INVALID_MONITORDESCRIPTORSET:
        cout << Utils::defaultOffset << "ERROR_GRAPHICS_INVALID_MONITORDESCRIPTORSET" << endl;
        cout << Utils::defaultOffsetDocInfo << "Specified monitor descriptor set is invalid." << endl;
        break;
        case ERROR_GRAPHICS_INVALID_MONITORDESCRIPTOR:
        cout << Utils::defaultOffset << "ERROR_GRAPHICS_INVALID_MONITORDESCRIPTOR" << endl;
        cout << Utils::defaultOffsetDocInfo << "Specified monitor descriptor is invalid." << endl;
        break;
        case ERROR_GRAPHICS_MONITORDESCRIPTOR_NOT_IN_SET:
        cout << Utils::defaultOffset << "ERROR_GRAPHICS_MONITORDESCRIPTOR_NOT_IN_SET" << endl;
        cout << Utils::defaultOffsetDocInfo << "Specified descriptor is not in the specified monitor descriptor set." << endl;
        break;
        case ERROR_GRAPHICS_MONITORDESCRIPTOR_ALREADY_IN_SET:
        cout << Utils::defaultOffset << "ERROR_GRAPHICS_MONITORDESCRIPTOR_ALREADY_IN_SET" << endl;
        cout << Utils::defaultOffsetDocInfo << "Specified descriptor is already in the specified monitor descriptor set." << endl;
        break;
        case ERROR_GRAPHICS_MONITORDESCRIPTOR_ID_MUST_BE_UNIQUE:
        cout << Utils::defaultOffset << "ERROR_GRAPHICS_MONITORDESCRIPTOR_ID_MUST_BE_UNIQUE" << endl;
        cout << Utils::defaultOffsetDocInfo << "ID of the specified monitor descriptor is already used by another descriptor in the set." << endl;
        break;
        case ERROR_GRAPHICS_INVALID_VIDPN_TARGET_SUBSET_TYPE:
        cout << Utils::defaultOffset << "ERROR_GRAPHICS_INVALID_VIDPN_TARGET_SUBSET_TYPE" << endl;
        cout << Utils::defaultOffsetDocInfo << "Specified video present target subset type is invalid." << endl;
        break;
        case ERROR_GRAPHICS_RESOURCES_NOT_RELATED:
        cout << Utils::defaultOffset << "ERROR_GRAPHICS_RESOURCES_NOT_RELATED" << endl;
        cout << Utils::defaultOffsetDocInfo << "Two or more of the specified resources are not related to each other, as defined by the interface semantics." << endl;
        break;
        case ERROR_GRAPHICS_SOURCE_ID_MUST_BE_UNIQUE:
        cout << Utils::defaultOffset << "ERROR_GRAPHICS_SOURCE_ID_MUST_BE_UNIQUE" << endl;
        cout << Utils::defaultOffsetDocInfo << "ID of the specified video present source is already used by another source in the set." << endl;
        break;
        case ERROR_GRAPHICS_TARGET_ID_MUST_BE_UNIQUE:
        cout << Utils::defaultOffset << "ERROR_GRAPHICS_TARGET_ID_MUST_BE_UNIQUE" << endl;
        cout << Utils::defaultOffsetDocInfo << "ID of the specified video present target is already used by another target in the set." << endl;
        break;
        case ERROR_GRAPHICS_NO_AVAILABLE_VIDPN_TARGET:
        cout << Utils::defaultOffset << "ERROR_GRAPHICS_NO_AVAILABLE_VIDPN_TARGET" << endl;
        cout << Utils::defaultOffsetDocInfo << "Specified VidPN source cannot be used because there is no available VidPN target to connect it to." << endl;
        break;
        case ERROR_GRAPHICS_MONITOR_COULD_NOT_BE_ASSOCIATED_WITH_ADAPTER:
        cout << Utils::defaultOffset << "ERROR_GRAPHICS_MONITOR_COULD_NOT_BE_ASSOCIATED_WITH_ADAPTER" << endl;
        cout << Utils::defaultOffsetDocInfo << "Newly arrived monitor could not be associated with a display adapter." << endl;
        break;
        case ERROR_GRAPHICS_NO_VIDPNMGR:
        cout << Utils::defaultOffset << "ERROR_GRAPHICS_NO_VIDPNMGR" << endl;
        cout << Utils::defaultOffsetDocInfo << "Display adapter in question does not have an associated VidPN manager." << endl;
        break;
        case ERROR_GRAPHICS_NO_ACTIVE_VIDPN:
        cout << Utils::defaultOffset << "ERROR_GRAPHICS_NO_ACTIVE_VIDPN" << endl;
        cout << Utils::defaultOffsetDocInfo << "VidPN manager of the display adapter in question does not have an active VidPN." << endl;
        break;
        case ERROR_GRAPHICS_STALE_VIDPN_TOPOLOGY:
        cout << Utils::defaultOffset << "ERROR_GRAPHICS_STALE_VIDPN_TOPOLOGY" << endl;
        cout << Utils::defaultOffsetDocInfo << "Specified VidPN topology is stale. Re-acquire the new topology." << endl;
        break;
        case ERROR_GRAPHICS_MONITOR_NOT_CONNECTED:
        cout << Utils::defaultOffset << "ERROR_GRAPHICS_MONITOR_NOT_CONNECTED" << endl;
        cout << Utils::defaultOffsetDocInfo << "There is no monitor connected on the specified video present target." << endl;
        break;
        case ERROR_GRAPHICS_SOURCE_NOT_IN_TOPOLOGY:
        cout << Utils::defaultOffset << "ERROR_GRAPHICS_SOURCE_NOT_IN_TOPOLOGY" << endl;
        cout << Utils::defaultOffsetDocInfo << "Specified source is not part of the specified VidPN topology." << endl;
        break;
        case ERROR_GRAPHICS_INVALID_PRIMARYSURFACE_SIZE:
        cout << Utils::defaultOffset << "ERROR_GRAPHICS_INVALID_PRIMARYSURFACE_SIZE" << endl;
        cout << Utils::defaultOffsetDocInfo << "Specified primary surface size is invalid." << endl;
        break;
        case ERROR_GRAPHICS_INVALID_VISIBLEREGION_SIZE:
        cout << Utils::defaultOffset << "ERROR_GRAPHICS_INVALID_VISIBLEREGION_SIZE" << endl;
        cout << Utils::defaultOffsetDocInfo << "Specified visible region size is invalid." << endl;
        break;
        case ERROR_GRAPHICS_INVALID_STRIDE:
        cout << Utils::defaultOffset << "ERROR_GRAPHICS_INVALID_STRIDE" << endl;
        cout << Utils::defaultOffsetDocInfo << "Specified stride is invalid." << endl;
        break;
        case ERROR_GRAPHICS_INVALID_PIXELFORMAT:
        cout << Utils::defaultOffset << "ERROR_GRAPHICS_INVALID_PIXELFORMAT" << endl;
        cout << Utils::defaultOffsetDocInfo << "Specified pixel format is invalid." << endl;
        break;
        case ERROR_GRAPHICS_INVALID_COLORBASIS:
        cout << Utils::defaultOffset << "ERROR_GRAPHICS_INVALID_COLORBASIS" << endl;
        cout << Utils::defaultOffsetDocInfo << "Specified color basis is invalid." << endl;
        break;
        case ERROR_GRAPHICS_INVALID_PIXELVALUEACCESSMODE:
        cout << Utils::defaultOffset << "ERROR_GRAPHICS_INVALID_PIXELVALUEACCESSMODE" << endl;
        cout << Utils::defaultOffsetDocInfo << "Specified pixel value access mode is invalid." << endl;
        break;
        case ERROR_GRAPHICS_TARGET_NOT_IN_TOPOLOGY:
        cout << Utils::defaultOffset << "ERROR_GRAPHICS_TARGET_NOT_IN_TOPOLOGY" << endl;
        cout << Utils::defaultOffsetDocInfo << "Specified target is not part of the specified VidPN topology." << endl;
        break;
        case ERROR_GRAPHICS_NO_DISPLAY_MODE_MANAGEMENT_SUPPORT:
        cout << Utils::defaultOffset << "ERROR_GRAPHICS_NO_DISPLAY_MODE_MANAGEMENT_SUPPORT" << endl;
        cout << Utils::defaultOffsetDocInfo << "Failed to acquire display mode management interface." << endl;
        break;
        case ERROR_GRAPHICS_VIDPN_SOURCE_IN_USE:
        cout << Utils::defaultOffset << "ERROR_GRAPHICS_VIDPN_SOURCE_IN_USE" << endl;
        cout << Utils::defaultOffsetDocInfo << "Specified VidPN source is already owned by a display mode manager (DMM) client and cannot be used until that client releases it." << endl;
        break;
        case ERROR_GRAPHICS_CANT_ACCESS_ACTIVE_VIDPN:
        cout << Utils::defaultOffset << "ERROR_GRAPHICS_CANT_ACCESS_ACTIVE_VIDPN" << endl;
        cout << Utils::defaultOffsetDocInfo << "Specified VidPN is active and cannot be accessed." << endl;
        break;
        case ERROR_GRAPHICS_INVALID_PATH_IMPORTANCE_ORDINAL:
        cout << Utils::defaultOffset << "ERROR_GRAPHICS_INVALID_PATH_IMPORTANCE_ORDINAL" << endl;
        cout << Utils::defaultOffsetDocInfo << "Specified VidPN present path importance ordinal is invalid." << endl;
        break;
        case ERROR_GRAPHICS_INVALID_PATH_CONTENT_GEOMETRY_TRANSFORMATION:
        cout << Utils::defaultOffset << "ERROR_GRAPHICS_INVALID_PATH_CONTENT_GEOMETRY_TRANSFORMATION" << endl;
        cout << Utils::defaultOffsetDocInfo << "Specified VidPN present path content geometry transformation is invalid." << endl;
        break;
        case ERROR_GRAPHICS_PATH_CONTENT_GEOMETRY_TRANSFORMATION_NOT_SUPPORTED:
        cout << Utils::defaultOffset << "ERROR_GRAPHICS_PATH_CONTENT_GEOMETRY_TRANSFORMATION_NOT_SUPPORTED" << endl;
        cout << Utils::defaultOffsetDocInfo << "Specified content geometry transformation is not supported on the respective VidPN present path." << endl;
        break;
        case ERROR_GRAPHICS_INVALID_GAMMA_RAMP:
        cout << Utils::defaultOffset << "ERROR_GRAPHICS_INVALID_GAMMA_RAMP" << endl;
        cout << Utils::defaultOffsetDocInfo << "Specified gamma ramp is invalid." << endl;
        break;
        case ERROR_GRAPHICS_GAMMA_RAMP_NOT_SUPPORTED:
        cout << Utils::defaultOffset << "ERROR_GRAPHICS_GAMMA_RAMP_NOT_SUPPORTED" << endl;
        cout << Utils::defaultOffsetDocInfo << "Specified gamma ramp is not supported on the respective VidPN present path." << endl;
        break;
        case ERROR_GRAPHICS_MULTISAMPLING_NOT_SUPPORTED:
        cout << Utils::defaultOffset << "ERROR_GRAPHICS_MULTISAMPLING_NOT_SUPPORTED" << endl;
        cout << Utils::defaultOffsetDocInfo << "Multisampling is not supported on the respective VidPN present path." << endl;
        break;
        case ERROR_GRAPHICS_MODE_NOT_IN_MODESET:
        cout << Utils::defaultOffset << "ERROR_GRAPHICS_MODE_NOT_IN_MODESET" << endl;
        cout << Utils::defaultOffsetDocInfo << "Specified mode is not in the specified mode set." << endl;
        break;
        case ERROR_GRAPHICS_INVALID_VIDPN_TOPOLOGY_RECOMMENDATION_REASON:
        cout << Utils::defaultOffset << "ERROR_GRAPHICS_INVALID_VIDPN_TOPOLOGY_RECOMMENDATION_REASON" << endl;
        cout << Utils::defaultOffsetDocInfo << "Specified VidPN topology recommendation reason is invalid." << endl;
        break;
        case ERROR_GRAPHICS_INVALID_PATH_CONTENT_TYPE:
        cout << Utils::defaultOffset << "ERROR_GRAPHICS_INVALID_PATH_CONTENT_TYPE" << endl;
        cout << Utils::defaultOffsetDocInfo << "Specified VidPN present path content type is invalid." << endl;
        break;
        case ERROR_GRAPHICS_INVALID_COPYPROTECTION_TYPE:
        cout << Utils::defaultOffset << "ERROR_GRAPHICS_INVALID_COPYPROTECTION_TYPE" << endl;
        cout << Utils::defaultOffsetDocInfo << "Specified VidPN present path copy protection type is invalid." << endl;
        break;
        case ERROR_GRAPHICS_UNASSIGNED_MODESET_ALREADY_EXISTS:
        cout << Utils::defaultOffset << "ERROR_GRAPHICS_UNASSIGNED_MODESET_ALREADY_EXISTS" << endl;
        cout << Utils::defaultOffsetDocInfo << "No more than one unassigned mode set can exist at any given time for a given VidPN source or target." << endl;
        break;
        case ERROR_GRAPHICS_INVALID_SCANLINE_ORDERING:
        cout << Utils::defaultOffset << "ERROR_GRAPHICS_INVALID_SCANLINE_ORDERING" << endl;
        cout << Utils::defaultOffsetDocInfo << "The specified scan line ordering type is invalid." << endl;
        break;
        case ERROR_GRAPHICS_TOPOLOGY_CHANGES_NOT_ALLOWED:
        cout << Utils::defaultOffset << "ERROR_GRAPHICS_TOPOLOGY_CHANGES_NOT_ALLOWED" << endl;
        cout << Utils::defaultOffsetDocInfo << "Topology changes are not allowed for the specified VidPN." << endl;
        break;
        case ERROR_GRAPHICS_NO_AVAILABLE_IMPORTANCE_ORDINALS:
        cout << Utils::defaultOffset << "ERROR_GRAPHICS_NO_AVAILABLE_IMPORTANCE_ORDINALS" << endl;
        cout << Utils::defaultOffsetDocInfo << "All available importance ordinals are already used in the specified topology." << endl;
        break;
        case ERROR_GRAPHICS_INCOMPATIBLE_PRIVATE_FORMAT:
        cout << Utils::defaultOffset << "ERROR_GRAPHICS_INCOMPATIBLE_PRIVATE_FORMAT" << endl;
        cout << Utils::defaultOffsetDocInfo << "Specified primary surface has a different private format attribute than the current primary surface." << endl;
        break;
        case ERROR_GRAPHICS_INVALID_MODE_PRUNING_ALGORITHM:
        cout << Utils::defaultOffset << "ERROR_GRAPHICS_INVALID_MODE_PRUNING_ALGORITHM" << endl;
        cout << Utils::defaultOffsetDocInfo << "Specified mode pruning algorithm is invalid." << endl;
        break;
        case ERROR_GRAPHICS_SPECIFIED_CHILD_ALREADY_CONNECTED:
        cout << Utils::defaultOffset << "ERROR_GRAPHICS_SPECIFIED_CHILD_ALREADY_CONNECTED" << endl;
        cout << Utils::defaultOffsetDocInfo << "Specified display adapter child device already has an external device connected to it." << endl;
        break;
        case ERROR_GRAPHICS_CHILD_DESCRIPTOR_NOT_SUPPORTED:
        cout << Utils::defaultOffset << "ERROR_GRAPHICS_CHILD_DESCRIPTOR_NOT_SUPPORTED" << endl;
        cout << Utils::defaultOffsetDocInfo << "The display adapter child device does not support reporting a descriptor." << endl;
        break;
        case ERROR_GRAPHICS_NOT_A_LINKED_ADAPTER:
        cout << Utils::defaultOffset << "ERROR_GRAPHICS_NOT_A_LINKED_ADAPTER" << endl;
        cout << Utils::defaultOffsetDocInfo << "The display adapter is not linked to any other adapters." << endl;
        break;
        case ERROR_GRAPHICS_LEADLINK_NOT_ENUMERATED:
        cout << Utils::defaultOffset << "ERROR_GRAPHICS_LEADLINK_NOT_ENUMERATED" << endl;
        cout << Utils::defaultOffsetDocInfo << "Lead adapter in a linked configuration was not enumerated yet." << endl;
        break;
        case ERROR_GRAPHICS_CHAINLINKS_NOT_ENUMERATED:
        cout << Utils::defaultOffset << "ERROR_GRAPHICS_CHAINLINKS_NOT_ENUMERATED" << endl;
        cout << Utils::defaultOffsetDocInfo << "Some chain adapters in a linked configuration were not enumerated yet." << endl;
        break;
        case ERROR_GRAPHICS_ADAPTER_CHAIN_NOT_READY:
        cout << Utils::defaultOffset << "ERROR_GRAPHICS_ADAPTER_CHAIN_NOT_READY" << endl;
        cout << Utils::defaultOffsetDocInfo << "The chain of linked adapters is not ready to start because of an unknown failure." << endl;
        break;
        case ERROR_GRAPHICS_CHAINLINKS_NOT_STARTED:
        cout << Utils::defaultOffset << "ERROR_GRAPHICS_CHAINLINKS_NOT_STARTED" << endl;
        cout << Utils::defaultOffsetDocInfo << "An attempt was made to start a lead link display adapter when the chain links were not started yet." << endl;
        break;
        case ERROR_GRAPHICS_CHAINLINKS_NOT_POWERED_ON:
        cout << Utils::defaultOffset << "ERROR_GRAPHICS_CHAINLINKS_NOT_POWERED_ON" << endl;
        cout << Utils::defaultOffsetDocInfo << "An attempt was made to turn on a lead link display adapter when the chain links were turned off." << endl;
        break;
        case ERROR_GRAPHICS_INCONSISTENT_DEVICE_LINK_STATE:
        cout << Utils::defaultOffset << "ERROR_GRAPHICS_INCONSISTENT_DEVICE_LINK_STATE" << endl;
        cout << Utils::defaultOffsetDocInfo << "The adapter link was found to be in an inconsistent state. Not all adapters are in an expected PNP or power state." << endl;
        break;
        case ERROR_GRAPHICS_NOT_POST_DEVICE_DRIVER:
        cout << Utils::defaultOffset << "ERROR_GRAPHICS_NOT_POST_DEVICE_DRIVER" << endl;
        cout << Utils::defaultOffsetDocInfo << "The driver trying to start is not the same as the driver for the posted display adapter." << endl;
        break;
        case ERROR_GRAPHICS_OPM_NOT_SUPPORTED:
        cout << Utils::defaultOffset << "ERROR_GRAPHICS_OPM_NOT_SUPPORTED" << endl;
        cout << Utils::defaultOffsetDocInfo << "The driver does not support Output Protection Manager (OPM)." << endl;
        break;
        case ERROR_GRAPHICS_COPP_NOT_SUPPORTED:
        cout << Utils::defaultOffset << "ERROR_GRAPHICS_COPP_NOT_SUPPORTED" << endl;
        cout << Utils::defaultOffsetDocInfo << "The driver does not support Certified Output Protection Protocol (COPP)." << endl;
        break;
        case ERROR_GRAPHICS_UAB_NOT_SUPPORTED:
        cout << Utils::defaultOffset << "ERROR_GRAPHICS_UAB_NOT_SUPPORTED" << endl;
        cout << Utils::defaultOffsetDocInfo << "The driver does not support a user-accessible bus (UAB)." << endl;
        break;
        case ERROR_GRAPHICS_OPM_INVALID_ENCRYPTED_PARAMETERS:
        cout << Utils::defaultOffset << "ERROR_GRAPHICS_OPM_INVALID_ENCRYPTED_PARAMETERS" << endl;
        cout << Utils::defaultOffsetDocInfo << "The specified encrypted parameters are invalid." << endl;
        break;
        case ERROR_GRAPHICS_OPM_PARAMETER_ARRAY_TOO_SMALL:
        cout << Utils::defaultOffset << "ERROR_GRAPHICS_OPM_PARAMETER_ARRAY_TOO_SMALL" << endl;
        cout << Utils::defaultOffsetDocInfo << "An array passed to a function cannot hold all of the data that the function wants to put in it." << endl;
        break;
        case ERROR_GRAPHICS_OPM_NO_VIDEO_OUTPUTS_EXIST:
        cout << Utils::defaultOffset << "ERROR_GRAPHICS_OPM_NO_VIDEO_OUTPUTS_EXIST" << endl;
        cout << Utils::defaultOffsetDocInfo << "The GDI display device passed to this function does not have any active video outputs." << endl;
        break;
        case ERROR_GRAPHICS_PVP_NO_DISPLAY_DEVICE_CORRESPONDS_TO_NAME:
        cout << Utils::defaultOffset << "ERROR_GRAPHICS_PVP_NO_DISPLAY_DEVICE_CORRESPONDS_TO_NAME" << endl;
        cout << Utils::defaultOffsetDocInfo << "The protected video path (PVP) cannot find an actual GDI display device that corresponds to the passed-in GDI display device name." << endl;
        break;
        case ERROR_GRAPHICS_PVP_DISPLAY_DEVICE_NOT_ATTACHED_TO_DESKTOP:
        cout << Utils::defaultOffset << "ERROR_GRAPHICS_PVP_DISPLAY_DEVICE_NOT_ATTACHED_TO_DESKTOP" << endl;
        cout << Utils::defaultOffsetDocInfo << "This function failed because the GDI display device passed to it was not attached to the Windows desktop." << endl;
        break;
        case ERROR_GRAPHICS_PVP_MIRRORING_DEVICES_NOT_SUPPORTED:
        cout << Utils::defaultOffset << "ERROR_GRAPHICS_PVP_MIRRORING_DEVICES_NOT_SUPPORTED" << endl;
        cout << Utils::defaultOffsetDocInfo << "The PVP does not support mirroring display devices because they do not have video outputs." << endl;
        break;
        case ERROR_GRAPHICS_OPM_INVALID_POINTER:
        cout << Utils::defaultOffset << "ERROR_GRAPHICS_OPM_INVALID_POINTER" << endl;
        cout << Utils::defaultOffsetDocInfo << "The function failed because an invalid pointer parameter was passed to it. A pointer parameter is invalid if it is null, it points to an invalid address, it points to a kernel mode address, or it is not correctly aligned." << endl;
        break;
        case ERROR_GRAPHICS_OPM_INTERNAL_ERROR:
        cout << Utils::defaultOffset << "ERROR_GRAPHICS_OPM_INTERNAL_ERROR" << endl;
        cout << Utils::defaultOffsetDocInfo << "An internal error caused this operation to fail." << endl;
        break;
        case ERROR_GRAPHICS_OPM_INVALID_HANDLE:
        cout << Utils::defaultOffset << "ERROR_GRAPHICS_OPM_INVALID_HANDLE" << endl;
        cout << Utils::defaultOffsetDocInfo << "The function failed because the caller passed in an invalid OPM user mode handle." << endl;
        break;
        case ERROR_GRAPHICS_PVP_NO_MONITORS_CORRESPOND_TO_DISPLAY_DEVICE:
        cout << Utils::defaultOffset << "ERROR_GRAPHICS_PVP_NO_MONITORS_CORRESPOND_TO_DISPLAY_DEVICE" << endl;
        cout << Utils::defaultOffsetDocInfo << "This function failed because the GDI device passed to it did not have any monitors associated with it." << endl;
        break;
        case ERROR_GRAPHICS_PVP_INVALID_CERTIFICATE_LENGTH:
        cout << Utils::defaultOffset << "ERROR_GRAPHICS_PVP_INVALID_CERTIFICATE_LENGTH" << endl;
        cout << Utils::defaultOffsetDocInfo << "A certificate could not be returned because the certificate buffer passed to the function was too small." << endl;
        break;
        case ERROR_GRAPHICS_OPM_SPANNING_MODE_ENABLED:
        cout << Utils::defaultOffset << "ERROR_GRAPHICS_OPM_SPANNING_MODE_ENABLED" << endl;
        cout << Utils::defaultOffsetDocInfo << "A video output could not be created because the frame buffer is in spanning mode." << endl;
        break;
        case ERROR_GRAPHICS_OPM_THEATER_MODE_ENABLED:
        cout << Utils::defaultOffset << "ERROR_GRAPHICS_OPM_THEATER_MODE_ENABLED" << endl;
        cout << Utils::defaultOffsetDocInfo << "A video output could not be created because the frame buffer is in theater mode." << endl;
        break;
        case ERROR_GRAPHICS_PVP_HFS_FAILED:
        cout << Utils::defaultOffset << "ERROR_GRAPHICS_PVP_HFS_FAILED" << endl;
        cout << Utils::defaultOffsetDocInfo << "The function call failed because the display adapter's hardware functionality scan failed to validate the graphics hardware." << endl;
        break;
        case ERROR_GRAPHICS_OPM_INVALID_SRM:
        cout << Utils::defaultOffset << "ERROR_GRAPHICS_OPM_INVALID_SRM" << endl;
        cout << Utils::defaultOffsetDocInfo << "The High-Bandwidth Digital Content Protection (HDCP) System Renewability Message (SRM) passed to this function did not comply with section 5 of the HDCP 1.1 specification." << endl;
        break;
        case ERROR_GRAPHICS_OPM_OUTPUT_DOES_NOT_SUPPORT_HDCP:
        cout << Utils::defaultOffset << "ERROR_GRAPHICS_OPM_OUTPUT_DOES_NOT_SUPPORT_HDCP" << endl;
        cout << Utils::defaultOffsetDocInfo << "The video output cannot enable the HDCP system because it does not support it." << endl;
        break;
        case ERROR_GRAPHICS_OPM_OUTPUT_DOES_NOT_SUPPORT_ACP:
        cout << Utils::defaultOffset << "ERROR_GRAPHICS_OPM_OUTPUT_DOES_NOT_SUPPORT_ACP" << endl;
        cout << Utils::defaultOffsetDocInfo << "The video output cannot enable analog copy protection because it does not support it." << endl;
        break;
        case ERROR_GRAPHICS_OPM_OUTPUT_DOES_NOT_SUPPORT_CGMSA:
        cout << Utils::defaultOffset << "ERROR_GRAPHICS_OPM_OUTPUT_DOES_NOT_SUPPORT_CGMSA" << endl;
        cout << Utils::defaultOffsetDocInfo << "The video output cannot enable the Content Generation Management System Analog (CGMS-A) protection technology because it does not support it." << endl;
        break;
        case ERROR_GRAPHICS_OPM_HDCP_SRM_NEVER_SET:
        cout << Utils::defaultOffset << "ERROR_GRAPHICS_OPM_HDCP_SRM_NEVER_SET" << endl;
        cout << Utils::defaultOffsetDocInfo << "IOPMVideoOutput's GetInformation() method cannot return the version of the SRM being used because the application never successfully passed an SRM to the video output." << endl;
        break;
        case ERROR_GRAPHICS_OPM_RESOLUTION_TOO_HIGH:
        cout << Utils::defaultOffset << "ERROR_GRAPHICS_OPM_RESOLUTION_TOO_HIGH" << endl;
        cout << Utils::defaultOffsetDocInfo << "IOPMVideoOutput's Configure() method cannot enable the specified output protection technology because the output's screen resolution is too high." << endl;
        break;
        case ERROR_GRAPHICS_OPM_ALL_HDCP_HARDWARE_ALREADY_IN_USE:
        cout << Utils::defaultOffset << "ERROR_GRAPHICS_OPM_ALL_HDCP_HARDWARE_ALREADY_IN_USE" << endl;
        cout << Utils::defaultOffsetDocInfo << "IOPMVideoOutput's Configure() method cannot enable HDCP because the display adapter's HDCP hardware is already being used by other physical outputs." << endl;
        break;
        case ERROR_GRAPHICS_OPM_VIDEO_OUTPUT_NO_LONGER_EXISTS:
        cout << Utils::defaultOffset << "ERROR_GRAPHICS_OPM_VIDEO_OUTPUT_NO_LONGER_EXISTS" << endl;
        cout << Utils::defaultOffsetDocInfo << "The operating system asynchronously destroyed this OPM video output because the operating system's state changed. This error typically occurs because the monitor physical device object (PDO) associated with this video output was removed, the monitor PDO associated with this video output was stopped, the video output's session became a nonconsole session or the video output's desktop became an inactive desktop." << endl;
        break;
        case ERROR_GRAPHICS_OPM_SESSION_TYPE_CHANGE_IN_PROGRESS:
        cout << Utils::defaultOffset << "ERROR_GRAPHICS_OPM_SESSION_TYPE_CHANGE_IN_PROGRESS" << endl;
        cout << Utils::defaultOffsetDocInfo << "IOPMVideoOutput's methods cannot be called when a session is changing its type. There are currently three types of sessions: console, disconnected and remote (remote desktop protocol [RDP] or Independent Computing Architecture [ICA])." << endl;
        break;
        case ERROR_GRAPHICS_I2C_NOT_SUPPORTED:
        cout << Utils::defaultOffset << "ERROR_GRAPHICS_I2C_NOT_SUPPORTED" << endl;
        cout << Utils::defaultOffsetDocInfo << "The monitor connected to the specified video output does not have an I2C bus." << endl;
        break;
        case ERROR_GRAPHICS_I2C_DEVICE_DOES_NOT_EXIST:
        cout << Utils::defaultOffset << "ERROR_GRAPHICS_I2C_DEVICE_DOES_NOT_EXIST" << endl;
        cout << Utils::defaultOffsetDocInfo << "No device on the I2C bus has the specified address." << endl;
        break;
        case ERROR_GRAPHICS_I2C_ERROR_TRANSMITTING_DATA:
        cout << Utils::defaultOffset << "ERROR_GRAPHICS_I2C_ERROR_TRANSMITTING_DATA" << endl;
        cout << Utils::defaultOffsetDocInfo << "An error occurred while transmitting data to the device on the I2C bus." << endl;
        break;
        case ERROR_GRAPHICS_I2C_ERROR_RECEIVING_DATA:
        cout << Utils::defaultOffset << "ERROR_GRAPHICS_I2C_ERROR_RECEIVING_DATA" << endl;
        cout << Utils::defaultOffsetDocInfo << "An error occurred while receiving data from the device on the I2C bus." << endl;
        break;
        case ERROR_GRAPHICS_DDCCI_VCP_NOT_SUPPORTED:
        cout << Utils::defaultOffset << "ERROR_GRAPHICS_DDCCI_VCP_NOT_SUPPORTED" << endl;
        cout << Utils::defaultOffsetDocInfo << "The monitor does not support the specified Virtual Control Panel (VCP) code." << endl;
        break;
        case ERROR_GRAPHICS_DDCCI_INVALID_DATA:
        cout << Utils::defaultOffset << "ERROR_GRAPHICS_DDCCI_INVALID_DATA" << endl;
        cout << Utils::defaultOffsetDocInfo << "The data received from the monitor is invalid." << endl;
        break;
        case ERROR_GRAPHICS_DDCCI_MONITOR_RETURNED_INVALID_TIMING_STATUS_BYTE:
        cout << Utils::defaultOffset << "ERROR_GRAPHICS_DDCCI_MONITOR_RETURNED_INVALID_TIMING_STATUS_BYTE" << endl;
        cout << Utils::defaultOffsetDocInfo << "A function call failed because a monitor returned an invalid Timing Status byte when the operating system used the Display Data Channel Command Interface (DDC/CI) Get Timing Report and Timing Message command to get a timing report from a monitor." << endl;
        break;
        case ERROR_GRAPHICS_MCA_INVALID_CAPABILITIES_STRING:
        cout << Utils::defaultOffset << "ERROR_GRAPHICS_MCA_INVALID_CAPABILITIES_STRING" << endl;
        cout << Utils::defaultOffsetDocInfo << "The monitor returned a DDC/CI capabilities string that did not comply with the ACCESS.bus 3.0, DDC/CI 1.1 or MCCS 2 Revision 1 specification." << endl;
        break;
        case ERROR_GRAPHICS_MCA_INTERNAL_ERROR:
        cout << Utils::defaultOffset << "ERROR_GRAPHICS_MCA_INTERNAL_ERROR" << endl;
        cout << Utils::defaultOffsetDocInfo << "An internal Monitor Configuration API error occurred." << endl;
        break;
        case ERROR_GRAPHICS_DDCCI_INVALID_MESSAGE_COMMAND:
        cout << Utils::defaultOffset << "ERROR_GRAPHICS_DDCCI_INVALID_MESSAGE_COMMAND" << endl;
        cout << Utils::defaultOffsetDocInfo << "An operation failed because a DDC/CI message had an invalid value in its command field." << endl;
        break;
        case ERROR_GRAPHICS_DDCCI_INVALID_MESSAGE_LENGTH:
        cout << Utils::defaultOffset << "ERROR_GRAPHICS_DDCCI_INVALID_MESSAGE_LENGTH" << endl;
        cout << Utils::defaultOffsetDocInfo << "This error occurred because a DDC/CI message length field contained an invalid value." << endl;
        break;
        case ERROR_GRAPHICS_DDCCI_INVALID_MESSAGE_CHECKSUM:
        cout << Utils::defaultOffset << "ERROR_GRAPHICS_DDCCI_INVALID_MESSAGE_CHECKSUM" << endl;
        cout << Utils::defaultOffsetDocInfo << "This error occurred because the value in a DDC/CI message checksum field did not match the message's computed checksum value. This error implies that the data was corrupted while it was being transmitted from a monitor to a computer." << endl;
        break;
        case ERROR_GRAPHICS_PMEA_INVALID_MONITOR:
        cout << Utils::defaultOffset << "ERROR_GRAPHICS_PMEA_INVALID_MONITOR" << endl;
        cout << Utils::defaultOffsetDocInfo << "The HMONITOR no longer exists, is not attached to the desktop, or corresponds to a mirroring device." << endl;
        break;
        case ERROR_GRAPHICS_PMEA_INVALID_D3D_DEVICE:
        cout << Utils::defaultOffset << "ERROR_GRAPHICS_PMEA_INVALID_D3D_DEVICE" << endl;
        cout << Utils::defaultOffsetDocInfo << "The Direct3D (D3D) device's GDI display device no longer exists, is not attached to the desktop, or is a mirroring display device." << endl;
        break;
        case ERROR_GRAPHICS_DDCCI_CURRENT_CURRENT_VALUE_GREATER_THAN_MAXIMUM_VALUE:
        cout << Utils::defaultOffset << "ERROR_GRAPHICS_DDCCI_CURRENT_CURRENT_VALUE_GREATER_THAN_MAXIMUM_VALUE" << endl;
        cout << Utils::defaultOffsetDocInfo << "A continuous VCP code's current value is greater than its maximum value. This error code indicates that a monitor returned an invalid value." << endl;
        break;
        case ERROR_GRAPHICS_MCA_INVALID_VCP_VERSION:
        cout << Utils::defaultOffset << "ERROR_GRAPHICS_MCA_INVALID_VCP_VERSION" << endl;
        cout << Utils::defaultOffsetDocInfo << "The monitor's VCP Version (0xDF) VCP code returned an invalid version value." << endl;
        break;
        case ERROR_GRAPHICS_MCA_MONITOR_VIOLATES_MCCS_SPECIFICATION:
        cout << Utils::defaultOffset << "ERROR_GRAPHICS_MCA_MONITOR_VIOLATES_MCCS_SPECIFICATION" << endl;
        cout << Utils::defaultOffsetDocInfo << "The monitor does not comply with the Monitor Control Command Set (MCCS) specification it claims to support." << endl;
        break;
        case ERROR_GRAPHICS_MCA_MCCS_VERSION_MISMATCH:
        cout << Utils::defaultOffset << "ERROR_GRAPHICS_MCA_MCCS_VERSION_MISMATCH" << endl;
        cout << Utils::defaultOffsetDocInfo << "The MCCS version in a monitor's mccs_ver capability does not match the MCCS version the monitor reports when the VCP Version (0xDF) VCP code is used." << endl;
        break;
        case ERROR_GRAPHICS_MCA_UNSUPPORTED_MCCS_VERSION:
        cout << Utils::defaultOffset << "ERROR_GRAPHICS_MCA_UNSUPPORTED_MCCS_VERSION" << endl;
        cout << Utils::defaultOffsetDocInfo << "The Monitor Configuration API only works with monitors that support the MCCS 1.0 specification, the MCCS 2.0 specification, or the MCCS 2.0 Revision 1 specification." << endl;
        break;
        case ERROR_GRAPHICS_MCA_INVALID_TECHNOLOGY_TYPE_RETURNED:
        cout << Utils::defaultOffset << "ERROR_GRAPHICS_MCA_INVALID_TECHNOLOGY_TYPE_RETURNED" << endl;
        cout << Utils::defaultOffsetDocInfo << "The monitor returned an invalid monitor technology type. CRT, plasma, and LCD (TFT) are examples of monitor technology types. This error implies that the monitor violated the MCCS 2.0 or MCCS 2.0 Revision 1 specification." << endl;
        break;
        case ERROR_GRAPHICS_MCA_UNSUPPORTED_COLOR_TEMPERATURE:
        cout << Utils::defaultOffset << "ERROR_GRAPHICS_MCA_UNSUPPORTED_COLOR_TEMPERATURE" << endl;
        cout << Utils::defaultOffsetDocInfo << "The SetMonitorColorTemperature() caller passed a color temperature to it that the current monitor did not support. CRT, plasma, and LCD (TFT) are examples of monitor technology types. This error implies that the monitor violated the MCCS 2.0 or MCCS 2.0 Revision 1 specification." << endl;
        break;
        case ERROR_GRAPHICS_ONLY_CONSOLE_SESSION_SUPPORTED:
        cout << Utils::defaultOffset << "ERROR_GRAPHICS_ONLY_CONSOLE_SESSION_SUPPORTED" << endl;
        cout << Utils::defaultOffsetDocInfo << "This function can be used only if a program is running in the local console session. It cannot be used if the program is running on a remote desktop session or on a terminal server session." << endl;
        break;
        default:cout << Utils::defaultOffset << "Unknown" << endl;
    }
}