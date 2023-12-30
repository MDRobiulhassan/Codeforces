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
        sort(s.begin(), s.end());


        for (char i = 'a'; i <= 'h'; i++)
        {
            if (i == s[1])
                continue;
            cout << i << s[0] << endl;
        }
        for (int i = 1; i <= 8; i++)
        {
            if (i ==s[0] )
                continue;
            cout << s[1] << i << endl;
        }
    }

    return 0;
}
