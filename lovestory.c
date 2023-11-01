#include <stdio.h>
#include <string.h>

int main()
{
    int t, count = 0, i;
    scanf("%d", &t);
    char s[11], s2[] = "codeforces";

    for (i = 1; i <= t; i++)
    {
        scanf("%s", s);

        for (int j = 0; j < 10; j++)
        {
            if (s[j] != s2[j])
                count++;
        }
        printf("%d", count);
        count = 0;
        printf("\n");
    }

    return 0;
}