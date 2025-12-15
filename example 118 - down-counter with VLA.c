/* example 118 - down-counter with VLA */
#include <stdio.h>
#include <stdio.h>
#include <windows.h>

void count(int elements) {
    if (elements <= 0) {
        printf("Invalid countdown start value.\n");
        return;
    }

    int counter[elements]; // This is a VLA (variable-length array)

    // Fill array with values from 0 to (elements - 1)
    for (int i = 0; i < elements; i++) {
        counter[i] = i;
    }

    // Countdown from elements - 1 to 0
    for (int i = elements - 1; i >= 0; i--) {
        printf("\rCount... %d   ", counter[i]); // \r = carriage return
        Sleep(1000);  // delay 1000 ms = 1 second
        fflush(stdout); // ensure immediate output
    }

    printf("\nCountdown complete!\n");
}

int main(void)
{
    int countValue;

    printf("Enter the start value for the countdown: ");
    if (scanf("%i", &countValue) != 1) {
        printf("Input error!\n");
        return 1;
    }

    count(countValue);
    return 0;
}
