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

        for (int i = 0; i < n; i++)
            cin >> a[i];

        ll count = 0;
        ll mxval=a[n-1];
        

        for (int i = 2; i < n; i++)
        {
            ll mx = max(a[i], mxval - a[i]);
            ll l = 0, r = i - 1;

            while (l < r)
            {
                if (a[l] + a[r] <= mx)
                    l++;
                else
                {
                    ll len = r - l;
                    count += len;
                    r--;
                }
            }
        }

        cout << count << '\n';
    }

    return 0;
}