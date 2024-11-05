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

    while (t--)
    {
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;

        int pf[n + 1] = {0};

        for (int i = 0; i < n; i++)
        {
            pf[i + 1] = pf[i] + (s[i] == 'W');
        }

        int ans = INT_MAX;

        for (int i = k; i <= n; i++)
        {
            ans = min(pf[i] - pf[i - k], ans);
        }

        cout << ans << endl;
    }

    return 0;
}