#include <iostream>
using namespace std;

int main()
{
    int t, n;
    cin >> t;

    while (t--)
    {
        int a[5];
        int d = 0, rem = 0;

        cin >> n;

        if (n >= 1000)
        {
            rem = n % 1000;
            a[d++] = n - rem;
            n %= 1000;
        }
        if (n >= 100)
        {
            rem = n % 100;
            a[d++] = n - rem;
            n %= 100;
        }
        if (n >= 10)
        {
            rem = n % 10;
            a[d++] = n - rem;
            n %= 10;
        }
        if (n < 10 && n > 0)
        {
            a[d++] = n;
        }

        cout << d << endl;
        for (int i = 0; i < d; i++)
        {
            cout << a[i] << " ";
        }
        cout << endl;
    }

    return 0;
}
