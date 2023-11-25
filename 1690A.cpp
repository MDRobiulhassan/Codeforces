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
        int n;
        cin >> n;
        int h2 = ceil(n / 3) + 1, h1 = (n / 2), h3 = n - (h1 + h2);

        cout << h2 << " " << h1 << " " << h3 << endl;
    }

    return 0;
}