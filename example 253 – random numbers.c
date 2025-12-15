/* example 253 – random numbers */
#include <stdio.h>	// for printf()
#include <stdlib.h>	// for rand() and srand()
#include <time.h>      	// for time()

int main ()
{
  int randomNumber;
  srand(time(NULL)); // Initialize random number generator with current timestamp

  for(int i=1; i<=10; i++) {
     randomNumber = rand();	// Generates a random number between 0 and RAND_MAX
     printf("\nrandom number %d = %d",i,randomNumber);
  }
  return 0;
}
