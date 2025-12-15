/* example 105 – recursion */
#include <stdio.h>

int sum(int n) {
    if(n > 0)
        return n + sum(n - 1); 	// recursive function call
    else
        return 0;		// termination condition
}

int main(void)
{
   int n = 3;
   printf("sum = %d\n", sum(n));

   return 0;
}
