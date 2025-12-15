/* example 229 – using #define and #undef */
#include <stdio.h>

int NUMBER = 1;
#define NUMBER 7

int main(void)
{
    printf("NUMBER = %d\n", NUMBER);
    #undef NUMBER
    printf("NUMBER = %d\n", NUMBER);
    return 0;
}
