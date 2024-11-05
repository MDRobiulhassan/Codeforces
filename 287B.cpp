//not solved

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

    if (k + 1 >= n)
        cout << ceil(double(n) / k);
    else
        cout << -1;

    return 0;
}