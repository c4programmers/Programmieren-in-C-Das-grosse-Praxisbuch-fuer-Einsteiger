/* example 241 – dynamic memory allocation */
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int size, new_size, i;
    int* ptr;

    // Ask the user for the initial size of the array
    printf("Enter the initial size of the array: ");
    if (scanf("%d", &size) != 1 || size <= 0) {
        printf("Invalid input. Size must be a positive integer.\n");
        return 1;
    }

    // Allocate memory for the array
    ptr = (int*) malloc(size * sizeof(int));
    if (ptr == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }




    // Read values into the array
    printf("Enter %d integers:\n", size);
    for (i = 0; i < size; i++) {
        if (scanf("%d", &ptr[i]) != 1) {
            printf("Invalid input. Exiting.\n");
            free(ptr);
            return 1;
        }
    }

    // Print the entered array
    printf("The array you entered is:\n");
    for (i = 0; i < size; i++) {
        printf("%d ", ptr[i]);
    }

    // Ask the user for the new size of the array
    printf("\nEnter the new size of the array: ");
    if (scanf("%d", &new_size) != 1 || new_size <= 0) {
        printf("Invalid input. Size must be a positive integer.\n");
        free(ptr);
        return 1;
    }

    // Attempt to resize the allocated memory
    int* temp = realloc(ptr, new_size * sizeof(int));
    if (temp == NULL) {
        printf("Memory reallocation failed.\n");
        free(ptr); // Free the original memory before exiting
        return 1;
    }
    ptr = temp; // Assign reallocated memory back to ptr

    // If the array was enlarged, read the additional elements
    if (new_size > size) {
        printf("Enter %d more integers:\n", new_size - size);
        for (i = size; i < new_size; i++) {
            if (scanf("%d", &ptr[i]) != 1) {
                printf("Invalid input. Exiting.\n");
                free(ptr);
                return 1;
            }
        }
    }

    // Print the final array
    printf("The new array is:\n");
    for (i = 0; i < new_size; i++) {
        printf("%d ", ptr[i]);
    }

    // Free the allocated memory
    free(ptr);

    return 0;
}
