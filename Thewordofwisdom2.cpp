#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        int n;
        cin >> n;
        int a[n], b[n], j, max = 0, pos = -1;
        for (j = 0; j < n; j++)
        {
            cin >> a[j] >> b[j];
        }
        for (j = 0; j < n; j++)
        {
            if (a[j] <= 10 && b[j] > max)
            {
                max = b[j];
                pos = j;
            }
        }
        cout << pos + 1 << endl;
    }

    return 0;
}
