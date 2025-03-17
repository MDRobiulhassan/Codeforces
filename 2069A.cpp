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
        vi a(n);

        for (int i = 0; i < n-2; i++)
            cin >> a[i];

        bool flag = false;
        for (int i = 0; i < n - 4; i++)
        {
            if (a[i] == 1 && a[i + 1] == 0 && a[i + 2] == 1)
            {
                flag = true;
                break;
            }
        }

        if (flag)
            cout << "NO";
        else
            cout << "YES";
        cout << endl;
    }

    return 0;
}