// Printing sum 6 to 1
#include <stdio.h>
int main()
{
    int i, sum;
    for (i = 6; i >= 1; i--)
    {
        sum += i;
    }
    printf("%d", sum);
    return 0;
}