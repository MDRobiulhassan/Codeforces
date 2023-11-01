#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;

    for (int i = 1; i <= t; i++)
    {
        int n, q, x, y, count = 0;
        cin >> n;
        int a[n];
        for (int j = 0; j < n; j++)
        {
            cin >> a[j];
        }
        cin >> q;
        int c[q];
        for (int j = 0; j < q; j++)
        {
            cin >> x >> y;
            for (int k = 0; k < n - 1; k++)
            {
                for (int l = k + 1; l < n; l++)
                {
                    if ((a[k] + a[l] == x) && (a[k] * a[l] == y))
                        count++;
                }
            }
            c[j] = count;
            count = 0;
        }

        for (int j = 0; j < q; j++)
        {
            cout << c[j] << " ";
        }
        cout << endl;
    }

    return 0;
}