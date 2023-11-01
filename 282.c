#include <stdio.h>
#include <string.h>

int main()
{
    int n, i, x = 0;
    scanf("%d", &n);
    char ch[150],str1[4]="++x",str2[4]="--x";

    for (i = 0; i < n; i++)
    {
        scanf("%s", &ch);

        int d=strcmp(ch,str1);
        int d2=strcmp(ch,str2);
        if(d==0)
            ++x;
        else if(d2==0)
            --x;
        
    }
    printf("%d\n", x);

    return 0;
}