// Program to print sum of digits
#include <stdio.h>

int main()
{
    int i = 0, a, sum;
    printf("Enter a number:");
    scanf("%d", &a);
    while (a > 0)
    {
        i++;
        sum += i;
        a = a / 10;
    }
    printf("%d", sum);
    return 0;
}
