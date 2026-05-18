#include <stdio.h>

int main()
{
    int num, first2, last2;
    scanf("%d", &num);
    first2 = num / 100;
    last2 = num % 100;
    if (first2 == last2)
    {
        printf("Success");
    }
    else
    {
        printf("Failure");
    }

    return 0;
}
