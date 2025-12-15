/* example 041 - macros */
#include <stdio.h>

#define PI 3.14159265
#define DIVIDE(value) ((value / 2))  	// Macro
#define ADD(a,b) ((a) + (b))	    	// Macro

int main()
{
    int x = 10;
    int y = DIVIDE(x);
    int z = ADD(25, 100);

    printf("Pi = %f,\n", PI);
    printf("Half of x = %d\n", y);
    printf("25 + 100 = %d\n", z);
    return 0;
}
