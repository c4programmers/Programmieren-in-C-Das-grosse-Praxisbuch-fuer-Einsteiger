/* example 146 – using printf() */
#include <stdio.h>

int main(void)
{
    double c = 1000.123456789;

    // einfache Zeichenkettenausgabe
    printf("Hello World\n");                  // ohne Formatierung
    printf("%s\n", "Hello World");            // mit %s

    // Ganzzahl mit Mindestbreite
    printf("%5d\n", 100);                     // Breite = 5, rechtsbündig

    // Breite als Argument übergeben
    printf("%*d\n", 5, 100);                  // Breite = 5, rechtsbündig (wie oben)

    // führende Nullen
    printf("%02d.%02d.%d", 27, 7, 2025);      // Ausgabe: 27.07.2025

    // Gleitkommazahlen mit verschiedenen Flags und Breiten
    printf("\nTest: %+.3lf", c);              // Vorzeichen immer anzeigen (+)
    printf("\nTest: % 20.3lf", c);            // Breite = 20, führendes Leerzeichen bei
					     // positivem Wert
    printf("\nTest: %020.3lf", c);            // Breite = 20, mit führenden Nullen
    printf("\nTest: %.5lf (%e)", c, c);       // Feste und wissenschaftliche Notation

    return 0;
}
