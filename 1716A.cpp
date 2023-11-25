#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, ans = 0;
        cin >> n;

        if (n == 1)
            ans = 2;
        else if (static_cast<double>(n / 2) < static_cast<double>(n / 3))
            ans = ceil(static_cast<double>(n) / 2);
        else
            ans = ceil(static_cast<double>(n) / 3);

        cout << ans << endl;
    }

    return 0;
}
