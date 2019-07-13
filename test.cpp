#include <iostream>
#include <clocale>
#include <cstdlib>
int main()
{
    std::setlocale(LC_ALL, "en_US.utf8");
    std::wcout.imbue(std::locale("en_US.utf8"));
    const char* mbstr = "H ello";
                        // or "\x7a\xc3\x9f\xe6\xb0\xb4\xf0\x9f\x8d\x8c";
    wchar_t wstr[6];
    std::mbstowcs(wstr, mbstr, 6);
    std::wcout << "wide string: " <<wstr[2]<< '\n';
    wchar_t *p = new wchar_t[10];
    wchar_t *ptr = wmemset(p, L' ', 10);
    p[0]=L'\u00A1';
    for(int i= 0; i <100; i++ ) {
	std::wcout<<p[i];
    }
}

