#include <stdio.h>

int main()
{
    int n, p, q, i, a[250], count = 0;
    scanf("%d", &n);

    scanf("%d", &p);
    for (i = 0; i < p; i++)
    {
        scanf("%d", &a[i]);
    }

    scanf("%d", &q);
    for (i = p; i < q + p; i++)
    {
        scanf("%d", &a[i]);
    }

    for (i = 0; i < p + q; i++)
    {
        for (int j = i + 1; j < p + q; j++)
        {
            if (a[i] > a[j])
            {
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }

    for (i = 0; i < p + q; i++)
    {
        if (a[i] != a[i + 1])
            count++;
    }

    if (count == n)
        printf("I become the guy.\n");
    else
        printf("Oh,my keybord!\n");
}