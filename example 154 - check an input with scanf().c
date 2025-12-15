/* example 154 - check an input with scanf() */

#include <stdio.h>

int main(void)
{
   int number;
   char letter;
   int check;

   printf("This program requires a letter followed by a number.\n");

   while (1) {
      printf("\nEnter a letter and a number: ");
      check = scanf(" %c %d", &letter, &number);

      if (check == 2) {
         // Erfolgreiche Eingabe
         break;
      } else {
         printf("Invalid input. Please try again.\n");

         // Eingabepuffer leeren
         int ch;
         while ((ch = getchar()) != '\n' && ch != EOF);
      }
   }

   printf("\nYou entered: %c and %d\n", letter, number);

   return 0;
}
