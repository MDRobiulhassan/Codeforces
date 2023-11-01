#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int friends[n], gifts[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &friends[i]);
        gifts[friends[i] - 1] = i + 1;
    }

    for (int i = 0; i < n; i++)
    {
        printf("%d ", gifts[i]);
    }

    return 0;
}
