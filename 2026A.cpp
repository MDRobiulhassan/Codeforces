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
        int x, y, k;
        cin >> x >> y >> k;

        cout << 0 << " " << 0 << " " << min(x, y) << " " << min(x, y) << endl;
        cout << 0 << " " << min(x, y) << " " << min(x, y) << " " << 0 << endl;
    }

    return 0;
}