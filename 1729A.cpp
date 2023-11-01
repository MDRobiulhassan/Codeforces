#include <iostream>
using namespace std;

int main()
{
    int a, b, c, t;
    cin >> t;

    while (t--)
    {
        cin >> a >> b >> c;

        int ma = a - 1;
        int mb =abs(b - c) +  abs(c - 1);

        if (ma < mb)
            cout << 1;
        else if (mb < ma)
            cout << 2;
        else if (ma == mb)
            cout << 3;
        cout << endl;
    }

    return 0;
}