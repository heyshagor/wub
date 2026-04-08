// Name: Md Shagor
// Student Id: 0326725111
// Studnet Roll: 72B/5111
// Lab Report: 14
// Experiment Name: Linear Search algorithm

#include <stdio.h>

int main() {
    // Increased safety: Check the array bounds
    int arr[100], n, key, i, found = 0;

    printf("Enter number of elements (Max 100): ");
    scanf("%d", &n);

    // Fix 1: Basic validation to prevent memory issues
    if (n > 100 || n <= 0) {
        printf("Invalid size! Please enter a number between 1 and 100.\n");
        return 1;
    }

    printf("Enter %d array elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter element to search: ");
    scanf("%d", &key);

    // Linear Search Logic
    for (i = 0; i < n; i++) {
        if (arr[i] == key) {
            // Fix 2: Added \n for better readability
            printf("Element found at position %d\n", i + 1);
            found = 1;
            break; // Stop searching once found
        }
    }

    if (found == 0) {
        printf("Element not found in the array.\n");
    }

    return 0;
}
