#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector<int>
#define vll vector<long long>
#define vs vector<string>
#define pb push_back
#define tc while (t--)
#define l1n for (int i = 0; i < n; i++)

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    tc
    {
        int n;
        cin >> n;
        vi a(n);

        for (int i = 0; i < n; i++)
            cin >> a[i];

        bool flag = false;
        for (int i = 0; i < n - 1; i++)
        {
            if (abs(a[i] - a[i + 1]) <= 1)
            {
                flag = true;
                break;
            }
        }
        if (flag)
        {
            cout << 0 << '\n';
            continue;
        }

        if (n == 2)
        {
            cout << -1 << '\n';
            continue;
        }

        bool incr = a[0] < a[1];
        bool ism = true;

        for (int i = 1; i < n - 1; i++)
        {
            if ((a[i] < a[i + 1]) != incr)
            {
                ism = false;
                break;
            }
        }

        if (ism)
            cout << -1 << '\n';
        else
            cout << 1 << '\n';
    }

    return 0;
}