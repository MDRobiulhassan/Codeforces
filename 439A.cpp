#include <iostream>
#include <algorithm>
#include <vector>
#include <set>
#include <cmath>
using namespace std;
#define ll long long
#define vi vector<int>
#define vll vector<long long>
#define vs vector<string>
#define pb push_back

int main()
{
    int n, d;
    cin >> n >> d;
    vi a(n);
    ll sum = 0, total = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        total += a[i];
    }

    sum=total+10*(n-1);
    if (sum > d)
        cout << -1;
    else
        cout << (d - total) / 5;
    cout << endl;

    return 0;
}