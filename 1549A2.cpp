#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, flag = 0,i,j;
        cin >> n;

        for (i = 2; i < n - 1; i++)
        {
            for (j = i + 1; j < n; j++)
            {
                if (n % i == n % j)
                {
                    flag = 1;
                    break;
                }
            }
            if (flag == 1)
            {
                cout << i << " " << j << endl;
                break;
            }
        }
    }

    return 0;
}