/* example 236 – check the value of UINT_MAX and ULONG_MAX macro */
#include <stdio.h>
#include <limits.h>
#include <stdlib.h>

#define TEST

int main(void)
{
    // systemabhängiger Wert basierend auf UINT_MAX
    unsigned int maxVal;

    #if UINT_MAX == 4294967295U
        maxVal = 4294967295U;   // 32-bit system
    #else
        maxVal = 65535U;        // 16-bit system
    #endif

    printf("unsigned int max. value: %u\n", maxVal);

    #ifdef ULONG_MAX
        unsigned long uLongMax = ULONG_MAX;
        printf("unsigned long max. value: %lu\n", uLongMax);
    #else
        printf("No ULONG_MAX defined\n");
    #endif

    #ifdef TEST
        printf("TEST\n");
    #endif

    #if defined(TEST) && defined(ULONG_MAX)
        printf("TEST and ULONG_MAX defined\n");
    #endif

    return 0;
}
