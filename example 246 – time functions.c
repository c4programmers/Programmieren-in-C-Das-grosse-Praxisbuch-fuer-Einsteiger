/* example 246 – time functions */
#include <stdio.h>
#include <time.h>

int main()
{
    time_t current_time = time(NULL); // current time
    struct tm *local = localtime(&current_time); // Convert to local time
    printf("Tag: %d\n", local->tm_mday);
    printf("Monat: %d\n", local->tm_mon + 1); 	// Months: 0-11, therefore +1
    printf("Jahr: %d\n", local->tm_year + 1900); // Years since 1900
    printf("Stunde: %d\n", local->tm_hour);
    printf("Minute: %d\n", local->tm_min);
    printf("Sekunde: %d\n", local->tm_sec);

    return 0;
}
