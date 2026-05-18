// Program to check whether the last two digits (tens and ones) of a number are prime using for loop

#include <stdio.h>

int main()
{
    int num, lastTwo, i, count = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    lastTwo = num % 100; // extract tens and ones digits

    for (i = 1; i <= lastTwo; i++)
    {
        if (lastTwo % i == 0)
            count++;
    }

    if (count == 2)
        printf("Prime");
    else
        printf("Not Prime");

    return 0;
}
