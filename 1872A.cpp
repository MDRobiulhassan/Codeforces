#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        float a, b, c;
        cin >> a >> b >> c;

        float avg = (a + b) / 2;
        float req = abs(avg - a);
        float move = req / c;
        cout << ceil(move) << endl;
    }

    return 0;
}