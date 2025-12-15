/* example 097 – function without prototype */
#include <stdio.h>

void func1(void) {	//Function is in front of main()
    printf("Hello!\n");
}

int main(void)
{
   func1(); // Function call
}
