/* example 094 – calculate the factorial of a number using unsigned long long */
#include <stdio.h>

int main(void)
{
    int number;
    unsigned long long faculty;

    do {
        printf("Enter a number to calculate its factorial (0 to exit): ");
        scanf("%i", &number);

        if (number < 0) {
            printf("Error: Factorial is not defined for negative numbers.\n");
            continue;
        }

        if (number > 20) {
            printf("Warning: Factorial may exceed the range (max 20!).\n");
        }

        if (number != 0) {
            faculty = 1;
            for (int i = 1; i <= number; i++) {
                faculty *= i;
            }
            printf("%i! = %llu\n", number, faculty);
        }

    } while (number != 0);

    return 0;
}
