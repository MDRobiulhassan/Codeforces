#include <iostream>
#include <algorithm>
#include <vector>
#include <set>
#include <map>
#include <unordered_map>
#include <cmath>
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
        vector<int> a, b;

        for (int i = 0; i < n; i++)
        {
            int in;
            cin >> in;
            a.pb(in);
        }
        for (int i = 0; i < n + 1; i++)
        {
            int in;
            cin >> in;
            b.pb(in);
        }

        // sort(a.begin(), a.end());
        // sort(b.begin(), b.end());

        ll count = 0;
        int mn = INT_MAX;
        for (int i = 0; i < n; i++)
        {
            count += abs(a[i] - b[i]);
            mn = min(mn, abs(a[i] - b[n]));
            mn = min(mn, abs(b[i] - b[n]));

            if (min(a[i], b[i]) <= b[n] && b[n] <= max(a[i], b[i]))
                mn = 0;
        }

        cout << count + mn + 1 << endl;
    }

    return 0;
}