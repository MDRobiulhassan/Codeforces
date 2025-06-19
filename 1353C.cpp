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
        int n;
        cin >> n;

        ll sum = 0;
        ll m = (n - 1) / 2;
        for (ll i = 1; i <= m; i++)
            sum += (i * i);

        cout << 8 * sum << '\n';
    }

    return 0;
}