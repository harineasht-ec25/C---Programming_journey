#include <stdio.h>
int main()
{
    int num, d0, d1, d2;
    scanf("%d", &num);
    d0 = num % 10;
    d1 = (num / 10) % 10;
    d2 = num / 100;
    if (d1 == d0 && d1 != d2)
    {
        printf("Success");
    }
    else
    {
        printf("Failure");
    }

    return 0;
}
