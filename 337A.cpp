#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    int a[m];

    for (int i = 0; i < m; i++)
    {
        cin >> a[i];
    }
    sort(a, a + m);

    int ans, min;
    for (int i = 0; i < m; i++)
    {
        if (i + n <= m)
            ans = a[i + n - 1] - a[i];
        if (i == 0)
            min = ans;
        else if (ans < min)
            min = ans;
        if (i + n > m)
            break;
    }
    cout << min << endl;

    return 0;
}