#include <iostream>
#include <string>
#include <set>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        set<string> m;

        for (int i = 1; i < n; i++)
        {
            string s2 = "";
            s2 += s[i - 1];
            s2 += s[i];
            m.insert(s2);
        }

        cout << m.size() << endl;
    }

    return 0;
}
