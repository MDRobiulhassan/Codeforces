//Unsolved but close
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
        char a[8][8];
        for (int i = 0; i < 8; i++)
        {
            for (int j = 0; j < 8; j++)
            {
                cin >> a[i][j];
            }
        }
        for (int i = 1; i < 7; i++)
        {
            char ch;
            if(a[i][0]=='#')
            {
                ch=a[i][0];
                a[i][0]=a[i][1];
                a[i][1]=ch;
            }
            if(a[i][7]=='#')
            {
                ch=a[i][7];
                a[i][7]=a[i][6];
                a[i][6]=ch;
            }
        }

        int count = 0, flag = 0, j, jp = 0;
        for (int i = 1; i < 7; i++)
        {
            count = 0;
            for (j = 1; j < 7; j++)
            {
                if (a[i][j] == '#')
                {
                    count++;
                    jp = j;
                }
            }
            if (count == 1)
            {
                flag = 1;
                cout << i + 1 << " " << jp + 1<<endl;
                break;
            }
        }
    }

    return 0;
}