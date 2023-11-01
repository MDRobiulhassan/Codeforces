#include<stdio.h>

int main(){
    int n,a[1000],b[1000],sum[1000],i;
    scanf("%d",&n);
    sum[0]=0;

    for(i=0;i<n;i++)
    {
        scanf("%d %d",&a[i],&b[i]);
    }
    for(i=1;i<=n;i++)
    {
        sum[i]=(sum[i-1]+b[i-1])-a[i-1];  

    }

    int max=sum[0];
    for(i=1;i<=n;i++)
    {
        if(sum[i]>max)
            max=sum[i];
    }

    printf("%d\n",max);

    return 0;
}