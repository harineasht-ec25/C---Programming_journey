#include <stdio.h>

int main()
{
    int num, temp, first, last, digits = 0, pow10 = 1, middle, result;

    printf("Enter a number: ");
    scanf("%d", &num);

    last = num % 10;
    temp = num;

    // find number of digits and first digit using for loop
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

    middle = (num % pow10) / 10;

    result = last * pow10 + middle * 10 + first;

    printf("Result: %d", result);

    return 0;
}
