#include <stdio.h>

int countDigits(int);

int main()
{
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    printf("Total Digits = %d", countDigits(n));

    return 0;
}

int countDigits(int n)
{
    int count = 0;

    while(n > 0)
    {
        count++;
        n = n / 10;
    }

    return count;
}