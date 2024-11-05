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

        int maxh = -1, maxw = -1;
        for (int i = 0; i < n; i++)
        {
            int h, w;
            cin >> w >> h;
            maxh = max(maxh, h);
            maxw = max(maxw, w);
        }

        cout << 2 * (maxh + maxw) << endl;
    }

    return 0;
}