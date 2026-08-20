#include <stdio.h>

int isStrong(int);

int main()
{
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    if(isStrong(n))
        printf("Strong Number");
    else
        printf("Not a Strong Number");

    return 0;
}

int isStrong(int n)
{
    int original = n;
    int sum = 0, digit;
    int fact, i;

    while(n > 0)
    {
        digit = n % 10;

        fact = 1;

        for(i = 1; i <= digit; i++)
        {
            fact = fact * i;
        }

        sum = sum + fact;
        n = n / 10;
    }

    if(original == sum)
        return 1;
    else
        return 0;
}