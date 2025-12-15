/* example 096 – fibonacci numbers */
#include <stdio.h>

void fibonacciNumber(int n) {
    unsigned long long fib1 = 0, fib2 = 1;

    if (n < 1)
        return;

    printf("%llu ", fib1);

    for (int i = 1; i < n; i++) {
        printf("%llu ", fib2);

        unsigned long long nextNum = fib1 + fib2;
        fib1 = fib2;
        fib2 = nextNum;
    }
}

int main(void)
{
    int numbers, clearBuffer;
    char answer;

    do {
        printf("Fibonacci sequence calculator - Enter a number: ");
        scanf("%i", &numbers);

// clear input buffer
        while ((clearBuffer = getchar()) != EOF && clearBuffer != '\n');

        if (numbers < 0) {
            printf("Please enter a non-negative number.\n");
        } else {
            fibonacciNumber(numbers);
        }

        printf("\n\nNew calculation? [y / n]: ");
        scanf(" %c", &answer);  // beachte Leerzeichen vor %c, um \n zu überspringen

    } while (answer == 'y' || answer == 'Y');

    return 0;
}
