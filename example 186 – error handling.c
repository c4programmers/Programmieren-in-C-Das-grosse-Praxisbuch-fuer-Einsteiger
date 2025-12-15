/* example 186 – error handling */
#include <stdlib.h>
#include <stdio.h>

int main()
{
    char c;
    FILE *fptr;

    fptr = fopen("C:\\CProgramming\\testfile.txt", "r"); // open file in read-only mode

    if (fptr == NULL) {
        fprintf(stderr, "fopen() failed in file %s at line # %d", __FILE__,__LINE__);
        exit(EXIT_FAILURE);
    }

    else { // if file could be opened, print out the text
        c = fgetc(fptr);
        while (!feof(fptr)) {
            putchar(c);
            c = fgetc(fptr);
        }
        fclose(fptr);
    }

    Return EXIT_SUCCESS;
}
