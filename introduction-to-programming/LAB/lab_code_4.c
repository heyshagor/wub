// Name: Md Shagor
// Student Id: 0326725111
// Studnet Roll: 72B/5111
// Lab Report: 04
// Experiment Name: reverse of a number

#include <stdio.h>

int main() {
    int num, reversed = 0, remainder;

    printf("Enter an integer: ");
    scanf("%d", &num);

    while (num != 0) {
        remainder = num % 10;
        reversed = reversed * 10 + remainder;
        num /= 10;
    }

    printf("Reversed number: %d\n", reversed);

    return 0;

}