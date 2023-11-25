#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        long long a, b, k, sum = 0;
        cin >> a >> b >> k;
        long long diva, divb;

        if (k % 2 != 0)
        {
            diva = k / 2 + 1;
            divb = k / 2;
        }
        else
        {
            diva = k / 2;
            divb = k / 2;
        }

        long long ans = (a * diva) - (b * divb);

        cout << ans << endl;
    }

    return 0;
}