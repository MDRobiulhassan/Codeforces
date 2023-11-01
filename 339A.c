#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    scanf("%s", str);

    for (int i = 0; i < strlen(str)-1; i = i + 2)
    {
        for (int j = i+2; j < strlen(str); j = j + 2)
        {
            if (str[i] > str[j])
            {
                int t = str[i];
                str[i] = str[j];
                str[j] = t;
            }
        }
    }

    printf("%s", str);

    return 0;
}