#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;
#define ll long long

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int a, b;
        cin >> a >> b;

        double ans = pow(min(max(2 * a, b), max(2 * b, a)), 2);
        cout << ans << endl;
    }

    return 0;
}