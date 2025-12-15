/* example 134 – pointers */
#include <stdio.h>

int main(void)
{
    float a = 0, b = 0, *ptr_a = NULL;

    ptr_a = &a;        // ptr_a stores the address of variable a
    *ptr_a = 12;       // sets the value of a to 12 via the pointer

    printf("a = %.2f\n", a);

    *ptr_a += 5.5;     // adds 5.5 to the current value of a via the pointer

    printf("a = %.2f\n", a);

    b = *ptr_a + 5;    // adds 5 to the value of a and stores the result in b

    printf("b = %.2f\n", b);

    return 0;
}
