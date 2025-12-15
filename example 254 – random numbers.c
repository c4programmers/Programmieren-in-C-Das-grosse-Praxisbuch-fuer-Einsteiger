/* example 254 – random numbers */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main ()
{
  int randomNumber;
  srand(time(NULL)); // Initialize random number generator with current timestamp
  for(int i=1; i<=10; i++) {
     randomNumber = rand() % 10;	// Generates a random number from 0 to 9
     printf("\nrandom number %d = %d",i,randomNumber);
  }
  return 0;
}
