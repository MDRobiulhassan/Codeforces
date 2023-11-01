#include <stdio.h>
#include <string.h>

int main()
{
    char str[] = "codeforces", ch;
    int t, count = 0;
    scanf("%d", &t);
    getchar();

    for (int i = 0; i < t; i++)
    {
        scanf("%c", &ch);
        getchar();
        for (int j = 0; j < strlen(str); j++)
        {
            if (ch == str[j])
            {
                count++;
                break;
            }
        }
        if (count != 0)
            printf("YES\n");
        else
            printf("NO\n");

            count=0;
    }

    return 0;
}