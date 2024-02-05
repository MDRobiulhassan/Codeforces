#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int a, one = 0;
        for (int i = 0; i < 4; i++)
        {
            cin >> a;
            if (a == 1)
                one++;
        }

        if (one == 0)
            cout << 0 << endl;
        else if (one < 4)
            cout << 1 << endl;
        else
            cout << one / 2 << endl;
    }

    return 0;
}