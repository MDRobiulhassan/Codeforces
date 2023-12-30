#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int d1, d2, d3;
    cin >> d1 >> d2 >> d3;

    int d = min(d1, d2 + d3) + min(d2, d3 + d1) + min(d3, d1 + d2);
    cout << d << endl;

    return 0;
}