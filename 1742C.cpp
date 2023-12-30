#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        char a[8][8];
        int count = 0;
        for (int i = 0; i < 8; i++)
        {
            for (int j = 0; j < 8; j++)
            {
                cin >> a[i][j];
            }
        }
        for (int i = 0; i < 8; i++)
        {
            for (int j = 0; j < 8; j++)
            {
                if (a[i][j] == 'R')
                    count++;
            }
            if (count == 8)
                break;
            else
                count = 0;
        }
        if (count == 8)
            cout << 'R' << endl;
        else
            cout << 'B' << endl;
    }

    return 0;
}