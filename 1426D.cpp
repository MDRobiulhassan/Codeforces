#include <iostream>
#include <algorithm>
#include <vector>
#include <set>
#include <unordered_set>
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
    int n;
    cin >> n;
    vi a(n);
    unordered_set<ll> sums;
    ll sum = 0, count = 0;
    l1n
    {
        cin >> a[i];
        sum += a[i];
        if (sum == 0 || sums.count(sum) > 0)
        {
            count++;
            sum = 1;
            sums.clear();
            // sums.insert(0);
            sum = a[i];
        }
        sums.insert(sum);
    }
    cout << count << endl;

    return 0;
}