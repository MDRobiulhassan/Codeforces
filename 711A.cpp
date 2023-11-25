#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cin >> n;
    cin.ignore();

    string s[n];

    for (int i = 0; i < n; i++)
    {
        cin >> s[i];
    }

    int flag = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (s[i][j] == '|')
                continue;
            else if (s[i][j] == 'O' && s[i][j + 1] == 'O')
            {
                s[i][j] = '+';
                s[i][j + 1] = '+';
                flag = 1;
                break;
            }
        }
        if (flag == 1)
            break;
    }

    if (flag == 1)
    {
        cout << "YES" << endl;
        for (int i = 0; i < n; i++)
        {
            cout << s[i] << endl;
        }
    }
    else
        cout << "NO" << endl;

    return 0;
}