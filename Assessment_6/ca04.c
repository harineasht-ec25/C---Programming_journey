// Program to print numbers from sum 6 to 1 using while loop
#include <stdio.h>

int main()
{
    int i = 6, sum;

    while (i >= 1)
    {
        sum += i;
        i--;
    }
    printf("%d ", sum);
    return 0;
}
