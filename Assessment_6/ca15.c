// Program to check MSB and modify number using while loop
#include <stdio.h>

int main()
{
    int num, temp, msb, power = 1;

    scanf("%d", &num);
    temp = num;

    while (temp >= 10)
    {
        temp = temp / 10;
        power = power * 10;
    }

    msb = temp;

    if (msb % 2 != 0)
    {
        num = num - (msb * power);
        msb = msb - 1;
        num = num + (msb * power);
    }

    printf("%d", num);

    return 0;
}
