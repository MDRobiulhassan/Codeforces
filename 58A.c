#include<stdio.h>
#include<string.h>

int main(){
    char str[]="ahhellllloou",str2[]="hlelo",str3[101];
    fgets(str3, 101, stdin);

    if((strstr(str3,str))!=NULL)
        printf("YES");
    else if((strstr(str3,str2))!=NULL)
        printf("NO");

    return 0;
}
