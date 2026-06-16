#include <stdio.h>
int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    if ((a + b) % 2 == 0)
    {
        printf("It is even\n");
        if (a > 0 && b > 0)
        {
            printf("Both are positive integers\n");
        }
        else if (a > 0 && b < 0)
        {
            printf("a is positive number and b is negative\n");
        }
        else if (a < 0 && b > 0)
        {
            printf("b is positive number and a is negative\n");
        }
        else
        {
            printf("Both are negative numbers\n");
        }
    }
    else if ((a + b) % 2 != 0)
    {
        printf("It is odd\n");
        if (a > 0 && b > 0)
        {
            printf("Both are positive integers\n");
        }
        else if (a > 0 && b < 0)
        {
            printf("a is positive number and b is negative\n");
        }
        else if (a < 0 && b > 0)
        {
            printf("b is positive number and a is negative\n");
        }
        else
        {
            printf("Both are negative numbers\n");
        }
    }
    return 0;
}
