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
    int n;
    cin >> n;
    int f = 0, s = 0;

    while (n >= 0)
    {
        if (n % 7 == 0)
        {
            s=n/7;
            n = 0;
            break;
        }
        f++;
        n -= 4;
    }

    if (n == 0)
    {
        while (f--)
        {
            cout << 4;
        }
        while (s--)
        {
            cout << 7;
        }
    }
    else
        cout << -1;

    return 0;
}