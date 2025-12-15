/* example 148 – using scanf() */
#include <stdio.h>

int main(void)
{
    int number1, number2;

    printf("This program calculates the sum of two numbers\n\n");

    // Read in first number
    printf("Enter the first number: ");
    scanf("%i", &number1);

    // Read in second number
    printf("Enter the second number: ");
    scanf("%i", &number2);

    // Output result
    printf("\nThe sum of both numbers is %i\n", number1 + number2);

    return 0;
}
