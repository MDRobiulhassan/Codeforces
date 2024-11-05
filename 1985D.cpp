#include <iostream>
#include <algorithm>
#include <vector>
#include <set>
#include <map>
#include <unordered_map>
#include <cmath>
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
        int n, m;
        cin >> n >> m;

        vector<pair<int, int>> a;
        char s[n][m];
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cin >> s[i][j];
                if (s[i][j] == '#')
                    a.pb({i, j});
            }
        }

        if (a.size() == 1)
            cout << a[0].first + 1 << " " << a[0].second + 1;
        else
        {
            int ind = a.size() / 2;
            cout << a[ind].first + 1 << " " << a[ind].second + 1;
        }
        cout << endl;

        //     int count = 0, maxhash = 0, row = 0;

        //     for (int i = 0; i < n; i++)
        //     {
        //         count = 0;
        //         for (int j = 0; j < m; j++)
        //         {
        //             if (s[i][j] == '#')
        //                 count++;
        //         }

        //         if (count >= maxhash)
        //         {
        //             maxhash = count;
        //             row = i;
        //         }
        //     }

        //     if(maxhash==1)
        //         maxhash=ceil(double(m)/2);
        //     else
        //         maxhash=ceil(double(maxhash)/2);
        //     cout << row + 1 << " " << maxhash << endl;
        //
    }

    return 0;
}