#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    gets(str);
    strlwr(str);

    for (int i = 0; i < strlen(str); i++)
    {
        if (str[i] == 'A' || str[i] == 'a' || str[i] == 'E' || str[i] == 'e' || str[i] == 'I' || str[i] == 'o' || str[i] == 'O' || 
        str[i] == 'i' || str[i] == 'U' || str[i] == 'u' || str[i] == 'y' || str[i] == 'Y')
            continue;
        else
            printf(".%c", str[i]);
    }

    return 0;
}