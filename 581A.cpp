#include <iostream>
using namespace std;

int main()
{
    int a, b, min, ans;
    cin >> a >> b;

    if (a < b)
    {
        min = a;
        ans = (b - min) / 2;
    }
    else
    {
        min = b;
        ans = (a - min) / 2;
    }

    cout << min << " " << ans << endl;

    return 0;
}