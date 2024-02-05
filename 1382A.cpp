#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, m;
        cin >> n >> m;
        int a[n], b[m];

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        for (int i = 0; i < m; i++)
        {
            cin >> b[i];
        }

        sort(a, a + n);
        sort(b, b + m);

        int flag = 0, ans = 0;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (a[i] == b[j])
                {
                    ans = a[i];
                    flag = 1;
                    break;
                }
                if (flag == 1)
                    break;
            }
        }

        if (flag == 1)
        {
            cout << "YES" << endl;
            cout << 1 << " " << ans << endl;
        }
        else
            cout << "NO" << endl;
    }

    return 0;
}