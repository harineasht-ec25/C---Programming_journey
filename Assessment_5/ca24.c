// Program to count the total number of two-digit perfect square numbers in a given number using for loop

#include <stdio.h>

int main()
{
    int num, temp, lastTwo, count = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    temp = num;

    for (; temp >= 10; temp /= 10)
    {
        lastTwo = temp % 100;

        if (lastTwo == 16 || lastTwo == 25 || lastTwo == 36 ||
            lastTwo == 49 || lastTwo == 64 || lastTwo == 81)
            count++;
    }

    printf("%d", count);

    return 0;
}
