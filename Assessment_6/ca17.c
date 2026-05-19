// Program to check prime number and whether sum of digits is 14 using while loop
#include <stdio.h>

int main()
{
    int num, temp, i = 2, flag = 1, sum = 0;

    scanf("%d", &num);
    temp = num;

    /* Prime check */
    if (num <= 1)
    {
        flag = 0;
    }
    else
    {
        while (i <= num / 2)
        {
            if (num % i == 0)
            {
                flag = 0;
                break;
            }
            i++;
        }
    }

    /* Sum of digits */
    while (temp != 0)
    {
        sum = sum + (temp % 10);
        temp = temp / 10;
    }

    /* Output conditions */
    if (flag == 1 && sum == 14)
        printf("Prime & sum of digits is 14");
    else if (flag == 0 && sum == 14)
        printf("Not Prime but sum of digits is 14");
    else if (flag == 1 && sum != 14)
        printf("Prime & sum of digits is not 14");
    else
        printf("Not Prime & Sum of Digits is not 14");

    return 0;
}
