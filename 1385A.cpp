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
    int t;
    cin >> t;

    tc
    {
        int a[3];
        cin >> a[0] >> a[1] >> a[2];
        sort(a, a + 3);

        if (a[1] != a[2])
            cout << "NO" << endl;
        else
            cout << "YES" << endl
                 << a[0] << " " << a[0] << " " << a[2] << endl;
    }

    return 0;
}