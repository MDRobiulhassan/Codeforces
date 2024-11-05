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
        ll x, y, k;
        cin >> x >> y >> k;

        while (k>0 && x != 1)
        {
            ll s = (x / y + 1) * y - x;

            s = max(1LL, s);
            s = min(k, s);

            x += s;

            while (x % y == 0)
                x /= y;
            k -= s;
        }

        cout << x + k % (y - 1) << endl;
    }

    return 0;
}