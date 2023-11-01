#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        int a, b, c, max;
        cin >> a >> b >> c;

        if (a > b && a > c)
        {
            max = a;
            a = 0;
            cout << a << " " << (max - b) + 1 << " " << (max - c) + 1;
        }
        else if (b > a && b > c)
        {
            max = b;
            b = 0;
            cout << (max - a) + 1 << " " << b << " " << (max - c) + 1;
        }
        else if (c > a && c > b)
        {
            max = c;
            c = 0;
            cout << (max - a) + 1 << " " << (max - b) + 1 << " " << c;
        }
        else if (a == b && b == c && c == a)
            cout << a + 1 << " " << b + 1 << " " << c + 1;
        cout << endl;
    }

    return 0;
}