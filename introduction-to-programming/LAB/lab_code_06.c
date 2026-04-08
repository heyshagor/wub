// Name: Md Shagor
// Student Id: 0326725111
// Studnet Roll: 72B/5111
// Lab Report: 06
// Experiment Name: Factorial Calculation

#include <stdio.h>

int factorial(int n) {
    int ans = 1, i;
    for (i = 2; i <= n; i++)
    {
        ans *= i;
    }
    return ans;
}

int main() {
    int num;
    printf("Enter a positive integer: ");
    scanf("%d", &num);

    if (num < 0) {
        printf("Error! Factorial of a negative number doesn't exist.\n");
    } else {
        printf("Factorial of %d = %d\n", num, factorial(num));
    }

    return 0;
}
}
