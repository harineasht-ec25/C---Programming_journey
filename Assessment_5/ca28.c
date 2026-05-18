// Program to find the LCM of two numbers using for loop

#include <stdio.h>

int main()
{
    int a, b, lcm;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    for (lcm = (a > b ? a : b);; lcm++)
    {
        if (lcm % a == 0 && lcm % b == 0)
        {
            printf("%d", lcm);
            break;
        }
    }

    return 0;
}
