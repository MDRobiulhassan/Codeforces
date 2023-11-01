#include <stdio.h>
int main()
{
    int n, count = 0;
    scanf("%d", &n);
    
    count=count+(n/100);
    n=n%100;
    count=count+(n/20);
    n=n%20;
    count=count+(n/10);
    n=n%10;
    count=count+(n/5);
    n=n%5;
    count=count+n;

    printf("%d\n", count);
    return 0;
}
