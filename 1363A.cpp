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
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    tc
    {
        int n, x;
        cin >> n >> x;

        int o = 0, e = 0;
        for (int i = 0; i < n; ++i)
        {
            int a;
            cin >> a;
            if (a % 2 == 0)
                e++;
            else
                o++;
        }

        bool flag = false;
        for (int i = 1; i <= min(x, o); i += 2)
        {
            int rem_ev = x - i;
            if (rem_ev <= e)
            {
                flag = true;
                break;
            }
        }

        cout << (flag ? "Yes" : "No") << '\n';
    }

    return 0;
}