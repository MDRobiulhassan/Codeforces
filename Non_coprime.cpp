#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int a, b, flag = 0, i;
        cin >> a >> b;
        int maximum = max(a, b);
        int minimum = min(a, b);

        for (i = 1; i < maximum; i++)
        {
            int GCD = __gcd(i, maximum - i);
            int sum = i + (maximum - i);

            if (GCD != 1 && (sum >= minimum && sum <= maximum))
            {
                flag = 1;
                break;
            }
        }
        if (flag != 0)
            cout << i << " " << maximum - i;
        else
            cout << "-1";
        cout << endl;
    }

    return 0;
}