//
// Created by user on 30.08.2019.
//

#include <iostream>
#include <algorithm>
#include "LinkInfo.h"
#include "Utils.h"

using namespace std;

LinkInfo::LinkInfo(std::vector<unsigned char> linkInfo) {
    fillLinkInfo(linkInfo);
}

void LinkInfo::fillLinkInfo(std::vector<unsigned char> linkInfo) {
    auto it = linkInfo.begin();
   /* mandatory fields */
    copy(it, it + 4, std::back_inserter(LinkInfoSize));                         // 4 byte
    it = it + 4;
    copy(it, it + 4, std::back_inserter(LinkInfoHeaderSize));                   // 4 byte
    it = it + 4;
    reverse(LinkInfoHeaderSize.begin(), LinkInfoHeaderSize.end());                              // Нужно для дальнейшей проверки

    copy(it, it + 4, std::back_inserter(LinkInfoFlags));                        // 4 byte
    it = it + 4;
    reverse(LinkInfoFlags.begin(), LinkInfoFlags.end());                                        // Нужно для дальнейшей проверки

    copy(it, it + 4, std::back_inserter(VolumeIDOffset));                       // 4 byte
    it = it + 4;
    copy(it, it + 4, std::back_inserter(LocalBasePathOffset));                  // 4 byte
    it = it + 4;
    copy(it, it+ 4, std::back_inserter(CommonNetworkRelativeLinkOffset));      // 4 byte
    it = it + 4;
    copy(it, it + 4, std::back_inserter(CommonPathSuffixOffset));               // 4 byte
    it = it + 4;

    /* optional fields */
    // if the value of the LinkInfoHeaderSize field is greater than or equal to 0x00000024.
    if (Utils::lenFourBytes(LinkInfoHeaderSize) >= 0x00000024) {
        //if the VolumeIDAndLocalBasePath flag is set, this value is an offset, in bytes,
        //from the start of the LinkInfo structure; otherwise, this value MUST be zero
        copy(it, it + 4, std::back_inserter(LocalBasePathOffsetUnicode));       // 4 byte
        it = it + 4;
        copy(it, it + 4, std::back_inserter(CommonPathSuffixOffsetUnicode));    // 4 byte
        it = it + 4;
    }

    //  if the VolumeIDAndLocalBasePath flag is set.
    if (LinkInfoFlags[3] == VolumeIDAndLocalBasePath) {
        /* VolumeID structure */
        // !!! ещё есть VolumeIDOffset - по нему и нужно искать - учитывается в итераторах
        copy(it, it + 4, std::back_inserter(VolumeID.VolumeIDSize));                    // 4 byte
        it = it + 4;
        reverse(VolumeID.VolumeIDSize.begin(), VolumeID.VolumeIDSize.end());

        int count = Utils::lenFourBytes(VolumeID.VolumeIDSize);
        copy(it, it + 4, std::back_inserter(VolumeID.DriveType));                       // 4 byte
        it = it + 4;
        copy(it, it + 4, std::back_inserter(VolumeID.DriveSerialNumber));               // 4 byte
        it = it + 4;
        copy(it, it + 4, std::back_inserter(VolumeID.VolumeLabelOffset));               // 4 byte
        it = it + 4;
        reverse(VolumeID.VolumeLabelOffset.begin(), VolumeID.VolumeLabelOffset.end());                              // Нужно для дальнейшей проверки

        /* optional fields */
        if (VolumeID.VolumeLabelOffset[3] != 0x00000010) {   // По документации 14
            copy(it, it + 4, std::back_inserter(VolumeID.VolumeLabelOffsetUnicode));    // 4 byte
            it = it + 4;
            count = count - 4;
        }

        copy(it, it + count - 16, std::back_inserter(VolumeID.Data));                   // 4 byte
        it = it + count - 16;
        /* end of VolumeID structure*/

        /* LocalBasePathOffset specifies the location of the LocalBasePath field */
        //NULL–terminated string
        int countBytesBeforeNullTerminated  = Utils::getCountOfBytesBeforeNullTerminator(it);
        copy(it, it + countBytesBeforeNullTerminated - 1, std::back_inserter(LocalBasePath));                   // не понятно, сколько занимает
        it = it + countBytesBeforeNullTerminated - 1;
    }

    /* if LinkInfoFlags  = CommonNetworkRelativeLinkAndPathSuffix (gj CommonNetworkRelativeLinkOffset ) */
    if (LinkInfoFlags[3] == CommonNetworkRelativeLinkAndPathSuffix) {
        /* fill CommonNetworkRelativeLink structure */
        copy(it, it + 4, std::back_inserter(
                CommonNetworkRelativeLink.CommonNetworkRelativeLinkSize));                    // 4 byte
        it = it + 4;
        reverse(CommonNetworkRelativeLink.CommonNetworkRelativeLinkSize.begin(),
                CommonNetworkRelativeLink.CommonNetworkRelativeLinkSize.end());
        int count = Utils::lenFourBytes(CommonNetworkRelativeLink.CommonNetworkRelativeLinkSize);
        copy(it, it + 4, std::back_inserter(
                CommonNetworkRelativeLink.CommonNetworkRelativeLinkFlags));                   // 4 byte
        it = it + 4;
        copy(it, it + 4, std::back_inserter(
                CommonNetworkRelativeLink.NetNameOffset));                                    // 4 byte
        it = it + 4;
        reverse(CommonNetworkRelativeLink.NetNameOffset.begin(),
                CommonNetworkRelativeLink.NetNameOffset.end());

        copy(it, it + 4, std::back_inserter(
                CommonNetworkRelativeLink.DeviceNameOffset));                                 // 4 byte
        it = it + 4;
        // otherwise, this value MUST be ignored ???
        copy(it, it + 4, std::back_inserter(
                CommonNetworkRelativeLink.NetworkProviderType));                              // 4 byte
        it = it + 4;
        /* optional fields */
        //if the value of the NetNameOffset field is greater than 0x00000014
        if (CommonNetworkRelativeLink.NetNameOffset[3] > 0x00000014) {
            copy(it, it + 4, std::back_inserter(
                    CommonNetworkRelativeLink.NetNameOffsetUnicode));                         // 4 byte
            it = it + 4;
            copy(it, it + 4, std::back_inserter(
                    CommonNetworkRelativeLink.DeviceNameOffsetUnicode));                      // 4 byte
            it = it + 4;
        }
        /* end optional fields */
        copy(it, it + 4, std::back_inserter(
                CommonNetworkRelativeLink.NetName));
        it = it + 4;
        copy(it, it + 4, std::back_inserter(
                CommonNetworkRelativeLink.DeviceName));
        it = it + 4;
        /* optional fields */
        //NetNameOffset field is greater than 0x00000014
        if (CommonNetworkRelativeLink.NetNameOffset[3] > 0x00000014) {
            copy(it, it + 4, std::back_inserter(
                    CommonNetworkRelativeLink.NetNameUnicode));
            it = it + 4;
            copy(it, it + 4, std::back_inserter(
                    CommonNetworkRelativeLink.DeviceNameUnicode));
            it = it + 4;
        }
        /* end CommonNetworkRelativeLink structure */
    }

    //NULL–terminated string
    reverse(LinkInfoSize.begin(), LinkInfoSize.end());
    reverse(CommonPathSuffixOffset.begin(), CommonPathSuffixOffset.end());
    int len = Utils::lenFourBytes(LinkInfoSize) - Utils::lenFourBytes(CommonPathSuffixOffset);
    copy(it, it + len, std::back_inserter(CommonPathSuffix));
    it = it + len;

    /* optional fields */
    //VolumeIDAndLocalBasePath flag is set and the value of the LinkInfoHeaderSize
    // field is greater than or equal to 0x00000024.
    if (LinkInfoFlags[3] == VolumeIDAndLocalBasePath && Utils::lenFourBytes(LinkInfoHeaderSize) >= 0x00000024) {
        int countBytesBeforeNullTerminated  = getCountOfBytesBeforeNullTerminatorForLBP(it);
        copy(it, it + countBytesBeforeNullTerminated, std::back_inserter(LocalBasePathUnicode));
        it = it + countBytesBeforeNullTerminated;
    }

    //if the value of the LinkInfoHeaderSize field is greater than or equal to 0x00000024.
    if (Utils::lenFourBytes(LinkInfoHeaderSize) >= 0x00000024) {
        int countBytesBeforeNullTerminated  = Utils::getCountOfBytesBeforeNullTerminator(it);
        copy(it, it + countBytesBeforeNullTerminated, std::back_inserter(CommonPathSuffixUnicode));
    }
    reverseAllFields();
}

int LinkInfo::getCountOfBytesBeforeNullTerminatorForLBP(std::vector<unsigned char>::const_iterator it) {
    int countBytesBeforeNullTerminated = 0;
    auto itCopy = it;
    // Получаем сколько байт нужно считать до нультермитатора
    while ((int)*itCopy != 0x5c) { // "\"
        ++countBytesBeforeNullTerminated;
        ++itCopy;
        if((int)*(itCopy - 1) == 0x3a) { // ":"
            ++itCopy;
            ++countBytesBeforeNullTerminated;
        }
    }
    return countBytesBeforeNullTerminated + 1;
}

// TODO: убрать лишнее
/* Reverse All field (read left -> rigth) */
void LinkInfo::reverseAllFields() {
    //reverse(LinkInfoSize.begin(), LinkInfoSize.end());
   // reverse(LinkInfoHeaderSize.begin(), LinkInfoHeaderSize.end());
   // reverse(LinkInfoFlags.begin(), LinkInfoFlags.end());
    reverse(VolumeIDOffset.begin(), VolumeIDOffset.end());
    reverse(LocalBasePathOffset.begin(), LocalBasePathOffset.end());
    reverse(CommonNetworkRelativeLinkOffset.begin(), CommonNetworkRelativeLinkOffset.end());
    //reverse(CommonPathSuffixOffset.begin(), CommonPathSuffixOffset.end());
    reverse(LocalBasePathOffsetUnicode.begin(), LocalBasePathOffsetUnicode.end());
    reverse(CommonPathSuffixOffsetUnicode.begin(), CommonPathSuffixOffsetUnicode.end());
    /* reverse for VolumeID struct */
   // reverse(VolumeID.VolumeIDSize.begin(), VolumeID.VolumeIDSize.end());
    reverse(VolumeID.DriveType.begin(), VolumeID.DriveType.end());
    reverse(VolumeID.DriveSerialNumber.begin(), VolumeID.DriveSerialNumber.end());
    //reverse(VolumeID.VolumeLabelOffset.begin(), VolumeID.VolumeLabelOffset.end());
    reverse(VolumeID.VolumeLabelOffsetUnicode.begin(), VolumeID.VolumeLabelOffsetUnicode.end());
    reverse(VolumeID.Data.begin(), VolumeID.Data.end());   // чтобы читать
    /* end reverse for VolumeID struct */
    reverse(LocalBasePath.begin(), LocalBasePath.end()); // чтобы читать
    /* reverse for CommonNetworkRelativeLink struct */
   // reverse(CommonNetworkRelativeLink.CommonNetworkRelativeLinkSize.begin(),
    //        CommonNetworkRelativeLink.CommonNetworkRelativeLinkSize.end());
    reverse(CommonNetworkRelativeLink.CommonNetworkRelativeLinkFlags.begin(),
            CommonNetworkRelativeLink.CommonNetworkRelativeLinkFlags.end());
    //reverse(CommonNetworkRelativeLink.NetNameOffset.begin(),
    //        CommonNetworkRelativeLink.NetNameOffset.end());
    reverse(CommonNetworkRelativeLink.DeviceNameOffset.begin(),
            CommonNetworkRelativeLink.DeviceNameOffset.end());
    reverse(CommonNetworkRelativeLink.NetworkProviderType.begin(),
            CommonNetworkRelativeLink.NetworkProviderType.end());
    reverse(CommonNetworkRelativeLink.NetNameOffsetUnicode.begin(),
            CommonNetworkRelativeLink.NetNameOffsetUnicode.end());
    reverse(CommonNetworkRelativeLink.DeviceNameOffsetUnicode.begin(),
            CommonNetworkRelativeLink.DeviceNameOffsetUnicode.end());
    reverse(CommonNetworkRelativeLink.NetName.begin(),
            CommonNetworkRelativeLink.NetName.end());             // чтобы читать
    reverse(CommonNetworkRelativeLink.DeviceName.begin(),
            CommonNetworkRelativeLink.DeviceName.end());
    reverse(CommonNetworkRelativeLink.NetNameUnicode.begin(),
            CommonNetworkRelativeLink.NetNameUnicode.end());
    reverse(CommonNetworkRelativeLink.DeviceNameUnicode.begin(),
            CommonNetworkRelativeLink.DeviceNameUnicode.end());
    /* end reverse for CommonNetworkRelativeLink struct */
    reverse(CommonPathSuffix.begin(), CommonPathSuffix.end());     // чтобы читать
    reverse(LocalBasePathUnicode.begin(), LocalBasePathUnicode.end());
    reverse(CommonPathSuffixUnicode.begin(), CommonPathSuffixUnicode.end());
}

void LinkInfo::parseLinkInfoFlags() {
    if (LinkInfoFlags[3] == VolumeIDAndLocalBasePath) {
        cout << "VolumeIDAndLocalBasePath" << endl;
        cout << Utils::defaultOffsetDocInfo << "If set, the VolumeID and LocalBasePath fields are present, " << endl <<
                Utils::defaultOffsetDocInfo << "and their locations are specified by the values of the VolumeIDOffset and LocalBasePathOffset fields, respectively. " << endl <<
                Utils::defaultOffsetDocInfo << "If the value of the LinkInfoHeaderSize field is greater than or equal to 0x00000024, the LocalBasePathUnicode field is present, " << endl <<
                Utils::defaultOffsetDocInfo << "and its location is specified by the value of the LocalBasePathOffsetUnicode field." << endl;
    }
    if (LinkInfoFlags[3] == CommonNetworkRelativeLinkAndPathSuffix) {
        cout << "CommonNetworkRelativeLinkAndPathSuffix" << endl;
        cout << Utils::defaultOffsetDocInfo << "If set, the CommonNetworkRelativeLink field is present, " << endl <<
                Utils::defaultOffsetDocInfo << "and its location is specified by the value of the CommonNetworkRelativeLinkOffset field." << endl;
    }
}
void LinkInfo::parseDriveType() {
    if (VolumeID.DriveType[3] == DRIVE_UNKNOWN)
        cout << "DRIVE_UNKNOWN" << endl << Utils::defaultOffsetDocInfo <<
            "The drive type cannot be determined." << endl;
    if (VolumeID.DriveType[3] == DRIVE_NO_ROOT_DIR)
        cout << "DRIVE_NO_ROOT_DIR" << endl << Utils::defaultOffsetDocInfo <<
            "The root path is invalid; for example, there is no volume mounted at the path." << endl;
    if (VolumeID.DriveType[3] == DRIVE_REMOVABLE)
        cout << "DRIVE_REMOVABLE" << endl << Utils::defaultOffsetDocInfo <<
            "The drive has removable media, such as a floppy drive, thumb drive, or flash card reader." << endl;
    if (VolumeID.DriveType[3] == DRIVE_FIXED)
        cout << "DRIVE_FIXED" << endl << Utils::defaultOffsetDocInfo <<
            "The drive has fixed media, such as a hard drive or flash drive." << endl;
    if (VolumeID.DriveType[3] == DRIVE_REMOTE)
        cout << "DRIVE_REMOTE" << endl << Utils::defaultOffsetDocInfo <<
            "The drive is a remote (network) drive." << endl;
    if (VolumeID.DriveType[3] == DRIVE_CDROM)
        cout << "DRIVE_CDROM" << endl << Utils::defaultOffsetDocInfo <<
            "The drive is a CD-ROM drive." << endl;
    if (VolumeID.DriveType[3] == DRIVE_RAMDISK)
        cout << "DRIVE_RAMDISK" << endl << Utils::defaultOffsetDocInfo <<
            "The drive is a RAM disk." << endl;
}
void LinkInfo::parseCommonNetworkRelativeLinkFlags() {
    if (CommonNetworkRelativeLink.CommonNetworkRelativeLinkFlags[3] == ValidDevice)
        cout << "ValidDevice" << endl << Utils::defaultOffsetDocInfo <<
            "If set, the DeviceNameOffset field contains an offset to the device name." << endl;
    if (CommonNetworkRelativeLink.CommonNetworkRelativeLinkFlags[3] == ValidNetType)
        cout << "ValidNetType" << endl << Utils::defaultOffsetDocInfo <<
            "If set, the NetProviderType field contains the network provider type." << endl;
}
void LinkInfo::parseNetworkProviderType() {
    if (CommonNetworkRelativeLink.NetworkProviderType[3] == WNNC_NET_AVID)
        cout << "WNNC_NET_AVID" << endl;
    if (CommonNetworkRelativeLink.NetworkProviderType[3] == WNNC_NET_DOCUSPACE)
        cout << "WNNC_NET_DOCUSPACE" << endl;
    if (CommonNetworkRelativeLink.NetworkProviderType[3] == WNNC_NET_MANGOSOFT)
        cout << "WNNC_NET_MANGOSOFT" << endl;
    if (CommonNetworkRelativeLink.NetworkProviderType[3] == WNNC_NET_SERNET)
        cout << "WNNC_NET_SERNET" << endl;
    if (CommonNetworkRelativeLink.NetworkProviderType[3] == WNNC_NET_RIVERFRONT1)
        cout << "WNNC_NET_RIVERFRONT1" << endl;
    if (CommonNetworkRelativeLink.NetworkProviderType[3] == WNNC_NET_RIVERFRONT2)
        cout << "WNNC_NET_RIVERFRONT2" << endl;
    if (CommonNetworkRelativeLink.NetworkProviderType[3] == WNNC_NET_DECORB)
        cout << "WNNC_NET_DECORB" << endl;
    if (CommonNetworkRelativeLink.NetworkProviderType[3] == WNNC_NET_PROTSTOR)
        cout << "WNNC_NET_PROTSTOR" << endl;
    if (CommonNetworkRelativeLink.NetworkProviderType[3] == WNNC_NET_FJ_REDIR)
        cout << "WNNC_NET_FJ_REDIR" << endl;
    if (CommonNetworkRelativeLink.NetworkProviderType[3] == WNNC_NET_DISTINCT)
        cout << "WNNC_NET_DISTINCT" << endl;
    if (CommonNetworkRelativeLink.NetworkProviderType[3] == WNNC_NET_TWINS)
        cout << "WNNC_NET_TWINS" << endl;
    if (CommonNetworkRelativeLink.NetworkProviderType[3] == WNNC_NET_RDR2SAMPLE)
        cout << "WNNC_NET_RDR2SAMPLE" << endl;
    if (CommonNetworkRelativeLink.NetworkProviderType[3] == WNNC_NET_CSC)
        cout << "WNNC_NET_CSC" << endl;
    if (CommonNetworkRelativeLink.NetworkProviderType[3] == WNNC_NET_3IN1)
        cout << "WNNC_NET_3IN1" << endl;
    if (CommonNetworkRelativeLink.NetworkProviderType[3] == WNNC_NET_EXTENDNET)
        cout << "WNNC_NET_EXTENDNET" << endl;
    if (CommonNetworkRelativeLink.NetworkProviderType[3] == WNNC_NET_STAC)
        cout << "WNNC_NET_STAC" << endl;
    if (CommonNetworkRelativeLink.NetworkProviderType[3] == WNNC_NET_FOXBAT)
        cout << "WNNC_NET_FOXBAT" << endl;
    if (CommonNetworkRelativeLink.NetworkProviderType[3] == WNNC_NET_YAHOO)
        cout << "WNNC_NET_YAHOO" << endl;
    if (CommonNetworkRelativeLink.NetworkProviderType[3] == WNNC_NET_EXIFS)
        cout << "WNNC_NET_EXIFS" << endl;
    if (CommonNetworkRelativeLink.NetworkProviderType[3] == WNNC_NET_DAV)
        cout << "WNNC_NET_DAV" << endl;
    if (CommonNetworkRelativeLink.NetworkProviderType[3] == WNNC_NET_KNOWARE)
        cout << "WNNC_NET_KNOWARE" << endl;
    if (CommonNetworkRelativeLink.NetworkProviderType[3] == WNNC_NET_OBJECT_DIRE)
        cout << "WNNC_NET_OBJECT_DIRE" << endl;
    if (CommonNetworkRelativeLink.NetworkProviderType[3] == WNNC_NET_MASFAX)
        cout << "WNNC_NET_MASFAX" << endl;
    if (CommonNetworkRelativeLink.NetworkProviderType[3] == WNNC_NET_HOB_NFS)
        cout << "WNNC_NET_HOB_NFS" << endl;
    if (CommonNetworkRelativeLink.NetworkProviderType[3] == WNNC_NET_SHIVA)
        cout << "WNNC_NET_SHIVA" << endl;
    if (CommonNetworkRelativeLink.NetworkProviderType[3] == WNNC_NET_IBMAL)
        cout << "WNNC_NET_IBMAL" << endl;
    if (CommonNetworkRelativeLink.NetworkProviderType[3] == WNNC_NET_LOCK)
        cout << "WNNC_NET_LOCK" << endl;
    if (CommonNetworkRelativeLink.NetworkProviderType[3] == WNNC_NET_TERMSRV)
        cout << "WNNC_NET_TERMSRV" << endl;
    if (CommonNetworkRelativeLink.NetworkProviderType[3] == WNNC_NET_SRT)
        cout << "WNNC_NET_SRT" << endl;
    if (CommonNetworkRelativeLink.NetworkProviderType[3] == WNNC_NET_QUINCY)
        cout << "WNNC_NET_QUINCY" << endl;
    if (CommonNetworkRelativeLink.NetworkProviderType[3] == WNNC_NET_OPENAFS)
        cout << "WNNC_NET_OPENAFS" << endl;
    if (CommonNetworkRelativeLink.NetworkProviderType[3] == WNNC_NET_AVID1)
        cout << "WNNC_NET_AVID1" << endl;
    if (CommonNetworkRelativeLink.NetworkProviderType[3] == WNNC_NET_DFS)
        cout << "WNNC_NET_DFS" << endl;
    if (CommonNetworkRelativeLink.NetworkProviderType[3] == WNNC_NET_KWNP)
        cout << "WNNC_NET_KWNP" << endl;
    if (CommonNetworkRelativeLink.NetworkProviderType[3] == WNNC_NET_ZENWORKS)
        cout << "WNNC_NET_ZENWORKS" << endl;
    if (CommonNetworkRelativeLink.NetworkProviderType[3] == WNNC_NET_DRIVEONWEB)
        cout << "WNNC_NET_DRIVEONWEB" << endl;
    if (CommonNetworkRelativeLink.NetworkProviderType[3] == WNNC_NET_VMWARE)
        cout << "WNNC_NET_VMWARE" << endl;
    if (CommonNetworkRelativeLink.NetworkProviderType[3] == WNNC_NET_RSFX)
        cout << "WNNC_NET_RSFX" << endl;
    if (CommonNetworkRelativeLink.NetworkProviderType[3] == WNNC_NET_MFILES)
        cout << "WNNC_NET_MFILES" << endl;
    if (CommonNetworkRelativeLink.NetworkProviderType[3] == WNNC_NET_MS_NFS)
        cout << "WNNC_NET_MS_NFS" << endl;
    if (CommonNetworkRelativeLink.NetworkProviderType[3] == WNNC_NET_GOOGLE)
        cout << "WNNC_NET_GOOGLE" << endl;
}

void LinkInfo::parseLinkInfoHeaderSize() {
    int len = Utils::lenFourBytes(LinkInfoHeaderSize);
    cout << dec << len << " bytes. ";
    if (len == 0x0000001C)
        cout << "Offsets to the optional fields are not specified." << endl;
    else if(len >= 0x00000024) {
        cout << "Offsets to the optional fields are specified." << endl;
    }
}

void LinkInfo::printLinkInfo() {
    cout << "________________________LinkInfo_________________________" << endl;
    cout << "LinkInfoSize:                       " << dec << Utils::lenFourBytes(LinkInfoSize) << " bytes" << endl;
    cout << "LinkInfoHeaderSize:                 "; parseLinkInfoHeaderSize();
    cout << "LinkFlags:                          "; parseLinkInfoFlags();
    cout << "VolumeIDOffset:                     " << dec <<
        Utils::lenFourBytes(VolumeIDOffset) << " bytes (offset in bytes from the start of the LinkInfo structure). " << endl <<
        Utils::defaultOffsetDocInfo << "If the VolumeIDAndLocalBasePath flag is NOT set, this value MUST be zero." << endl;
    cout << "LocalBasePathOffset:                " << dec <<
         Utils::lenFourBytes(LocalBasePathOffset) << " bytes (offset in bytes from the start of the LinkInfo structure). " << endl <<
         Utils::defaultOffsetDocInfo << "If the VolumeIDAndLocalBasePath flag is NOT set, this value MUST be zero."<< endl;
    cout << "CommonNetworkRelativeLinkOffset:    " << dec <<
         Utils::lenFourBytes(CommonNetworkRelativeLinkOffset) << " bytes (offset in bytes from the start of the LinkInfo structure). " << endl <<
         Utils::defaultOffsetDocInfo << "If the CommonNetworkRelativeLinkAndPathSuffix flag is NOT set, this value MUST be zero." << endl;
    cout << "CommonPathSuffixOffset:             " << dec <<
         Utils::lenFourBytes(CommonPathSuffixOffset) << " bytes (offset in bytes from the start of the LinkInfo structure)" << endl;
    if (Utils::lenFourBytes(LinkInfoHeaderSize) >= 0x00000024) {
        cout << "LocalBasePathOffsetUnicode:             " << dec <<
             Utils::lenFourBytes(LocalBasePathOffsetUnicode) << " bytes (offset in bytes from the start of the LinkInfo structure)" << endl;
        cout << "CommonPathSuffixOffsetUnicode:            " << dec <<
             Utils::lenFourBytes(CommonPathSuffixOffsetUnicode) << " bytes (offset in bytes from the start of the LinkInfo structure)" << endl;
    }
    if (LinkInfoFlags[3] == VolumeIDAndLocalBasePath) {
        cout << "VolumeID:" << endl;
        cout << "      VolumeIDSize:                 " << dec <<
            Utils::lenFourBytes(VolumeID.VolumeIDSize) << " bytes" << endl;
        cout << "      DriveType:                    "; parseDriveType();
        cout << "      DriveSerialNumber:            "; Utils::print_vec(VolumeID.DriveSerialNumber);
        if(VolumeID.VolumeLabelOffset[3] == 0x00000010) {  // По документации 0x00000014
            cout << "      VolumeLabelOffset:            " << dec <<
                 Utils::lenFourBytes(VolumeID.VolumeLabelOffset) << " bytes (offset in bytes from the start of the VolumeID structure)" << endl;
        } else {
            cout << "      VolumeLabelOffsetUnicode:     " << dec <<
                 Utils::lenFourBytes(VolumeID.VolumeLabelOffsetUnicode) << " bytes (offset in bytes from the start of the VolumeID structure)" << endl;
        }
        reverse(VolumeID.Data.begin(), VolumeID.Data.end());   // чтобы читать
        cout << "      Data:                         "; Utils::print_vec_unicode(VolumeID.Data);
        reverse(VolumeID.Data.begin(), VolumeID.Data.end());
    }
    if (LinkInfoFlags[3] == VolumeIDAndLocalBasePath) {
        reverse(LocalBasePath.begin(), LocalBasePath.end()); // чтобы читать
        cout << "LocalBasePath:                      "; Utils::print_vec_unicode(LocalBasePath);
        reverse(LocalBasePath.begin(), LocalBasePath.end());
    }
    if (LinkInfoFlags[3] == CommonNetworkRelativeLinkAndPathSuffix) {
        cout << "CommonNetworkRelativeLink:" << endl;
        cout << "           CommonNetworkRelativeLinkSize:         " << dec <<
             Utils::lenFourBytes(CommonNetworkRelativeLink.CommonNetworkRelativeLinkSize) << " bytes" << endl;
        cout << "           CommonNetworkRelativeLinkFlags:         "; parseCommonNetworkRelativeLinkFlags();
        cout << "           NetNameOffset:                          " <<
            Utils::lenFourBytes(CommonNetworkRelativeLink.NetNameOffset) <<
            " bytes (offset in bytes from the start of the CommonNetworkRelativeLink structure)" << endl;
        cout << "           DeviceNameOffset:                       " <<
            Utils::lenFourBytes(CommonNetworkRelativeLink.DeviceNameOffset) <<
            " bytes (offset in bytes from the start of the CommonNetworkRelativeLink structure)" << endl;
        cout << "           NetworkProviderType:                    "; parseNetworkProviderType();
        if (CommonNetworkRelativeLink.NetNameOffset[3] > 0x00000014) {
            cout << "           NetNameOffsetUnicode:             " <<
                Utils::lenFourBytes(CommonNetworkRelativeLink.NetNameOffsetUnicode) <<
                " bytes (offset in bytes from the start of the CommonNetworkRelativeLink structure)" << endl;
            cout << "           DeviceNameOffsetUnicode:          " <<
                Utils::lenFourBytes(CommonNetworkRelativeLink.DeviceNameOffsetUnicode) <<
                " bytes (offset in bytes from the start of the CommonNetworkRelativeLink structure)" << endl;
        }
        cout << "           NetName:                                 ";
        reverse(CommonNetworkRelativeLink.NetName.begin(),
                CommonNetworkRelativeLink.NetName.end());
        Utils::print_vec_unicode(CommonNetworkRelativeLink.NetName);
        reverse(CommonNetworkRelativeLink.NetName.begin(),
                CommonNetworkRelativeLink.NetName.end());

        reverse(CommonNetworkRelativeLink.DeviceName.begin(),
                CommonNetworkRelativeLink.DeviceName.end());
        cout << "           DeviceName:                              ";
        Utils::print_vec_unicode(CommonNetworkRelativeLink.DeviceName);
        reverse(CommonNetworkRelativeLink.DeviceName.begin(),
                CommonNetworkRelativeLink.DeviceName.end());

        if (CommonNetworkRelativeLink.NetNameOffset[3] > 0x00000014) {
            cout << "           NetNameUnicode:                   ";
            Utils::print_vec_unicode(CommonNetworkRelativeLink.NetNameUnicode);
            cout << "           DeviceNameOffsetUnicode:          ";
            Utils::print_vec_unicode(CommonNetworkRelativeLink.DeviceNameUnicode);
        }
    }
    reverse(CommonPathSuffix.begin(), CommonPathSuffix.end());    // чтобы ситать
    cout << "CommonPathSuffix:                   "; Utils::print_vec_unicode(CommonPathSuffix);
    reverse(CommonPathSuffix.begin(), CommonPathSuffix.end());

    if (LinkInfoFlags[3] == VolumeIDAndLocalBasePath && Utils::lenFourBytes(LinkInfoHeaderSize) >= 0x00000024) {
        cout << "LocalBasePathUnicode:                               ";
        Utils::print_vec_unicode(LocalBasePathUnicode);
    }
    if (Utils::lenFourBytes(LinkInfoHeaderSize) >= 0x00000024) {
        cout << "CommonPathSuffixUnicode:                            ";
        Utils::print_vec_unicode(CommonPathSuffixUnicode);
    }
    cout << "_________________________________________________________" << endl;
}

void LinkInfo::printLinkInfoInHexStyle() {
    cout << "_____________LinkInfo in HEX style________________" << endl;
    cout << "LinkInfoSize:                       "; Utils::print_vec(LinkInfoSize);
    cout << "LinkInfoHeaderSize:                 "; Utils::print_vec(LinkInfoHeaderSize);
    cout << "LinkFlags:                          "; Utils::print_vec(LinkInfoFlags);
    cout << "VolumeIDOffset:                     "; Utils::print_vec(VolumeIDOffset);
    cout << "LocalBasePathOffset:                "; Utils::print_vec(LocalBasePathOffset);
    cout << "CommonNetworkRelativeLinkOffset:    "; Utils::print_vec(CommonNetworkRelativeLinkOffset);
    cout << "CommonPathSuffixOffset:             "; Utils::print_vec(CommonPathSuffixOffset);
    if (Utils::lenFourBytes(LinkInfoHeaderSize) >= 0x00000024) {
        cout << "LocalBasePathOffsetUnicode:             "; Utils::print_vec(LocalBasePathOffsetUnicode);
        cout << "CommonPathSuffixOffsetUnicode:            "; Utils::print_vec(CommonPathSuffixOffsetUnicode);
    }
    if (LinkInfoFlags[3] == VolumeIDAndLocalBasePath) {
        cout << "VolumeID:" << endl;
        cout << "      VolumeIDSize:                 "; Utils::print_vec(VolumeID.VolumeIDSize);
        cout << "      DriveType:                    "; Utils::print_vec(VolumeID.DriveType);
        cout << "      DriveSerialNumber:            "; Utils::print_vec(VolumeID.DriveSerialNumber);
        if(VolumeID.VolumeLabelOffset[3] == 0x00000010) { //
            cout << "      VolumeLabelOffset:            ";
            Utils::print_vec(VolumeID.VolumeLabelOffset);
        } else {
            cout << "      VolumeLabelOffsetUnicode:     ";
            Utils::print_vec(VolumeID.VolumeLabelOffsetUnicode);
        }
        cout << "      Data:                         "; Utils::print_vec(VolumeID.Data);
    }
    if (LinkInfoFlags[3] == VolumeIDAndLocalBasePath) {
        cout << "LocalBasePath:                      "; Utils::print_vec(LocalBasePath);
    }
    if (LinkInfoFlags[3] == CommonNetworkRelativeLinkAndPathSuffix) {
        cout << "CommonNetworkRelativeLink:" << endl;
        cout << "           CommonNetworkRelativeLinkSize:         ";
            Utils::print_vec(CommonNetworkRelativeLink.CommonNetworkRelativeLinkSize);
        cout << "           CommonNetworkRelativeLinkFlags:         ";
            Utils::print_vec(CommonNetworkRelativeLink.CommonNetworkRelativeLinkFlags);
        cout << "           NetNameOffset:                          ";
            Utils::print_vec(CommonNetworkRelativeLink.NetNameOffset);
        cout << "           DeviceNameOffset:                       ";
        Utils::print_vec(CommonNetworkRelativeLink.DeviceNameOffset);
        cout << "           NetworkProviderType:                    ";
        Utils::print_vec(CommonNetworkRelativeLink.NetworkProviderType);

        if (CommonNetworkRelativeLink.NetNameOffset[3] > 0x00000014) {
            cout << "           NetNameOffsetUnicode:             ";
            Utils::print_vec(CommonNetworkRelativeLink.NetNameOffsetUnicode);
            cout << "           DeviceNameOffsetUnicode:          ";
            Utils::print_vec(CommonNetworkRelativeLink.DeviceNameOffsetUnicode);
        }
        cout << "           NetName:                                 ";
            Utils::print_vec(CommonNetworkRelativeLink.NetName);
        cout << "           DeviceName:                              ";
        Utils::print_vec(CommonNetworkRelativeLink.DeviceName);

        if (CommonNetworkRelativeLink.NetNameOffset[3] > 0x00000014) {
            cout << "           NetNameUnicode:                   ";
            Utils::print_vec(CommonNetworkRelativeLink.NetNameUnicode);
            cout << "           DeviceNameOffsetUnicode:          ";
            Utils::print_vec(CommonNetworkRelativeLink.DeviceNameUnicode);
        }
    }
    cout << "CommonPathSuffix:                   "; Utils::print_vec(CommonPathSuffix);

    if (LinkInfoFlags[3] == VolumeIDAndLocalBasePath && Utils::lenFourBytes(LinkInfoHeaderSize) >= 0x00000024) {
        cout << "LocalBasePathUnicode:                               ";
        Utils::print_vec(LocalBasePathUnicode);
    }
    if (Utils::lenFourBytes(LinkInfoHeaderSize) >= 0x00000024) {
        cout << "CommonPathSuffixUnicode:                            ";
        Utils::print_vec(CommonPathSuffixUnicode);
    }
    cout << "_________________________________________________________" << endl;
}