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

        int a[n], b[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        for (int i = 0; i < n; i++)
            cin >> b[i];

        int st = -1;
        bool flag = false;
        int nd = 0, sum = INT_MAX;

        for (int i = 0; i < n; i++)
        {
            if (a[i] < b[i])
            {
                if (st != -1)
                    flag = true;
                st = i;
                nd = b[i] - a[i];
            }
            else
                sum = min(sum, a[i] - b[i]);
        }

        if (flag)
            cout << "NO";
        else
        {
            if (sum >= nd)
                cout << "YES";
            else
                cout << "NO";
        }

        cout << endl;
    }

    return 0;
}