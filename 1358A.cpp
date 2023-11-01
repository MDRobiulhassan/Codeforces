#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        double n, m;
        cin >> n >> m;
        long long ans = ceil((n * m) / 2);

        cout << ans << endl;
    }

    return 0;
}