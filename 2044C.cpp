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
        int m, a, b, c;
        cin >> m >> a >> b >> c;

        int r1 = min(a, m);
        int r2 = min(b, m);

        int rs = 2 * m - r1 - r2;

        int snp = min(c, rs);

        int total = r1 + r2 + snp;

        cout << total << endl;
    }

    return 0;
}