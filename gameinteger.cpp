#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        if (n % 3 == 0)
            cout << "Second";
        else
            cout << "First";
        cout << endl;
    }

    return 0;
}