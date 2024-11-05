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
    // int t;
    // cin>>t;
    int n, x, y;
    cin >> n >> x >> y;
    vector<int> a(n + 1);

    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }

    int ans = -1;

    for (int i = 1; i <= n; i++)
    {
        bool flag = true;

        for (int j = max(1, i - x); j < i; j++)
        {
            if (a[j] < a[i])
            {
                flag = false;
                break;
            }
        }

        for (int j = i + 1; j <= min(n, i + y); j++)
        {
            if (a[j] < a[i])
            {
                flag = false;
                break;
            }
        }

        if (flag)
        {
            ans = i;
            break;
        }
    }

    cout << ans << endl;

    return 0;
}