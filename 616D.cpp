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
    // int t;
    // cin>>t;
    int n, k;
    cin >> n >> k;

    vi a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];

    int l = 0, r = 0;
    int maxlen = 0;
    map<int, int> m;
    int li = 0, ri = 0;

    while (r < n)
    {
        m[a[r]]++;

        if (m.size() > k)
        {
            m[a[l]]--;

            if (m[a[l]] == 0)
                m.erase(a[l]);
            l++;
        }

        int len = r - l + 1;
        if (len > maxlen)
        {
            maxlen = len;
            li = l;
            ri = r;
        }
        r++;
    }

    cout << li + 1 << " " << ri + 1;

    return 0;
}