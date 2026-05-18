// Program to check whether a given number is prime or not using for loop

#include <stdio.h>
int main()
{
    int num, i, a, count = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    for (i = 1; i <= num; i++)
    {
        if (num % i == 0)
            count++;
    }
    a = (num / 10) + (num % 10);
    if (count == 2 && a == 14)
        printf("Prime and Sum is 14");
    else if (count == 2 && a != 14)
        printf("Prime and Sum is not 14");
    else if (count != 2 && a == 14)
        printf("Not Prime and Sum is 14");
    else
        printf("Not Prime");
    return 0;
}