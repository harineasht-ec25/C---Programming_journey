// Program to print even numbers from 11 to 100 nd having sum 6 using while loop
#include <stdio.h>

int main()
{
    int i = 11, a;

    while (i <= 100)
    {
        a = (i % 10) + (i / 10);
        if (i % 2 == 0 && a == 6)
        {
            printf("\n%d", i);
        }
        i++;
    }
    return 0;
}
