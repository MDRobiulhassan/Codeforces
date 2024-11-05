#include <iostream>
using namespace std;

void solve()
{
    long long x;
    cin >> x;

    bool possible = true;

    while (x > 0)
    {
        int digit = x % 10;
        // Check if the digit can be formed by summing two large digits
        if (digit < 10)
        {
            possible = false;
            break;
        }
        x /= 10;
    }

    if (possible)
    {
        cout << "YES\n";
    }
    else
    {
        cout << "NO\n";
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}
