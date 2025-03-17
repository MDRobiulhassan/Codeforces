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
    int n, k;
    cin >> n >> k;
    vi a(n), pf(n + 1);
    pf[0] = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        pf[i + 1] = pf[i] + a[i];
    }

    int ans = INT_MAX, ind = -1;
    for (int i = 0; i <= n - k; i++)
    {
        int sum = pf[i + k] - pf[i];
        if (sum < ans)
        {
           ans = sum;
            ind = i + 1;
        }
    }

    cout << ind;

    return 0;
}