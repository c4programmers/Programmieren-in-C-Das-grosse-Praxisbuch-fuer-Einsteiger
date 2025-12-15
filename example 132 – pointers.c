/* example 132 – pointers */
#include <stdio.h>

int main()
{
    int *ptr = (int *)0x0061ff14; // typecast to an int* - ptr points to 0x0061ff14

    printf("ptr points to: %p\n", (void *)ptr);

    return 0;
}
