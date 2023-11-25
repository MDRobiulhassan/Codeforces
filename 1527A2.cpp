#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        int ans = 1;

        while (n > 1)
        {
            n >>= 1;
            ans <<= 1;
        }
        cout << ans - 1 << endl;
    }

    return 0;
}
