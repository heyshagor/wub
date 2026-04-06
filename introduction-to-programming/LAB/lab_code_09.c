// Name: Md Shagor
// Student Id: 0326725111
// Studnet Roll: 72B/5111
// Lab Report: 07
// Experiment Name: Swap three number without using third variable

#include<stdio.h>

int main()
{
    int a,b,c;
    printf("Enter number for a = ");
    scanf("%d", &a);
    printf("Enter number for b = ");
    scanf("%d", &b);
    printf("Enter number for c = ");
    scanf("%d", &c);

    a = a + b + c;
    b = a - (b + c);
    c = a - (b + c);
    a = a - (b + c);

    printf("\nAfter swapping:\n");
    printf("a = %d\n", a);
    printf("b = %d\n", b);
    printf("c = %d\n", c);

    return 0;
}
