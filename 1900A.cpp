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
        string s;
        cin >> s;

        int dot = 0, cdot = 0, ans = 0;
        bool flag = false;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '.')
            {
                ans++;
                dot++;
                cdot = max(cdot, dot);
            }

            else
                dot = 0;
        }

        if (cdot >= 3)
            cout << 2;
        else
            cout << ans;

        cout << endl;
    }

    return 0;
}