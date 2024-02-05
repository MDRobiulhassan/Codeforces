#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int l, r, a;
        cin >> l >> r >> a;

        int fx = r / a + r % a;
        int m = r / a * a - 1;

        if (m >= l)
        {
            fx = max(fx, m / a + m % a);
        }

        cout << fx << endl;
    }

    return 0;
}
