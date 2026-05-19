// Program to check whether the middle two digits of a 4-digit number are prime using while loop
#include <stdio.h>

int main()
{
    int num, midTwo, i = 2, flag = 1;

    scanf("%d", &num);

    /* Extract middle two digits (hundreds and tens) */
    midTwo = (num / 10) % 100;

    /* Prime check for middle two digits */
    if (midTwo <= 1)
    {
        flag = 0;
    }
    else
    {
        while (i <= midTwo / 2)
        {
            if (midTwo % i == 0)
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
