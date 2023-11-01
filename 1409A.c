#include<stdio.h>
#include<math.h>

int main(){
    int t,a,b,k;
    scanf("%d",&t);

    for(int i=1;i<=t;i++)
    {
        scanf("%d %d",&a,&b);

        int diff=abs(a-b);
        int moves=diff/10;

        if(diff%10!=0)
            moves++;

        printf("%d\n",moves);
    }

    return 0;
}