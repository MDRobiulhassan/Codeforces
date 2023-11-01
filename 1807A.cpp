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

        if (c == a + b)
            cout << "+";
        else if (c == a - b)
            cout << "-";
        cout << endl;
    }

    return 0;
}