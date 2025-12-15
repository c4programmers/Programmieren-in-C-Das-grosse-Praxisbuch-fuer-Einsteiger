/* example 025 - the data type wchar_t */
#include <stdio.h>
#include <wchar.h>
#include <locale.h>

int main(void)
{
   setlocale(LC_ALL, "");     // Activates the correct character encoding (e.g. UTF-8)
   wchar_t wc = L'x';	     // don’t forget the prefix L
   wprintf(L"%lc \n", wc);   // output of wchar
   printf("wchar_t: %lu Bytes\n", sizeof(wchar_t));
   return 0;
}
