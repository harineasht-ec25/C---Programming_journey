// Program to print odd numbers from 11 to 100 having ones digit 5 using while loop
#include <stdio.h>

int main()
{
    int i = 11, a, sum = 0;

    while (i <= 100)
    {
        a = (i % 10);
        if (i % 2 == 1 && a == 5)
        {
            sum += i;
        }
        i++;
    }
    printf("%d", sum);
    return 0;
}
