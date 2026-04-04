// Name: Md Shagor
// Student Id: 0326725111
// Studnet Roll: 72B/5111
// Lab Report: 01
// Experiment Name: Greatest Common Divisor(GCD)/ Greatest Common Factor(GCF)/ Highest Common Factor(HCF) - calculation

#include <stdio.h>

int main() {
    int num1, num2, i, gcd;

    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Enter second number: ");
    scanf("%d", &num2);

    int smaller = (num1 < num2) ? num1 : num2;

    for(i = 1; i <= smaller; i++) {
        if(num1 % i == 0 && num2 % i == 0) {
            gcd = i;
        }
    }

    printf("GCD of %d and %d is: %d\n", num1, num2, gcd);

    return 0;
}
