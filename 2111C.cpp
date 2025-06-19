#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector<int>
#define vll vector<long long>
#define vs vector<string>
#define pb push_back
#define tc while (t--)
#define l1n for (int i = 0; i < n; i++)

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;

    tc
    {
        int n;
        cin >> n;

        vll a(n);

        for (int i = 0; i < n; i++)
            cin >> a[i];

        ll mincost = LLONG_MAX;
        int i = 0;
        while (i < n)
        {
            int j = i;

            while (j < n && a[j] == a[i])
                j++;

            ll cost = 1LL * (i + (n - j)) * a[i];
            mincost = min(mincost, cost);
            i = j;
        }
        cout << mincost << '\n';
    }

    return 0;
}
