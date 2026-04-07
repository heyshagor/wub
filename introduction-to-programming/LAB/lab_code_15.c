// Name: Md Shagor
// Student Id: 0326725111
// Studnet Roll: 72B/5111
// Lab Report: 15
// Experiment Name:  Binary Search algorithm



#include <stdio.h>

/**
 * Experiment: Binary Search Implementation
 * Logic: Divide and Conquer on a sorted array
 */

int main() {
    int arr[100], n, key;
    int low, high, mid, i;
    int found = 0;

    // Input section
    printf("Enter number of elements (max 100): ");
    if (scanf("%d", &n) != 1) return 1;

    printf("Enter %d sorted array elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter element to search: ");
    scanf("%d", &key);

    // Binary Search Logic
    low = 0;
    high = n - 1;

    while (low <= high) {
        // Optimization: prevents (low + high) from overflowing 
        // in very large datasets
        mid = low + (high - low) / 2;

        if (arr[mid] == key) {
            printf("Element %d found at position %d\n", key, mid + 1);
            found = 1;
            break;
        } 
        else if (key < arr[mid]) {
            high = mid - 1; // Search in the left half
        } 
        else {
            low = mid + 1;  // Search in the right half
        }
    }

    if (!found) {
        printf("Element %d not found in the array.\n", key);
    }

    return 0;
}