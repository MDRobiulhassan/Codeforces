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

bool canselect(ll a[], ll mid, int n)
{
    int count = 0;
    for (int i = 0; i < n; i += 2)
    {
        if (i == n - 1 || a[i] + mid < a[i + 1])
        {

            if (count)
                return 0;
            count++;
            i--;
        }
    }
    return true;
}

int main()
{
    int t;
    cin >> t;
    tc
    {
        int n;
        cin >> n;
        ll a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        ll l = 0, r = 1e18 + 1;
        while (l + 1 < r)
        {
            ll mid = (l + r) / 2;
            if (canselect(a, mid, n))
                r = mid;

            else
                l = mid;
        }
        cout << l + 1 << endl;
    }

    return 0;
}