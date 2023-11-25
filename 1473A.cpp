#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, d, count = 0;
        cin >> n >> d;
        int a[n];

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        sort(a, a + n);
        for (int i = 0; i < n; i++)
        {
            if (a[i] <= d)
                count++;
            else
            {
                for (int j = 0; j < n - 1; j++)
                {
                    for (int k = j + 1; k < n; k++)
                    {
                        if (a[j] + a[k] <= d && i != j && j != k && k != i)
                        {
                            count++;
                            break;
                        }
                    }
                }
            }
        }
        if (count == n)
            cout << "YES";
        else
            cout << "NO";
        cout << endl;
    }

    return 0;
}