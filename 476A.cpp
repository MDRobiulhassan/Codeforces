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
    int n, m;
    cin >> n >> m;

    int l = (n + 1) / 2;
    int ans = (l + m - 1) / m * m;
    if (ans > n)
        ans = -1;

    cout << ans;

    return 0;
}