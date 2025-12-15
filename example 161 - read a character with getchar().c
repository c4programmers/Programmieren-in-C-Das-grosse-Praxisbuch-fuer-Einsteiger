/* example 161 - read a character with getchar() */
#include <stdio.h>

int main(void)
{
   printf("Enter a character:");
   int ch = getchar(); 		// read a single character from standard input

   printf("You entered: %c (ASCII code = %i)", ch, ch);
   return 0;
}
