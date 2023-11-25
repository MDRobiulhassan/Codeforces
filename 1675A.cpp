#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c, x, y;
        cin >> a >> b >> c >> x >> y;

        int a2, b2;
        if (a < x)
            a2 = abs(x - a);
        else
            a2=0;
        if (b < y)
            b2 = abs(y - b);
        else
            b2=0;
        if (a2 + b2 <= c)
            cout << "YES";
        else
            cout << "NO";
        cout << endl;
    }

    return 0;
}