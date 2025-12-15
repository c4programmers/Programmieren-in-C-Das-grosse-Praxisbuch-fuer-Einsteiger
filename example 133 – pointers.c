/* example 133 – pointers */
#include <stdio.h>

int main(void)
{
    int a = 2, b = 4, temp;
    int *ptr_a = &a, *ptr_b = &b;

    printf("a = %d, b = %d\n", a, b);  	// Output before the exchange

    temp = *ptr_a;     // temp gets the value pointed to by ptr_a (value of a)
    *ptr_a = *ptr_b;   // value at address ptr_a (a) is overwritten with value of b
    *ptr_b = temp;     // value at address ptr_b (b) is set to temp (old value of a)

    printf("a = %d, b = %d\n", a, b); 	// Output after the exchange

    return 0;
}
