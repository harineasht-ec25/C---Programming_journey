#include <stdio.h>
int main()
{
    long int num, rev = 0, digit;
    printf("Enter a number: ");
    scanf("%ld", &num);
    while (num != 0)
    {
        digit = num % 10;       // get last digit
        rev = rev * 10 + digit; // build reverse
        num = num / 10;         // remove last digit
    }
    printf("Reversed number = %ld", rev);
    return 0;
}