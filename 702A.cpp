#include <iostream>
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

    int l = 1;
    int maxl = 1;

    for (int i = 1; i < n; i++)
    {
        if (a[i] > a[i - 1])
            l++;
        else
            l = 1;

        if (l > maxl)
        {
            maxl = l;
        }
    }

    cout << maxl;

    return 0;
}
