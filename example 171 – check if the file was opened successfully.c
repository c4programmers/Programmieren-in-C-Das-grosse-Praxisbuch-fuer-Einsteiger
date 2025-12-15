/* example 171 – check if the file was opened successfully */
#include <stdio.h>

int main(void)
{
   FILE *fptr;		// file pointer of type FILE
   fptr = fopen("c:\\CProgramming\\helloWorld\\testfile.txt","r");

   if (fptr != NULL) {
      printf("File opened successfully!\n");
      fclose(fptr);
   }
   else
      printf("Error - File cannot be opened!\n");

   return 0;
}
