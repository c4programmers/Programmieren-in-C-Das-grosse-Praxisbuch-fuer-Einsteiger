/* example 188 – dynamic memory allocation */
#include <stdio.h>
#include <stdlib.h> // for malloc() and free()

int x = 2;      // global variable (static memory)

int main(void)
{
    int y;      // local variable on stack
    char *str;  // pointer variable on stack

    y = 10;
    printf("x is in static memory with value %d\n", x);
    printf("y is in stack memory with value %d\n", y);
    printf("The size of char = %d Byte\n", (int)sizeof(char));

    str = malloc(10 * sizeof(char)); // allocate 10 bytes on heap
    if (str == NULL) {
        perror("malloc failed");
        return EXIT_FAILURE;
    }

    printf("str points to heap @ address %p\n", (void*)str);

    str[0] = 'a'; // store character 'a' at str[0]
    str[1] = 'b'; // store character 'b' at str[1]
    str[2] = 'c'; // store character 'c' at str[2]

    printf("str[0] = %c @ address %p\n", str[0], (void*)&str[0]);
    printf("str[1] = %c @ address %p\n", str[1], (void*)&str[1]);
    printf("str[2] = %c @ address %p\n", str[2], (void*)&str[2]);

    free(str); // release allocated heap memory
    return EXIT_SUCCESS;
}
