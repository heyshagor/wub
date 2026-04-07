// Name: Md Shagor
// Student Id: 0326725111
// Studnet Roll: 72B/5111
// Lab Report: 19
// Experiment Name:  Factorial calculation using recursion

#include<stdio.h>

int factorial(int n)
{
    if(n == 0 || n == 1)   // Base case
        return 1;
    else
        return n * factorial(n - 1);   // Recursive call
}

int main()
{
    int num, result;

    printf("Enter a number: ");
    scanf("%d", &num);

    result = factorial(num);

    printf("Factorial = %d", result);

    return 0;
}