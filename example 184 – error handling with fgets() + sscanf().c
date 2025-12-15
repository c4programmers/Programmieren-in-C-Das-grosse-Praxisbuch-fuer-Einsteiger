/* example 184 – error handling with fgets() + sscanf() */
#include <stdio.h>
#include <stdlib.h>   // needed for exit()

#define BUFFER_SIZE 100

int main(void)
{
    char buffer[BUFFER_SIZE];
    double dividend, divisor, quotient;

    // --- input dividend ---
    printf("Enter dividend: ");
    if (fgets(buffer, sizeof(buffer), stdin) == NULL) {
        // no input received
        fprintf(stderr, "Error - No input for dividend!\n");
        exit(EXIT_FAILURE);
    }
    if (sscanf(buffer, "%lf", &dividend) != 1) {
        // input was not a valid number
        fprintf(stderr, "Error - Invalid input for dividend!\n");
        exit(EXIT_FAILURE);
    }

    // --- input divisor ---
    printf("Enter divisor: ");
    if (fgets(buffer, sizeof(buffer), stdin) == NULL) {
        fprintf(stderr, "Error - No input for divisor!\n");
        exit(EXIT_FAILURE);
    }
    if (sscanf(buffer, "%lf", &divisor) != 1) {
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
