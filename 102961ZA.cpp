#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector<int>
#define vll vector<long long>
#define vs vector<string>
#define pb push_back
#define tc while (t--)
#define l1n for (int i = 0; i < n; i++)

int sum(vi &a, int k)
{
    int n = a.size();
    int l = 0, r = 0;
    int sum = 0;
    int count = 0;
    while (r < n)
    {
        sum += a[r];

        while (sum > k)
            sum -= a[l++];

        count += (r - l + 1);
        r++;
    }
    return count;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    // int t;
    // cin>>t;
    int n, x;
    cin >> n >> x;

    vi a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];

    cout << sum(a, x) - sum(a, x - 1);

    return 0;
}