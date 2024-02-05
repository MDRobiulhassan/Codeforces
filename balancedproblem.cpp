#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
#define ll long long

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int x, n;
        cin >> x >> n;

        if(x==n)
            cout<<1;
        else
            cout<<__gcd(x,n)*2;
        cout<<endl;
    }

    return 0;
}