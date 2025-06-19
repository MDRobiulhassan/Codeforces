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
        int n, k;
        cin >> n >> k;

        vll a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];

        sort(a.begin(), a.end());

        ll mx = a[n - 1];
        ll sum = 0;

        for (int i = 0; i < n - 1; i++)
        {
            sum += max(0LL, a[i] - (mx - k));
        }

        if (sum % 2 == 1)
            cout << "Tom";
        else
            cout << "Jerry";

        cout << '\n';
    }

    return 0;
}
