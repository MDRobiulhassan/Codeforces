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
    int t;
    cin >> t;
    tc
    {
        int n, x;
        cin >> n >> x;
        int a[n];
        int p = 0, ans = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            ans = max(ans, a[i] - p);
            p = a[i];
        }

        cout << max(ans, 2 * (x - a[n - 1])) << endl;
    }

    return 0;
}