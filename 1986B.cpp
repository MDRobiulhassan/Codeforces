#include <iostream>
#include <algorithm>
#include <vector>
#include <set>
#include <map>
#include <unordered_map>
#include <climits>
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
        int a[n][m];

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cin >> a[i][j];
            }
        }

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                int mx = INT_MIN;

                if (i > 0)
                    mx = max(mx, a[i - 1][j]);

                if (i < n - 1)
                    mx = max(mx, a[i + 1][j]);

                if (j > 0)
                    mx = max(mx, a[i][j - 1]);

                if (j < m - 1)
                    mx = max(mx, a[i][j + 1]);

                if (a[i][j] > mx)
                    a[i][j] = mx;
            }
        }

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cout << a[i][j] << " ";
            }
            cout << endl;
        }
    }

    return 0;
}