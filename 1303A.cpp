#include<iostream>
using namespace std;

int main()
{
    int t;
    int c, a, b, i;
    cin >> t;
    string s, s2;
    while (t--)
    {
        c = 0, a = 0, b = 0;
        cin >> s;
        for (i = 0; i < s.length(); i++)
        {
            if (s[i] == '1')
            {
                a = i;
                break;
            }
        }
        for (i = s.length(); i >= a; i--)
        {
            if (s[i] == '1')
            {
                b = i;
                break;
            }
        }
        for (i = a; i < b; i++)
        {
            if (s[i] == '0')
                c++;
            else
                s2 += '1';
        }
        cout << c << endl;
    }

    return 0;
}
