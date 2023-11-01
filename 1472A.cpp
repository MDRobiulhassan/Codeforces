#include <iostream>
using namespace std;

int main()
{
    int t, n, w, h;
    cin >> t;

    while (t--)
    {
        int sheet = 1;
        cin >> w >> h >> n;

        if (sheet >= n)
            cout << "YES" << endl;
        else
        {
            while (w % 2 == 0 || h % 2 == 0)
            {
                if (w % 2 == 0)
                {
                    w = w / 2;
                    sheet = sheet * 2;
                }
                else if (h % 2 == 0)
                {
                    h = h / 2;
                    sheet = sheet * 2;
                }
                else
                    break;
            }

            if (sheet >= n)
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        }
    }

    return 0;
}
