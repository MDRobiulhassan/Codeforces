#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int a, b, c, n;
        cin >> a >> b >> c >> n;

        int maximum = max({a, b, c});
        int d = (maximum - a) + (maximum - b) + (maximum - c);

        if (d <= n && (n - d) % 3 == 0)
        {
            cout << "YES";
        }
        else
        {
            cout << "NO";
        }
        cout << endl;
    }

    return 0;
}
