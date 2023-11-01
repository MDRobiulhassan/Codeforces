#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, flag = 0;
        cin >> n;
        int a[n];

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        sort(a, a + n);
        for (int i = 0; i < n - 2; i++)
        {
            if (a[i] == a[i + 1] && a[i + 1] == a[i + 2])
            {
                cout << a[i];
                flag = 1;
                break;
            }
        }
        if (flag == 0)
            cout << -1;
        cout << endl;
    }

    return 0;
}