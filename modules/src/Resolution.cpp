#include "../inc/Resolution.h"
#include "../inc/File.h"
#include "../inc/Path.h"

namespace Resolution {
    int GetScreenWidth() 
    {
        return GetSystemMetrics(SM_CXSCREEN);
    }
    int GetScreenHeight() 
    {
        return GetSystemMetrics(SM_CYSCREEN);
    }
    int GetProgramWidth() 
    {
        int res = String::ConvertToInt(String::GetParSepStr(File::GetParFromFile(L"\\SpaceRangersHD\\CFG.txt", L"VideoMode"), L",", 0));
        if (res) {
            return res;
        }
        else {
            return GetScreenWidth();
        }
    }
    int GetProgramHeight() 
    {
        int res = String::ConvertToInt(String::GetParSepStr(File::GetParFromFile(L"\\SpaceRangersHD\\CFG.txt", L"VideoMode"), L",", 1));
        if (res) {
            return res;
        }
        else {
            return GetScreenHeight();
        }
    }
};