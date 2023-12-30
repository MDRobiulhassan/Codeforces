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
        int a[n];

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        int sum = 0, count = 0, c = 0;

        for (int i = 0; i < n; i++)
        {
            sum += abs(a[i]);

            if (a[i] < 0 && !c)
            {
                c = 1;
                count += 1;
            }

            if (a[i] > 0)
                c = 0;
        }

        cout << sum << " " << count << endl;
    }

    return 0;
}
