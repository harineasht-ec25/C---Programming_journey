// Printing odd numbers from 10 to 20
#include <stdio.h>
int main()
{
    int i, a, sum;
    for (i = 10; i <= 99; i++)
    {
        a = i / 10;
        if (i % 2 == 1 && a == 7)
        {
            sum += i;
        }
    }
    printf("%d\n", sum);
    return 0;
}