#include <stdio.h>

int main()
{
    int n, i;
    scanf("%d", &n);

    if (n == 1)
        printf("I hate it");
    else
        printf("I hate");
    for (i = 2; i <= n; i++)
    {
        if (i % 2 == 0)
            printf(" that I love");
        else if (i % 2 != 0)
            printf(" that I hate");
        if (i == n)
            printf(" it ");
    }

    return 0;
}