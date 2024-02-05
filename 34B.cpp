#include <iostream>
#include <algorithm>
using namespace std;
#define ll long long

int main()
{
    int n, m, sum = 0;
    cin >> n >> m;
    int a[n];

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a, a + n);

    for (int i = 0; i < n; i++)
    {
        if (a[i] <= 0 && m != 0)
        {
            sum += a[i];
            m--;
        }
    }

    cout << abs(sum) << endl;

    return 0;
}