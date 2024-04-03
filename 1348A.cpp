#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
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

        vi a(n);
        for (int i = 0; i < n; i++)
        {
            a[i] = pow(2, i + 1);
        }
        // =reverse(a.begin(), a.end());

        ll sum1 = pow(2,n), sum2 = 0;
        for (int i = 0; i < n / 2-1; i++)
        {
            sum1 += a[i];
        }
        for (int i = n / 2-1; i < n-1; i++)
        {
            sum2 += a[i];
        }
        cout << sum1 - sum2 << endl;
    }

    return 0;
}