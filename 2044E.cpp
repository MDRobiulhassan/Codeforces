#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector<int>
#define vll vector<long long>
#define vs vector<string>
#define pb push_back
#define tc while (t--)
#define l1n for (int i = 0; i < n; i++)

ll countpairs(int k, ll l1, ll r1, ll l2, ll r2)
{
    vll p;
    ll cp = 1;

    while (cp <= r2)
    {
        p.push_back(cp);
        if (cp > r2 / k)
            break;
        cp *= k;
    }

    ll count = 0;
    for (ll pr : p)
    {
        ll minx = max(l1, (l2 + pr - 1) / pr);
        ll maxx = min(r1, r2 / pr);

        if (minx <= maxx)
            count += (maxx - minx + 1);
    }

    return count;
}

int main()
{
    int t;
    cin >> t;

    tc
    {
        int k;
        ll l1, r1, l2, r2;
        cin >> k >> l1 >> r1 >> l2 >> r2;

        cout << countpairs(k, l1, r1, l2, r2) << endl;
    }

    return 0;
}
