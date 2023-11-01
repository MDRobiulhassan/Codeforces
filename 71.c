#include <stdio.h>
#include <string.h>

int main()
{
    int n, i;
    scanf("%d", &n);
    char str[100];

    for (i = 1; i <= n; i++)
    {
        scanf("%s",&str);

        int length = strlen(str);
        if (length <= 10)
            puts(str);
        else
            printf("%c%d%c\n", str[0], length - 2, str[length-1]);
    }

    return 0;
}