/* example 183 – error handling */
#include <stdio.h>
#include <stdlib.h>   // needed for exit()

int main(void)
{
    double dividend, divisor, quotient;

    // --- input dividend ---
    printf("Enter dividend: ");
    if (scanf("%lf", &dividend) != 1) {
        // input was not a valid number
        fprintf(stderr, "Error - Invalid input for dividend!\n");
        exit(EXIT_FAILURE);   // terminate program with error code
    }





    // --- input divisor ---
    printf("Enter divisor: ");
    if (scanf("%lf", &divisor) != 1) {
        // input was not a valid number
        fprintf(stderr, "Error - Invalid input for divisor!\n");
        exit(EXIT_FAILURE);
    }

    // --- check division by zero ---
    if (divisor == 0.0) {
        fprintf(stderr, "Error - Division by zero!\n");
        exit(EXIT_FAILURE);
    }

    // --- calculation and output ---
    quotient = dividend / divisor;
    printf("Value of quotient: %lf\n", quotient);

    // successful program termination
    exit(EXIT_SUCCESS);
}
