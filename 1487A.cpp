#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        int a[n], count = 0, sum = 0;

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        sort(a, a + n);

        for (int i = 0; i < n; i++)
        {
            count = 0;
            for (int j = 0; j < n; j++)
            {
                if (a[i] > a[j])
                    count = 1;
            }
            sum += count;
        }

        cout << sum << endl;
    }

    return 0;
}