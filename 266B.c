#include <stdio.h>
#include <string.h>

int main()
{
    int n, t, i, j;
    char s[51];

    scanf("%d %d %s", &n, &t, s);

    while (t--)
    {
        for (i = 0; i < n;)
        {
            if (s[i] == 'B' && s[i + 1] == 'G')
            {
                s[i] = 'G';
                s[i + 1] = 'B';
                i += 2;
            }
            else
            {
                i++;
            }
        }
    }

    printf("%s\n", s);

    return 0;
}
