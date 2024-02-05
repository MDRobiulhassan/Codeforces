#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
#define ll long long
#define vi vector<int>
#define pb push_back

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int a, b, d;
        cin >> a >> b;

        if (a > b)
        {
            d = a - b;
            if (d % 2 == 0)
                cout << 1;
            else
                cout << 2;
        }
        else if (b > a)
        {
            d = b - a;
            if (d % 2 == 0)
                cout << 2;
            else
                cout << 1;
        }
        else
            cout << 0;
        cout << endl;
    }

    return 0;
}