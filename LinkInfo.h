//
// Created by user on 30.08.2019.
//

#ifndef LNK_JUMP_LIST_PARSER_LINKINFO_H
#define LNK_JUMP_LIST_PARSER_LINKINFO_H


#include <vector>

// (LinkInfo) LinkInfoFlags
#define VolumeIDAndLocalBasePath				0x00000001	// If set, the VolumeID and LocalBasePath fields are present, and their locations are specified by the values of the VolumeIDOffset and LocalBasePathOffset fields, respectively.
                                                            // If the value of the LinkInfoHeaderSize field is greater than or equal to 0x00000024, the LocalBasePathUnicode field is present, and its location is specified by the value of the LocalBasePathOffsetUnicode field.
                                                            // If not set, the VolumeID, LocalBasePath, and LocalBasePathUnicode fields are not present, and the values of the VolumeIDOffset and LocalBasePathOffset fields are zero.
                                                            // If the value of the LinkInfoHeaderSize field is greater than or equal to 0x00000024, the value of the LocalBasePathOffsetUnicode field is zero.
#define CommonNetworkRelativeLinkAndPathSuffix	0x00000002	// If set, the CommonNetworkRelativeLink field is present, and its location is specified by the value of the CommonNetworkRelativeLinkOffset field.
                                                            // If not set, the CommonNetworkRelativeLink field is not present, and the value of the CommonNetworkRelativeLinkOffset field is zero.

// (VolumeID) DriveType
#define DRIVE_UNKNOWN           0x00000000      // The drive type cannot be determined.
#define DRIVE_NO_ROOT_DIR       0x00000001      // The root path is invalid; for example, there is no volume mounted at the path.
#define DRIVE_REMOVABLE         0x00000002      // The drive has removable media, such as a floppy drive, thumb drive, or flash card reader.
#define DRIVE_FIXED             0x00000003      // The drive has fixed media, such as a hard drive or flash drive.
#define DRIVE_REMOTE            0x00000004      // The drive is a remote (network) drive.
#define DRIVE_CDROM             0x00000005      // The drive is a CD-ROM drive.
#define DRIVE_RAMDISK           0x00000006      // The drive is a RAM disk.


// (CommonNetworkRelativeLink) CommonNetworkRelativeLinkFlags
#define ValidDevice		        0x00000001	// If set, the DeviceNameOffset field contains an offset to the device name.
#define ValidNetType	        0x00000002	// If set, the NetProviderType field contains the network provider type.

// (CommonNetworkRelativeLink) NetworkProviderType
#define WNNC_NET_AVID		    0x001a0000
#define WNNC_NET_DOCUSPACE	    0x001b0000
#define WNNC_NET_MANGOSOFT	    0x001c0000
#define WNNC_NET_SERNET		    0x001d0000
#define WNNC_NET_RIVERFRONT1	0x001e0000
#define WNNC_NET_RIVERFRONT2	0x001f0000
#define WNNC_NET_DECORB		    0x00200000
#define WNNC_NET_PROTSTOR	    0x00210000
#define WNNC_NET_FJ_REDIR	    0x00220000
#define WNNC_NET_DISTINCT	    0x00230000
#define WNNC_NET_TWINS		    0x00240000
#define WNNC_NET_RDR2SAMPLE	    0x00250000
#define WNNC_NET_CSC		    0x00260000
#define WNNC_NET_3IN1		    0x00270000
#define WNNC_NET_EXTENDNET	    0x00290000
#define WNNC_NET_STAC		    0x002a0000
#define WNNC_NET_FOXBAT		    0x002b0000
#define WNNC_NET_YAHOO		    0x002c0000
#define WNNC_NET_EXIFS		    0x002d0000
#define WNNC_NET_DAV		    0x002e0000
#define WNNC_NET_KNOWARE	    0x002f0000
#define WNNC_NET_OBJECT_DIRE	0x00300000
#define WNNC_NET_MASFAX		    0x00310000
#define WNNC_NET_HOB_NFS	    0x00320000
#define WNNC_NET_SHIVA		    0x00330000
#define WNNC_NET_IBMAL		    0x00340000
#define WNNC_NET_LOCK		    0x00350000
#define WNNC_NET_TERMSRV	    0x00360000
#define WNNC_NET_SRT		    0x00370000
#define WNNC_NET_QUINCY		    0x00380000
#define WNNC_NET_OPENAFS	    0x00390000
#define WNNC_NET_AVID1		    0x003a0000
#define WNNC_NET_DFS		    0x003b0000
#define WNNC_NET_KWNP		    0x003c0000
#define WNNC_NET_ZENWORKS	    0x003d0000
#define WNNC_NET_DRIVEONWEB	    0x003e0000
#define WNNC_NET_VMWARE		    0x003f0000
#define WNNC_NET_RSFX		    0x00400000
#define WNNC_NET_MFILES		    0x00410000
#define WNNC_NET_MS_NFS		    0x00420000
#define WNNC_NET_GOOGLE		    0x00430000

class LinkInfo {
private:
    struct VolumeIDStruct {
        std::vector<unsigned int> VolumeIDSize;             // 4 bytes  MUST be greater than 0x00000010
        std::vector<unsigned int> DriveType;                // 4 bytes
        std::vector<unsigned int> DriveSerialNumber;        // 4 bytes
        std::vector<unsigned int> VolumeLabelOffset;        // 4 bytes If the value of this field is 0x00000014,
                                                            // it MUST be ignored, and the value of the VolumeLabelOffsetUnicode field MUST be used
        std::vector<unsigned int> VolumeLabelOffsetUnicode; // 4 bytes  (OPTIONAL) - MUST NOT be present
        std::vector<unsigned int> Data;
    };

    struct CommonNetworkRelativeLinkStruct {
        std::vector<unsigned int> CommonNetworkRelativeLinkSize;        // 4 bytes
        std::vector<unsigned int> CommonNetworkRelativeLinkFlags;       // 4 bytes
        std::vector<unsigned int> NetNameOffset;                        // 4 bytes
        std::vector<unsigned int> DeviceNameOffset;                     // 4 bytes
        std::vector<unsigned int> NetworkProviderType;                  // 4 bytes
        std::vector<unsigned int> NetNameOffsetUnicode;                 // 4 bytes (OPTIONAL) - MUST NOT be present
        std::vector<unsigned int> DeviceNameOffsetUnicode;              // 4 bytes (OPTIONAL) - MUST NOT be present
        std::vector<unsigned int> NetName;
        std::vector<unsigned int> DeviceName;
        std::vector<unsigned int> NetNameUnicode;                       // (OPTIONAL) - MUST NOT be present
        std::vector<unsigned int> DeviceNameUnicode;                    // (OPTIONAL) - MUST NOT be present

    };

    std::vector<unsigned int> LinkInfoSize;                     // 4 bytes
    std::vector<unsigned int> LinkInfoHeaderSize;               // 4 bytes
    std::vector<unsigned int> LinkInfoFlags;                    // 4 bytes
    std::vector<unsigned int> VolumeIDOffset;                   // 4 bytes
    std::vector<unsigned int> LocalBasePathOffset;              // 4 bytes
    std::vector<unsigned int> CommonNetworkRelativeLinkOffset;  // 4 bytes
    std::vector<unsigned int> CommonPathSuffixOffset;           // 4 bytes
    std::vector<unsigned int> LocalBasePathOffsetUnicode;       // 4 bytes (OPTIONAL) - MUST NOT be present
    std::vector<unsigned int> CommonPathSuffixOffsetUnicode;    // 4 bytes (OPTIONAL) - MUST NOT be present
    VolumeIDStruct            VolumeID;                         // (OPTIONAL) - MUST NOT be present
    std::vector<unsigned int> LocalBasePath;                    // (OPTIONAL) - MUST NOT be present
    CommonNetworkRelativeLinkStruct CommonNetworkRelativeLink;  // (OPTIONAL) - MUST NOT be present
    std::vector<unsigned int> CommonPathSuffix;
    std::vector<unsigned int> LocalBasePathUnicode;             // (OPTIONAL) - MUST NOT be present
    std::vector<unsigned int> CommonPathSuffixUnicode;          // (OPTIONAL) - MUST NOT be present

    /* Reverse All field (read left -> rigth) */
    void reverseAllFields();
    int getCountOfBytesBeforeNullTerminatorForLBP(std::vector<unsigned char>::const_iterator it);
    void fillLinkInfo(std::vector<unsigned char> linkInfo);
    void parseLinkInfoHeaderSize();

public:
    LinkInfo(std::vector<unsigned char> linkInfo);

    void printLinkInfo();
    void printLinkInfoInHexStyle();
    void parseLinkInfoFlags();
    void parseDriveType();
    void parseCommonNetworkRelativeLinkFlags();
    void parseNetworkProviderType();

};


#endif //LNK_JUMP_LIST_PARSER_LINKINFO_H
