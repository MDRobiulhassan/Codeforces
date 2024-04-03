#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
#define ll long long
#define vi vector<int>
#define pb push_back

int main()
{
    int n;
    cin >> n;
    vector<ll> a(n);

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    if (n <= 2)
        cout << 0 << endl;
    else
    {
        sort(a.begin(), a.end());

        ll count = 0;
        for (int i = 1; i < n - 1; i++)
        {
            if (a[i] > a[0] && a[i] < a[n-1])
                count++;
        }
        cout << count << endl;
    }
    return 0;
}