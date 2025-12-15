/* example 129 – pointer assignment and dereferencing */
#include <stdio.h>

int main()
{
    int var = 1234567;
    int *ptr;
    int x;

    ptr = &var;     // ptr stores the address of var
    x = *ptr;       // x receives the value of var via the pointer ptr
    printf("Value of var: %d\n", var);
    printf("Address of var: %p\n", (void *)&var);
    printf("Pointer ptr: %p\n", (void *)ptr);
    printf("Value via ptr: %d\n", *ptr);
    printf("Value copied to x: %d\n", x);

    return 0;
}
