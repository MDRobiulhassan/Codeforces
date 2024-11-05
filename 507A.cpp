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
    int n, k;
    cin >> n >> k;
    vi a(n);

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    vi pos;
    ll sum = 0;
    while (sum <= k && a.size() != 0)
    {
        auto it = min_element(a.begin(), a.end());
        int i = distance(a.begin(), it);
        int mv = *it;
        sum += (*it);
        if (sum <= k)
        {
            pos.pb(i);
            a[i] = INT_MAX;
        }
    }

    cout << pos.size() << endl;
    for (auto it : pos)
    {
        cout << it + 1 << " ";
    }

    return 0;
}