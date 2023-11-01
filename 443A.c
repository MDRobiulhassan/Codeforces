#include<stdio.h>
#include<string.h>

int main(){
    char a[1000];
    gets(a);
    int count=0;

    for(int i=1;i<strlen(a)-3;i=i+2)
    {
        for(int j=i+2;j<=strlen(a)-1;j=j+2)
        {
            if(a[i]!=a[j])
                count++;
        }
    }

    printf("%d\n",count);

    return 0;
}