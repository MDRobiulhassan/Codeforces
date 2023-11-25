#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int xa, ya, xb, yb, xf, yf;
        cin >> xa >> ya;
        cin >> xb >> yb;
        cin >> xf >> yf;

        int ans = abs(xa - xb) + abs(ya - yb);

        if ((xa == xb && xa == xf && min(ya, yb) < yf && yf < max(ya, yb)) ||
            (ya == yb && ya == yf && min(xa, xb) < xf && xf < max(xa, xb)))
            ans += 2;

        cout << ans << endl;
    }

    return 0;
}
