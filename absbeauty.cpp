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
        int a[n], b[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        int sumb = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
            sumb += b[i];
        }

        for (int i = 0; i < n - 1; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                if (b[i] < b[j])
                {
                    int temp = b[i];
                    b[i] = b[j];
                    b[j] = temp;
                }
            }
        }

        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            sum = sum + abs(a[i] - b[i]);
        }
        cout << sum << endl;
    }

    return 0;
}