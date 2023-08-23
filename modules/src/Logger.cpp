#include "../inc/Path.h"
#include "../inc/Logger.h"

using namespace std;

namespace Logger {
    void SFT(wstring str_out)
    {
        wofstream f(Path::log_path, ios::app);
        f << str_out << L"\n";
        f.close();
    }
}