/* example 173 – read data from a file */
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    FILE *fptr;
    const char *file = "c:\\CProgramming\\helloWorld\\testfile.txt";
    int character;

    fptr = fopen(file, "r");

    if (fptr == NULL) {
        perror("Error opening file");  // prints a system error message
        exit(EXIT_FAILURE);   // exits the program, clears buffers and closes files
    }

    // Read characters until end of file
    while ((character = fgetc(fptr)) != EOF) {
        putchar(character);
    }

    fclose(fptr);

    return 0;
}
