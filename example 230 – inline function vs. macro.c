/* example 230 – inline function vs. macro */
#include <stdio.h>

#define SQUARE(x) ((x) * (x))     // macro without type checking

static inline int square_inline(int x) {
    return x * x;                 // inline function with type checking
}
int main(void)
{
    printf("Makro: %d\n", SQUARE(3 + 1));       // expands to ((3 + 1) * (3 + 1)) → 16
    printf("Inline: %d\n", square_inline(3 + 1)); // computes (3 + 1) * (3 + 1) → 16
    return 0;
}
