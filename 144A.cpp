#include <iostream>
using namespace std;

int main()
{
    int n, i, max, min, maxpos = 0, minpos = 0;
    cin >> n;
    int a[n];

    for (i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    max = a[0];
    for (i = 1; i < n; i++)
    {
        if (a[i] > max)
        {
            max = a[i];
            maxpos = i;
        }
    }

    min = a[0];
    for (i = 1; i < n; i++)
    {
        if (a[i] <= min)
        {
            min = a[i];
            minpos = i;
        }
    }

    cout << maxpos + (n - 1 - minpos) - (minpos < maxpos ? 1 : 0) << endl;

    return 0;
}