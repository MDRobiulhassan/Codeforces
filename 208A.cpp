#include <iostream>
#include <string>
using namespace std;

int main()
{
    int count = 0;
    string s;
    getline(cin, s);

    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == 'W' && s[i + 1] == 'U' && s[i + 2] == 'B')
        {
            i += 2;
            count++;
        }
        if (count != 0)
            continue;
        else
        {
            cout << s[i];
        }
    }

    return 0;
}
