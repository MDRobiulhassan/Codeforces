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
    // int t;
    // cin >> t;

    int n, m, a, b;
    cin >> n >> m >> a >> b;

    int res1 = n * a;
    int res2 = ceil(double(n) / m) * b;
    int res3 = (n / m) * b + (n % m) * a;

    cout << min(res1, min(res2, res3));

    return 0;
}