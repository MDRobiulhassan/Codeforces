#include <stdio.h>
#include <math.h>
#include <stdbool.h>

bool isComposite(int n)
{
    if (n < 4)
        return false;

    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
            return true;
    }
    return false;
}

int main()
{
    int n;
    scanf("%d", &n);

    for (int i = 4; i < n; i++)
    {
        if (isComposite(i) && isComposite(n - i))
        {
            printf("%d %d\n", i, n - i);
            break;
        }
    }

    return 0;
}