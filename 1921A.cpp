#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
#define ll long long
#define vi vector<int>
#define pb push_back

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        vector<pair<int, int>> a;
        for (int i = 1; i <= 4; i++)
        {
            int x, y;
            cin >> x >> y;
            a.pb(make_pair(x, y));
        }

        sort(a.begin(), a.end());
        // cout << endl;
        // for (auto &p : a)
        // {
        //     cout << p.first << " " << p.second << endl;
        // }
        int x = abs(a[0].second - a[1].second);
        int y = abs(a[2].second - a[3].second);

        cout << x * y << endl;
    }

    return 0;
}