#include <iostream>
using namespace std;

int main()
{
    int t, n;
    cin >> t;

    for (int i = 1; i <= t; i++)
    {
        int sum1 = 0, sum2;
        cin >> n;
        int a[n];
        for (int j = 0; j < n; j++)
        {
            cin >> a[j];
        }
        for (int j = 0; j < n; j++)
        {
            if (a[j] == 1)
                sum1++;
            else
                sum2++;
        }
        if (sum1 != 0 || sum2 != 0)
        {
            if (sum1 % 2 == 0 && sum2 % 2 == 0)
                cout << "YES";
            else
                cout << "NO";
        }
        else
            cout << "NO";

        cout << endl;
    }
}