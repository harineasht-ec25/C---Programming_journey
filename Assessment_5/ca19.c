// Program to check whether the middle two digits of a 4-digit number are prime using for loop

#include <stdio.h>

int main()
{
    int num, middle, i, count = 0;

    printf("Enter a 4-digit number: ");
    scanf("%d", &num);

    middle = (num / 10) % 100; // extract hundreds and tens digits

    for (i = 1; i <= middle; i++)
    {
        if (middle % i == 0)
            count++;
    }

    if (count == 2)
        printf("Prime");
    else
        printf("Not Prime");

    return 0;
}
