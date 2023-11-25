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
        sort(a, a + n);

        for (int i = 0; i < n - 1; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                if (a[i] == a[j])
                {
                    b[i] = 1;
                    b[j] = 2;
                }
                if (a[i] == a[j])
                {
                    b[i] = 1;
                    b[j] = 3;
                }
                if (a[i] == a[j])
                {
                    b[i] = 2;
                    b[j] = 3;
                }
            }
        }
        if (sizeof(b) / sizeof(b[0]) == n)
        {
            for (int i = 0; i < n; i++)
            {
                cout << b[i] << " ";
            }
        }
        else
            cout << -1;
        cout << endl;
    }

    return 0;
}