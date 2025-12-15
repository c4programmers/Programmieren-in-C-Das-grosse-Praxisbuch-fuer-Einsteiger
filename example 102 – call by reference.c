/* example 102 – call by reference */
#include <stdio.h>

void swap(int *x, int *y) {   	// function with pointer parameters
    int temp;
    temp = *x;    		// temp stores the value at address x (5)
    *x   = *y;    		// value at address x becomes value at address y (8)
    *y   = temp;  		// value at address y becomes old value of x (5)

    printf("Inside function:\t x = %d, y = %d\n", *x, *y);
}

int main()
{
    int a = 5, b = 8;

    printf("Before function call:\t a = %d, b = %d\n", a, b);

    swap(&a, &b); 		// passing addresses of a and b

    printf("After function call:\t a = %d, b = %d\n", a, b);

    return 0;
}
