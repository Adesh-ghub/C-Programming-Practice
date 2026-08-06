#include <stdio.h>

int sumDigits(int);

int main()
{
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    printf("Sum of Digits = %d", sumDigits(n));

    return 0;
}

int sumDigits(int n)
{
    int sum = 0, digit;

    while(n > 0)
    {
        digit = n % 10;
        sum = sum + digit;
        n = n / 10;
    }

    return sum;
}