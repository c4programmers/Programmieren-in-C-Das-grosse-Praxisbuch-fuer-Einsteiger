/* example 250 – time functions */
#include <stdio.h>
#include <time.h>

int main()
{
    time_t start_time, end_time;
    double elapsed_time;

    start_time = time(NULL); 	// Time before the process
    				// Code whose duration is to be measured
    end_time = time(NULL); 	// Time after the operation

    elapsed_time = difftime(end_time, start_time);

    printf("Elapsed time: %f seconds\n", elapsed_time);

    return 0;
}
