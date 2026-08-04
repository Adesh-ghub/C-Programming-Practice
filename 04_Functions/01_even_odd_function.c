#include <stdio.h>

int evenOdd(int);

int main()
{
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    if(evenOdd(n))
    {
        printf("Even Number");
    }
    else
    {
        printf("Odd Number");
    }

    return 0;
}

int evenOdd(int n)
{
    if(n % 2 == 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}