#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, sum = 0;
        cin >> n;
        int a[n];

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int *minimum = min_element(a, a + n);
        // cout << *minimum;

        for (int i = 0; i < n; i++)
        {
            sum = sum + abs(*minimum - a[i]);
        }
        cout << sum << endl;
    }

    return 0;
}