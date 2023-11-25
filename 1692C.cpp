#include <iostream>
#include <string>
using namespace std;

int main()
{
    int t;
    cin >> t;
    cin.ignore();

    while (t--)
    {
        int pos = -1;
        for (int i = 0; i < 8; i++)
        {
            string s;
            cin >> s;
            for (int j = 0; j < 8; j++)
            {
                if (s[j] == '#')
                {
                    pos = i * 8 + j;
                }
            }
        }

        int row = pos / 8 + 2;
        int col = pos % 8 + 2;

        cout << row << " " << col << endl;
    }

    return 0;
}
