#include <stdio.h>
int main()
{
    long int num;
    int last;
    scanf("%ld", &num);
    last = num % 10;
    if (last % 2 != 0)
        num = num - 1;
    printf("%ld", num);
    return 0;
}
