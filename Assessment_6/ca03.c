// Program to print numbers from sum 1 to 5 using while loop
#include <stdio.h>

int main()
{
    int i = 1, sum;

    while (i <= 5)
    {
        sum += i;
        i++;
    }
    printf("%d ", sum);
    return 0;
}
