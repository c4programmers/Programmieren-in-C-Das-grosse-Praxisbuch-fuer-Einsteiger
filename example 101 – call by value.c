/* example 101 – call by value */
#include <stdio.h>

void swap(int a, int b) {
    int temp;
    temp = a;				// temp = 5 (copy of a)
    a = b;      				// a = 8 (copy of b)
    b = temp;				// b = 5 (copy of temp)

    printf("Inside the function:\t a = %d, b = %d\n", a, b);
}

int main()
{
    int a = 5, b = 8;
    printf("Before function call:\t a = %d, b = %d\n", a, b);
    swap(a, b); 				// Pass by value
    printf("After function call:\t a = %d, b = %d\n", a, b);
    return 0;
}
