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
        int n, k;
        cin >> n >> k;

        vi l(n), r(n);

        for (int i = 0; i < n; i++)
            cin >> l[i];
        for (int i = 0; i < n; i++)
            cin >> r[i];

        vi a(n), b(n);
        ll y = 0;
        for (int i = 0; i < n; i++)
        {
            a[i] = max(l[i], r[i]);
            b[i] = min(l[i], r[i]);
            y += a[i];
        }

        sort(b.begin(), b.end(), greater<int>());
        for (int i = 0; i < k - 1; i++)
            y += b[i];

        cout << y + 1 << '\n';
    }

    return 0;
}