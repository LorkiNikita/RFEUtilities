#include "../inc/String.h"

namespace String {
    //!Вырезать пробелы из строки
    wchar_t *ltrim(wchar_t *s)
    {
        while(isspace(*s)) s++;
        return s;
    }
    wchar_t *rtrim(wchar_t *s)
    {
        wchar_t* back = s + wcslen(s);
        while(isspace(*--back));
        *(back+1) = '\0';
        return s;
    }
    __forceinline wchar_t* trim(wchar_t* s) {rtrim(ltrim(s));}

    wstring ltrimwstr(const wstring &s) {
        return regex_replace(s, wregex(L"^\\s+"), wstring(L""));
    }

    wstring rtrimwstr(const wstring &s) {
        return regex_replace(s, wregex(L"\\s+$"), wstring(L""));
    }
    __forceinline wstring trimwstr(wstring s) {rtrimwstr(ltrimwstr(s));}

    //!Вырезать из строки
    wchar_t* SubString(const wchar_t* str, uint32_t m, uint32_t n)
    {
        //Запоминаем длину вырезки 
        uint32_t l = n - m;

        //Выделяем память для неё и возвращаем указатель
        wchar_t* out = (wchar_t*)malloc(sizeof(wchar_t) * (l + 1));
        //Проходим в цыкле по строке пока не завершится длина или не увидим завершение строки
        for (int i = m; i < n && (*(str + i) != '\0'); i++)
        {
            *out = *(str + i);
            out++;
        }
        *out = '\0';
        return out - l;
    }
    __forceinline wstring SubString(wstring str, uint32_t m, uint32_t n)
    {
        return str.substr(m,n);
    }

    //!Инвентирование строки
    wchar_t* Reverse(wchar_t* str)
    {
        uint32_t len=wcslen(str);
        uint32_t n=len-1;
        uint32_t i;
        
        for(i = 0; i <=(len>>1); i++)
        {
            swap(str[i],str[n]);
            n--;
        }
        return str;
    }
    wstring Reverse(wstring str)
    {
        uint32_t len = str.length();
        uint32_t n = len-1;
        uint32_t i = 0;

        for(i = 0; i <= (len>>1); i++)
        {
            swap(str[i],str[n]);
            n--;
        }
        return str;
    }

    //!Подсчёт количества вхождений какого-то символа в строке
    uint32_t CountSymbol(wchar_t* str, wchar_t* symbol)
    {
        uint32_t a = 0;
        uint32_t n = 0;
        uint32_t len = wcslen(str);
        while(n != len) {
            if (str[n] == symbol[0]) a++;
            n++;
        }
        return a;
    }
    
    uint32_t CountSymbol(wstring str, wstring symbol)
    {
        uint32_t a = 0;
        uint32_t n = 0;
        uint32_t len = str.length();
        while(n != len) {
            if (str[n] == symbol[0]) a++;
            n++;
        }
        return a;
    }

    //!Подсчёт количества вхождений какой-то подстроки в строке
    uint16_t CountStr(wchar_t* str, wchar_t* word)
    {
        size_t a = 0;
        size_t n = 0;
        size_t len = wcslen(str)-1;
        size_t lenw = wcslen(word)-1;
        size_t bufl = 0;
        while(n != len) {
            if (str[n] == word[bufl]) {
                if (bufl == lenw) {
                    bufl = 0;
                    a++;
                }
                else {
                    bufl++;
                }
            }
            else {
                bufl = 0;
            }
            n++;
        }
        return a;
    }
    
    uint16_t CountStr(wstring str,wstring word)
    {
        size_t a = 0;
        size_t n = 0;
        size_t len = str.length()-1;
        size_t lenw = word.length()-1;
        size_t bufl = 0;
        while(n != len) {
            if (str[n] == word[bufl]) {
                if (bufl == lenw) {
                    bufl = 0;
                    a++;
                }
                else {
                    bufl++;
                }
            }
            else {
                bufl = 0;
            }
            n++;
        }
        return a;
    }
    
    
    //!Ищет позицию конечного символа подстроки в строке,попутно сверяя саму подстроку
    uint16_t FindStrPos(wchar_t* str,wchar_t* word)
    {
        size_t n = 0;
        uint32_t len = wcslen(str)-1;
        uint16_t lenw = wcslen(word)-1;
        uint16_t bufl = 0;
        while(n != len) {
            if (str[n] == word[bufl]) {
                if (bufl == lenw) {
                    bufl = 0;
                    return n;
                }
                else {
                    bufl++;
                }
            }
            n++;
        }
    }
    
    __forceinline uint16_t FindStrPos(wstring str,wstring word)
    {
        return str.find(word);
    }
     //!Ищет позицию в строке по которому находится первое вхождение символа в строке
    uint32_t FindSymbolPos(wchar_t* str, wchar_t* symbol)
    {
        uint32_t n = 0;
        uint32_t len = wcslen(str)-1;
        while(n != len) {
            if (str[n] == symbol[0]) return n;
            n++;
        }
    }
    
    uint32_t FindSymbolPos(wstring str, wstring symbol)
    {
        uint32_t n = 0;
        uint32_t len = str.length()-1;
        while(n != len) {
            if (str[n] == symbol[0]) return n;
            n++;
        }
    }
    
    //!Ищет строку возвращая оставшееся содемжимое вместе с искомой строкой
    __forceinline wchar_t* FindStr(wchar_t* str,wchar_t* word)
    {
        return SubString(str,FindStrPos(str,word),wcslen(str)-1);
    }
    __forceinline wstring FindStr(wstring str,wstring word)
    {
        return str.substr(FindStrPos(str,word),str.length()-1);
    }
    
    //!Метод для возврата конкретного параметра из строки, разбитой разделителями в виде символа
    wchar_t* GetParSepSymbol(
        wchar_t* par_string,
        wchar_t* sep,
        uint16_t par_num
    )
    {
        uint32_t n = 0;
        uint32_t len = wcslen(par_string);
        //Нужно для запоминания позиции преведущего раздилителя
        uint16_t s = 0;
        //Если находим разделитель f увеличивается
        uint16_t f = 0;
        while(n != len){
            
            //Проверка на нахождение между разделителями
            if(par_string[n]==sep[0]){
                f++;
                if(f == par_num) return SubString(par_string,s,n);
                s=n;
            }
            n++;
            //Проверка на конец строки и на то что нашли разделитель
            if(len==n && f == par_num-1) return SubString(par_string,s,len);
            
        }
        //Если ничего не нашли возвращаем пустую строку
        return L"";
    }
    wstring GetParSepSymbol(
        wstring par_string,
        wstring sep,
        uint16_t par_num
    )
    {
        uint32_t n = 0;
        uint32_t len = par_string.length()-1;
        //Нужно для запоминания позиции преведущего раздилителя
        uint16_t s = 0;
        //Если находим разделитель f увеличивается
        uint16_t f = 0;
        while(n != len){
            
            //Проверка на нахождение между разделителями
            if(par_string[n]==sep[0])
            {
                f++;
                if(f == par_num) return par_string.substr(s,n);
                s=n;
            }
            n++;
            //Проверка на конец строки и на то что нашли разделитель
            if(len==n && f == par_num-1) return par_string.substr(s,len);
            
        }
        //Если ничего не нашли возвращаем пустую строку
        return L"";
    }
    
    //!Метод для возврата конкретного параметра из строки, разбитой разделителями в виде строки
    wchar_t* GetParSepStr(
        wchar_t* par_string,
        wchar_t* sep,
        uint16_t par_num
    )
    {
        size_t len = wcslen(par_string)-1;
        
        uint16_t lens = wcslen(sep)-1;
        uint16_t n = 0;
        uint16_t l = 0;
        //Нужно для запоминания позиции преведущего раздилителя
        uint16_t s = 0;
        //Если находим разделитель f увеличивается
        uint16_t f = 0;
        while(n != len){
            //Поиск между разделителями
            if (par_string[n] == sep[l]) {
                if (l == lens) {
                    //Нашли разделитель
                    l = 0;
                    f++;
                    if(f == par_num) return SubString(par_string,s,n);
                    s=n;
                }
                else {
                    l++;
                }
            }
            else {
                l = 0;
            }
            n++;
            //Проверка на конец строки и на то что нашли разделитель
            if(len==n && f == par_num-1) return SubString(par_string,s,len);
        }
        //Если ничего не нашли возвращаем пустую строку
        return L"";
    }
    wstring GetParSepStr(
        wstring par_string,
        wstring sep,
        uint16_t par_num
    )
    {
        uint32_t len = par_string.length()-1;
        uint16_t lens = sep.length()-1;
        uint16_t l = 0;
        uint32_t n = 0;
        //Нужно для запоминания позиции преведущего раздилителя
        uint16_t s = 0;
        //Если находим разделитель f увеличивается
        uint16_t f = 0;
        while(n != len){
            //Поиск между разделителями
            if (par_string[n] == sep[l]) {
                if (l == lens) {
                    //Нашли разделитель
                    l = 0;
                    f++;
                    if(f == par_num) return par_string.substr(s,n);
                    s=n;
                }
                else {
                    l++;
                }
            }
            else {
                l = 0;
            }
            n++;
            //Проверка на конец строки и на то что нашли разделитель
            if(len==n && f == par_num-1) return par_string.substr(s,len);
        }
        //Если ничего не нашли возвращаем пустую строку
        return L"";
    }
    //!Метод для изменения параметра в строке разбитой разделителями в виде символа
    void SetParSepSymbol(
        wchar_t* par_string,
        wchar_t* sep,
        uint16_t par_num,
        wchar_t* newstrpar
    )
    {
        uint32_t n = 0;
        uint32_t len = wcslen(par_string)-1;
        //Нужно для запоминания позиции преведущего раздилителя
        uint16_t s = 0;
        //Если находим разделитель f увеличивается
        uint16_t f = 0;
        while(n != len){
            
            //Проверка на нахождение между разделителями
            if(par_string[n]==sep[0]) {
                f++;
                if(f == par_num) par_string = SubString(par_string,0,s)+*newstrpar+*SubString(par_string,n,len);break;
                s=n;
            }
            n++;
            //Проверка на конец строки и на то что нашли разделитель
            if(len==n && f == par_num-1) par_string = SubString(par_string,0,s)+*newstrpar+*SubString(par_string,n,len);break;
            
        }
    }
    void SetParSepSymbol(
        wstring* par_string,
        wstring sep,
        uint16_t par_num,
        wstring newstrpar
    )
    {
        uint32_t n = 0;
        uint32_t len = par_string->length()-1;
        //Нужно для запоминания позиции преведущего раздилителя
        uint16_t s = 0;
        //Если находим разделитель f увеличивается
        uint16_t f = 0;
        //TODO Переписать костыль с разименованием
        wstring temp = *par_string;
        while(n != len){
            // TODO Переписать костыль с выделением нового места в памяти
            //Проверка на нахождение между разделителями
            if(temp[n]==sep[0]) {
                f++;
                
                if(f == par_num) {
                    temp = SubString(*par_string,0,s)+newstrpar+SubString(*par_string,n,len); 
                    free(par_string);
                    par_string = &temp;
                    break;
                }
                s=n;
            }
            n++;
            //Проверка на конец строки и на то что нашли разделитель
            if(len==n && f == par_num-1) {
                temp = SubString(*par_string,0,s)+newstrpar+SubString(*par_string,n,len); 
                free(par_string);
                par_string = &temp;
                break;
            }
            
        }
    }
    //!Метод для изменения параметра в строке разбитой разделителями в виде строки
    void SetParSepStr(
        wchar_t* par_string,
        wchar_t* sep,
        uint16_t par_num,
        wchar_t* newstrpar
    )
    {
        uint32_t len = wcslen(par_string)-1;
        uint16_t lens = wcslen(sep)-1;
        uint32_t n = 0;
        uint16_t l = 0;
        //Нужно для запоминания позиции преведущего раздилителя
        uint16_t s = 0;
        //Если находим разделитель f увеличивается
        uint16_t f = 0;
        while(n != len){
            //Поиск между разделителями
            if (par_string[n] == sep[l]) {
                if (l == lens) {
                    //Нашли разделитель
                    l = 0;
                    f++;
                    if(f == par_num) par_string = SubString(par_string,0,s) + *newstrpar + *SubString(par_string,n,len); break;
                    s=n;
                }
                else {
                    l++;
                }
            }
            else {
                l = 0;
            }
            n++;
            //Проверка на конец строки и на то что нашли разделитель
            if(len==n && f == par_num-1) par_string = SubString(par_string,0,s)+*newstrpar+*SubString(par_string,n,len);break;
        }
    }

    void SetParSepStr(
        wstring* par_string,
        wstring sep,
        uint16_t par_num,
        wstring newstrpar
    )
    {
        uint32_t len = par_string->length()-1;
        uint16_t lens = sep.length()-1;
        uint32_t n = 0;
        uint16_t l = 0;
        //Нужно для запоминания позиции преведущего раздилителя
        uint16_t s = 0;
        //Если находим разделитель f увеличивается
        uint16_t f = 0;
        wstring temp = *par_string;
        while(n != len){
            //Поиск между разделителями
            if (temp[n] == sep[l]) {
                if (l == lens) {
                    //Нашли разделитель
                    l = 0;
                    f++;
                    if(f == par_num) {
                        temp = SubString(temp,0,s)+newstrpar+SubString(temp,n,len); 
                        free(par_string);
                        par_string = &temp;
                        break;
                    }
                    s=n;
                }
                else {
                    l++;
                }
            }
            else {
                l = 0;
            }
            n++;
            //Проверка на конец строки и на то что нашли разделитель
            if(len==n && f == par_num-1) {
                temp = SubString(temp,0,s)+newstrpar+SubString(temp,n,len); 
                free(par_string);
                par_string = &temp;
                break;
            }
        }
    }


    int32_t ConvertToInt(wchar_t* stringin)
    {
        return _wtoi(stringin);
    }
    int32_t ConvertToInt(wstring stringin)
    {
        return stoi(stringin);
    }
    double ConvertToDouble(wchar_t* stringin)
    {
        return wcstod(stringin,nullptr);
    }
    double ConvertToDouble(wstring stringin)
    {
        return stod(stringin);
    }
};