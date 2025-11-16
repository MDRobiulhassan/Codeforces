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
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;

    tc
    {
        int k;
        cin >> k;

        if (k < 0)
        {
            cout << 0 << "\n";
            continue;
        }

        ll count = 0;
        int mx = sqrt(k);

        for (int i = -mx; i <= mx; i++)
        {
            int r = k - (i * i);
            int mxy = sqrt(r);
            count += 2 * mxy + 1;
        }
        cout << count << "\n";
    }

    return 0;
}