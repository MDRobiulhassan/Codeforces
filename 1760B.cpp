#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        string s;
        int n;
        cin >> n;
        cin >> s;

        int max = s[0];

        if (n == 1)
            cout << abs(static_cast<int>(s[0]) - 97) + 1 << endl;
        else
        {
            for (int i = 0; i < n - 1; i++)
            {
                for (int j = i+1; j < n; j++)
                {
                    if (s[j] > max)
                        max = s[j];
                }
            }
            int number = static_cast<int>(max);
            cout << abs(number - 97) + 1 << endl;
        }
    }

    return 0;
}