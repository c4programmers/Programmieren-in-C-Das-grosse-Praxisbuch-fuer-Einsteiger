/* example 260 – pyramid of numbers */
#include <stdio.h>

int main(void)
{
    int rows;

    printf("Enter the number of rows: ");
    if (scanf("%d", &rows) != 1 || rows <= 0) {
        printf("Invalid input. Please enter a positive integer.\n");
        return 1;
    }

    for (int i = 1; i <= rows; ++i) {

        // Print leading spaces for centering the pyramid
        for (int s = 0; s < rows - i; ++s) {
            printf("  ");
        }

        int width = 2 * i - 1;      // number of digits in the current row
        int peak_index = i - 1;     // index of the middle number (0-based)

        // Print increasing and then decreasing sequence
        for (int k = 0; k < width; ++k) {
            int val = (k <= peak_index) ? (i + k) : (i + (2 * peak_index - k));
            printf("%d ", val);
        }

        printf("\n");
    }

    return 0;
}
