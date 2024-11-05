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
using namespace std;

int main()
{
    int t;
    cin >> t;

    tc
    {
        int x, y;
        cin >> x >> y;

        int yscreen = (y + 1) / 2;
        int rem = 15 * yscreen - 4 * y;

        int xscreen = max(0, x - rem);
        int addxscreen = (xscreen + 14) / 15;

        int ans = yscreen + addxscreen;

        cout << ans << endl;
    }

    return 0;
}
