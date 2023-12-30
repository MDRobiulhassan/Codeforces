#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    char ch;
    string s, s2 = "qwertyuiopasdfghjkl;zxcvbnm,./";
    cin >> ch;
    cin >> s;

    for (int i = 0; i < s.size(); i++)
    {
        for (int j = 0; j < s2.size(); j++)
        {
            if ((s[i] == s2[j]))
            {
                if (ch == 'R')
                    cout << s2[j - 1];
                else
                    cout << s2[j + 1];
            }
        }
    }
    cout << endl;

    return 0;
}