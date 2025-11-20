#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector<int>
#define vll vector<long long>
#define vs vector<string>
#define pb push_back
#define tc while (t--)
#define l1n for (int i = 0; i < n; i++)

void print(vi &a, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;

    tc
    {
        int n;
        cin >> n;
        vi a(n);

        int odd = 0, even = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            (a[i] % 2 == 0) ? even++ : odd++;
        }

        if (odd == n || even == n)
            print(a, n);
        else
        {
            sort(a.begin(), a.end());
            print(a, n);
        }

        cout << '\n';
    }

    return 0;
}