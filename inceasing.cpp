#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, i = 0, j = 0, k = 1;
        cin >> n;
        int a[n], b[n];

        for (i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        i = 0;
        while (j != n)
        {

            if (k != a[i])
            {
                b[j] = k;
                j++;
                i++;
            }

            k++;
        }
        sort(b, b + n);
        cout << b[n - 1] << endl;
    }

    return 0;
}