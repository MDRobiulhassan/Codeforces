#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int q;
    cin >> q;

    while (q--)
    {
        int n;
        cin >> n;

        string s, s2;
        cin >> s;

        int i = 0;
        while (i < n)
        {
            if (i + 1 < n && s[i + 1] == '0')
            {
                int num = (s[i] - '0') * 10 + (s[i + 2] - '0');
                if (num >= 1 && num <= 26)
                    s2 += (char)(num + 'a' - 1);
                else
                    s2 += s.substr(i, 3);
                i += 3;
            }
            else
            {
                int num = s[i] - '0';
                if (num >= 1 && num <= 26)
                    s2 += (char)(num + 'a' - 1);
                else
                    s2 += s[i];
                i++;
            }
        }

        cout << s2 << endl;
    }

    return 0;
}
