#include <iostream>
#include <algorithm>
using namespace std;
#define ll long long

int main()
{
    int n, m;
    cin >> n >> m;
    int a[m], c = 0, p = 1;
    ll dis=0;

    for (int i = 0; i < m; i++)
    {
        cin >> c;

        if (c >= p)
            dis += c - p;
        else
            dis += (n - p + c);
        p = c;
    }

    cout << dis << endl;

    return 0;
}