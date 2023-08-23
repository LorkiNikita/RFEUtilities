#pragma once
#include <string>
#include <windows.h>
#include <shlobj.h>

using namespace std;

namespace Path 
{
    extern wstring utilitiesdir;
    extern wstring modspath;
    extern wstring system_folder;
    extern wstring log_path;
    
    void InitUtilitiesPath(HMODULE hModule);
    void InitModsPath();
    void InitUserDocumentsPath ();
    void InitLogPath ();
}