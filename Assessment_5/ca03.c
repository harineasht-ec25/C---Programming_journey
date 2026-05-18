// Printing 1 to 5
#include <stdio.h>
int main()
{
    int i, sum;
    for (i = 1; i <= 5; i++)
    {
        sum += i;
    }
    printf("%d", sum);
    return 0;
}