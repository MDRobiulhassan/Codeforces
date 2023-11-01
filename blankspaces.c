#include <stdio.h>

int main()
{
    int t, n, a[100], count = 0;
    scanf("%d %d", &t, &n);

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &a[i]);
        }

        int b[5]={0};
        for (int k = 0; k < n; k++)
        {
            if (a[k] == 1)
            {
                b[k] = count;
                count = 0;
            }
            else if (a[k] == 0)
                count++;
        }
        int size = sizeof(b) / sizeof(b[0]);
        int m;
        int max = b[0];
        for (m = 0; m < size; m++)
        {
            if (b[m] > max)
                max = b[m];
        }
        printf("%d\n", max);
    }

    return 0;
}