/* example 248 – time functions */
#include <stdio.h>
#include <time.h>

int main()
{
    clock_t start, end;
    double cpu_time_used;

    start = clock();		    // Record start time

      for(int i=0; i<=1000000; i++); // Measuring range: One loop from 0 to 1 million

    end = clock();		    // Record end time

    cpu_time_used = ((double) (end - start)) / CLOCKS_PER_SEC;

    printf("CPU time used: %f seconds\n", cpu_time_used);

    return 0;
}
