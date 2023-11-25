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
        int a[n], b[n], c[n];

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            b[i] = a[i];
        }
        sort(b, b + n);
        int max = b[n - 1], max2 = b[n - 2];
        for (int i = 0; i < n; i++)
        {
            if (a[i] == b[n - 1])
                c[i] = a[i] - max2;
            else
                c[i] = a[i] - max;
        }
        for (int i = 0; i < n; i++)
        {
            cout << c[i] << " ";
        }
        cout << endl;
    }

    return 0;
}