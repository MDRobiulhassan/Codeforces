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
        int n, k, p;
        cin >> n >> k >> p;

        k = abs(k);
        if (n * p < k)
            cout << -1;
        else
            cout << (k + p - 1)/p;
        cout << endl;
    }

    return 0;
}