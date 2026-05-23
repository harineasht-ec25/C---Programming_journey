// Program to get an integer and print it as a string
// Uses only int variables, arrays, loops, no structures
#include <stdio.h>

int main()
{
    int num, temp;
    int s[100];
    int i = 0, j;

    // Read integer
    scanf("%d", &num);

    // Handle 0 separately
    if (num == 0)
    {
        printf("0");
        return 0;
    }

    // Extract digits and store as ASCII in array (reverse order)
    temp = num;
    while (temp > 0)
    {
        s[i] = (temp % 10) + 48; // convert digit to ASCII
        temp = temp / 10;
        i++;
    }

    // Print string in correct order
    for (j = i - 1; j >= 0; j--)
    {
        printf("%c", s[j]);
    }

    return 0;
}
