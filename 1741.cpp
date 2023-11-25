#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        string s1, s2;
        cin >> s1 >> s2;
        int n1 = s1.length(), n2 = s2.length();
        char c1 = s1[n1 - 1], c2 = s2[n2 - 1];
        bool found = n1 > n2;

        if (s1 == s2)
        {
            cout << "=" << endl;
            continue;
        }
        else if (c1 == c2 && c1 == 'S')
            found = !found;
        else if (c1 != c2)
            found = c1 < c2;

        if (found)
            cout << ">" << endl;
        else
            cout << "<" << endl;
    }

    return 0;
}
