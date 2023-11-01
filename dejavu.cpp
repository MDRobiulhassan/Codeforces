#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, q;
        cin >> n >> q;
        int a[n], x[q];

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < q; i++)
        {
            cin >> x[i];
        }
        for (int i = 0; i < q; i++)
        {
            if (x[i] <= 30)
            {
                int p = pow(2, x[i]);
                for (int j = 0; j < n; j++)
                {
                    if (a[j] % p == 0)
                        a[j] = a[j] + pow(2, x[i] - 1);
                }
            }
        }
        for (int i = 0; i < n; i++)
        {
            cout << a[i] << " ";
        }
        cout << endl;
    }

    return 0;
}