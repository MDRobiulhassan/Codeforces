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

        int a[n];

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        sort(a, a + n);

        bool isIncreasing = true;

        for (int i = 1; i < n; i++)
        {
            if (a[i] == a[i - 1])
            {
                isIncreasing = false;
                break;
            }
        }

        if (isIncreasing)
            cout << "YES";
        else
            cout << "NO";

        cout << endl;
    }

    return 0;
}
