#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    int t, i, n;
    cin >> t;
    cin.ignore();

    char r = 'G';

    while (t--)
    {
        cin >> n;
        cin.ignore();
        string s1, s2;
        getline(cin, s1);
        getline(cin, s2);

        replace(s1.begin(), s1.end(), 'B', r);
        replace(s2.begin(), s2.end(), 'B', r);

        for (i = 0; i < s1.size(); i++)
        {
            if (s1[i] != s2[i])
                break;
        }

        if (i == s1.size())
            cout << "YES";
        else
            cout << "NO";

        cout << endl;
    }

    return 0;
}
