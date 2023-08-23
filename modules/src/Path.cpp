#include "../inc/Path.h"

namespace Path 
{
    wstring utilitiesdir = L"";
    wstring modspath = L"";
    wstring system_folder = L"";
    wstring log_path = L"";

    void InitUtilitiesPath(HMODULE hModule)
    {
        WCHAR utilities_dir_path[MAX_PATH];
        GetModuleFileNameW(hModule, utilities_dir_path, MAX_PATH);
        utilitiesdir = utilities_dir_path;
    }
    void InitModsPath() 
    {
        std::wstring searchStr = L"SolyankaRFE";

        size_t foundPos = utilitiesdir.find(searchStr);

        if (foundPos != std::wstring::npos) {
            std::wstring modspath = utilitiesdir.substr(0, foundPos);
        }
    }
    void InitUserDocumentsPath() 
    {
        WCHAR user_documents_path[MAX_PATH];
        SHGetSpecialFolderPathW(0, user_documents_path, CSIDL_PERSONAL, true);
        system_folder = user_documents_path;
    }
    void InitLogPath() 
    {
        log_path = system_folder + L"SpaceRangersHD/########.log";
    }
}