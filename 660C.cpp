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
    int z = 0, maxlen = 0;
    int li = 0;

    while (r < n)
    {
        if (a[r] == 0)
            z++;

        while (z > k)
        {
            if (a[l] == 0)
                z--;
            l++;
        }

        if (r - l + 1 > maxlen)
        {
            maxlen = r - l + 1;
            li = l;
        }
        r++;
    }

    for (int i = li; i < li + maxlen; i++)
        a[i] = 1;

    cout << maxlen << '\n';
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";

    return 0;
}