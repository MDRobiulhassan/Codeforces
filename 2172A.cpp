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
    int a[3];
    for (int i = 0; i < 3; i++)
        cin >> a[i];

    sort(a, a + 3);
    if (a[2] - a[0] >= 10)
        cout << "check again";
    else
        cout << "final " << a[1];

    return 0;
}