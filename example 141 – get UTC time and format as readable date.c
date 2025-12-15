/* example 141 – get UTC time and format as readable date */
#include <stdio.h>
#include <time.h>

void getSecondsUTC(unsigned long *ptr_time) {
    // Get the current number of seconds since 1970-01-01 00:00:00 UTC
    *ptr_time = time(NULL);
}

int main(void)
{
    unsigned long seconds;
    struct tm *utc_time;
    char buffer[100];
    getSecondsUTC(&seconds);  // Get current Unix timestamp

    // Print raw time values
    printf("Number of seconds since 1970-01-01: %lu\n", seconds);
    printf("Number of minutes since 1970-01-01: %lu\n", seconds / 60);
    printf("Number of hours   since 1970-01-01: %lu\n", seconds / 3600);
    printf("Number of days    since 1970-01-01: %lu\n", seconds / (3600 * 24));

    // Convert to UTC time structure
    utc_time = gmtime((time_t *)&seconds);

    // Format as readable string
    strftime(buffer, sizeof(buffer), "%Y-%m-%d %H:%M:%S UTC", utc_time);
    printf("Current UTC time: %s\n", buffer);
    return 0;
}
