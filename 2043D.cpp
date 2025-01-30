#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector<int>
#define vll vector<long long>
#define vs vector<string>
#define si set<int>
#define pb push_back
#define tc while (t--)
#define l1n for (int i = 0; i < n; i++)

void solve()
{
    ll l, r, G;
    cin >> l >> r >> G;

    ll lPrime = (l + G - 1) / G;
    ll rPrime = r / G;

    if (lPrime > rPrime)
    {
        cout << "-1 -1" << endl;
        return;
    }

    ll low = 0, high = rPrime - lPrime, bestDist = -1;
    ll bestX = -1, bestY = -1;

    while (low <= high)
    {
        ll mid = (low + high) / 2;
        bool found = false;

        for (ll x = lPrime; x + mid <= rPrime; x++)
        {
            ll y = x + mid;
            if (__gcd(x, y) == 1)
            {
                found = true;
                bestX = x;
                bestY = y;
                break;
            }
        }

        if (found)
        {
            bestDist = mid;
            low = mid + 1;
        }
        else
            high = mid - 1;
    }

    if (bestX != -1)
        cout << bestX * G << " " << bestY * G << endl;
    else
        cout << "-1 -1" << endl;
}

int main()
{
    int t;
    cin >> t;
    tc
    {
        solve();
    }
    return 0;
}
