/* example 139 – array of pointers */
#include <stdio.h>

int main(void)
{
    // Array of 4 string pointers (each pointing to a string literal)
    char *cptr[] = {"Hi", "I am", "a pointer", "array"};

    for (int i = 0; i < 4; i++) {
        printf("cptr[%d] points to: \"%s\"\n", i, cptr[i]);
    }

    return 0;
}
