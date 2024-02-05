#include <iostream>
#include <algorithm>
using namespace std;
#define ll long long

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, k;
        cin >> n >> k;

        ll fn = n, sum = 0, div = 0;
        if (n % 2 == 0)
            cout << n + 2 * k;
        else
        {
            for (ll i = n; i >= 2; i--)
            {
                if (n % i == 0)
                    div = i;
            }
            cout << n + div + 2 * (k - 1);
        }
        cout << endl;
    }
    return 0;
}