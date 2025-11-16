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
        int a, x, y;
        cin >> a >> x >> y;
        bool flag = false;
        for (int i = 1; i <= 100; i++)
        {
            if (i == a)
                continue;
            int dxa = abs(a - x), dya = abs(a - y);
            int dxb = abs(i - x), dyb = abs(i - y);
            if (dxb < dxa && dyb < dya)
            {
                flag = true;
                break;
            }
        }
        if (flag)
            cout << "YES";
        else
            cout << "NO";
        cout << '\n';
    }
    return 0;
}
