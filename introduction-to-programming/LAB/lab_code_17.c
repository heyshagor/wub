// Name: Md Shagor
// Student Id: 0326725111
// Studnet Roll: 72B/5111
// Lab Report: 17
// Experiment Name:  Matrix Multiplication


#include <stdio.h>

int main() {
    int A[10][10], B[10][10], C[10][10];
    int r1, c1, r2, c2, i, j, k;

    // 1. Input dimensions for Matrix A
    printf("Enter rows and columns for Matrix A: ");
    scanf("%d %d", &r1, &c1);

    // 2. Input dimensions for Matrix B
    printf("Enter rows and columns for Matrix B: ");
    scanf("%d %d", &r2, &c2);

    // 3. Mathematical Validation
    if (c1 != r2) {
        printf("\nError: Multiplication not possible!\n");
        printf("Columns of A (%d) must match Rows of B (%d).\n", c1, r2);
        return 1;
    }

    // 4. Input Elements for Matrix A
    printf("\nEnter elements of Matrix A (%dx%d):\n", r1, c1);
    for (i = 0; i < r1; i++) {
        for (j = 0; j < c1; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    // 5. Input Elements for Matrix B
    printf("\nEnter elements of Matrix B (%dx%d):\n", r2, c2);
    for (i = 0; i < r2; i++) {
        for (j = 0; j < c2; j++) {
            scanf("%d", &B[i][j]);
        }
    }

    // 6. Multiplication Logic (The Triple Loop)
    for (i = 0; i < r1; i++) {
        for (j = 0; j < c2; j++) {
            C[i][j] = 0; // Initialize cell
            for (k = 0; k < c1; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    // 7. Display the Result
    printf("\nResultant Matrix C (%dx%d):\n", r1, c2);
    for (i = 0; i < r1; i++) {
        for (j = 0; j < c2; j++) {
            printf("%d\t", C[i][j]); // \t keeps columns aligned
        }
        printf("\n");
    }

    return 0;
}