#include<stdio.h>

int main(){
    int n,h,i,a[1000],sum=0;
    scanf("%d %d",&n,&h);

    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);

        if(a[i]<=h)
            sum=sum+1;
        else if(a[i>h])
            sum=sum+2;
    }

    printf("%d\n",sum);

    return 0;
}