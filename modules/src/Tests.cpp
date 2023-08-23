#include "../inc/Tests.h"
#include "../inc/Logger.h"

using namespace std;

namespace Tests {
    DLLEXPORT
    void TimeTestsStartTest(wchar_t* testname)
    {
        timetesttemp[*testname] = DateTime::TimestampMillisecond();
    }

    uint64_t TimeTestsEndTestNum(wchar_t* testname)
    {
        return DateTime::TimestampMillisecond()-timetesttemp[*testname];
    }

    wstring TimeTestsEndTestString(wchar_t* testname)
    {
        if (timetesttemp.find(*testname) == timetesttemp.end()) {
            Logger::SFT(L"AndromedaUtilities.dll Error! Not find test named " + wstring(testname));
            return L"Test Failed";
        }

        double msec = TimeTestsEndTestNum(testname);
        wstring ret = L"AndromedaUtilities.dll Test " + wstring(testname) + L" completed after " + to_wstring(int(msec)) + L" msec - " + to_wstring(msec / 1000) + L" sec";
        timetesttemp.erase(*testname);
        return ret;
    }
    DLLEXPORT
    const wchar_t* TimeTestsEndTest(wchar_t* testname)
    {
        return TimeTestsEndTestString(testname).c_str();
    }
};