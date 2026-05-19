// Program to count total number of two-digit odd numbers in a number using while loop
#include <stdio.h>

int main()
{
    int num, lastDigit, secondLastDigit, twoDigit, count = 0;

    scanf("%d", &num);

    lastDigit = num % 10;
    num = num / 10;

    while (num != 0)
    {
        secondLastDigit = num % 10;
        twoDigit = secondLastDigit * 10 + lastDigit;

        if (twoDigit % 2 != 0)
            count++;

        lastDigit = secondLastDigit;
        num = num / 10;
    }

    printf("%d", count);

    return 0;
}
