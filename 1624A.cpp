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
        }
        int max_num = a[0];
        for (int i = 0; i < n; i++)
        {
            if (a[i] > max_num)
                max_num = a[i];
        }

        int op = 0, ans=0;
        for (int i = 0; i < n; i++)
        {
            op = max_num - a[i];
            ans = max(op, ans);
        }
        cout << ans << endl;
    }

    return 0;
}