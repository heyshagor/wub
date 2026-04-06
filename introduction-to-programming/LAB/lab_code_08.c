// Name: Md Shagor
// Student Id: 0326725111
// Studnet Roll: 72B/5111
// Lab Report: 07
// Experiment Name: Swap two number without using third variable

#include <stdio.h>

#include<stdio.h>

int main()
{
    int a,b;
    printf("Enter number for a = ");
    scanf("%d", &a);
    printf("Enter number for b = ");
    scanf("%d", &b);
    a = a + b;
    b = a - b;
    a = a - b;
    printf("\nAfter swapping:\n");
    printf("a = %d\n", a);
    printf("b = %d\n", b);
    return 0;
}