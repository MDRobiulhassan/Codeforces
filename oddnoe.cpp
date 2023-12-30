#include <iostream>
#include <algorithm>
#include <set>
using namespace std;

int main()
{
    set<int> s;
    int t;
    cin >> t;

    while (t--)
    {
        int a, b, c;
        cin >> a >> b >> c;

        if (a == b)
            cout << c;
        else if (b == c)
            cout << a;
        else
            cout << b;
        cout << endl;
    }
    return 0;
}