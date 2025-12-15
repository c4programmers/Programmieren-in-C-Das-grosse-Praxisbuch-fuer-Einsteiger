/* example 174 – write data to a file */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    FILE *fptr;
    const char *file = "c:\\CProgramming\\helloWorld\\testfile1.txt";
    char row[80];
    int character, sumOfCharacters = 0;
    int rown = 0;

    printf("Capture lines of text (press ENTER on empty line to end)\n");
    fptr = fopen(file, "w");  // open file in write mode

    if (fptr == NULL) {   // if file could not be opened
        perror("Error opening file");
        exit(1);
    }

    // safer alternative to gets(): use fgets()
    fgets(row, sizeof(row), stdin);

    while (strlen(row) != 1) {  // stop if only ENTER was pressed
        character = fprintf(fptr, "%s", row);  // write line into file
        sumOfCharacters += character - 1;      // exclude '\0'
        rown++;

        fgets(row, sizeof(row), stdin);        // read next line
    }

    fclose(fptr);
    printf("%i rows and %i characters were written\n", rown, sumOfCharacters);

    return 0;
}
