#include <iostream>
#include <algorithm>
#include <vector>
#include <set>
#include <map>
#include <unordered_map>
#include <cmath>
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
        int n;
        cin >> n;

        if (n % 2 == 0)
            cout << -1 << endl;
        else
        {
            vi ans(n);
            int mid = (n + 1) / 2;
            int l = mid, r = mid;

            for (int i = 1; i <= n; i++)
            {
                if (i % 2 == 1)
                {
                    ans[r - 1] = i;
                    r++;
                }
                else
                {
                    ans[l - 2] = i;
                    l--;
                }
            }

            for (int x : ans)
            {
                cout << x << " ";
            }
            cout << endl;
        }
    }

    return 0;
}
