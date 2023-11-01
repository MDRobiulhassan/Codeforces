#include <iostream>
using namespace std;

int main()
{
    int t, a[4];
    cin >> t;

    for (int i = 1; i <= t; i++)
    {
        int max1 = 0, max2 = 0, comp1 = 0, comp2 = 0;
        for (int j = 0; j < 4; j++)
        {
            cin >> a[j];
        }
        if (a[0] > a[1])
        {
            max1 = a[0];
            comp1 = a[1];
        }
        else
        {
            max1 = a[1];
            comp1 = a[0];
        }
        if (a[2] > a[3])
        {
            max2 = a[2];
            comp2 = a[3];
        }
        else
        {
            max2 = a[3];
            comp2 = a[2];
        }
        if (comp2 > max1 || comp1 > max2)
            cout << "NO";
        else
            cout << "YES";
        cout << endl;
    }

    return 0;
}