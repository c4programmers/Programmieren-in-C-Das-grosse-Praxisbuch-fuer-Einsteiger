/* example 074 – checks whether the input character is a letter using <ctype.h> */
#include <stdio.h>
#include <ctype.h>

int main()
{
    char input;
    printf("Enter a character: ");
    scanf("%c", &input);

    // Check if the input value is a letter
    if (isalpha(input)) {
        printf("The input character '%c' is a letter.\n", input);
    } else {
        printf("The input character '%c' is not a letter.\n", input);
    }

    return 0;
}
