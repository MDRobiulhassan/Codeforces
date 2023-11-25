#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        char d;
        string s, s2;
        cin >> n >> d;
        cin >> s;
        int flag = 0;
        for (int i = 0; i < s.size(); i++)
        {
            if (d > s[i] && flag != 1)
            {
                s2 += d;
                s2 += s[i];
                flag = 1;
            }
            else
                s2 += s[i];
        }

        if (flag != 1)
            s2 += d;

        cout << s2 << endl;
    }
    return 0;
}
