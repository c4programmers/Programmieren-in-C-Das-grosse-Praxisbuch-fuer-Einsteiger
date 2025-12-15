/* example 162 - check the input buffer */
#include <stdio.h>

int main(void)
{
   int ch;

   while (ch != 'x') {     // Execute the loop until the character 'x' is entered
      printf("Enter a character: ");
      ch = getchar();      // Read one character from the input buffer

      printf("\nYou entered: %c\n", ch);
   }
   return 0;
}
