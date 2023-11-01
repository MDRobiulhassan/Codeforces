#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, count = 0;
        cin >> n;
        int a[n], b[n], c[n]; // Use arrays of the same size as a

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        for (int i = 0; i < n - 1; i++)
        {
            if (a[i] % a[i + 1] != 0)
            {
                b[i] = a[i];
                c[i] = a[i + 1];
                count++;
            }
        }

        if (count == 0)
        {
            cout << -1 << endl;
        }
        else
        {
            int size_b = sizeof(b) / sizeof(b[0]);
            int size_c = sizeof(c) / sizeof(c[0]);
            cout << size_b << " " << size_c << endl;
            for (int i = 0; i < count; i++)
            {
                cout << b[i] << " ";
            }
            cout << endl;
            for (int i = 0; i < count; i++)
            {
                cout << c[i] << " ";
            }
            cout << endl;
        }
    }

    return 0;
}
