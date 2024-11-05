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
        int n;
        cin >> n;
        int a[2 * n];

        for (int i = 0; i < 2 * n; i++)
        {
            cin >> a[i];
        }
        sort(a, a + 2 * n);

        cout << abs(a[n] - a[n - 1]) << endl;
    }

    return 0;
}