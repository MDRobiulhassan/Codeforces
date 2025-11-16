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

    int n;
    cin >> n;
    int c25 = 0, c50 = 0;
    vi a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];

    bool flag = true;
    for (int i = 0; i < n; i++)
    {

        if (a[i] == 25)
            c25++;
        else if (a[i] == 50)
        {
            if (c25 >= 1)
            {
                c25--;
                c50++;
            }
            else
            {
                flag = false;
                break;
            }
        }
        else
        {
            if (c50 >= 1 && c25 >= 1)
            {
                c50--;
                c25--;
            }
            else if (c25 >= 3)
            {
                c25 -= 3;
            }
            else
            {
                flag = false;
                break;
            }
        }
    }

    cout << (flag ? "YES" : "NO");

    return 0;
}