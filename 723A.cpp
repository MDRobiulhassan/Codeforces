#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int x, y, z, mid;
    cin >> x >> y >> z;

    if ((x > y && x < z) || (x < y && x > z))
        mid = x;
    else if ((y > x && y < z) || (y < x && y > z))
        mid = y;
    else
        mid = z;

    int distance = abs(mid-x)+abs(mid-y)+abs(mid-z);

    cout << distance << endl;

    return 0;
}