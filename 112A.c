#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main(){
    int i=0;
    char str1[100],str2[100];
    scanf("%s %s",str1,str2);
    
    for(i=0;i<strlen(str1);i++)
    {
        str1[i]=tolower(str1[i]);
        str2[i]=tolower(str2[i]);

    }

    int d=strcmp(str1,str2);
    printf("%d\n",d);

    

    return 0;
}