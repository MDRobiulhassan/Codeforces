#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int x, a, b, c;
        cin >> x >> a >> b >> c;

        if (x == 1)
        {
            if (a == 0)
                cout << "NO";
            else
            {
                if (a == 2 && b == 3)
                    cout << "YES";
                else if (a == 3 && c == 2)
                    cout << "YES";
                else
                    cout << "NO";
            }
        }
        else if (x == 2)
        {
            if (b == 0)
                cout << "NO";
            else
            {
                if (b == 1 && a == 3)
                    cout << "YES";
                else if (b == 3 && c == 1)
                    cout << "YES";
                else
                    cout << "NO";
            }
        }
        else if (x == 3)
        {
            if (c == 0)
                cout << "NO";
            else
            {
                if (c == 1 && a == 2)
                    cout << "YES";
                else if (c == 2 && b == 1)
                    cout << "YES";
                else
                    cout << "NO";
            }
        }
        cout << endl;
    }

    return 0;
}