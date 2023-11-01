#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;

    for (int i = 1; i <= t; i++)
    {
        int c1 = 0, c2 = 0, n;
        cin >> n;

        if (n % 3 == 0)
        {
            cout << n / 3 << " " << n / 3;
        }
        else
        {
            c1 = c2 = n / 3;
            if ((c1 + 1) + 2 * c2 == n)
                cout << c1 + 1 << " " << c2;
            else
                cout << c1 << " " << c2 + 1;
        }
        cout << endl;
    }

    return 0;
}