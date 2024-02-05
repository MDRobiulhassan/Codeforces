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
        vi a, b;

        for (int i = 0; i < n; i++)
        {
            int in;
            cin >> in;
            a.pb(in);
        }
        for (int i = 0; i < n; i++)
        {
            int in;
            cin >> in;
            b.pb(in);
        }

        // sort(a.begin(), a.end());
        // sort(b.begin(), b.end());

        int mina = *min_element(a.begin(), a.end());
        int minb = *min_element(b.begin(), b.end());
        ll sum = 0;
        for (int i = 0; i < n; i++)
        {
            sum += max(a[i] - mina, b[i] - minb);
        }
        cout << sum << endl;

        // int mina = a[0], minb = b[0], maxa = a[n - 1], maxb = b[n - 1];
        // ll suma = 0, sumb = 0;
        // cout << mina << " " << minb << " " << maxa << " " << maxb;
        // for (int i = 0; i < n; i++)
        // {
        //     cout << a[i] << " ";
        // }
        // for (int i = 0; i < n; i++)
        // {
        //     cout << b[i] << " ";
        // }
        // for (int i = 0; i < n; i++)
        // {
        //     int diff = b[i] - minb;
        //     sumb += diff;
        // }
        // // cout<<sumb;

        // int sum = suma + sumb;
        // // cout<<sum;
        // sum = sum - (min(mina, minb)-1);
        // cout << sum << endl;
    }

    return 0;
}