#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int a, b, total;
        cin >> a >> b;

        if (a == 0)
            cout << 1 << endl;
        else
        {
            total = a + (b * 2);
            cout << total + 1 << endl;
        }
    }

    return 0;
}