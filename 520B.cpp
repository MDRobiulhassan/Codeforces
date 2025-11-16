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
    // int t;
    // cin>>t;
    int n, m;
    cin >> n >> m;

    int count = 0;
    while (m > n)
    {
        if (m % 2 == 0)
            m /= 2;
        else
            m++;
        count++;
    }

    cout << count + (n - m);

    return 0;
}