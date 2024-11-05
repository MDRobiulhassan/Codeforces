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

        if (n == 3)
            cout << 3;
        else
            cout << 2;
        cout << endl;
        // ll maxsum = 0, ans = 0;
        // for (int i = 2; i <= n; i++)
        // {
        //     ll sum = 0;
        //     for (int j = i; j <= n; j=j+i)
        //     {
        //         sum += j;
        //     }
        //     if (sum >= maxsum)
        //     {
        //         maxsum = sum;
        //         ans = i;
        //     }
        // }

        // cout << ans << endl;
    }

    return 0;
}