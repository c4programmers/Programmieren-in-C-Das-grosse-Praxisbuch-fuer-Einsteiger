/* example 073 – checks whether the input character is a letter (ASCII only) */
#include <stdio.h>

int main()
{
    char input;
    printf("Enter a letter: ");
    scanf("%c", &input);

    // Check if the input value is a letter
    if ((input >= 'a' && input <= 'z') || (input >= 'A' && input <= 'Z')) {
        printf("The input character '%c' is a letter.\n", input);
    } else {
        printf("The input character '%c' is not a letter.\n", input);
    }

    return 0;
}
