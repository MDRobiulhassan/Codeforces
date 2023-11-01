#include <stdio.h>

int main()
{
    int n, a[100], count = 0, i;
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    for (i = 0; i < n; i++)
    {
        if (a[i] == 1)
        {
            count++;
            break;
        }
    }

    if (count == 1)
        printf("Hard\n");
    else
        printf("Easy\n");

    return 0;
}