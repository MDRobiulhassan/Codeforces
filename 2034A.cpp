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
        int a, b;
        cin >> a >> b;
        int ans=(a*b)/__gcd(a,b);
        cout << ans << endl;

        // int ans = max(a, b);
        // while (1)
        // {
        //     if (ans % a == ans % b)
        //     {
        //         cout << ans << endl;
        //         break;
        //     }
        //     ans++;
        // }
    }

    return 0;
}