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
        int a[3];
        cin >> a[0] >> a[1] >> a[2];

        int ans;
        if (a[0] == a[1] && a[1] == a[2])
            ans = 0;
        else if (a[0] == a[1])
        {
            ans = abs(a[0] - a[2]);
        }
        else if (a[1] == a[2])
        {
            ans = abs(a[0] - a[2]);
        }
        else if (a[0] == a[2])
        {
            ans = abs(a[0] - a[1]);
        }
        else
        {
            sort(a, a + 3);
            ans = abs(a[1] - a[0]) + abs(a[2] - a[1]);
        }

        cout << ans << endl;
    }

    return 0;
}