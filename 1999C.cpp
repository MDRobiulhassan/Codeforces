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
        int n, m, s;
        cin >> n >> s >> m;
        int l[n], r[n];

        for (int i = 0; i < n; i++)
        {
            cin >> l[i] >> r[i];
        }

        if (l[0] >= s)
            cout << "YES";
        else if (m - r[n - 1] >= s)
            cout << "YES";
        else
        {
            bool flag = false;
            for (int i = 1; i < n; i++)
            {
                if (l[i] - r[i - 1] >= s)
                {
                    cout << "YES";
                    flag = true;
                    break;
                }
            }
            if (!flag)
                cout << "NO";
        }
        cout << endl;
    }

    return 0;
}