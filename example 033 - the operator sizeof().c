/* example 033 - the operator sizeof() */
#include <stdio.h>
#include <limits.h> // defines constants for the value range of integer data types
#include <float.h> // defines constants for the value range of floating-point data types

char c, c1 = CHAR_MAX;
int i, i1 = INT_MAX;
long int li, li1 = LONG_MAX;
float f, f1 = FLT_MAX;
double d, d1 = DBL_MAX;

int main(void)
{
   printf("char = \t\t%d Byte, max. value = %d\n", (int)sizeof(c), c1);
   printf("int = \t\t%d Byte, max. value = %d\n", (int)sizeof(i), i1);
   printf("long int = \t%d Byte, max. value = %ld\n", (int)sizeof(li), li1);
   printf("float = \t%d Byte, max. value = %e\n", (int)sizeof(f), f1);
   printf("double = \t%d Byte, max. value = %e\n", (int)sizeof(d), d1);

   return 0;
}
