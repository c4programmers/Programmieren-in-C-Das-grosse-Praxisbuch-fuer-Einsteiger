/* example 083 – sawtooth */
#include <stdio.h>

int main(void)
{
   int stars = 5;

   for (int i = 1; i <= stars; i++) {
      for (int k = 1; k <= i; k++) {
         printf("*");
      }
      printf("\n");
   }
   return 0;
}
