// Program to store numbers until 0 is entered and print middle value(s)
#include <stdio.h>

int main()
{
    int a[100];
    int num, count = 0, mid;

    // Get numbers from user until 0 is entered
    while (1)
    {
        scanf("%d", &num);

        if (num == 0)
            break;

        a[count] = num;
        count++;
    }

    // If total numbers is odd, print middle number
    if (count % 2 != 0)
    {
        mid = count / 2;
        printf("%d", a[mid]);
    }
    // If total numbers is even, print average of middle two numbers
    else
    {
        mid = count / 2;
        printf("%d", (a[mid - 1] + a[mid]) / 2);
    }

    return 0;
}
