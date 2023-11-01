#include <stdio.h>

int main()
{
    int M, N;
    scanf("%d %d", &M, &N);

    if (M >= 1 && N <= 16)
    {
        int domino = (M * N) / 2;
        printf("%d", domino);
    } 

    return 0;
}