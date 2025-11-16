#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector<int>
#define vll vector<long long>
#define pb push_back

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n;
    cin >> n;

    vi a(n);
    int mx = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        mx = max(mx, a[i]);
    }

    vll freq(mx + 1, 0);
    for (int i = 0; i < n; i++)
        freq[a[i]]++;

    vll p(mx + 1, 0);
    for (int i = 0; i <= mx; i++)
        p[i] = i * freq[i];

    vll dp(mx + 1, 0); 

    if (mx >= 1)
        dp[1] = p[1];

    for (int i = 2; i <= mx; i++)
        dp[i] = max(dp[i - 1], dp[i - 2] + p[i]);

    cout << dp[mx];
    return 0;
}
