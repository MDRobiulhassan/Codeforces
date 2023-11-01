#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;

    for (int i = 1; i <= t; i++)
    {
        int a, b, c;
        cin >> a >> b >> c;

        if (a > b && a > c)
        {
            if (b > c)
                cout << b;
            else
                cout << c;
        }
        else if (b > a && b > c)
        {
            if (a > c)
                cout << a;
            else
                cout << c;
        }
        else if (c > a && c > b)
        {
            if (a > b)
                cout << a;
            else
                cout << b;
        }

        cout << endl;
    }

    return 0;
}