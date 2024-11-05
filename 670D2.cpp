#include <iostream>
#include <algorithm>
#include <vector>
#include <set>
#include <map>
#include <unordered_map>
#include <climits>
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
    // int t;
    // cin>>t;
    ll n;
    ll k;
    cin >> n >> k;

    ll a[n], b[n],mx=INT_MIN;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        mx=max(a[i],mx);

    }
    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
    }

    ll l = 0, h = INT_MAX/mx;
    ll count = 0;
    while (l <= h)
    {
        ll mid = (l + h) / 2;
        ll nd = k;

        for (int i = 0; i < n; i++)
        {
            nd -= max(0LL, a[i] * mid - b[i]);
        }
        if (nd < 0)
            h = mid - 1;
        else
            l = mid + 1;
    }

    cout << l-1;

    return 0;
}