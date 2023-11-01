#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        string str, str2, str3;
        cin >> str;
        int len = str.size();

        if (len % 2 != 0)
            cout << "NO";
        else
        {
            for (int i = 0; i < len; i++)
            {
                if (i < len / 2)
                    str2 += str[i];
                else
                    str3 += str[i];
            }
            if (str2 == str3)
                cout << "YES";
            else
                cout << "NO";
        }
        cout << endl;
    }

    return 0;
}