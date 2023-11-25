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
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        sort(a, a + n);
        int sum = 0;
        int i = 0;
        while (i < n / 2)
        {
            sum += (a[n - i - 1] - a[i]);
            i++;
        }
        cout << sum << endl;
    }
    return 0;
}