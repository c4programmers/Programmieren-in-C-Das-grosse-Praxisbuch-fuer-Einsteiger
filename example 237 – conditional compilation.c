/* example 237 – conditional compilation */
#include <stdio.h>

#define DEBUG 1  // 1: normale Ausgabe
//#define DEBUG 2  // 2: Ausgabe mit Adressen

void flipArray(int arr[], size_t n) {
    int temp;
    size_t i;
    for (i = 0; i < n / 2; i++) {
        temp = arr[i];
        arr[i] = arr[n - 1 - i];
        arr[n - 1 - i] = temp;
    }
}

int main(void)
{
    int arr[] = {1, 2, 3, 4, 5};
    size_t n = sizeof(arr) / sizeof(arr[0]);
    size_t i;

    printf("Original array: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    flipArray(arr, n);

#if DEBUG == 1
    printf("Flipped array: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");


#elif DEBUG == 2
    printf("Flipped array with addresses:\n");
    for (i = 0; i < n; i++) {
        printf("%d\t%p\n", arr[i], (void*)&arr[i]);
    }
#endif

    return 0;
}
