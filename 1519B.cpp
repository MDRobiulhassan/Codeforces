#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, m, k, ans, x = 1, y = 1, count = 0;
        cin >> n >> m >> k;

        while (true)
        {
            if (x != n)
            {
                x++;
                count += y;
            }
            if (y != m)
            {
                y++;
                count += x;
            }
            if (x == n && y == m)
                break;
        }
        if (count == k)
            cout << "YES";
        else
            cout << "NO";
        cout << endl;

        //     if (n == m)
        //         ans = (n - 1) + (m - 1) + 1;
        //     else
        //         ans = (n - 1) + (m - 1);
        //     if (ans == k)
        //         cout << "YES";
        //     else
        //         cout << "NO";
        //     cout << endl;
    }

    return 0;
}