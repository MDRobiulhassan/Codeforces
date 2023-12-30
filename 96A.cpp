#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    string s;
    cin >> s;

    int count = 1, flag = 0;

    for (int i = 1; i < s.size(); i++)
    {
        if (s[i] == s[i - 1])
        {
            count++;
            if (count >= 7)
            {
                flag = 1;
                break;
            }
        }
        else
            count = 1;
    }

    if (flag)
        cout << "YES";
    else
        cout << "NO";
    cout << endl;

    return 0;
}
