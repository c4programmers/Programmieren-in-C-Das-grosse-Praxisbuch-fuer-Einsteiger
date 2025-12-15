/* example 259 – ASCII code converter */
#include <stdio.h>

int main(void)
{
    char input[10];      // input buffer
    int asciiCode;
    char character;

    printf("Enter an ASCII code (0–127) or a character: ");
    scanf("%9s", input); // read input as string (max 9 chars to avoid overflow)

    // Check if the input is numeric (i.e., an ASCII code)
    if (sscanf(input, "%d", &asciiCode) == 1) {
        if (asciiCode >= 0 && asciiCode <= 127) {
            character = (char)asciiCode;
            printf("The character represented by ASCII code %d is '%c'.\n",
                   asciiCode, character);
        } else {
            printf("Invalid ASCII code. Please enter a value between 0 and 127.\n");
        }
    }
    else {
        // Treat the input as a single character
        character = input[0];
        asciiCode = (int)character;
        printf("The ASCII code for character '%c' is %d.\n", character, asciiCode);
    }

    return 0;
}
