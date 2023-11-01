#include <stdio.h>
#include <math.h>

int main()
{
    int n, count = 0;
    scanf("%d", &n);

    for (int i = 4; i < n; i++)
    {
        for (int j = 2; j < i; j++)
        {
            if (i % j == 0 && (n - i) % j == 0)
            {
                count++;
                break;
            }
        }
        if (count != 0)
        {
            printf("%d %d\n", i, n - i);
            break;
        }
        count = 0;
    }

    return 0;
}