#include <stdio.h>

int main()
{
    int n, k, a[100], count = 0, i;
    scanf("%d %d", &n, &k);

    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    for(i=0;i<n;i++)
    {
        if(a[i]>=a[k-1] && a[i]>0)
            count++;
    }
    printf("%d",count);



    return 0;
}