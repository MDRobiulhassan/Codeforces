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
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        vector<pair<int, int>> a(n);
        vi b(n), c(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i].first;
            a[i].second = i;
        }
        sort(a.begin(), a.end());
        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
        }
        sort(b.begin(), b.end());

        for (int i = 0; i < n; i++)
        {
            c[a[i].second] = b[i];
        }
        for (int i = 0; i < n; i++)
        {
            cout << c[i] << " ";
        }
        cout << endl;
    }

    return 0;
}