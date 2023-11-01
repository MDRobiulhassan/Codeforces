#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, GCD = 0, max = 0;
        cin >> n;

        for (int i = 1; i <= n; i++)
        {
            for (int j = i + 1; j <= n; j++)
            {
                GCD = __gcd(i, j);
                if (GCD > max)
                    max = GCD;
            }
        }
        cout << max << endl;
    }

    return 0;
}