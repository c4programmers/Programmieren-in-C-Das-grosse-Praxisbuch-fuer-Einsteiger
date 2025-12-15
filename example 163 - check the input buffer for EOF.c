/* example 163 - check the input buffer for EOF */
#include <stdio.h>

int main(void)
{
   int ch;

   // Read and print characters until EOF is encountered
   while((ch = getchar())!= EOF) {
      printf("%c", ch);
   }
   return 0;
}
