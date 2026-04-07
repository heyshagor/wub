// Name: Md Shagor
// Student Id: 0326725111
// Studnet Roll: 72B/5111
// Lab Report: 21
// Experiment Name: Swapping two variable values using pointers


#include <stdio.h>

/**
 * Experiment: Swapping two numbers using Call by Reference
 * Logic: Use pointers to access and modify the actual memory addresses of variables.
 */

// Function to swap values using pointers
void swap(int *x, int *y) {
    int temp;
    temp = *x;   // temp holds the value at address x
    *x = *y;     // value at address x is replaced by value at address y
    *y = temp;   // value at address y is replaced by temp
}

int main() {
    int a, b;

    // 1. User Input
    printf("Enter the value for A: ");
    if (scanf("%d", &a) != 1) return 1;

    printf("Enter the value for B: ");
    if (scanf("%d", &b) != 1) return 1;

    // 2. Display Before Swap
    printf("\n--- Before Swapping ---\n");
    printf("A = %d, B = %d\n", a, b);

    // 3. Perform Swap
    // We pass the ADDRESSES (&) so the function can reach into main's memory
    swap(&a, &b);

    // 4. Display After Swap
    printf("\n--- After Swapping ---\n");
    printf("A = %d, B = %d\n", a, b);

    return 0;
}