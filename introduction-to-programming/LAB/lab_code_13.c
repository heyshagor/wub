// Name: Md Shagor
// Student Id: 0326725111
// Studnet Roll: 72B/5111
// Lab Report: 12
// Experiment Name: Armstrong number calculation

#include <stdio.h>

// Function to calculate integer power (more reliable than pow() for this task)
long long power(int base, int exp) {
    long long res = 1;
    for (int i = 0; i < exp; i++) {
        res *= base;
    }
    return res;
}

// Function to count digits
int count(int n) {
    int counter = 0;
    if (n == 0) return 1;
    while (n != 0) {
        n = n / 10;
        ++counter;
    }
    return counter;
}

// Function to check if a number is Armstrong
int armstrong(int n) {
    int digit, temp, remainder;
    long long sum = 0;
    temp = n;
    digit = count(n);

    while (n > 0) {
        remainder = n % 10;
        sum = sum + power(remainder, digit);
        n = n / 10;
    }
    
    return (temp == sum) ? 1 : 0;
}

// Function to find Armstrong numbers in a range
void range_armstrong() {
    int a, b;
    printf("Enter the minimum and maximum values: ");
    if (scanf("%d %d", &a, &b) != 2) return;

    printf("Armstrong numbers between %d and %d are:\n", a, b);
    for (int i = a; i <= b; i++) {
        if (armstrong(i)) {
            printf("%d \t", i);
        }
    }
    printf("\n");
}

int main() {
    int n, option;
    printf("1. Single value check\n2. Find within range\nOption: ");
    if (scanf("%d", &option) != 1) return 1;

    switch (option) {
        case 1:
            printf("Enter number: ");
            scanf("%d", &n);
            if (armstrong(n))
                printf("%d is an Armstrong number\n", n);
            else
                printf("%d is not an Armstrong number\n", n);
            break;
        case 2:
            range_armstrong();
            break;
        default:
            printf("Invalid option.\n");
    }
    return 0;
}