#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int a, b, c, d;
    cin >> a >> b >> c >> d;

    int mincountin256 = min(a, min(c, d));
    int aleft = a - mincountin256;
    int mincountin32=min(aleft,b);

    
    int ans = (256 * mincountin256) + (mincountin32*32);

    cout << ans << endl;

    return 0;
}