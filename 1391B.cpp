#include <iostream>
#include <algorithm>
#include <vector>
#include <set>
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
        char c[n][m];
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cin >> c[i][j];
            }
        }

        int r = 0, d = 0;
        for (int i = 0; i < n - 1; i++)
        {
            if (c[i][m - 1] == 'R')
                r++;
        }
        for (int j = 0; j < m - 1; j++)
        {
            if (c[n - 1][j] == 'D')
                d++;
        }
        cout << r + d << endl;
    }

    return 0;
}