/* example 170 - reading a line from a file with fgets() */
/* Enter the path of the file incl. the filename e.g. C:\Examples\file1.txt
 * The filename must not exceed 19 characters (plus '\0') */

#include <stdio.h>
#include <stdlib.h>

#define LINE_LENGTH 80
#define FILENAME_LENGTH 20

int main(void)
{
    FILE *source;
    char buffer[LINE_LENGTH];
    char filename[FILENAME_LENGTH];

    printf("Which file do you want to open for reading? ");
    scanf("%19s", filename);  // sichere Eingabe, max. 19 Zeichen + '\0'

    // Datei im Lesemodus öffnen
    source = fopen(filename, "r");
    if (source == NULL) {
        fprintf(stderr, "The file \"%s\" cannot be opened\n", filename);
        return EXIT_FAILURE;
    }

    // Datei zeilenweise lesen und ausgeben
    printf("\nFile content:\n\n");
    while (fgets(buffer, LINE_LENGTH, source)) {
        fputs(buffer, stdout);  // Zeile auf der Konsole ausgeben
    }

    fclose(source);  // Datei schließen
    return EXIT_SUCCESS;
}
