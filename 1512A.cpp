#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int k = 1; k <= t; k++)
    {
        int n, pos = -1;
        cin >> n;
        int a[n];

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n - 1; i++)
        {
            if (a[i] != a[i + 1])
            {
                if (a[i + 1] == a[i + 2])
                {
                    pos = i;
                    break;
                }
                else
                {
                    pos = i + 1;
                    break;
                }
            }
        }
        cout << pos + 1 << endl;
    }
}