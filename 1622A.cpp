#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int a, b, c;
        cin >> a >> b >> c;

        if (a == b && c % 2 == 0)
            cout << "YES";
        else if (b == c && a % 2 == 0)
            cout << "YES";
        else if (c == a && b % 2 == 0)
            cout << "YES";
        else if (a + b == c || b + c == a || c + a == b)
            cout << "YES";
        else
            cout << "NO";
        cout << endl;
    }

    return 0;
}