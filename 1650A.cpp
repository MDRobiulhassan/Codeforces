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
        char c;
        cin >> s;
        cin >> c;
        int length = s.size(), pos = -1;

        for (int i = 0; i < length; i++)
        {
            if (s[i] == c && i % 2 == 0)
            {
                pos = i;
            }
        }
        if (s.size() % 2 != 0 && pos % 2 == 0)
            cout << "YES";
        else
            cout << "NO";
        cout << endl;
    }

    return 0;
}