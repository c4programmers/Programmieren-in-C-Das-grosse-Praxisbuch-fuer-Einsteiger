/* example 140 – chessboard */
#include <stdio.h>
#include <stdlib.h>

// function prototypes
void fieldOutput(int *field);
void move(int *field, int *posX, int *posY, char moving);

int main(void)
{
    int field[8][8] = { 0 }, posX = 0, posY = 0;
    char moving;
    field[posY][posX] = 1;  // set initial position of the game piece

    do {
        fieldOutput(&field[0][0]);
        printf("\nMove [w = up, a = left, s = down, d = right] (exit with x): ");
        scanf(" %c", &moving);  // Note the space before %c to skip whitespace

        move(&field[0][0], &posX, &posY, moving);

        // Clear input buffer is system-dependent. fflush(stdin) is not portable.
        // It's better to consume remaining characters using a loop if needed.
        system("cls");  // on Windows, "cls"; use "clear" on Unix-based systems

    } while (moving != 'x');
    return 0;
}

void fieldOutput(int *field) {
    printf("\n");

    for (int i = 0; i < 8; i++) {        // loop over rows (y-axis)
        for (int j = 0; j < 8; j++) {    // loop over columns (x-axis)
            printf("%d ", *(field + i * 8 + j));
        }
        printf("\n");
    }
}

void move(int *field, int *posX, int *posY, char moving) {
    *(field + *posY * 8 + *posX) = 0;  // clear previous position

    // update coordinates based on input
    switch (moving) {
        case 'w': (*posY)--; break;
        case 'a': (*posX)--; break;
        case 's': (*posY)++; break;
        case 'd': (*posX)++; break;
    }

    // wrap around if borders are crossed
    if (*posX < 0)       *posX = 7;
    else if (*posX > 7)  *posX = 0;

    if (*posY < 0)       *posY = 7;
    else if (*posY > 7)  *posY = 0;

    *(field + *posY * 8 + *posX) = 1;  // set new position
}
