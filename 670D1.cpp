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
    // int t;
    // cin>>t;
    int n, k;
    cin >> n >> k;

    int a[n], b[n], avg[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
    }
    for (int i = 0; i < n; i++)
    {
        avg[i] = b[i] / a[i];
    }

    int *mn = min_element(avg, avg + n);
    int count = *mn;

    for (int i = 0; i < n; i++)
    {
        b[i] = b[i] - (*mn * a[i]);
    }

    bool flag = true;
    while (flag)
    {
        flag = true;
        for (int i = 0; i < n; i++)
        {
            if (b[i] < a[i])
            {
                int nd = a[i] - b[i];
                if (nd <= k)
                {
                    b[i] += nd;
                    k -= nd;
                }
                else
                {
                    flag = false;
                    break;
                }
            }
        }
        if (flag)
        {
            count++;
            for (int i = 0; i < n; i++)
            {
                b[i] -= a[i];
            }
        }
    }

    cout << count;

    return 0;
}