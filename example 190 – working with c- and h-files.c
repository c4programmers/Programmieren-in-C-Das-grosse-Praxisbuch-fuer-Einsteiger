/* example 190 – working with c- and h-files */
#include <stdio.h>	// include system header file
#include "numbers.h"	// include external header file

int myValue = 10;	// global variable myValue

int main()
{
    printf("myValue = %d\n", get_number());
    return EXIT_SUCCESS;
}
