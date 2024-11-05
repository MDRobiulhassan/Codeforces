#include <iostream>
#include <algorithm>
#include <vector>
#include <set>
#include <map>
#include <unordered_map>
#include <cmath>
#include <limits>
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
    int n, t;
    cin >> n >> t;
    string s = "";
    if (t == 10)
    {
        if (n == 1)
            cout << -1;
        else
        {
            for (int i = 0; i < n - 1; i++)
            {
                cout << 1;
            }
            cout << 0;
        }
    }
    else
    {
        for (int i = 0; i < n; i++)
        {
            cout << t;
        }
    }

    return 0;
}