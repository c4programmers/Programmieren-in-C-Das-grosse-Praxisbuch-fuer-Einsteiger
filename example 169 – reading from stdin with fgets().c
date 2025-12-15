/* example 169 – reading from stdin with fgets() */
#include <stdio.h>

int main(void)
{
    char name[10];  // Buffer size: 10 characters including '\0'

    printf("Please enter your name: ");
    fgets(name, sizeof(name), stdin);  // reads max. 9 characters + '\0'

    // Optional: Removes the '\n', if present
    if (name[strlen(name) - 1] == '\n') {
        name[strlen(name) - 1] = '\0';
    }

    printf("Hello %s\n", name);

    return 0;
}
