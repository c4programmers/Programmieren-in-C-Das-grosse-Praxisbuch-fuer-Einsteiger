/* example 080 – nested for-loops */
#include <stdio.h>

int main(void)
{
   int i,j;

   for (i=1; i<=10; i++) {
      printf("\n");	// new line

   	for (j=1; j<=10; j++) {
           printf("%5i",i*j);
   	}
   }

   return 0;
}
