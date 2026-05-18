// Program to count the total number of single-digit perfect square digits in a number using for loop

#include <stdio.h>

int main()
{
    int num, digit, count = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    for (; num != 0; num /= 10)
    {
        digit = num % 10;

        if (digit == 0 || digit == 1 || digit == 4 || digit == 9)
            count++;
    }

    printf("%d", count);

    return 0;
}
