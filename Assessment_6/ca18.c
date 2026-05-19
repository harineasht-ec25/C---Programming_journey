// Program to check whether the first two digits (tens and ones) form a prime number using while loop
#include <stdio.h>

int main()
{
    int num, lastTwo, i = 2, flag = 1;

    scanf("%d", &num);

    /* Extract first two digits (tens and ones) */
    lastTwo = num % 100;

    /* Prime check for lastTwo */
    if (lastTwo <= 1)
    {
        flag = 0;
    }
    else
    {
        while (i <= lastTwo / 2)
        {
            if (lastTwo % i == 0)
            {
                flag = 0;
                break;
            }
            i++;
        }
    }

    if (flag == 1)
        printf("Prime");
    else
        printf("Not Prime");

    return 0;
}
