#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        int n,j;
        cin >> n;
        int a, b, max, pos = -1;
        for (j = 0; j < n; j++)
        {
            cin >> a >> b;
            if (j == 0)
            {
                if (a <= 10)
                {
                    max = b;
                    pos = j;
                }
            }
            else
            {
                if (a <= 10)
                {
                    if (b > max)
                    {
                        max = b;
                        pos = j;
                    }
                }
            }
        }
        cout << j+1 << endl;
    }

    return 0;
}