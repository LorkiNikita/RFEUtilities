#include "../inc/Path.h"
#include "../inc/Logger.h"

using namespace std;

namespace Logger {
    void Write(wstring str_out)
    {
        wofstream f(Path::log_path, ios::app);
        f << str_out << L"\n";
        f.close();
    }
    void WriteMessage(wstring str_out)
    {
        Logger::Write(L"RFEUtilities " + str_out);
    }
    void WriteMessageError(wstring str_out)
    {
        Logger::WriteMessage(L"Error! " + str_out);
    }
    void WriteMessageWarning(wstring str_out)
    {
        Logger::WriteMessage(L"Warning! " + str_out);
    }
}