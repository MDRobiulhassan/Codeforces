#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, a = 0, b = 0;
        cin >> n;

        for (int i = 0; i < n; i++)
        {
            int arr;
            cin >> arr;

            if (arr % 2 != i % 2)
            {
                if (i % 2 == 0)
                    a++;
                else
                    b++;
            }
        }
        if (a != b)
            cout << -1;
        else
            cout << a;
        cout << endl;
    }

    return 0;
}