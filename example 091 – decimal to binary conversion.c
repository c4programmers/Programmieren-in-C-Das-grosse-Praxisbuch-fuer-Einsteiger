/* example 091 – decimal to binary conversion */
#include <stdio.h>

int main(void)
{
    int decNumber, tempNumber, remainder;
    unsigned long reversed = 0;
    int bitCount = 0;

    printf("Enter a decimal number: ");
    scanf("%d", &decNumber);

    tempNumber = decNumber;

    if (decNumber == 0) {
        printf("0 (decimal) = 0 (binary)\n");
        return 0;
    }

    // Collect leftovers from right to left (LSB first), save in reverse order
    do {
        remainder = tempNumber % 2;
        reversed = reversed * 10 + remainder;  // Zahl rückwärts aufbauen
        tempNumber = tempNumber / 2;
        bitCount++;
    } while (tempNumber != 0);

    // Returns the binary number in the correct order
    printf("%d (decimal) = ", decNumber);
    while (bitCount > 0) {
        printf("%lu", reversed % 10);
        reversed /= 10;
        bitCount--;
    }
    printf(" (binary)\n");

    return 0;
}
