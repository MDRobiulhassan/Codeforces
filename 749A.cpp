#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int limit = n / 2;
    if (n % 2 == 0)
    {
        cout << limit << endl;
        for (int i = 1; i <= limit; i++)
        {
            cout << 2 << " ";
        }
    }
    else
    {
        cout << limit << endl;
        for (int i = 1; i < limit; i++)
        {
            cout << 2 << " ";
        }
        cout << 3;
    }

    cout << endl;

    return 0;
}