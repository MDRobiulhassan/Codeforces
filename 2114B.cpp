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

        string s;
        cin >> s;

        int z = count(s.begin(), s.end(), '0');
        int o = n - z;

        int m = n / 2;
        int mx = (z / 2) + (o / 2);

        if (k <= m && k <= mx)
            cout << "YES";
        else
            cout << "NO";
        cout << '\n';
    }

    return 0;
}