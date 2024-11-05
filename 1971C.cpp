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
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        int minA = min(a, b);
        int maxB = max(a, b);
        int minC = min(c, d);
        int maxD = max(c, d);

        if (minA < minC && minC < maxB && maxB < maxD || minA < maxD && maxD < maxB && minC < minA)
            cout << "YES";
        else
            cout << "NO";
        cout << endl;
    }

    return 0;
}