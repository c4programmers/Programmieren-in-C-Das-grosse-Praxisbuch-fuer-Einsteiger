/* example 262 – tower of hanoi */
#include <stdio.h>

// Recursive function to solve Tower of Hanoi puzzle
void towerOfHanoi(int n, char from_rod, char to_rod, char aux_rod)
{
    // Base case: only one disk to move
    if (n == 1) {
        printf("Move disk 1 from rod %c to rod %c\n", from_rod, to_rod);
        return;
    }

    // Move n-1 disks from source to auxiliary rod
    towerOfHanoi(n - 1, from_rod, aux_rod, to_rod);

    // Move the remaining largest disk from source to target rod
    printf("Move disk %d from rod %c to rod %c\n", n, from_rod, to_rod);

    // Move the n-1 disks from auxiliary rod to target rod
    towerOfHanoi(n - 1, aux_rod, to_rod, from_rod);
}

int main(void)
{
    int n;

    printf("Enter the number of disks: ");
    scanf("%d", &n);

    towerOfHanoi(n, 'A', 'C', 'B');  // A = source, C = target, B = auxiliary

    return 0;
}
