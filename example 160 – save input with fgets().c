/* example 160 – save input with fgets() */
#include <stdio.h>

int main(void)
{
   char input[50];

   printf("Enter a string: ");
   fgets(input, sizeof(input), stdin);  // reads up to 49 characters + '\0'

   printf("You entered: %s", input);
   return 0;
}
