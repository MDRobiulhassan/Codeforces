#include <stdio.h>

int main()
{
    int t, a, b, i, count;
    scanf("%d", &t);

    for (i = 0; i < t; i++)
    {
        scanf("%d%d", &a, &b);
        if (a % b == 0)
        {
            printf("0\n");
        }
        else
        {
            count = b - (a % b);
            printf("%d\n", count);
        }
    }
    return 0;
}
