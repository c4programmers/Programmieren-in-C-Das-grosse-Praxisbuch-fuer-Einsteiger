/* example 089 – the while-loop 2 */
#include <stdio.h>
#include <math.h>

int main(void)
{
   double number;
   int start, end, increment, i, clearPuffer;

   printf("Enter the start angle in degrees: ");
   scanf("%d",&start);

   printf("Enter the end angle in degrees: ");
   scanf("%d",&end);

   printf("Enter the increment angle in degrees: ");
   scanf("%d",&increment);

   printf("\nAngle\tsin\tcos\ttan\n");
   printf("_______________________________\n");

   i = start;

   while (i <= end) {
      number = (i*(M_PI/180)); 	// Conversion degrees to radians

      printf("%-7d ", i);
      printf("%-10.4f ", sin(number));
      printf("%-10.4f ", cos(number));

      // Tangent is not defined if cos ≈ 0
      if (fabs(cos(number)) < 1e-4)
          printf("undefined\n");
      else
          printf("%-10.4f\n", tan(number));

      i = i + increment;
   }

   while ((clearPuffer = getchar()) != EOF && clearPuffer != '\n');

   return 0;
}
