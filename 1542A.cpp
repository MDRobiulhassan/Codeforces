#include <iostream>
using namespace std;

int main()
{
    int t, n, odd = 0, even = 0;
    cin >> t;

    while (t--)
    {
        cin >> n;
        int a[2 * n];

        for (int i = 0; i < 2 * n; i++)
        {
            cin >> a[i];
            if (a[i] % 2 == 0)
                even++;
            else
                odd++;
        }
        if (even == odd)
            cout << "Yes";
        else
            cout << "No";
        cout << endl;
        even = 0;
        odd = 0;
    }

    return 0;
}