#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        int a[n];

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        // int x, result, flag = 0;
        // for (int i = 0; i < n; i++)
        // {
        //     x = 0;
        //     for (int j = 0; j < n; j++)
        //     {
        //         if (j != i)
        //         {
        //             x = x ^ a[j];
        //         }
        //         if (x == a[i])
        //         {
        //             result = a[i];
        //             flag = 1;
        //             break;
        //         }
        //     }
        //     if (flag == 1)
        //         break;
        // }

        cout << a[0] << endl;
    }

    return 0;
}