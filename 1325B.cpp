#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, count = 1;
        cin >> n;
        int a[n];

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        sort(a, a + n);
        for (int i = 0; i < n - 1; i++)
        {
            if (a[i] < a[i + 1])
                count++;
        }
        cout << count << endl;
    }

    return 0;
}