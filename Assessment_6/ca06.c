// Program to print odd numbers from 11 to 20 using while loop
#include <stdio.h>

int main()
{
    int i = 11;

    while (i <= 20)
    {
        if (i % 2 == 1)
        {
            printf("\n%d", i);
        }
        i++;
    }
    return 0;
}
