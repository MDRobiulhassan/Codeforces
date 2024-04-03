#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
#define ll long long
#define vi vector<int>
#define pb push_back

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        ll a, b, x, y;
        cin >> x >> y;
        cin >> a >> b;

        b = min(b, a * a);
        int diff = abs(x - y);
        ll ans;
        // cout<<diff;
        if (x > y)
        {
            int temp = x;
            x = y;
            y = temp;
        }

        ans = y * b + diff * a;
        cout << ans << endl;
    }
    return 0;
}