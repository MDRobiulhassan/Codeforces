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
        int n, a, b;
        cin >> n >> a >> b;

        int ans;
        if (b < 2 * a)
            ans = (n / 2) * b + (n % 2) * a;
        else
            ans = n * a;
        cout << ans << endl;
    }

    return 0;
}
