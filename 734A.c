#include<stdio.h>

int main(){
    int n,i,a=0,d=0;
    scanf("%d",&n);
    char str[n];
    scanf("%s",str);

    for(i=0;i<n;i++)
    {
        if(str[i]=='A')
            a++;
        else if(str[i]=='D')
            d++;
    }


    if(a>d)
        printf("Anton\n");
    else if(d>a)
        printf("Danik\n");
    else
        printf("Friendship\n");

    return 0;
}