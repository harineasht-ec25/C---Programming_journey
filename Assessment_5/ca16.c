// Program to check whether a given number is prime or not using for loop

#include <stdio.h>

int main()
{
    int num, i, count = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    for (i = 1; i <= num; i++)
    {
        if (num % i == 0)
            count++;
    }

    if (count == 2)
        printf("Prime");
    else
        printf("Not Prime");

    return 0;
}
