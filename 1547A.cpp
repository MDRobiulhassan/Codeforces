#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int xa, ya, xb, yb, xf, yf, count = 1   ;
        cin >> xa >> ya;
        cin >> xb >> yb;
        cin >> xf >> yf;

        while (xa != xb ||ya != yb)
        {
            if (xa < xb)
            {
                xa++;
                // count++;
            }
            else if (xa > xb)
            {
                xa--;
                // count++;
            }
            if (ya < yb)
            {
                ya++;
                // count++;
            }
            else if (ya > yb)
            {
                ya--;
                // count++;
            }
            if (xa == xf && ya == yf)
                count += 2;
            else
                count++;
        }
        cout << count << endl;
    }

    return 0;
}