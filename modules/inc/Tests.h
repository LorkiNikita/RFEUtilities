#pragma once
#include <string>
#include "../../helpers/inc/exports.h"
#include "../inc/DateTime.h"
#include <unordered_map>

namespace Tests {
    std::unordered_map<wchar_t, uint64_t> timetesttemp;

    DLLEXPORT
    void TimeTestsStartTest(wchar_t* testname);
    DLLEXPORT
    uint64_t TimeTestsEndTest(wchar_t* testname);
};