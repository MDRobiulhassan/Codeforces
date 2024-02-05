#include <iostream>
#include <algorithm>
#include <cmath>
#include <vector>
using namespace std;
#define ll long long
#define vi vector<int>
#define pb push_back

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        int ans = ceil(double(n) / 2);
        cout << ans << endl;
    }

    return 0;
}