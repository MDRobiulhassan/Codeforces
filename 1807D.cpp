//Time Limit Exceed
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
        int n, q, l, r, k;
        cin >> n >> q;
        int a[n], c[n];

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            c[i] = a[i];
        }

        for (int i = 0; i < q; i++)
        {
            cin >> l >> r >> k;
            for (int d = 0; d < n; d++)
            {
                c[d] = a[d];
            }
            for (int j = l - 1; j < r; j++)
            {
                c[j] = k;
            }
            ll sum = 0;
            for (int b = 0; b < n; b++)
            {
                sum += c[b];
            }
            if (sum % 2 == 0)
                cout << "NO";
            else
                cout << "YES";
            cout << endl;
        }
    }
    return 0;
}