#include <iostream>
#include <algorithm>
#include <vector>
#include <set>
#include <map>
#include <unordered_map>
#include <climits>
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
        int a[n], b[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
        }

        int lf = 0, ls = 0, db = 0, lb = 0;
        for (int i = 0; i < n; i++)
        {
            if (a[i] > b[i])
                lf+=a[i];
            else if (a[i] < b[i])
                ls+=b[i];
            else if (a[i] == -1)
                db++;
            else if (a[i] == 1)
                lb+=a[i];
        }

        int ans = INT_MIN;
        for (int i = -db; i <= lb; i++)
        {
            ans = max(ans, min(lf + i, ls + (lb - db - i)));
        }
        cout << ans << endl;
    }

    return 0;
}