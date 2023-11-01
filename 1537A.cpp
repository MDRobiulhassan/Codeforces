#include <iostream>
#include <algorithm>
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
            sum += a[i];
        }
        int result;
        if (sum >= n)
            result = sum - n;
        else
            result = 1;

        cout << result << endl;
    }

    return 0;
}