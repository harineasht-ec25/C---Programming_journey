// Printing odd numbers from 10 to 100 having sum 7
#include <stdio.h>
int main()
{
    int i, a, b, sum;
    for (i = 10; i <= 99; i++)
    {
        a = i % 10;
        b = i / 10;
        sum = a + b;
        if (i % 2 == 1 && sum == 7)
        {
            printf("%d\n", i);
        }
    }
    return 0;
}