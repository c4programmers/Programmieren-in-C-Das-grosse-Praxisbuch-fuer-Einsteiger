/* example 156 - scanf() – wrong datatype */
#include <stdio.h>

int main(void)
{
   char ch;
   int number;

   printf("Enter a character: ");
   scanf("%d", &ch);  			// Error: expected int, but ch is char

   printf("You entered: %c\n", ch);
   return 0;
}
