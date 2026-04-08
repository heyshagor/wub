// Name: Md Shagor
// Student Id: 0326725111
// Studnet Roll: 72B/5111
// Lab Report: 11
// Experiment Name: Perfect number calculation

#include<stdio.h>

int perfect(int n)
{
    int binary, sum = 0;
    for(int i=1; i<=n/2; i++)
    {
        if(n%i == 0)
            sum += i;
    }
    //printf("sum = %d\n", sum);
    binary = (n == sum)? 1 : 0;
    return binary;
}
void range_perfect()
{
    int a, b, temp;
    printf("Enter the minimum and maximum values of the range:");
    scanf("%d %d", &a, &b);

    for(int i = a; i <= b; i++)
    {
        temp = perfect(i);
        if(temp)
        {
            printf("%d \t",i);
        }
    }
}

int main()
{
    int result, n, option;
    printf("Enter 1 for single value check \nEnter 2 to find the perfect numbers within a range.\n");
    scanf("%d", &option);

    switch(option)
    {
        case 1:
            printf("Enter the number:");
            scanf("%d", &n);
            result = perfect(n);
            if(result)
            {
                printf("%d is a perfect number", n);
            }
            else
            {
                printf("%d is not a perfect number", n);
            }
            break;
        case 2:
            range_perfect();
            break;
        default:
            printf("Enter valid number");
    }
    return 0;
}
