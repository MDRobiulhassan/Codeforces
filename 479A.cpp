#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;

    int x = a + b * c, y = a * (b + c), z = a * b * c, m = (a + b) * c;
    cout << max({x, y, z, m});

    return 0;
}
