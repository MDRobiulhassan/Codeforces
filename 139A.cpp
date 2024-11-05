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
#define tc while (t--)
#define l1n for (int i = 0; i < n; i++)

int main()
{
    // int t;
    // cin>>t;
    int n;
    cin >> n;
    int a[8];
    ll sum = 0;
    for (int i = 0; i < 7; i++)
    {
        cin >> a[i];
    }

    int i = 0;
    while (sum < n)
    {
        sum += a[i];
        i++;
        if (i == 7 && sum<n)
            i = 0;
    }
    cout << i;
    return 0;
}