#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int a, b, c;
        cin >> a >> b >> c;

        int avg = (a + b + c) / 3;

        if (avg % 2 != 0)
            cout << "First";
        else
            cout << "Second";
        cout << endl;
    }

    return 0;
}