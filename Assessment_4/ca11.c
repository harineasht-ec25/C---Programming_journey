#include <stdio.h>
int main()
{
    long int num;
    int count = 0;
    printf("Enter a number: ");
    scanf("%ld", &num);
    if (num == 0)
    {
        count = 1;
    }
    else
    {
        while (num != 0)
        {
            count++;
            num = num / 10;
        }
    }
    printf("Total number of digits = %d", count);
    return 0;
}