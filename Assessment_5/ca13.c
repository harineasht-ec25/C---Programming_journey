// Reversing a number.
#include <stdio.h>
int main()
{
    int a, rv = 0;
    printf("Enter a number:");
    scanf("%d", &a);
    for (; a != 0; a = a / 10)
    {
        rv = rv * 10 + (a % 10);
    }
    printf("%d", rv);
    return 0;
}