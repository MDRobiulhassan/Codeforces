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
        ll a, b, n;
        cin >> a >> b >> n;
        if (b * n <= a || b == a)
            cout << 1;
        else
            cout << 2;
        cout << '\n';
    }

    return 0;
}