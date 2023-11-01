#include <stdio.h>

int main()
{
    int n, i, count = 0;
    scanf("%d", &n);
    char s[50];

    scanf(" ");

    for (i = 0; i < n; i++)
    {
        scanf("%c", &s[i]);
    }

    for (i = 0; i < n - 1; i++)
    {
        if (s[i] == s[i + 1])
            count++;
    }

    printf("%d\n", count);

    return 0;
}