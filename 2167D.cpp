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
        ll n;
        cin >> n;
        vll a(n);

        for (ll i = 0; i < n; i++)
            cin >> a[i];

        ll g = a[0];
        for (ll i = 0; i < n; i++)
            g = gcd(g, a[i]);

        ll ans = -1;
        for (ll i = 2; i < 1e9; i++)
        {
            if (gcd(g, i)==1)
            {
                ans = i;
                break;
            }
        }
        cout << ans << '\n';
    }

    return 0;
}