// Program to count the total number of single-digit prime numbers in a given number using for loop

#include <stdio.h>

int main()
{
    int num, digit, count = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    for (; num != 0; num /= 10)
    {
        digit = num % 10;

        if (digit == 2 || digit == 3 || digit == 5 || digit == 7)
            count++;
    }

    printf("%d", count);

    return 0;
}
