//Not solved

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        vector<pair<int, int>> a;
        for (int i = 0; i < n; i++)
        {
            int x, y;
            cin >> x >> y;
            a.push_back({x, y});
        }
        sort(a.begin(), a.end());

        int u = 0, l = 0, r = 0, d = 0;
        for (int i = 1; i < n; i++)
        {
            if (a[i].first > a[i - 1].first)
            {
                r++;
                a[i].first++;
            }
            else if (a[i].first < a[i - 1].first)
            {
                l++;
                a[i].first--;
            }

            if (a[i].second > a[i - 1].second)
            {
                u++;
                a[i].second++;
            }
            else if (a[i].second < a[i - 1].second)
            {
                d++;
                a[i].second--;
            }
        }

        if (u != 0 && r != 0 && l != 0 && d != 0)
            cout << "NO";
        else
            cout << "YES";
        cout << endl;
    }

    return 0;
}