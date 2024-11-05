#include <iostream>
#include <algorithm>
#include <vector>
#include <set>
#include <map>
#include <unordered_map>
#include <cmath>
#include <numeric>
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
    int n, m;
    cin >> n >> m;

    vi a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int pos = -1;
    int i = 0;
    while (accumulate(a.begin(), a.end(), 0) != 0)
    {
        if (a[i] <= m)
            a[i] = 0;
        else
        {
            a[i] -= m;
            pos = i;
        }
        if (accumulate(a.begin(), a.end(), 0) == 0)
        {
            pos = i;
            break;
        }
        i++;
        if (i == n)
            i = 0;
    }
    cout << pos + 1;
    return 0;
}