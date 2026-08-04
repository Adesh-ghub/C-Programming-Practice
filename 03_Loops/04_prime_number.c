#include <stdio.h>

int main()
{
    int a, i;

    printf("Enter a number: ");
    scanf("%d", &a);

    if(a < 2)
    {
        printf("Not Prime");
        return 0;
    }

    for(i = 2; i <= a - 1; i++)
    {
        if(a % i == 0)
        {
            break;
        }
    }

    if(i == a)
    {
        printf("Prime Number");
    }
    else
    {
        printf("Not Prime Number");
    }

    return 0;
}