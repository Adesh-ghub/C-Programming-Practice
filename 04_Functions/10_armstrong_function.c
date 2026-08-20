#include <stdio.h>

int isArmstrong(int);

int main()
{
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    if(isArmstrong(n))
        printf("Armstrong Number");
    else
        printf("Not an Armstrong Number");

    return 0;
}

int isArmstrong(int n)
{
    int original = n;
    int sum = 0, digit;

    while(n > 0)
    {
        digit = n % 10;
        sum = sum + digit * digit * digit;
        n = n / 10;
    }

    if(original == sum)
        return 1;
    else
        return 0;
}