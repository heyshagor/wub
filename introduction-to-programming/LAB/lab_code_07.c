// Name: Md Shagor
// Student Id: 0326725111
// Studnet Roll: 72B/5111
// Lab Report: 07
// Experiment Name: Calculate the sum of digits of a given number

#include <stdio.h>

int sumOfDigits(int n) {
    int sum = 0, remainder;
    while (n != 0) {
        remainder = n % 10;
        sum += remainder;
        n /= 10;
    }
    return sum;
}

int main() {
    int num;
    printf("Enter a positive integer: ");
    scanf("%d", &num);
    printf("Sum of digits of %d is %d\n", num, sumOfDigits(num));
    return 0;
}