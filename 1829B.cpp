#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, count = 0, j = 0;
        cin >> n;
        int a[n];
        string s;

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++)
        {
            if (a[i] == 0)
                count++;
            else
                count = 0;
            if (count > j)
                j = count;
        }

        cout << j << endl;
    }

    return 0;
}