#include<stdio.h>

int main(){
    int n,count=0;
    scanf("%d",&n);

    count = n/5;
    if(n%5!=0)
        count++;

    printf("%d",count);

    return 0;
}