/* example 145 – Rückgabewert von printf() */
#include <stdio.h>

int main(void)
{
    int value = 123;
    int y;

    // printf gibt "x = 123" auf dem Bildschirm aus
    y = printf("\nx = %d", value);

    // Rückgabewert anzeigen
    printf("\nAnzahl der ausgegebenen Zeichen: %d\n", y);

    return 0;
}
