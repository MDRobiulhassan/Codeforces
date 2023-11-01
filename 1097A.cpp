#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    string s, ms, s1, s2, s3, s4, s5;
    cin >> ms;
    cin >> s1 >> s2 >> s3 >> s4 >> s5;

    s = s1 + s2 + s3 + s4 + s5;
    // cout << s << endl;
    sort(s.begin(), s.end());
    // cout << s << endl;
    sort(ms.begin(), ms.end());
    // cout << ms << endl;
    int flag = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (ms[0] == s[i] || ms[1] == s[i])
        {
            flag = 1;
            break;
        }
    }
    if (flag == 0)
        cout << "NO";
    else
        cout << "YES";
    cout << endl;

    return 0;
}