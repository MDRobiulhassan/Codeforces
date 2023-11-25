#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        int a[n], b[n];

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
        }

        int maxa = -1, maxb = -1, x, y;
        for (int i = 0; i < n; i++)
        {
            if (a[i] < b[i])
            {
                x = a[i];
                y = b[i];
            }
            else
            {
                x = b[i];
                y = a[i];
            }

            if (maxa < x)
                maxa = x;
            if (maxb < y)
                maxb = y;
        }
        cout << maxa * maxb << endl;
    }

    return 0;
}