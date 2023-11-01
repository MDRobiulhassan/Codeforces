#include <stdio.h>
#include <string.h>

int main()
{
    int n, i, x = 0;
    scanf("%d", &n);
    char ch[150];

    for (i = 0; i < n; i++)
    {
        scanf("%s", &ch);

        if (ch[0] == '+' || ch[1] == '+')
            ++x;
        else if (ch[0] == '-' || ch[1] == '-')
            --x;
    }
    printf("%d\n", x);

    return 0;
}