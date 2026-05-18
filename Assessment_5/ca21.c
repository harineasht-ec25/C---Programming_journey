// Program to count the total number of odd digits in a given number using for loop

#include <stdio.h>

int main()
{
    int num, digit, count = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    for (; num != 0; num /= 10)
    {
        digit = num % 10;
        if (digit % 2 != 0)
            count++;
    }

    printf("%d", count);

    return 0;
}
