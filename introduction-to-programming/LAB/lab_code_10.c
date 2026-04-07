// Name: Md Shagor
// Student Id: 0326725111
// Studnet Roll: 72B/5111
// Lab Report: 10
// Experiment Name: Prime number calculation

#include <stdio.h>
 int prime(int n) {
    int binary = 1;
    for(int i = 2; i <= n /2; i++)
    {
        if(n % i == 0)
        {
            binary = 0;
            break;
        }
    }
    return binary;
 }

 void rangePrime(int start, int end) {
    printf("Prime numbers between %d and %d are: ", start, end);
    for(int i = start; i <= end; i++)
    {
        if(prime(i))
        {
            printf("%d ", i);
        }
    }
    printf("\n");
 }

    int main() {
        int start, end;
        printf("Enter the starting number: ");
        scanf("%d", &start);
        printf("Enter the ending number: ");
        scanf("%d", &end);
        rangePrime(start, end);
        return 0;
    }