/* example 159 - clear keyboard buffer with getchar() */
#include <stdio.h>

int main(void)
{
   char ch1, ch2, ch3;

   printf("Enter the first character: ");
   do {
      scanf("%c", &ch1);
   } while (getchar() != '\n');  // Clear the input buffer up to the newline

   printf("Enter the second character: ");
   do {
      scanf("%c", &ch2);
   } while (getchar() != '\n');

   printf("Enter the third character: ");
   do {
      scanf("%c", &ch3);
   } while (getchar() != '\n');

   printf("\nYou entered: %c %c %c\n", ch1, ch2, ch3);
   return 0;
}
