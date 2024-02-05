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
        cin >> s;

        // if (s[0] == 'R' || s[0] == 'B' || s[0] == 'G')
        //     cout << "NO";
        // else
            stable_sort(s.begin(), s.end());

        cout << s << endl;
    }

    return 0;
}