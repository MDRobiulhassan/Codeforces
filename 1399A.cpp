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
        int a[n], count = n, flag = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        if (n == 1)
            cout << "YES" << endl;

        else
        {
            sort(a,a+n);
            for (int i = 0; i < n - 1; i++)
            {
                if (abs(a[i] - a[i + 1]) <= 1)
                {
                    a[i] = a[i + 1];
                    count--;
                }

                if (count == 1)
                {
                    flag = 1;
                    break;
                }
            }
            if (flag == 1)
                cout << "YES";
            else
                cout << "NO";

            cout << endl;
        }
    }

    return 0;
}