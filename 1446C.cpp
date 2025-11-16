//Not solved
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
        ll n, w;
        cin >> n >> w;

        vector<pair<ll, int>> b(n);
        for (int i = 0; i < n; i++)
        {
            cin >> b[i].first;
            b[i].second = i + 1;
        }

        sort(b.begin(), b.end());

        ll sum = 0;
        vector<int> pos;

        for (int i = 0; i < n; i++)
        {
            if (b[i].first > w)
                continue;
            sum += b[i].first;
            pos.push_back(b[i].second);

            if (sum >= (w + 1) / 2)
                break;
        }

        if (sum >= (w + 1) / 2 && sum <= w)
        {
            cout << pos.size() << '\n';
            for (auto it : pos)
                cout << it << " ";
            cout << '\n';
        }
        else
            cout << -1 << '\n';
    }

    return 0;
}