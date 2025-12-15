/* example 092 – decimal to binary conversion using subtraction method */
#include <stdio.h>

int main(void)
{
    int number;
    int bit;

    printf("Enter a decimal number: ");
    scanf("%d", &number);

    printf("%d (decimal) = ", number);

    // Find the highest set bit (from 2^15 for 16 bits)
    for (bit = 1 << 15; bit > 0; bit >>= 1) {
        if (number & bit)
            break; // First set bit found
    }



    // Output bits - from MSB to LSB
    for (; bit > 0; bit >>= 1) {
        if (number & bit)
            putchar('1');
        else
            putchar('0');
    }

    printf(" (binary)\n");

    return 0;
}
