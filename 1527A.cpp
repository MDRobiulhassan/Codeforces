#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, i = 1,ans=0;
        cin >> n;
        int sum=n;

        while (sum != 0)
        {
            sum = sum & (n - i);
            ans=n-i;
            i++;
        }
        cout << ans << endl;
    }

    return 0;
}