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
        ll n;
        cin >> n;

        ll l = 1, r = cbrt(n);
        bool flag = false;
        while (l <= r)
        {
            ll c = (l * l * l) + (r * r * r);

            if (c == n)
            {
                flag = true;
                break;
            }

            else if (c > n)
                r--;
            else
                l++;
        }

        if (flag)
            cout << "YES";
        else
            cout << "NO";
        cout << '\n';
    }

    return 0;
}