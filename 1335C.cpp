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
        vi a(n);
        set<int> s;
        map<int, int> m;

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            s.insert(a[i]);
            m[a[i]]++;
        }

        int dis = s.size();
        int mx = -1;
        for (auto it : m)
            mx = max(mx, it.second);

        cout << min(dis, mx) - (dis == mx) << '\n';
    }

    return 0;
}