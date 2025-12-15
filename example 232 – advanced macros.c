/* example 232 – advanced macros */
#include <stdio.h>

#define MAX(x, y) ((x) > (y) ? (x) : (y))

int main()
{
    int a = 4;
    int b = 7;
    int max = MAX(a, b);

    printf("The maximum of %d and %d is %d", a, b, max);
    return 0;
}
