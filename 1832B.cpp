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
        ll n, k;
        cin >> n >> k;
        vll a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];

        sort(a.begin(), a.end());
        ll sum = 0;
        for (int i = 0; i < 2 * k; i++)
            sum += a[i];

        ll total = accumulate(a.begin(), a.end(), 0LL);

        ll l = 2 * k - 1, r = n - 1;
        ll minsum = sum;

        while (l >= 1 && r >= 0)
        {
            sum = sum - a[l] - a[l - 1] + a[r];
            minsum = min(minsum, sum);
            l -= 2;
            r -= 1;
        }

        cout << total - minsum << '\n';
    }

    return 0;
}