/* example 026 – the unicode standard */
#include <stdio.h>
#include <wchar.h>     	// for wchar_t and wprintf
#include <locale.h>	// for setlocale()

int main(void)
{
   /* set US UTF-8 english */
   setlocale(LC_ALL, "en_US.UTF-8");
   wchar_t wc = 0x3b1;
   wprintf(L"%lc \n", wc);		// Output: α
   return 0;
}
