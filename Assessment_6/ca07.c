// Program to print odd numbers from 11 to 100 using while loop
#include <stdio.h>

int main()
{
    int i = 11, a;

    while (i <= 100)
    {
        a = (i % 10) + (i / 10);
        if (i % 2 == 1 && a == 7)
        {
            printf("\n%d", i);
        }
        i++;
    }
    return 0;
}
