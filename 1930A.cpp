#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
#define ll long long
#define vi vector<int>
#define pb push_back

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        vi a(2 * n);
        for (int i = 0; i < 2 * n; ++i)
        {
            cin >> a[i];
        }

        sort(a.begin(), a.end());
        ll sum = 0;
        for (int i = 2 * n - 1; i >= 0; i-=2)
        {
            sum += min(a[i], a[i - 1]);
        }

        cout << sum << endl;
    }

    return 0;
}