// Program to print the biggest 4-digit number divisible by 7 and 9 using while loop
#include <stdio.h>

int main()
{
    int num = 9999;

    while (num >= 1000)
    {
        if (num % 7 == 0 && num % 9 == 0)
        {
            printf("%d", num);
            break;
        }
        num--;
    }

    return 0;
}
