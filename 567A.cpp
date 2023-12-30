#include <iostream>
#include <algorithm>
#include <cmath>
#include <climits>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n];

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    for (int i = 0; i < n; i++)
    {
        int mini, maxi;
        // for (int j = 0; j < n; j++)
        // {
        //     if (j != i)
        //     {
        //         int diff = abs(a[i] - a[j]);
        //         mini = min(mini, diff);
        //         maxi = max(maxi, diff);
        //     }
        // }
        if (i == 0)
        {
            maxi = abs(a[i] - a[n - 1]);
            mini = abs(a[i] - a[i + 1]);
        }
        else if (i == n - 1)
        {
            maxi = abs(a[i] - a[0]);
            mini = abs(a[i] - a[i - 1]);
        }
        else
        {
            maxi = max(abs(a[0] - a[i]), abs(a[n - 1] - a[i]));
            mini = min(abs(a[i + 1] - a[i]), abs(a[i] - a[i - 1]));
        }
        cout << mini << " " << maxi << endl;
    }
    return 0;
}
