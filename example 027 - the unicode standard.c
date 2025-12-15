/* example 027 - the unicode standard */
#include <stdio.h>
#include <wchar.h>     // for wchar_t and wprintf
#include <locale.h>    // for setlocale()

int main(void)
{
    // Activate system-wide UTF-8 locale (more secure than fixed locale)
    setlocale(LC_ALL, "");

    /* Output of Unicode characters from code 33 to 1000 */
    for (int i = 33; i <= 1000; i++) {
        wprintf(L"%3d: %lc\t", i, (wchar_t)i);

        if ((i - 32) % 8 == 0) {  // Line break after every 8 characters
            wprintf(L"\n");
        }
    }

    return 0;
}
