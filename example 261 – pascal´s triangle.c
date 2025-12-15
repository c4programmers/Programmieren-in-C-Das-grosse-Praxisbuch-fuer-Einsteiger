/* example 261 – pascal´s triangle */
#include <stdio.h>

int main(void)
{
    int rows, coef = 1, space, i, j;

    printf("Enter the number of rows: ");
    if (scanf("%d", &rows) != 1 || rows <= 0) {
        printf("Invalid input. Please enter a positive integer.\n");
        return 1;
    }

    for (i = 0; i < rows; i++) {

        // Print leading spaces to center the triangle
        for (space = 1; space <= rows - i; space++)
            printf("  ");

        // Calculate and print binomial coefficients
        for (j = 0; j <= i; j++) {
            if (j == 0 || j == i)
                coef = 1;
            else
                coef = coef * (i - j + 1) / j;

            printf("%4d", coef);
        }

        printf("\n");
    }

    return 0;
}
