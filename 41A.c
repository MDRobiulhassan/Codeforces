#include <stdio.h>
#include <string.h>

int main()
{
    char str[101], rev[101];
    int i, j, len;

    scanf("%s", str);
    scanf("%s", rev);

    len = strlen(str);
    for (i = 0, j = len - 1; i < len; i++, j--)
    {
        if (str[i] != rev[j])
        {
            printf("NO\n");
            return 0;
        }
    }

    printf("YES\n");

    return 0;
}
