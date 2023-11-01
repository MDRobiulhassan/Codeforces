#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, x = 0, y = 0, flag = 0;
        cin >> n;
        string s;
        cin >> s;

        for (int i = 0; i < n; i++)
        {
            if (s[i] == 'U')
                x += 1;
            else if (s[i] == 'R')
                y += 1;
            else if (s[i] == 'D')
                x -= 1;
            else if (s[i] == 'L')
                y -= 1;

            if (x == 1 && y == 1)
            {
                flag = 1;
                break;
            }
        }
        if (flag != 0)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}