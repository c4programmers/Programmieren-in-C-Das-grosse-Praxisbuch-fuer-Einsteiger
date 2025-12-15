/* example 135 – pointer to pointer */
#include <stdio.h>

int main(void)
{
    int b = 1000;
    int *ptr, **pptr;

    ptr = &b;        // ptr stores the address of b
    pptr = &ptr;     // pptr stores the address of ptr

    printf("Value of b = %d\n", b);
    printf("Value of b via *ptr = %d\n", *ptr);
    printf("Value of b via **pptr = %d\n", **pptr);

    return 0;
}
