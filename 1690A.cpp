#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        int h2 = ceil(double(n) / 3), h1 = ceil(double(n) / 3)+1, h3 = n - (h1 + h2);
        if (h3==0)
        {
            h3++;
            h2--;
        }
        cout << h2 << " " << h1 << " " << h3 << endl;
    }

    return 0;
}