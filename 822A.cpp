#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    long long a, b, fact = 1;
    cin >> a >> b;
    long long x = min(a, b);

    while (x > 0)
    {
        fact = fact * x;
        x--;
    }
    cout << fact;

    return 0;
}