/* example 128 – pointers */
#include <stdio.h>

int main()
{
  int var = 1234567;

  printf("The dec. value of var = %d\n", var);
  printf("The hex value of var = %x\n", var);

  /* using format element %p for pointer and & as address operator */
  printf("The address of var = %p", (void)&var);

  return 0;
}
