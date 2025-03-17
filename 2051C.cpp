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
        int n, m, k;
        cin >> n >> m >> k;
        int a[m], b[k], h[n + 1] = {0};
        for (int i = 0; i < m; i++)
            cin >> a[i];
        for (int i = 0; i < k; i++)
        {
            cin >> b[i];
            h[b[i]]++;
        }

        string s = "";
        for (int i = 0; i < m; i++)
        {
            if (k == n || (k == n - 1 && h[a[i]] == 0))
                s += '1';
            else
                s += '0';
        }

        cout << s << endl;
    }

    return 0;
}