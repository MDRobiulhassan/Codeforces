#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;
#define ll long long

int main()
{
    int n, m, a;
    cin >> n >> m >> a;

    ll ans = ceil(double(n) / a) * ceil(double(m) / a);
    cout << ans << endl;

    return 0;
}