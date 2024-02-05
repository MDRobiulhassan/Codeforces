#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int a, b, n;
    cin >> a >> b >> n;

    int i = 1, gs = 0, gas = 0, cs = 0, cas = 0;
    while (n != 0)
    {
        if (i % 2 != 0)
        {
            gs = __gcd(a, n);
            n = n - gs;
            cs++;
        }
        else
        {
            gas = __gcd(b, n);
            n = n - gas;
            cas++;
        }
        i++;
    }

    if (cs > cas)
        cout << 0;
    else
        cout << 1;
    cout << endl;

    return 0;
}