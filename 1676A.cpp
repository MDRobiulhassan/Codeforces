#include <iostream>
using namespace std;

int main()
{
    int t, n, r, sum1 = 0, sum2 = 0, i, j;
    cin >> t;

    for (i = 1; i <= t; i++)
    {
        cin >> n;
        int num = n;

        for (int j = 1; j <= 6; j++)
        {
            r = n % 10;
            if (j <= 3)
                sum1 = sum1 + r;

            else
                sum2 = sum2 + r;

            n = n / 10;
        }
        if (sum1 == sum2)
            cout << "YES";
        else
            cout << "NO";

        cout << endl;
        sum1 = 0;
        sum2 = 0;
    }
}