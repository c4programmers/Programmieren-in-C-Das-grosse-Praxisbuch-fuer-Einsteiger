/* example 257 – bubble-sort */
#include <stdio.h>
#include <stdlib.h>

// Prints the contents of an int array
static void printArray(const int *arr, int n)
{
    for (int i = 0; i < n; ++i) {
        printf("%d%s", arr[i], (i < n - 1) ? " " : "");
    }
    printf("\n");
}

// Classic bubble sort (ascending)
void bubbleSort(int arr[], int n)
{
    int i, j;
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                // swap
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}




int main(void)
{
    // Example data (you can change this)
    int arr[] = {64, 34, 25, 12, 22, 11, 90};
    int n = (int)(sizeof(arr) / sizeof(arr[0]));

    printf("Before: ");
    printArray(arr, n);

    bubbleSort(arr, n);

    printf("After:  ");
    printArray(arr, n);

    return 0;
}
