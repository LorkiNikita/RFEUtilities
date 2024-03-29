#pragma once
#include <iostream>
#include <string>
#include <fstream>

using namespace std;

namespace Logger {
    void Write(wstring str_out);
    void WriteMessage(wstring str_out);
    void WriteMessageError(wstring str_out);
    void WriteMessageWarning(wstring str_out);
}