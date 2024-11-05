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
#define pb push_back
#define tc while (t--)
#define l1n for (int i = 0; i < n; i++)

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, k;
        cin >> n >> k;

        vector<pair<ll, ll>> p;
        ll a[n], b[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
        }
        for (int i = 0; i < n; i++)
        {
            p.push_back({a[i], b[i]});
        }

        ll score = 0;
        while (k--)
        {
            sort(p.begin(), p.end());
            reverse(p.begin(), p.end());
            ll mxa = p[0].first;
            ll mxb = p[0].second;

            score += mxa;
            p[0].first = max(0LL, mxa - mxb);
        }

        cout << score << endl;
    }

    return 0;
}