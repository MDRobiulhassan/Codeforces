#include <iostream>
#include <algorithm>
#include <vector>
#include <set>
#include <cmath>
using namespace std;
#define ll long long
#define vi vector<int>
#define vll vector<long long>
#define vs vector<string>
#define pb push_back
const int N = 1e5;
vll pf(N);

int main()
{
    // for (int i = 1; i <= N; i++)
    // {
    //     double st = sqrt(double(i));
    //     if (st * st == i)
    //         pf[i] = pf[i - 1] - i;
    //     else
    //         pf[i] = pf[i - 1] + i;
    // }
    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        ll ans = n * (n + 1) / 2;
        ll a = 1;
        while (a <= n)
        {
            ans -= a * 2;
            a *= 2;
        }
        cout << ans << endl;
    }

    return 0;
}