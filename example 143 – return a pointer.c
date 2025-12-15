/* example 143 – return a pointer */
#include <stdio.h>

int* getPointer() {
    static int ivar = 42;  // must be static
    return &ivar;          // return address of ivar
}

int main(void)
{
    int *iptr;
    iptr = getPointer();   // store returned pointer

    printf("Address returned by getPointer(): %p\n", iptr);
    printf("Value at returned address: %d\n", *iptr);

    return 0;
}
