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
    while (t--)
    {
        int a, b, c, d;
        cin >> a >> b >> c >> d;

        int count = 0;

        if (a >= c && b > d || a > c && b >= d)
            count++;
        if (a >= d && b > c || a > d && b >= c)
            count++;
        cout << 2 * count << endl;
    }

    return 0;
}