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

    if (m % n != 0)
        cout << -1;
    else
    {
        int count = 0, r = m / n;
        while (r % 2 == 0)
        {
            r /= 2;
            count++;
        }
        while (r % 3 == 0)
        {
            r /= 3;
            count++;
        }
        if (r == 1)
            cout << count;
        else
            cout << -1;
    }

    return 0;
}