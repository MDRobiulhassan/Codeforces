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

    while (t--)
    {
        int n;
        cin >> n;
        char a[10][10];

        int flag = 0;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cin >> a[i][j];
            }
        }

        int count = 0;
        for (int i = 0; i < n; i++)
        {
            count=0;
            for (int j = 0; j < n; j++)
            {
                if (a[i][j] == '1')
                {
                    count++;
                }
            }
            if (count == 1)
            {
                flag = 1;
                break;
            }
        }

        if (flag == 1)
            cout << "TRIANGLE";
        else
            cout << "SQUARE";
        cout << endl;
    }

    return 0;
}