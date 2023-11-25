#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, c1 = 0, c2 = 0;
        cin >> n;
        int m = n;

        if (n % 7 == 0 && n > 10 && n < 999)
            cout << n;
        else
        {
            if (n <= 10)
            {
                n = 10;
                while (n % 7 != 0)
                {
                    n++;
                }
                cout << n;
            }
            else if (n >= 999)
            {
                n = 999;
                while (n % 7 != 0)
                {
                    n--;
                }
                cout << n;
            }
            else
            {
                while (n % 7 != 0)
                {
                    n++;
                    c1++;
                }
                while (m % 7 != 0)
                {
                    m--;
                    c2++;
                }
                if (c1 < c2)
                    cout << n;
                else
                    cout << m;
            }
        }
        cout << endl;
    }

    return 0;
}