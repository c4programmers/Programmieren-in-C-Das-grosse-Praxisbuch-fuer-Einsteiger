/* example 116 – analyze customer traffic */
#include <stdio.h>

#define DAYS 3
const int weeks = 2;
const char* dayName[DAYS] = {"Thursday", "Friday", "Saturday"};

// Function to calculate and display visitor statistics
void calcVisitors(int arr[][DAYS]) {
    int total = 0;

    printf("\nWeekly average visitors:\n");

    for (int week = 0; week < weeks; week++) {
        int weeklySum = 0;
        for (int day = 0; day < DAYS; day++) {
            weeklySum += arr[week][day];
        }
        printf("Week %d: %.2lf visitors/day\n", week + 1, (double)weeklySum / DAYS);
        total += weeklySum;
    }

    double overallAverage = (double)total / (weeks * DAYS);

    printf("\nTotal visitors over %d weeks: %d\n", weeks, total);
    printf("Overall daily average: %.2lf visitors/day\n", overallAverage);
}

int main(void)
{
    int visitors[weeks][DAYS];

    printf("Please enter the number of visitors (Thursday to Saturday):\n\n");

    for (int week = 0; week < weeks; week++) {
        printf("Week %d:\n", week + 1);
        for (int day = 0; day < DAYS; day++) {
            printf("  %s: ", dayName[day]);

            if (scanf("%d", &visitors[week][day]) != 1) {
                printf("Input error! Program terminated.\n");
                return 1;
            }
        }
        printf("\n");
    }

    // Calculate and display statistics
    calcVisitors(visitors);

    return 0;
}
