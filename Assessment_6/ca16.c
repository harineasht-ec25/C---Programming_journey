// Program to check whether a number is prime or not using while loop
#include <stdio.h>

int main()
{
    int num, i = 2, flag = 1;

    scanf("%d", &num);

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

    if (flag == 1)
        printf("Prime");
    else
        printf("Not Prime");

    return 0;
}
