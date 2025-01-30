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
    int t;
    cin >> t;

    tc
    {
        int n;
        cin >> n;

        int a[n + 1];
        for (int i = 1; i <= n; i++)
            cin >> a[i];

        if (n == 2)
            cout << a[n] - a[n - 1];
        else if (n == 3)
            cout << (a[n] + a[n - 2]) - a[n - 1];

        else
        {
            ll sum = 0;
            for (int i = 1; i <= n - 2; i++)
                sum += a[i];

            sum += a[n];
            sum -= a[n - 1];

            cout << sum;
        }
        cout << endl;
    }

    return 0;
}