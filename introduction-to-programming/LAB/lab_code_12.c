// Name: Md Shagor
// Student Id: 0326725111
// Studnet Roll: 72B/5111
// Lab Report: 12
// Experiment Name: Strong number calculation

#include<stdio.h>

int fact(int n)
{
    int f = 1;
    for(int i = n; i >= 1; i--)
    {
        f = f * i;
    }
    return f;
}

int strong(int dividend)
{
    int temp, result, remainder, sum = 0;
    temp = dividend;
    while(dividend)
    {
        remainder = dividend % 10;
        sum = sum + fact(remainder);
        dividend = dividend / 10;
    }
    result = (temp == sum)? 1 : 0;
    return result;
}
void range_strong()
{
    int a, b, temp;
    printf("Enter the minimum and maximum values of the range:");
    scanf("%d %d", &a, &b);

    for(int i = a; i <= b; i++)
    {
        temp = strong(i);
        if(temp)
        {
            printf("%d \t",i);
        }
    }
}

int main()
{
    int result, n, option;
    printf("Enter 1 for single value check \n Enter 2 to find the strong numbers within a range.\n");
    scanf("%d", &option);

    switch(option)
    {
        case 1:
            printf("Enter the number:");
            scanf("%d", &n);
            result = strong(n);
            if(result)
            {
                printf("%d is a strong number\n", n);
            }
            else
            {
                printf("%d is not a strong number\n", n);
            }
            break;
        case 2:
            range_strong();
            break;
        default:
            printf("Enter valid number");
    }
    return 0;
}