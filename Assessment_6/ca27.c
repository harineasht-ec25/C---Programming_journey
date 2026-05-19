// Program to count numbers less than 100000 whose sum of digits is 14 using while loop
#include <stdio.h>

int main()
{
    int num = 1, temp, sum, count = 0;

    while (num < 100000)
    {
        temp = num;
        sum = 0;

        while (temp != 0)
        {
            sum = sum + (temp % 10);
            temp = temp / 10;
        }

        if (sum == 14)
            count++;

        num++;
    }

    printf("%d", count);

    return 0;
}
