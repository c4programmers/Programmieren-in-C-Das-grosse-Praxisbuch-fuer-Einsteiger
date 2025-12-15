/* example 136 – pointer to string array (char **) */
#include <stdio.h>

int main(void)
{
    // Array of strings (array of char pointers)
    char *fruits[] = { "apple", "banana", "cherry" };
    char **ptr = fruits;  // char** points to the array of char*

    // Loop through all strings using the double pointer
    for (int i = 0; i < 3; i++) {
        printf("Fruit %d: %s\n", i + 1, *(ptr + i));  // or ptr[i]
    }

    return 0;
}
