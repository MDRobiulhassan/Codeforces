#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        int odd = 0, even = 0;

        for (int i = 0; i < n; i++)
        {
            int a;
            cin >> a;
            if (a % 2 == 0)
                even++;
            else
                odd++;
        }

        if (even == n || odd == n || even % 2 == 0 || odd % 2 == 0 || even == odd)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}
