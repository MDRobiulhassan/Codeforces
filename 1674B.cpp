#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        string s;
        cin >> s;
        int ch1 = static_cast<int>(s[0])-97;
        int ch2 = static_cast<int>(s[1])-97;

        int ans;
        if (s[1] < s[0])
            ans = 1 + 25 * ch1 + ch2;
        else
            ans = 1 + 25 * ch1 + ch2 - 1;

        cout << ans << endl;
    }

    return 0;
}