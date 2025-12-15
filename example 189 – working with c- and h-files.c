/* example 189 – working with c- and h-files */
#include <stdio.h>	// include system header file
#include "numbers.h"	// include external header file

int main()
{
    printf("Number 1: %d\n", get_number1());  // print the return value of get_number1
    printf("Number 2: %d\n", get_number2());  // print the return value of get_number2
    return EXIT_SUCCESS;
}
