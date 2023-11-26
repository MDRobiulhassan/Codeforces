//Time limit Exceed

#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        long n;
        cin >> n;
        long a[n];

        for (long i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        sort(a, a + n);

        long sum = 0;
        for (long i = 0; i < n - 2; i++)
        {
            for (long j = i + 1; j < n - 1; j++)
            {
                for (long k = j + 1; k < n; k++)
                {
                    sum = sum + __gcd(a[i], a[j]);
                }
            }
        }

        cout << sum << endl;
    }

    return 0;
}