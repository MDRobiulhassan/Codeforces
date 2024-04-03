#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
#define ll long long
#define vi vector<int>
#define pb push_back

int main()
{
    int t;
    cin >> t;
    char a[10][10];

    while (t--)
    {
        for (int i = 0; i < 10; i++)
        {
            for (int j = 0; j < 10; j++)
            {
                cin >> a[i][j];
            }
        }

        int count = 0, k = 1;
        for (int i = 0; i < 10; i++)
        {
            for (int j = 0; j < 10; j++)
            {
                if (a[i][j] == 'X')
                {
                    if ((i == 0 || i == 9) || (j == 0 || j == 9))
                        count += 1;
                    else if ((i == 1 || i == 8) || (j == 1 || j == 8))
                        count += 2;
                    else if ((i == 2 || i == 7) || (j == 2 || j == 7))
                        count += 3;
                    else if ((i == 3 || i == 6) || (j == 3 || j == 6))
                        count += 4;
                    else if ((i == 4 || i == 5) || (j == 4 || j == 5))
                        count += 5;
                }
            }
        }

        cout << count << endl;
    }

    return 0;
}