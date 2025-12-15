/* example 137 – pointer to arrays */
#include <stdio.h>

int main(void)
{
    int ivar[] = {2, 8, 5, 9};     // array of 4 integers
    int *iptr;

    iptr = ivar;   // no & needed – the array name acts as a pointer to the first element

    for (int i = 0; i < 4; i++) {
        printf("Address of ivar[%d] = %p\n", i, iptr);   // print current address
        printf("Value of ivar[%d]  = %d\n", i, *iptr);   // dereference to get value

        iptr++;  // move pointer to the next array element (i.e., next int = +4 bytes)
    }

    return 0;
}
