#include<stdio.h>

int main(){
    int n,count=0,i;
    scanf("%d",&n);
    int a[10000];

    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    for(i=0;i<n;i++)
    {
        if(a[i]!=a[i+1])
            count++;
    }

    printf("%d\n",count);

    return 0;
}