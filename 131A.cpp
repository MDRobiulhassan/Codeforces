#include <iostream>
#include <cstring>
#include <stdbool.h>
using namespace std;

int main()
{
    bool c = true;
    string s;
    getline(cin, s);

    for (int i = 1; i < s.size(); i++)
    {
        if (islower(s[i]))
            c = false;
    }
    if (c == true)
    {
        for (int j = 0; j < s.size(); j++)
        {
            if (islower(s[j]))
                cout << (char)toupper(s[j]);
            else
                cout << (char)tolower(s[j]);
        }
    }
    else
        cout << s;

    return 0;
}