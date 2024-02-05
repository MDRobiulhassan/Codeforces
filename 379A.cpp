#include <iostream>
using namespace std;

int main()
{
    int a, b, d, r;
    cin >> a >> b;
    int h = a;

    while (a >= b)
    {
        d = a / b;
        h += d;
        r = a % b;
        a = d + r;
    }

    cout << h << endl;
    return 0;
}