/* example 104 – quadratic equation */
#include<stdio.h>
#include<math.h>

double a, b, c; 				// global variables

void input(void) {
    printf("Quadratic Equations Calculator (ax^2 + bx + c = 0)\n");
    printf("\nEnter a value for a: ");
    scanf("%lf", &a);

    printf("Enter a value for b: ");
    scanf("%lf", &b);

    printf("Enter a value for c: ");
    scanf("%lf", &c);
    fflush(stdin);
}

// Function to calculate x1 using the quadratic formula
double calculate_x1(double *a, double *b, double *c) {
    double x1 = (-*b + sqrt(*b * *b - 4 * *a * *c))/(2 * *a);
    return x1;
}

// Function to calculate x2 using the quadratic formula
double calculate_x2(double *a, double *b, double *c) {
    double x2 = (-*b - sqrt(*b * *b - 4 * *a * *c))/(2 * *a);
    return x2;
}

int main(void)
{
    input();
    printf("\nSolution x1: %.2lf",calculate_x1(&a,&b,&c));
    printf("\nSolution x2: %.2lf",calculate_x2(&a,&b,&c));
    return 0;
}
