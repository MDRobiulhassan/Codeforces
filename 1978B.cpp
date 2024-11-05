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
        ll n, a, b;
        cin >> n >> a >> b;

        if (a >= b)
            cout << n * a;
        else
        {
            ll diff = min(b - a, n);
            ll ans = diff * (b + (b - diff + 1)) / 2;
            ans += (n - diff) * a;
            cout << ans;
        }

        cout << endl;
    }

    return 0;
}