// Name: Md Shagor
// Student Id: 0326725111
// Studnet Roll: 72B/5111
// Lab Report: 16
// Experiment Name:  Transpose a Matrix


#include <stdio.h>



int main() {
    int matrix[10][10], transpose[10][10];
    int rows, cols, i, j;

    // 1. Input Dimensions
    printf("Enter rows and columns (max 10x10): ");
    if (scanf("%d %d", &rows, &cols) != 2) {
        printf("Invalid input.\n");
        return 1;
    }

    // 2. Input Matrix Elements
    printf("Enter matrix elements (%d x %d):\n", rows, cols);
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }

    // 3. Transpose Logic
    // Original: matrix[i][j] -> Transpose: transpose[j][i]
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            transpose[j][i] = matrix[i][j];
        }
    }

    // 4. Display Original Matrix (Good for comparison in Lab Reports)
    printf("\nOriginal Matrix:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }

    // 5. Display Transposed Matrix
    // Note: The new dimensions are 'cols' rows and 'rows' columns
    printf("\nTransposed Matrix:\n");
    for (i = 0; i < cols; i++) {
        for (j = 0; j < rows; j++) {
            printf("%d\t", transpose[i][j]);
        }
        printf("\n");
    }

    return 0;
}