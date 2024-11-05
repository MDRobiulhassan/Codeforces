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
    int t;
    cin >> t;

    tc
    {
        ll n, k;
        cin >> n >> k;

        ll st = n - k + 1;

        ll sum = (n * (n + 1)) / 2 - (st - 1) * st / 2;

        if (sum % 2 == 0)
            cout << "YES" << endl;
        else

            cout << "NO" << endl;
    }

    return 0;
}