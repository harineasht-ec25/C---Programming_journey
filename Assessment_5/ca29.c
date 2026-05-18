// Program to find the LCM of three numbers using for loop

#include <stdio.h>

int main()
{
    int a, b, c, lcm, max;

    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    max = a;
    if (b > max)
        max = b;
    if (c > max)
        max = c;

    for (lcm = max;; lcm++)
    {
        if (lcm % a == 0 && lcm % b == 0 && lcm % c == 0)
        {
            printf("%d", lcm);
            break;
        }
    }

    return 0;
}
