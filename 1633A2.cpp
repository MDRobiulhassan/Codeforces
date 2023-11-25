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

        if (n % 7 == 0)
            cout << n << endl;

        else
        {
            int ans = -1;
            for (int j = 0; j < 10; j++)
            {
                if ((n - n % 10 + j) % 7 == 0)
                {
                    ans = n - n % 10 + j;
                    break;
                }
            }
            cout << ans << endl;
        }
    }

    return 0;
}
