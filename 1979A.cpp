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
        int n;
        cin >> n;
        vi a(n);

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        int ans = INT_MAX;
        for (int i = 0; i < n - 1; i++)
        {
            ans = min(ans, max(a[i], a[i + 1]));
        }

        cout << ans - 1 << endl;
    }
    return 0;
}