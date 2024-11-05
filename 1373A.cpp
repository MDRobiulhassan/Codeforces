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
const ll N = 1e9;

int main()
{
    int t;
    cin >> t;
    tc
    {
        ll a, b, c;
        cin >> a >> b >> c;
        if (a < c)
            cout << 1;
        else
            cout << -1;
        cout << " ";
        if (c < a * b)
            cout << b;
        else
            cout << -1;
        cout << endl;
    }

    return 0;
}