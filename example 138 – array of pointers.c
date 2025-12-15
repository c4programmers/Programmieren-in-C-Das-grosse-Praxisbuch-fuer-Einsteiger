/* example 138 – array of pointers */
#include <stdio.h>

int main(void)
{
    int values[] = {2, 8, 5, 9};   // regular int array
    int *ptrArray[4];              // array of 4 pointers to int

    // Assign addresses of array elements to pointer array
    for (int i = 0; i < 4; i++) {
        ptrArray[i] = &values[i];  // each pointer points to an element of values[]
        printf("Value at ptrArray[%d] = %d\n", i, *ptrArray[i]);
    }

    return 0;
}
