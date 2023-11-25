#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        string s, s1;
        cin >> s;

        for (int i = 0; i < n; i++)
        {
            if (s[i] == 'U')
                s1 += 'D';
            else if (s[i] == 'D')
                s1 += 'U';
            else
                s1 += s[i];
        }
        cout << s1 << endl;
    }
    return 0;
}