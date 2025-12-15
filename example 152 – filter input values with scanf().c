/* example 152 – filter input values with scanf() */
#include <stdio.h>

int main(void)
{
   char str[20];
   printf("Enter only numbers! ");
   scanf("%10[0-9]", str);  // nur Ziffern (0–9), maximal 10 Zeichen
   printf("First 10 numbers: %s", str);
   return 0;
}
