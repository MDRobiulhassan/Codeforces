#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int a[7];
        for (int i = 0; i < 7; i++)
        {
            cin >> a[i];
        }
        int max = a[6], x, b, c, f1 = 0, f2 = 0;

        for (int i = 0; i < 5; i++)
        {
            for (int j = i + 1; j < 6; j++)
            {
                for (int k = j + 1; k < 7; k++)
                {
                    if (a[i] + a[j] + a[k] == max)
                    {
                        x = a[i];
                        b = a[j];
                        c = a[k];
                        f1 = 1;
                        break;
                    }
                }
                if (f1 != 0)
                {
                    f2 = 1;
                    break;
                }
            }
            if (f2 != 0)
                break;
        }
        cout << x << " " << b << " " << c << endl;
    }

    return 0;
}