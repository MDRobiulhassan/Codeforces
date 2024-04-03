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
        int n, k;
        cin >> n >> k;
        vi a(n);

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        sort(a.begin(), a.end());

        if (n == 1)
            cout << 0;
        else
        {
            int count = 1, ans = 1;
            for (int i = 1; i < n; i++)
            {
                if (a[i] - a[i - 1] > k)
                {
                    count = 1;
                }
                else
                {
                    count++;
                }
                ans = max(ans, count);
            }
            cout << n - ans;
        }
        cout << endl;
    }
    return 0;
}