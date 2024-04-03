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
        int n, oc = 0;
        cin >> n;
        vi a(n);
        ll sum = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            if (a[i] == 1)
                oc++;
            sum += a[i];
        }
        if (n > 1 && sum >= oc + n)
            cout << "YES";
        else
            cout << "NO";
        cout << endl;
    }

    return 0;
}