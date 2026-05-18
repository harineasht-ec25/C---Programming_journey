#include <stdio.h>
int main()
{
    long int num;
    int sum = 0, digit;
    printf("Enter a number: ");
    scanf("%ld", &num);
    while (num != 0)
    {
        digit = num % 10;  // get last digit
        sum = sum + digit; // add digit
        num = num / 10;    // remove last digit
    }
    printf("Sum of digits = %d", sum);
    return 0;
}