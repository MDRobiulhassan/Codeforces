#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int x, n, m;
        cin >> x >> n >> m;

        while (n > 0 && x > 20)
        {
            x = x / 2 + 10;
            n--;
        }

        while (m > 0)
        {
            x -= 10;
            m--;
        }

        if (x <= 0)
            cout << "YES";
        else
            cout << "NO";

        cout << endl;
    }

    return 0;
}
