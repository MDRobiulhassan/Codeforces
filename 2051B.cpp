#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector<int>
#define vll vector<long long>
#define vs vector<string>
#define pb push_back
#define tc while (t--)
#define l1n for (int i = 0; i < n; i++)

ll binarysearch(ll x, ll a, ll b, ll c)
{
    ll cycle = x / 3;
    ll r = x % 3;
    ll sum = cycle * (a + b + c);

    if (r == 1)
        return sum + a;
    if (r == 2)
        return sum + a + b;
    return sum;
}

int main()
{
    int t;
    cin >> t;
    tc
    {
        ll n, a, b, c;
        cin >> n >> a >> b >> c;

        ll l = 1, r = 3 * n / min({a, b, c}) + 1, ans = r;

        while (l <= r)
        {
            ll mid = l + (r - l) / 2;
            if (binarysearch(mid, a, b, c) >= n)
            {
                ans = mid;
                r = mid - 1;
            }
            else
                l = mid + 1;
        }

        cout << ans << endl;
    }

    return 0;
}
