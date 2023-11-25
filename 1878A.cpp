#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, k, count = 0;
        cin >> n >> k;
        int a[n];

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        for (int i = 0; i < n; i++)
        {
            if (a[i] == k)
            {
                count++;
                break;
            }
        }
        if (count == 0)
            cout << "NO";
        else
            cout << "YES";
        cout << endl;
    }

    return 0;
}