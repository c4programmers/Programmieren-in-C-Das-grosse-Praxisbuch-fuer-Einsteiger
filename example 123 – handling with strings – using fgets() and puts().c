/* example 123 – handling with strings – using fgets() and puts() */
#include <stdio.h>

int main(void)
{
    char name[20], *ptrName;

    ptrName = name;

    printf("Address of the array name[]: %p", ptrName);
    printf("\nEnter your name: ");

    /* fgets() returns the address of name in case of success */
    if (fgets(name, sizeof(name), stdin) == ptrName) {
        printf("Hello %s", name);
        puts(name);  // displays only the string, adds a newline automatically
    } else {
        printf("Input error!\n");
        return 1;
    }

    return 0;
}
