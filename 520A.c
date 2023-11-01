#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    int n, count = 0, i, j;
    scanf("%d", &n);
    char str[100]={}, str2[] = "abcdefghijklmnopqrstuvwxyz";

    for (i = 0; i <= n; i++)
    {
        scanf("%c", &str[i]);
    }
    strlwr(str);

    for (i = 0; i < strlen(str2); i++)
    {
        for (j = 0; j < strlen(str); j++)
        {
            if (str2[i] == str[j])
            {
                count++;
                break;
            }
        }
    }

    if (count == 26)
        printf("YES");
    else
        printf("NO");

    return 0;
}
