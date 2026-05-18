#include <stdio.h>
int main()
{
    int num, d1, d2;
    scanf("%d", &num);
    d1 = num / 10;
    d2 = num % 10;
    if (d1 != d2)
    {
        printf("Success");
    }
    else
    {
        printf("Failure");
    }

    return 0;
}