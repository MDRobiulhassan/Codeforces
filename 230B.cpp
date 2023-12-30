#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

int main()
{
    int n;
    cin >> n;
    long long a[n];

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] <= 3)
            cout << "NO";
        else
        {
            for (long long j = 1; j <= sqrt(a[i]); j++)
            {
                if (a[i] % j == 0)
                {
                    count++;
                    if (j != a[i] / j)
                    {
                        count++;
                    }
                }
            }
            if (count == 3)
                cout << "YES";
            else
                cout << "NO";
        }
        cout << endl;
        count = 0;
    }

    return 0;
}