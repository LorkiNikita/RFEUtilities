#include "../inc/Tests.h"
#include "../inc/Logger.h"

using namespace std;

namespace Tests 
{
    DLLEXPORT
    void TimeTestsStartTest(wchar_t* testname)
    {
        timetesttemp[*testname] = DateTime::TimestampMillisecond();
    }

    DLLEXPORT
    uint64_t TimeTestsEndTest(wchar_t* testname)
    {
        if (timetesttemp.find(*testname) == timetesttemp.end()) 
        {
            Logger::WriteMessageError(L"Not find test named " + wstring(testname));
            return 0;
        }

        timetesttemp.erase(*testname);
        return DateTime::TimestampMillisecond()-timetesttemp[*testname];
    }
};