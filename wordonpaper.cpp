#include <iostream>
using namespace std;

int main()
{
    int t, i, j;
    cin >> t;
    char str[8][8];

    for (int k = 1; k <= t; k++)
    {
        for (i = 0; i < 8; i++)
        {
            for (j = 0; j < 8; j++)
            {
                cin >> str[i][j];
            }
        }
        for (i = 0; i < 8; i++)
        {
            for (j = 0; j < 8; j++)
            {
                if (str[i][j] >= 'a' && str[i][j] <= 'z')
                    cout << str[i][j];
            }
        }
        cout << endl;
    }

    return 0;
}