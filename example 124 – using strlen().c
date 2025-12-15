/* example 124 – using strlen() */
#include <stdio.h>
#include <string.h>

int main()
{
    char myArray[] = "C is great!";
    printf("Length of %s = %zu \n",myArray, strlen(myArray));
    return 0;
}
