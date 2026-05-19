// Program to count total number of two-digit perfect square numbers using while loop
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

        if (twoDigit == 16 || twoDigit == 25 || twoDigit == 36 ||
            twoDigit == 49 || twoDigit == 64 || twoDigit == 81)
        {
            count++;
        }

        lastDigit = secondLastDigit;
        num = num / 10;
    }

    printf("%d", count);

    return 0;
}
