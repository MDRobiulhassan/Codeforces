#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int count = 0;
    string s, s2 = "WUB";
    cin >> s;

    int i = 0;
    while (i < s.size())
    {
        int j = 0;
        if (s[i] == s2[j] && s[i + 1] == s2[j + 1] && s[i + 2] == s2[j + 2])
        {
            s[i] = '\0';
            s[i + 1] = '\0';
            s[i + 2] = '\0';
            i += 3;
        }
        else
        {
            i++;
        }
    }

    bool space = false;
    for (i = 0; i < s.size(); i++)
    {
        if (s[i] != '\0')
        {
            cout << s[i];
            space = true;
        }
        else
        {
            if (space)
            {
                cout << ' ';
                space = false;
            }
        }
    }

    cout << endl;

    return 0;
}
