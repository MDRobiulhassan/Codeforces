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
    int n, l;
    cin >> n >> l;

    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a, a + n);
    int sb = a[0], lb = l - a[n - 1];

    int maxdis = 0;
    for (int i = 1; i < n; i++)
    {
        maxdis = max(maxdis, a[i] - a[i - 1]);
    }

    double ans = max(sb, lb);
    double mxd = maxdis / 2.0;
    ans = max(ans, mxd);

    cout << fixed << ans << endl;

    return 0;
}