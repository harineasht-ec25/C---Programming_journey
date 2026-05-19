// Program to interchange first and last digits using while loop
#include <stdio.h>
int main()
{
    int num, temp, first, last, count = 0, power = 1;
    scanf("%d", &num);
    temp = num;
    last = num % 10;
    while (temp >= 10)
    {
        temp = temp / 10;
        power = power * 10;
    }
    first = temp;
    num = num - (first * power);
    num = num - last;
    num = num + (last * power);
    num = num + first;
    printf("%d", num);
    return 0;
}