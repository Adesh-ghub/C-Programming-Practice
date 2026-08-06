#include <stdio.h>

int reverse(int);

int main()
{
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    printf("Reverse Number = %d", reverse(n));

    return 0;
}

int reverse(int n)
{
    int rev = 0, digit;

    while(n > 0)
    {
        digit = n % 10;
        rev = rev * 10 + digit;
        n = n / 10;
    }

    return rev;
}