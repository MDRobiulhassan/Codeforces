#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, k;
        cin >> n >> k;

        if (n < k)
            cout << k - n;
        else if (n % 2 == k % 2)
            cout << 0;
        else
            cout << 1;
        cout << endl;
    }

    return 0;
}