/* example 213 – structures with arrays */
#include <stdio.h>

struct data {
    char	 firstName[20];
    char lastName[20];
    int employeeNumber;
} employee;

int main(void)
{
    printf("Enter the first and last name separated by a space: ");
    scanf("%19s %19s", employee.firstName, employee.lastName);

    printf("Enter your employee number: ");
    scanf("%i", &employee.employeeNumber);

    printf("%s %s, - Nr.:%d.\n",employee.firstName, employee.lastName,
    employee.employeeNumber);

    return 0;
}
