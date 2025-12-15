/* example 147 – using printf() */
#include <stdio.h>

int main(void)
{
    int width = 10;        // Gesamtbreite der Ausgabe
    int accuracy = 2;      // Anzahl der Nachkommastellen
    double value = 123.45678;

    printf("1234567890\n");                        // Referenzlinie zur Veranschaulichung
    printf("%*.*lf\n", width, accuracy, value);  // dynamisch: Breite=10, Genauigkeit=2

    return 0;
}
