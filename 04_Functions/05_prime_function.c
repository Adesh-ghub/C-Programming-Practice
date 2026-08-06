#include <stdio.h>

int isPrime(int);

int main()
{
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    if(isPrime(n))
        printf("Prime Number");
    else
        printf("Not Prime Number");

    return 0;
}

int isPrime(int n)
{
    if(n < 2)
        return 0;

    for(int i = 2; i <= n - 1; i++)
    {
        if(n % i == 0)
            return 0;
    }

    return 1;
}