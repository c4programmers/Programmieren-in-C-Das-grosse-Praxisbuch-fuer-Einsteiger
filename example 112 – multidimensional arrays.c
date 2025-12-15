/* example 112 – multidimensional arrays */
#include <stdio.h>

const int ROW = 3;
const int COLUMN = 3;

int main(void)
{
    int myArray[ROW][COLUMN];
    // Read in values
    for (int i = 0; i < ROW; i++) {
        for (int j = 0; j < COLUMN; j++) {
            printf("Row %d, Column %d: ", i + 1, j + 1);
            scanf("%d", &myArray[i][j]);
        }
    }

    // Output values
    printf("\nDisplaying entered values:\n\n");
    for (int i = 0; i < ROW; i++) {
        for (int j = 0; j < COLUMN; j++) {
            printf("Row %d, Column %d = %d\n", i + 1, j + 1, myArray[i][j]);
        }
    }
    return 0;
}
