#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int t;
    cin >> t;
    char c[3][3];

    while (t--)
    {
        int ca = 0, cb = 0, cc = 0;
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                cin >> c[i][j];
                if (c[i][j] == 'A')
                    ca++;
                else if (c[i][j] == 'B')
                    cb++;
                else if (c[i][j] == 'C')
                    cc++;
            }
        }

        if (ca == 2)
            cout << "A";
        else if (cb == 2)
            cout << "B";
        else
            cout << "C";
        cout << endl;
    }

    return 0;
}