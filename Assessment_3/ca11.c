#include <stdio.h>

int main()
{
    int num, d0, d1;

    scanf("%d", &num);

    // Extract digits
    d0 = num / 10; // digit 0 (tens)
    d1 = num % 10; // digit 1 (ones)

    // Check condition
    if (d1 >= d0)
    {
        printf("Success");
    }
    else
    {
        printf("Failure");
    }

    return 0;
}