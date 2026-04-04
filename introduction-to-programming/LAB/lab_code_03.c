// Name: Md Shagor
// Student Id: 0326725111
// Studnet Roll: 72B/5111
// Lab Report: 03
// Experiment Name: Least Common Multiple(LCM)/ Least Common Factor(LCF) - calculation

#include <stdio.h>

void lcm()
{
    int num1, num2, lcm;

    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Enter second number: ");
    scanf("%d", &num2);

    lcm = (num1 > num2) ? num1 : num2;

    while(1) {
        if(lcm % num1 == 0 && lcm % num2 == 0) {
            break;
        }
        lcm++;
    }

    printf("LCM of %d and %d is: %d\n", num1, num2, lcm);
}

int main() {
    lcm();
    return 0;
}