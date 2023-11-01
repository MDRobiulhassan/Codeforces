#include <stdio.h>
#include<string.h>
#include<ctype.h>

int main()
{
    int u = 0, l = 0,i;
    char str[100];
    gets(str);

    for (int i = 0; i < strlen(str); i++)
    {
        if (str[i] >= 65 && str[i] <= 90)
            u++;
        else if (str[i] >= 97 && str[i] <= 122)
            l++;
    }

    if (u == l || l > u)
    {
        for (i = 0; i < strlen(str); i++)
        {
            str[i] = tolower(str[i]);
        }
        puts(str);
    }
    else if (l < u)
    {
        for (i = 0; i < strlen(str); i++)
        {
            str[i] = toupper(str[i]);
        }
        puts(str);
    }

    return 0;
}