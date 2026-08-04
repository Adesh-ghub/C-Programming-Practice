#include <stdio.h>

int largest(int, int);

int main()
{
    int a, b;

    printf("Enter first number: ");
    scanf("%d", &a);

    printf("Enter second number: ");
    scanf("%d", &b);

    printf("Largest number = %d", largest(a, b));

    return 0;
}

int largest(int a, int b)
{
    if(a > b)
        return a;
    else
        return b;
}