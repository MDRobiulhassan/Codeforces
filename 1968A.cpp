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
        int x;
        cin >> x;
        int cmx = 1, mx = 0, g = 1;
        for (int i = x - 1; i >= 1; i--)
        {
            g = __gcd(x, i) + i;
            if (g < x)
                cmx = max(cmx, g);
        }

        cout << cmx << endl;
    }


    return 0;
}