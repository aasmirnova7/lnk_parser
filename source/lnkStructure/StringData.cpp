#include <algorithm>
#include "StringData.h"
#include "ShellLinkHeader.h"
#include "../utils/Utils.h"

using  namespace std;

StringData::StringData(ReadStream *readStream, int readFrom) {
    fillStringData(readStream, readFrom);
}

void StringData::fillStringData(ReadStream *readStream, int readFrom) {
    int tmpReadFrom = readFrom;

    if(ShellLinkHeader::HasNameIsSet()) {
        vector<unsigned char> nameStringSize  = readStream->read(tmpReadFrom,2);
        reverse(nameStringSize.begin(), nameStringSize.end());
        int len = Utils::lenTwoBytes(nameStringSize) * 2;   // Unicode chars
        std::copy(nameStringSize.begin(), nameStringSize.end(),
                  std::back_inserter(NAME_STRING.CountCharacters));

        vector<unsigned char> nameString  = readStream->read(tmpReadFrom + 2, len);
        reverse(nameString.begin(), nameString.end());
        std::copy(nameString.begin(), nameString.end(),
                  std::back_inserter(NAME_STRING.String));

        StringDataSize =  StringDataSize + len + 2;
        tmpReadFrom = tmpReadFrom + len + 2;
    }
    if(ShellLinkHeader::HasRelativePathIsSet()) {
        vector<unsigned char> RelativePathSize  = readStream->read(tmpReadFrom,2);
        reverse(RelativePathSize.begin(), RelativePathSize.end());
        int len = Utils::lenTwoBytes(RelativePathSize) * 2;   // Unicode chars
        std::copy(RelativePathSize.begin(), RelativePathSize.end(),
                  std::back_inserter(RELATIVE_PATH.CountCharacters));

        vector<unsigned char> relativePath  = readStream->read(tmpReadFrom + 2,len);
        reverse(relativePath.begin(), relativePath.end());
        std::copy(relativePath.begin(), relativePath.end(),
                  std::back_inserter(RELATIVE_PATH.String));

        StringDataSize =  StringDataSize + len + 2;
        tmpReadFrom = tmpReadFrom + len + 2;
    }
    if(ShellLinkHeader::HasWorkingDirIsSet()) {
        vector<unsigned char> WorkingDirSize  = readStream->read(tmpReadFrom,2);
        reverse(WorkingDirSize.begin(), WorkingDirSize.end());
        int len = Utils::lenTwoBytes(WorkingDirSize) * 2;   // Unicode chars
        std::copy(WorkingDirSize.begin(), WorkingDirSize.end(),
                  std::back_inserter(WORKING_DIR.CountCharacters));

        vector<unsigned char> workingDir  = readStream->read(tmpReadFrom + 2,len);
        reverse(workingDir.begin(), workingDir.end());
        std::copy(workingDir.begin(), workingDir.end(), std::back_inserter(WORKING_DIR.String));

        StringDataSize =  StringDataSize + len + 2;
        tmpReadFrom = tmpReadFrom + len + 2;
    }
    if(ShellLinkHeader::HasArgumentsIsSet()) {
        vector<unsigned char> argumentsSize  = readStream->read(tmpReadFrom,2);
        reverse(argumentsSize.begin(), argumentsSize.end());
        int len = Utils::lenTwoBytes(argumentsSize) * 2;   // Unicode chars
        std::copy(argumentsSize.begin(), argumentsSize.end(),
                  std::back_inserter(COMMAND_LINE_ARGUMENTS.CountCharacters));

        vector<unsigned char> arguments  = readStream->read(tmpReadFrom + 2,len);
        reverse(arguments.begin(), arguments.end());
        std::copy(arguments.begin(), arguments.end(),
                  std::back_inserter(COMMAND_LINE_ARGUMENTS.String));

        StringDataSize =  StringDataSize + len + 2;
        tmpReadFrom = tmpReadFrom + len + 2;
    }
    if(ShellLinkHeader::HasIconLocationIsSet()) {
        vector<unsigned char> IconLocationSize  = readStream->read(tmpReadFrom,2);
        reverse(IconLocationSize.begin(), IconLocationSize.end());
        int len = Utils::lenTwoBytes(IconLocationSize) * 2;   // Unicode chars
        std::copy(IconLocationSize.begin(), IconLocationSize.end(),
                  std::back_inserter(ICON_LOCATION.CountCharacters));

        vector<unsigned char> iconLocation  = readStream->read(tmpReadFrom + 2,len);
        reverse(iconLocation.begin(), iconLocation.end());
        std::copy(iconLocation.begin(), iconLocation.end(),
                  std::back_inserter(ICON_LOCATION.String));

        StringDataSize =  StringDataSize + len + 2;
    }
}

void StringData::printStringDataUtilInHexStyle(StringDataStruct sdStruct) {
    cout << "      CountCharacters:              "; Utils::print_vec(sdStruct.CountCharacters);
    cout << "      String:                       "; Utils::print_vec(sdStruct.String);
}
void StringData::printStringDataUtil(StringDataStruct sdStruct) {
    int len = Utils::lenTwoBytes(sdStruct.CountCharacters);
    cout << "      CountCharacters:              " << dec << len << " Unicode characters, "
         << dec << len * 2 << " bytes. " << endl;
    cout << "      String:                       ";
    reverse(sdStruct.String.begin(), sdStruct.String.end());
    Utils::print_vec_unicode(sdStruct.String);
    reverse(sdStruct.String.begin(), sdStruct.String.end());
}

void StringData::printStringData() {
    cout << "______________________StringData________________________" << endl;
    if(ShellLinkHeader::HasNameIsSet()) {
        cout << "NAME_STRING:                        " << endl;
        printStringDataUtil(NAME_STRING);
    }
    if(ShellLinkHeader::HasRelativePathIsSet()) {
        cout << "RELATIVE_PATH:                      " << endl;
        printStringDataUtil(RELATIVE_PATH);
    }
    if(ShellLinkHeader::HasWorkingDirIsSet()) {
        cout << "WORKING_DIR:                        " << endl;
        printStringDataUtil(WORKING_DIR);
    }
    if(ShellLinkHeader::HasArgumentsIsSet()) {
        cout << "COMMAND_LINE_ARGUMENTS:             " << endl;
        printStringDataUtil(COMMAND_LINE_ARGUMENTS);
    }
    if(ShellLinkHeader::HasIconLocationIsSet()) {
        cout << "ICON_LOCATION:                      " << endl;
        printStringDataUtil(ICON_LOCATION);
    }
    cout << "_________________________________________________________" << endl;
}
void StringData::printStringDataInHexStyle() {
    cout << "_______________StringData in HEX style___________________" << endl;
    if(ShellLinkHeader::HasNameIsSet()) {
        cout << "NAME_STRING:                        " << endl;
        printStringDataUtilInHexStyle(NAME_STRING);
    }
    if(ShellLinkHeader::HasRelativePathIsSet()) {
        cout << "RELATIVE_PATH:                      " << endl;
        printStringDataUtilInHexStyle(RELATIVE_PATH);
    }
    if(ShellLinkHeader::HasWorkingDirIsSet()) {
        cout << "WORKING_DIR:                        " << endl;
        printStringDataUtilInHexStyle(WORKING_DIR);
    }
    if(ShellLinkHeader::HasArgumentsIsSet()) {
        cout << "COMMAND_LINE_ARGUMENTS:             " << endl;
        printStringDataUtilInHexStyle(COMMAND_LINE_ARGUMENTS);
    }
    if(ShellLinkHeader::HasIconLocationIsSet()) {
        cout << "ICON_LOCATION:                      " << endl;
        printStringDataUtilInHexStyle(ICON_LOCATION);
    }
    cout << "_________________________________________________________" << endl;
}

int StringData::getStringDataStructureSize() {
    return StringDataSize;
}
