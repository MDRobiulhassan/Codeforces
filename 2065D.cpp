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
        int n, m;
        cin >> n >> m;

        vector<pair<ll, vector<int>>> a(n);

        for (int i = 0; i < n; i++)
        {
            vector<int> arr(m);
            ll sum = 0;
            for (int j = 0; j < m; j++)
            {
                cin >> arr[j];
                sum += arr[j];
            }
            a[i] = {sum, arr};
        }

        sort(a.rbegin(), a.rend());

        ll total = 0;
        ll pf = 0;

        for (auto &i : a)
        {
            vector<int> &arr = i.second;
            for (int j : arr)
            {
                pf += j;
                total += pf;
            }
        }

        cout << total << endl;
    }

    return 0;
}