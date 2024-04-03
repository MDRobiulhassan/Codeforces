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

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n, x, k;
        cin >> n >> x>> k;

        if (2 * k >= x * (x + 1) && 2 * k <= n * (n + 1) - (n - x) * (n - x + 1))
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}