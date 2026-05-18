#include <stdio.h>
#include <math.h>
int main()
{
    long int num, temp, first, last;
    int digits = 0;
    printf("Enter a number: ");
    scanf("%ld", &num);
    temp = num;
    last = temp % 10;
    while (temp >= 10)
    {
        temp = temp / 10;
        digits++;
    }
    first = temp;
    long int middle = num % (long int)pow(10, digits);
    middle = middle / 10;
    long int result = last * (long int)pow(10, digits) + middle * 10 + first;
    printf("Result = %ld", result);
    return 0;
}