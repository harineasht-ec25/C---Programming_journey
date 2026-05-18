// Program to print the total count of numbers less than 100000 whose sum of digits is 14 using for loop

#include <stdio.h>

int main()
{
    int num, temp, digit, sum, count = 0;

    for (num = 1; num < 100000; num++)
    {
        sum = 0;
        temp = num;

        for (; temp != 0; temp /= 10)
        {
            digit = temp % 10;
            sum = sum + digit;
        }

        if (sum == 14)
            count++;
    }

    printf("%d", count);

    return 0;
}
