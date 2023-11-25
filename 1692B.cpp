#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, count = 0;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        sort(a, a + n);
        for (int i = 0; i < n - 1; i++)
        {
            if (a[i] == a[i + 1])
                count++;
        }
        if (count % 2 == 0)
            cout << n - count;
        else
            cout << n - count - 1;
        cout << endl;
    }
    return 0;
}