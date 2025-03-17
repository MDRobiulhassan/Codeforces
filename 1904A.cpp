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
        int a, b;
        cin >> a >> b;
        int xk, yk;
        cin >> xk >> yk;
        int xq, yq;
        cin >> xq >> yq;

        vector<pair<int, int>> pos = {{a, b}, {a, -b}, {-a, b}, {-a, -b}, {b, a}, {b, -a}, {-b, a}, {-b, -a}};

        set<pair<int, int>> at1, at2;
        for (auto it : pos)
        {
            int n = xk + it.first;
            int m = yk + it.second;
            at1.insert(make_pair(n, m));

            n = xq + it.first;
            m = yq + it.second;
            at2.insert(make_pair(n, m));
        }

        int ans = 0;
        for (auto it : at1)
        {
            if (at2.find(it) != at2.end())
                ans++;
        }

        cout << ans << endl;
    }

    return 0;
}