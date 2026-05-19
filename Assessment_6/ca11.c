// Program to print odd numbers from 11 to 100 having tens digit 7  using while loop
#include <stdio.h>

int main()
{
    int i = 0, a;
    printf("Enter a number:");
    scanf("%d", &a);
    while (a > 0)
    {
        i++;
        a = a / 10;
    }
    printf("%d", i);
    return 0;
}
