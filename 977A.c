#include<stdio.h>

int main(){
    int n,k;
    scanf("%d %d",&n,&k);

    for(int i=1;i<=k;i++)
    {
        if(n%10==0)
            n=n/10;
        else if(n%10!=0)
            n=n-1;
    }
    printf("%d\n",n);

    return 0;
}