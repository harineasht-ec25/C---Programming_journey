// Program to get a string and print the same (using only int variables and array)
#include <stdio.h>

int main()
{
    int s[10];
    int i = 0, ch;

    // Read string character by character
    while (1)
    {
        scanf("%c", &ch);

        if (ch == '\n')
            break;

        s[i] = ch;
        i++;
    }

    // Print the string
    for (int j = 0; j < i; j++)
    {
        printf("%c", s[j]);
    }

    return 0;
}
