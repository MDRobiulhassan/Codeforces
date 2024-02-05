#include <iostream>
#include <set>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int L = s.find('a');
        if (L == -1)
        {
            cout << "NO" << endl;
            continue;
        }
        int n = s.length(), R = L;
        string result = "YES";
        for (int i = 1; i < n; i++)
        {
            int pos = s.find(char('a' + i));
            if (pos == -1 || (pos != L - 1 && pos != R + 1))
            {
                result = "NO";
                break;
            }
            else
            {
                L = min(L, pos);
                R = max(R, pos);
            }
        }
        cout << result << endl;
    }
    return 0;
}
