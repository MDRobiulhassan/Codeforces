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
        int a[n], sum1 = 0, sum2 = 0;

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int limit = n / 2 + 1;
        for (int i = 0; i < n; i++)
        {
            if (i < limit)
                sum1 += a[i];
            else
                sum2 += a[i];
        }
        cout << abs(sum1 - sum2) << endl;
        // sort(a, a + n);
        // for (int i = 0; i < n; i++)
        // {
        //     cout << a[i] << " ";
        // }
        // cout << endl;
        // int *max = max_element(a, a + n);
        // int *min = min_element(a, a + n);

        // cout << abs(*max - *min) << endl;
    }

    return 0;
}