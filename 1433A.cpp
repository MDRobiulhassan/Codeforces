#include <iostream>
#include <algorithm>
using namespace std;
#define ll long long

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        int last = n % 10;
        int digit = 0;
        while (n != 0)
        {
            digit++;
            n /= 10;
        }
        // cout<<digit<<endl;cout<<last<<endl;
        int ans;
        if (digit == 1)
            ans = 10 * (last - 1) + 1;
        else if (digit == 2)
            ans = 10 * (last - 1) + 1 + 2;
        else if (digit == 3)
            ans = 10 * (last - 1) + 1 + 2 + 3;
        else if (digit == 4)
            ans = 10 * (last - 1) + 1 + 2 + 3 + 4;
        cout << ans << endl;
    }

    return 0;
}