#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        long n;
        cin >> n;
        cout << (n - 1) / 2;
        cout << endl;
    }

    return 0;
}