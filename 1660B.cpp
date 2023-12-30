#include <iostream>
#include <algorithm>
#include <set>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        int a[n], sum = 0;
        set<int> b;

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        sort(a, a + n);

        if (n == 1)
        {
            if (a[0] == 1)
                cout << "YES";
            else
                cout << "NO";
        }
        else if (a[n - 2] + 1 < a[n - 1])
            cout << "NO";
        else
            cout << "YES";

        cout << endl;
    }

    return 0;
}