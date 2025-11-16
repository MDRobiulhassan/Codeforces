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
    int n;
    cin >> n;

    vi a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];

    sort(a.begin(), a.end());

    vi s;
    for (int i = 0; i < n; i++)
    {
        bool flag = false;
        for (int j = 0; j < s.size(); j++)
        {
            if (s[j] <= a[i])
            {
                s[j]++;
                flag = true;
                break;
            }
        }
        if (!flag)
            s.pb(1);
    }
    cout << s.size() << '\n';

    return 0;
}