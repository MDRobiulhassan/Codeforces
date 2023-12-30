#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, m;
        cin >> n >> m;

        int ans = (n * m) / min(n, m);
        cout << ans << endl;
    }

    return 0;
}