// Program to get a number as a string and print its integer value
// Uses only int, arrays, loops, no structures
#include <stdio.h>

int main()
{
    int s[100];
    int i = 0, ch;
    int num = 0;

    // Read digits as characters
    while (1)
    {
        scanf(" %c", &ch); // skips whitespace

        if (ch < '0' || ch > '9')
            break;

        s[i] = ch;
        i++;
    }

    // Convert string to integer
    for (int j = 0; j < i; j++)
    {
        num = num * 10 + (s[j] - 48);
    }

    // Print integer value
    printf("%d", num);

    return 0;
}
