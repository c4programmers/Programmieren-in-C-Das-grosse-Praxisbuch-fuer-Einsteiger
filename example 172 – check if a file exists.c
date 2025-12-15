/* example 172 – check if a file exists */
#include <stdio.h>

int main(void)
{
   FILE *fptr;

   char *file = "c:\\CProgramming\\helloWorld\\testfile.txt";

   fptr = fopen(file,"r");

   if (fptr != NULL) {
      printf("\nFile exists!");
      fclose(fptr);
   }

   else
      printf("\nFile does not exist!");

   return 0;
}
