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
        int n, a, b, c, d;
        cin >> n >> a >> b >> c >> d;

        int minab = (a - b), maxab = a + b, mincd = (c - d), maxcd = c + d;
        if (n * minab > maxcd || n * maxab < mincd)
            cout << "No";
        else
            cout << "Yes";
        cout << endl;
    }

    return 0;
}