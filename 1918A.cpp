#include <iostream>
#include <algorithm>
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
        int n, m, ans;
        cin >> n >> m;

        ans=n*(m/2);
        cout << ans << endl;
    }

    return 0;
}