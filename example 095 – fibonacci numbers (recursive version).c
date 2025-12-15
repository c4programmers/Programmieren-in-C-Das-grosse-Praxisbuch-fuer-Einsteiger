/* example 095 – fibonacci numbers (recursive version) */
#include <stdio.h>

// Recursive Fibonacci function
int fibonacciNumber(int n) {
    switch (n) {
        case 0: return 0;
        case 1: return 1;
        default: return fibonacciNumber(n - 2) + fibonacciNumber(n - 1);
    }
}

int main(void)
{
    int n;
    char answer;
    do {
        printf("Fibonacci sequence calculator - Enter a number: ");
        scanf("%d", &n);

        if (n < 0) {
            printf("Please enter a non-negative number.\n");
            continue;
        }

        printf("Fibonacci sequence:\n");
        for (int i = 0; i < n; i++) {
            printf("%d ", fibonacciNumber(i));
        }

        printf("\n\nNew calculation? [y / n]: ");

        // Leerzeichen vor %c fängt das Newline-Zeichen ab
        scanf(" %c", &answer);

    } while (answer == 'y' || answer == 'Y');

    return 0;
}
