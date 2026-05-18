// To print number of digits
#include <stdio.h>
int main()
{
    int a, count = 0;

    printf("Enter a number: ");
    scanf("%d", &a);

    if (a == 0)
        count = 1;
    else
    {
        for (; a != 0; a = a / 10)
        {
            count++;
        }
    }

    printf("%d", count);
    return 0;
}