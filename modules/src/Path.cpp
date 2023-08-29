#include "../inc/Path.h"
#include <iostream>
#include <string>
#include <fstream>

namespace Path 
{
    wstring utilitiesdir = L"";
    wstring modspath = L"";
    wstring documents_folder = L"";
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
        documents_folder = user_documents_path;
    }
    void InitLogPath() 
    {
        log_path = documents_folder + L"/SpaceRangersHD/########.log";
    }
}