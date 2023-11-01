#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;

    for (int i = 1; i <= t; i++)
    {
        long n, sum1 = 0, sum2 = 0;
        cin >> n;

        if (n % 4 != 0)
            cout << "NO" << endl;
        else
        {
            cout << "YES" << endl;
            for (int j = 2; j <= n; j += 2)
            {
                cout << j << " ";
                sum1 = sum1 + j;
            }
            for (int j = 1; j < n - 2; j += 2)
            {
                cout << j << " ";
                sum2 = sum2 + j;
            }
            cout << sum1 - sum2 << endl;
        }
    }
}