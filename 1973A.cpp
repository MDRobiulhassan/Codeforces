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
        int a, b, c;
        cin >> a >> b >> c;

        if (a == 0)
            cout << min(c, b);
        else if (b == 0)
            cout << min(a, c);
        else if (c == 0)
            cout << min(b, a);
        else if (a == b && b == c)
            cout << -1;
        else
            cout << min(a, b) + min(a, c);
        cout << endl;
    }

    return 0;
}