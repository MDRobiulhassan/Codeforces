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

        vi a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];

        sort(a.begin(), a.end());

        int count = 0, l = 0, r = n - 1;

        while (l < r)
        {
            if (a[l] + a[r] == k)
            {
                l++, r--;
                count++;
            }

            else if (a[l] + a[r] < k)
                l++;
            else
                r--;
        }

        cout << count << '\n';
    }

    return 0;
}