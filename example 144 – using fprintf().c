/* example 144 – using fprintf() */
#include <stdio.h>

int main(void)
{
    // Ausgabe auf dem Standardausgabekanal (stdout), z. B. Bildschirm
    fprintf(stdout, "\n%s\n", "Hello World");

    // Ausgabe auf dem Fehlerausgabekanal (stderr), z. B. für Fehlermeldungen
    fprintf(stderr, "\n%s\n", "Error!");

    return 0;
}
