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
    // cin>>t;
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];

    sort(a, a + n);
    int q;
    cin >> q;

    for (int i = 0; i < q; i++)
    {
        int in;
        cin >> in;
        int l = 0, r = n - 1;
        while (l <= r)
        {
            int mid = (l + r) / 2;
            if (a[mid] > in)
                r = mid - 1;
            else
                l = mid+1;
        }
        cout << l << endl;
    }

    return 0;
}