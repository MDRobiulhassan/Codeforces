#include <iostream>
using namespace std;

int digitCount(int a[])
{
    while(n!=0)
    {
        
    }
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, a[100], k = 0;
        cin >> n;

        int j = 1,r=10;
        for (int i = 1; i <= n%10; i++)
        {
            while (j < 10000)
            {
                a[k] = j; //1,11
                k++; //1,2
                j = j+r; //11,111
                r=r*10; //100,1000
            }
        }
        digitCount(a);
    }

    return 0;
}