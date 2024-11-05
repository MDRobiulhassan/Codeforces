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
        ll n, k;
        cin >> n >> k;

        ll l = 1, r = k * n;
        while (l < r)
        {
            ll mid = (l + r) / 2;
            ll notdiv = mid - (mid / n);

            if (notdiv < k)
                l = mid + 1;
            else
                r = mid;
        }

        cout << l << endl;
    }

    return 0;
}