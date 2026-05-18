// if MSB is odd number subtract 1 else print same number
#include <stdio.h>
int main()
{
    int num, temp, first, digits = 0, pow10 = 1, result;

    printf("Enter a number: ");
    scanf("%d", &num);

    temp = num;

    // find first digit and number of digits using for loop
    for (; temp != 0; temp /= 10)
    {
        first = temp;
        digits++;
    }

    // calculate 10^(digits-1)
    for (int i = 1; i < digits; i++)
    {
        pow10 *= 10;
    }

    // check first digit (MSB)
    if (first % 2 != 0)
    {
        result = (first - 1) * pow10 + (num % pow10);
    }
    else
    {
        result = num;
    }

    printf("Result: %d", result);

    return 0;
}