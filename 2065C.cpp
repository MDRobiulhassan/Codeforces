#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector<int>
#define vll vector<long long>
#define vs vector<string>
#define pb push_back
#define tc while (t--)

int main()
{
    int t;
    cin >> t;

    tc
    {
        int n, m;
        cin >> n >> m;

        vi a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];

        int b;
        cin >> b;

        bool flag = true;
        int prev = min(a[0], b - a[0]);

        for (int i = 1; i < n; i++)
        {
            int cur = a[i];
            int x = cur;
            int y = b - cur;

            if (x >= prev && y >= prev)
                prev = min(x, y);
            else if (x >= prev)
                prev = x;
            else if (y >= prev)
                prev = y;
            else
            {
                flag = false;
                break;
            }
        }

        if (flag)
            cout << "YES";
        else
            cout << "NO";
        cout << endl;
    }

    return 0;
}
