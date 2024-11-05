#include <iostream>
#include <algorithm>
#include <vector>
#include <set>
#include <map>
#include <unordered_map>
#include <cmath>
using namespace std;
#define ll long long
#define vi vector<int>
#define vll vector<long long>
#define vs vector<string>
// #define pb push_back
#define tc while (t--)
#define l1n for (int i = 0; i < n; i++)

bool numberofhamburger(ll nb, ll ns, ll nc, ll pb, ll ps, ll pc, ll r, ll mid, ll rb, ll rs, ll rc)
{
    ll ndb = max(0LL, mid * rb - nb);
    ll nds = max(0LL, mid * rs - ns);
    ll ndc = max(0LL, mid * rc - nc);

    ll total = ndb * pb + nds * ps + ndc * pc;

    return total <= r;
}

int main()
{
    // int t;
    // cin>>t;
    string s;
    cin >> s;

    ll nb, ns, nc;
    cin >> nb >> ns >> nc;

    ll pb, ps, pc;
    cin >> pb >> ps >> pc;

    ll r;
    cin >> r;

    ll rb = 0, rs = 0, rc = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == 'B')
            rb++;
        else if (s[i] == 'S')
            rs++;
        else
            rc++;
    }

    ll l = 0, h = 1e13, count = 0;
    while (l <= h)
    {
        ll mid = (l + h) / 2;

        if (numberofhamburger(nb, ns, nc, pb, ps, pc, r, mid, rb, rs, rc))
        {
            count = mid;
            l = mid + 1;
        }
        else
            h = mid - 1;
    }

    cout << count << endl;

    return 0;
}